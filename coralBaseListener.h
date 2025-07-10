
// Generated from coral.g4 by ANTLR 4.13.2


// Algorithm To Convert To AST
// 1. Use stack to keep track of all nodes
// 2. in each exit function, remove all nodes from stack and add them as children to existing node
// 3. have some sort of rule where you only pop if their exit number is after enter number

#include "antlr4-runtime.h"
#include "coralListener.h"
#include "ast_tree_generator.hpp"
#include "zeromqpublisher.cpp"
#include "semantic_analysis.hpp"
#include <zmq.hpp>

#include <thread>
#include <chrono>

using namespace std;
using namespace ASTNODES;

/**
 * This class provides an empty implementation of coralListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  coralBaseListener : public coralListener {
public:

  
  std::shared_ptr<ProgramNode> root = std::make_shared<ProgramNode>();
  std::stack<std::shared_ptr<ASTNode>> blockStack; // need this to get current root or something
  std::stack<size_t> helper_stack;
  bool root_node_entered = false;
  coralBaseListener() : pub("tcp://127.0.0.1:5555") {
    std::this_thread::sleep_for(std::chrono::milliseconds(200));
  }
  virtual void enterCommand_first(coralParser::Command_firstContext * /*ctx*/) override {  
    helper_stack.push(blockStack.size());
  }

  virtual void exitCommand_first(coralParser::Command_firstContext * /*ctx*/) override {}

  virtual void enterArg_first(coralParser::Arg_firstContext * /*ctx*/) override {
    helper_stack.push(blockStack.size());
  }
  virtual void exitArg_first(coralParser::Arg_firstContext * /*ctx*/) override { }

  virtual void enterCommand_second(coralParser::Command_secondContext * /*ctx*/) override { 
    helper_stack.push(blockStack.size());
  }
  virtual void exitCommand_second(coralParser::Command_secondContext * /*ctx*/) override { }

  virtual void enterArg_second(coralParser::Arg_secondContext * /*ctx*/) override { 
    helper_stack.push(blockStack.size());
  }
  virtual void exitArg_second(coralParser::Arg_secondContext * /*ctx*/) override { }

  virtual void enterLoop(coralParser::LoopContext * /*ctx*/) override {
    helper_stack.push(blockStack.size());
  }
  virtual void exitLoop(coralParser::LoopContext *ctx) override { 
    auto loop_node_ = std::make_shared<LoopNode>();
    loop_node_->start_ = std::stoi(ctx->INTEGER(0)->getText());
    loop_node_->end_ = std::stoi(ctx->INTEGER(1)->getText());
    loop_node_->increment_ = std::stoi(ctx->INTEGER(2)->getText()); 
    size_t marker = helper_stack.top(); helper_stack.pop();
    cout << "yOOOO" << endl;
    pub.publish("status", "Error detected");
    while (blockStack.size() > marker) {
      std::shared_ptr<ASTNode> new_ast_node = blockStack.top();
      loop_node_->next->statements.push_back(new_ast_node);
      blockStack.pop();
       // need a way to check each node to see if it was exited before this node was entered
    }
    blockStack.push(loop_node_);   
    //root_copy->statements.push_back(loop_node_);
  }

  virtual void enterBlock(coralParser::BlockContext * /*ctx*/) override {
    helper_stack.push(blockStack.size());
  }
  virtual void exitBlock(coralParser::BlockContext * /*ctx*/) override { }

  virtual void enterStatement(coralParser::StatementContext * /*ctx*/) override { }
  virtual void exitStatement(coralParser::StatementContext * /*ctx*/) override { }

  virtual void enterIfStatement(coralParser::IfStatementContext *ctx) override { 
     
  }
  virtual void exitIfStatement(coralParser::IfStatementContext *ctx) override { 
    //if (ctx->condition()->expr(0) == INT) 
    cout << "write" << endl;
    pub.publish("status", "Error detected");
    auto cond = ctx->condition();
    auto leftExpr = cond->expr(0);
    auto rightExpr = cond->expr(1);
    std::shared_ptr<ASTNode> if_node; 
    bool error;

    if (dynamic_cast<coralParser::FloatContext*>(leftExpr) || 
    dynamic_cast<coralParser::IntContext*>(leftExpr)) {
        cout << "yoo" << endl;
        auto if_node_ = std::make_shared<IfNode<double>>();
        if (dynamic_cast<coralParser::StringContext*>(rightExpr)) 
        {
          // run a semantic analysis function
          error = true;
            // assign error message somewhere using zeromq
        }        
        if_node_->comparator1 = std::stod(leftExpr->getText());
        if_node_->comparator2 = std::stod(rightExpr->getText());
        if_node = std::dynamic_pointer_cast<IfNode<double>>(if_node_);
    } else if (dynamic_cast<coralParser::ANOTHERVARIABLEContext*
>(leftExpr)) {
        cout << "nanan" << endl;
        auto if_node_ = std::make_shared<IfNode<std::string>>(); 
        if (dynamic_cast<coralParser::IntContext*>(rightExpr) || dynamic_cast<coralParser::FloatContext*>(rightExpr)) 
        {
          error = true;
            // assign error message somewhere using zeromq
        } 
        if_node_->comparator1 = leftExpr->getText();
        if_node_->comparator2 = rightExpr->getText();   
        if_node = std::dynamic_pointer_cast<IfNode<string>>(if_node_); 
        //auto ifBlock = std::dynamic_pointer_cast<IfNode<std::string>>(if_node);
    } else {
        // proceed as normal
        auto if_node_ = std::make_shared<IfNode<std::string>>(); 
        if (dynamic_cast<coralParser::IntContext*>(rightExpr) || dynamic_cast<coralParser::FloatContext*>(rightExpr)) 
        {
          error = true;
            // assign error message somewhere using zeromq
        } 
        if_node_->comparator1 = leftExpr->getText();
        if_node_->comparator2 = rightExpr->getText();   
        if_node = std::dynamic_pointer_cast<IfNode<string>>(if_node_);
    }
    //auto if_node_ = std::make_shared<IfNode>();
    size_t marker = helper_stack.top(); helper_stack.pop();
    if (if_node != nullptr) {
      std::cout << "Type of if_node: " << typeid(*if_node).name() << std::endl;
    } else {
        std::cerr << "Error: if_node is null!" << std::endl;
    }

    while (blockStack.size() > marker) {
      std::shared_ptr<ASTNode> new_ast_node = blockStack.top();
      
      //if_node->next->statements.push_back(new_ast_node);
      blockStack.pop();
       // need a way to check each node to see if it was exited before this node was entered
    }
    blockStack.push(if_node); 
  }

  virtual void enterCondition(coralParser::ConditionContext * /*ctx*/) override { }
  virtual void exitCondition(coralParser::ConditionContext * /*ctx*/) override { }

  virtual void enterAssignment(coralParser::AssignmentContext * /*ctx*/) override { }
  virtual void exitAssignment(coralParser::AssignmentContext * /*ctx*/) override { }

  virtual void enterFloat(coralParser::FloatContext * /*ctx*/) override { }
  virtual void exitFloat(coralParser::FloatContext * /*ctx*/) override { }

  virtual void enterMulDiv(coralParser::MulDivContext * /*ctx*/) override { }
  virtual void exitMulDiv(coralParser::MulDivContext * /*ctx*/) override { }

  virtual void enterAddSub(coralParser::AddSubContext * /*ctx*/) override { }
  virtual void exitAddSub(coralParser::AddSubContext * /*ctx*/) override { }

  virtual void enterParens(coralParser::ParensContext * /*ctx*/) override { }
  virtual void exitParens(coralParser::ParensContext * /*ctx*/) override { }

  virtual void enterANOTHERVARIABLE(coralParser::ANOTHERVARIABLEContext * /*ctx*/) override { }
  virtual void exitANOTHERVARIABLE(coralParser::ANOTHERVARIABLEContext * /*ctx*/) override { }

  virtual void enterString(coralParser::StringContext * /*ctx*/) override { }
  virtual void exitString(coralParser::StringContext * /*ctx*/) override { }

  virtual void enterInt(coralParser::IntContext * /*ctx*/) override { }
  virtual void exitInt(coralParser::IntContext * /*ctx*/) override { }

  virtual void enterProgram(coralParser::ProgramContext *ctx) override 
  {
    

   }
  virtual void exitProgram(coralParser::ProgramContext *ctx) override { 

    while (!blockStack.empty()) 
    {
      std::shared_ptr<ASTNode> new_node = blockStack.top();
      root->statements.push_back(new_node);
      blockStack.pop();
    }
    // do some special shit here cause this is the root node 
  }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override {
    helper_stack.push(blockStack.size());
  }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

private:
  ZmqPublisher pub;
  SemanticAnalysis sem_analysis_;
};


#include "ir_generation.hpp"


IRGenerationFromAst::IRGenerationFromAst(ProgramNode* program_node, unordered_map<string, string> variables)     
    : coralModule("My Module", context_),
    program_node_(program_node),
    Builder(context_)
{
    variables_ = variables; // Assuming ProgramNode has a member for variables
}

void IRGenerationFromAst::initIRGeneration() 
{
    llvm::FunctionType *funcType = llvm::FunctionType::get(
    llvm::Type::getInt32Ty(context_), 
    false                             
);
    
}

template <typename T>
T IRGenerationFromAst::typecast_node(ASTNode* node) 
{
    if (node == nullptr) {
        return;
    }
    // Try casting the node to a BlockNode
    if (auto blockNode = dynamic_cast<ASTNODES::BlockNode*>(node)) {
        cout << "Visiting BlockNode with " << blockNode->statements.size() << " statements" << endl;
        
    }
    // Try casting the node to a ProgramNode
    else if (auto programNode = dynamic_cast<ASTNODES::ProgramNode*>(node)) {
        cout << "Visiting ProgramNode with " << programNode->statements.size() << " statements" << endl;
        
    }
    // // Handle other specific node types similarly
    else if (auto ifNode = dynamic_cast<ASTNODES::IfNode<double>*>(node)) {
        cout << "Visiting IfNode" << endl;

    }
    else if (auto ifNode = dynamic_cast<ASTNODES::IfNode<string>*>(node)) {
        cout << "Visiting IfNode" << endl;

    }
    else if (auto loopNode = dynamic_cast<ASTNODES::LoopNode*>(node)) {
        cout << "Visiting LoopNode" << endl;
        // Recurse into true/false blocks

    }
    
    return 0;

}

void IRGenerationFromAst::ASTraversal() 
{
    dfs_stack_.push(program_node_);
    while (!dfs_stack_.empty()) 
    {
        ASTNode* current_node = dfs_stack_.top();
        // type cast to specific node
        // call appropriate ir generatin node
        // for (node : current_node->statements) 
        // {
        //     dfs_stack_.push(node);
        // }

        dfs_stack_.pop();
    }
}

template<typename T>
void IRGenerationFromAst::IRgenerateIf(IfNode<T>* if_node_) 
{
    
}

template<typename T>
void IRGenerationFromAst::IRgenerateRewind(RewindNode<T>* rewind_node) 
{
    // Function Design
    // 1. 
}

template<typename T>
void IRGenerationFromAst::IRgenerateAssignment(AssignmentNode<T>* assignment_node_) 
{
    string variable = assignment_node_->ID;
    if (variables_.find(variable) != variables_.end()) {
        // Replace value with string version of new value
    } else {
        llvm::AllocaInst* allocated;
        if constexpr (std::is_same_v<T, int>) {
            allocated = Builder.CreateAlloca(
                llvm::Type::getInt32Ty(context_), nullptr, variable);
            namedValues[variable] = allocated;
        } else if constexpr (std::is_same_v<T, float>) {
            allocated = Builder.CreateAlloca(
                llvm::Type::getFloatTy(context_), nullptr, variable);
            namedValues[variable] = allocated;
        } else constexpr (std::is_same_v<T, std::string>) {
            llvm::Type* str_type = llvm::PointerType::get(llvm::Type::getInt8Ty(context_), 0);
            allocated = Builder.CreateAlloca(str_type, nullptr, variable);
            namedValues[variable] = allocated;
        }
        
        // if (std::holds_alternative<T>(assignment_node_->assignable)) {
        //     T value = std::get<T>(assignment_node_->assignable);
        //     // generate IR appropriate for the type
        // } else if (std::holds_alternative<Expression<T>>(assignment_node_->assignable)) {
        //     Expression<T> expr = std::get<Expression<T>>(assignment_node_->assignable);
        //     // write an algorithm for generating IR for the whole expression
        // }
        // Allocate space on stack using AllocaInst
    }

    // Need to keep in mind Allocation and Storage

    // TODO
    // 1. Get the variable name
    // 2. Use AllocaInst to allocate variable space on stack - size depends on var
    // 3. Use llvm storeinst to store initial value into allocated mem
    // 4. use llvm to create initial value
    // 5. Check if it exists in the stack already (redefinement or not)
    // 5. return pointer to allocated memory
}

// Implementation Plan

// 1. Assignment Node
// 2. if Node
// 3. Loop Node
// 4. Breakpoint node
// 5. Rewind Node
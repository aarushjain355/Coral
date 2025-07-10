#pragma once

#include <vector>
#include <stack>

#include "ast_tree_generator.hpp"
#include "semantic_analysis.hpp"

#include "llvm/IR/IRBuilder.h"
#include "llvm/IR/Module.h"
#include "llvm/IR/Function.h"       
#include "llvm/IR/LLVMContext.h"     
#include "llvm/IR/Type.h"            
#include "llvm/IR/Verifier.h"   


// Class Outline
// 1. Function for processing each node
// 2. - if block, assignment block, loop block, rewind block, breakpoint block
// 3. rewind and breakpoint blocks need something different with llvm 


using namespace llvm;
using namespace ASTNODES;

class IRGenerationFromAst {

    public:
        IRGenerationFromAst(ProgramNode* program_node, unordered_map<string, string> variables);
        void initIRGeneration();
        template <typename T>
        T typecast_node(ASTNode* node);
        void ASTraversal();
        template <typename T>
        void IRgenerateIf(IfNode<T>* if_node_);
        void IRgenerateLoop(LoopNode* loop_node_);
        template <typename T>
        void IRgenerateAssignment(AssignmentNode<T>* assignment_node_);
        template <typename T>
        void IRgenerateRewind(RewindNode<T>* rewind_node_);
        void IRgenerateBreakPoint();

    private:
        ProgramNode* program_node_;    
        std::stack<ASTNode*> dfs_stack_;
        LLVMContext context_;
        Module coralModule;
        IRBuilder<> Builder;
        std::unordered_map<std::string, string> variables_; // may replace cause no longer need maybe idk
        std::unordered_map<std::string, llvm::AllocaInst*> namedValues; // for variable storage
        

};
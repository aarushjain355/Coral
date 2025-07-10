#pragma once

#include <iostream>
#include <variant>
#include "antlr4-runtime.h"

using namespace antlr4;
using namespace std;


namespace ASTNODES 
{
    struct ASTNode {
        virtual ~ASTNode() = default;  // virtual destructor for polymorphism
    };

    template <typename T>
    struct Expression {
        std::vector<T> operands;
        std::vector<T> operators;
    };

    
    struct BlockNode : ASTNode {
        std::vector<std::shared_ptr<ASTNode>> statements;
    };

    struct ProgramNode : ASTNode {
        std::vector<std::shared_ptr<ASTNode>> statements;
    };

    struct LoopNode : ASTNode{
        int start_;
        int end_;
        int increment_;
        BlockNode* next;

    };

    template <typename T> 
    struct RewindNode : ASTNode {
        T key;
        BlockNode* next;
    };

    template <typename T>
    struct type {
        T value;
    };

    template <typename T>
    struct IfNode : ASTNode {
        T comparator1;
        T comparator2;
        string operator_;
        BlockNode* next;
    };


    template <typename T> 
    struct BreakPointNode : ASTNode {
        T key;
        BlockNode* next;
    };

    template <typename T>
    struct AssignmentNode : ASTNode {
        string ID;
        std::variant<T, Expression<T>> assignable;
        BlockNode* next;
    };

    

    // struct blockNode {
        
    // }



}
#pragma once

#include <vector>
#include <stack>

#include "ast_tree_generator.hpp"
#include "zeromqpublisher.cpp"

class SemanticAnalysis {

    public:
        SemanticAnalysis() : pub("tcp://127.0.0.1:5555") {}
        // Design of this class is below
        void semantic_wrapper();
        void semantic_if_statement();
        void semantic_loop_statement(double start_, double increment_, double end_);
        void semantic_rewind();
        void semantic_assignment();
        void semantic_breakpoint();
    private:
        std::stack<std::unordered_map<int, int>> symbol_table;
        std::unordered_map<string, string> variables;
        ZmqPublisher pub;
};


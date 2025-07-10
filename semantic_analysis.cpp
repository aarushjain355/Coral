#include "semantic_analysis.hpp"

#include <iostream>

// Checks to be made
// 1. Type compatibility in if statements
// 2. Assignment type validation
// 3. check for expression in let
// 4. allow only certain operations with certain variable types
// 5. Make sense of the loops somehow
// 6. check that rewind key has been prepared beforehand
// 7. variable scoping checks


void SemanticAnalysis::semantic_if_statement() 
{
    cout << "reached" << endl; // placeholder
    // checks for type compatibility among 2 comparators
    // check if proper operation is applied
    // 
}

void SemanticAnalysis::semantic_loop_statement(double start_, double increment_, double end_) 
{
    bool error = (start_ > end_) || ((end_ - start_)*increment_ > 0);
    if (error) {
        pub.publish("status", "Error detected; incorrect loop configuration");
        return; // or handle error as needed
    } 
    // in the future add some shit here about check variable types
}

void SemanticAnalysis::semantic_assignment() 
{

}
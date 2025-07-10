
// Generated from coral.g4 by ANTLR 4.13.2


// Algorithm To Convert To AST
// 1. Use stack to keep track of all nodes
// 2. in each exit function, remove all nodes from stack and add them as children to existing node
// 3. have some sort of rule where you only pop if their exit number is after enter number

#include "coralBaseListener.h"

using namespace std;
using namespace ASTNODES;


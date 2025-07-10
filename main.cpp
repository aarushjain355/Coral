#include <iostream>
#include "antlr4-runtime.h"
#include "coralBaseListener.h"
#include "coralLexer.h"
#include "coralParser.h"

using namespace std;
using namespace antlr4;





int main(int argc, char* argv[]) {
  std::ifstream stream;
  stream.open(argv[1]);
  ANTLRInputStream input(stream);
  coralLexer lexer(&input);
  CommonTokenStream tokens(&lexer);
  coralParser parser(&tokens);
  //cout << "Entered here" << endl;
  antlr4::tree::ParseTree *tree = parser.program();
  //cout << "HELLO" << endl;
  coralBaseListener listener;
  tree::ParseTreeWalker::DEFAULT.walk(&listener, tree);
  std::string treeStr = tree->toStringTree(&parser);
  //std::cout << "Parse Tree:\n" << treeStr << std::endl;
  return 0;

}
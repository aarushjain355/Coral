
// Generated from coral.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"




class  coralLexer : public antlr4::Lexer {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, T__9 = 10, INTEGER = 11, FLOAT = 12, STRING = 13, 
    LET = 14, BE = 15, IF = 16, SET_BREAKPOINT = 17, FROM = 18, UNTIL = 19, 
    BY = 20, REWIND = 21, COMMA = 22, LPAREN = 23, RPAREN = 24, LBRACKET = 25, 
    RBRACKET = 26, WS = 27, IS = 28, ID = 29
  };

  explicit coralLexer(antlr4::CharStream *input);

  ~coralLexer() override;


  std::string getGrammarFileName() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const std::vector<std::string>& getChannelNames() const override;

  const std::vector<std::string>& getModeNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;

  const antlr4::atn::ATN& getATN() const override;

  // By default the static state used to implement the lexer is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:

  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

};


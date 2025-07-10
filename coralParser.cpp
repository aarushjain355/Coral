
// Generated from coral.g4 by ANTLR 4.13.2


#include "coralListener.h"

#include "coralParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct CoralParserStaticData final {
  CoralParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  CoralParserStaticData(const CoralParserStaticData&) = delete;
  CoralParserStaticData(CoralParserStaticData&&) = delete;
  CoralParserStaticData& operator=(const CoralParserStaticData&) = delete;
  CoralParserStaticData& operator=(CoralParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag coralParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
std::unique_ptr<CoralParserStaticData> coralParserStaticData = nullptr;

void coralParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (coralParserStaticData != nullptr) {
    return;
  }
#else
  assert(coralParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<CoralParserStaticData>(
    std::vector<std::string>{
      "command_first", "arg_first", "command_second", "arg_second", "loop", 
      "block", "statement", "ifStatement", "condition", "assignment", "expr", 
      "program"
    },
    std::vector<std::string>{
      "", "'=='", "'!='", "'<'", "'<='", "'>'", "'>='", "'*'", "'/'", "'+'", 
      "'-'", "", "", "", "'Let'", "'be'", "'if'", "'set_breakpoint'", "'From'", 
      "'Until'", "'by'", "'Rewind'", "','", "'('", "')'", "'{'", "'}'", 
      "", "'is'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "INTEGER", "FLOAT", "STRING", 
      "LET", "BE", "IF", "SET_BREAKPOINT", "FROM", "UNTIL", "BY", "REWIND", 
      "COMMA", "LPAREN", "RPAREN", "LBRACKET", "RBRACKET", "WS", "IS", "ID"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,29,108,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,1,0,1,0,1,0,1,0,1,0,1,1,1,1,
  	1,2,1,2,1,2,1,2,1,2,1,3,1,3,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,5,1,
  	5,5,5,50,8,5,10,5,12,5,53,9,5,1,5,1,5,1,6,1,6,1,6,1,6,1,6,3,6,62,8,6,
  	1,7,1,7,1,7,1,7,1,8,1,8,1,8,3,8,71,8,8,1,9,1,9,1,9,1,9,1,9,1,10,1,10,
  	1,10,1,10,1,10,1,10,1,10,1,10,1,10,3,10,87,8,10,1,10,1,10,1,10,1,10,1,
  	10,1,10,5,10,95,8,10,10,10,12,10,98,9,10,1,11,5,11,101,8,11,10,11,12,
  	11,104,9,11,1,11,1,11,1,11,0,1,20,12,0,2,4,6,8,10,12,14,16,18,20,22,0,
  	4,2,0,11,11,13,13,1,0,1,6,1,0,7,8,1,0,9,10,108,0,24,1,0,0,0,2,29,1,0,
  	0,0,4,31,1,0,0,0,6,36,1,0,0,0,8,38,1,0,0,0,10,47,1,0,0,0,12,61,1,0,0,
  	0,14,63,1,0,0,0,16,67,1,0,0,0,18,72,1,0,0,0,20,86,1,0,0,0,22,102,1,0,
  	0,0,24,25,5,21,0,0,25,26,5,23,0,0,26,27,3,2,1,0,27,28,5,24,0,0,28,1,1,
  	0,0,0,29,30,7,0,0,0,30,3,1,0,0,0,31,32,5,17,0,0,32,33,5,23,0,0,33,34,
  	3,6,3,0,34,35,5,24,0,0,35,5,1,0,0,0,36,37,5,13,0,0,37,7,1,0,0,0,38,39,
  	5,18,0,0,39,40,5,11,0,0,40,41,5,19,0,0,41,42,5,11,0,0,42,43,5,20,0,0,
  	43,44,5,11,0,0,44,45,5,28,0,0,45,46,3,10,5,0,46,9,1,0,0,0,47,51,5,25,
  	0,0,48,50,3,12,6,0,49,48,1,0,0,0,50,53,1,0,0,0,51,49,1,0,0,0,51,52,1,
  	0,0,0,52,54,1,0,0,0,53,51,1,0,0,0,54,55,5,26,0,0,55,11,1,0,0,0,56,62,
  	3,0,0,0,57,62,3,4,2,0,58,62,3,8,4,0,59,62,3,14,7,0,60,62,3,18,9,0,61,
  	56,1,0,0,0,61,57,1,0,0,0,61,58,1,0,0,0,61,59,1,0,0,0,61,60,1,0,0,0,62,
  	13,1,0,0,0,63,64,5,16,0,0,64,65,3,16,8,0,65,66,3,10,5,0,66,15,1,0,0,0,
  	67,70,3,20,10,0,68,69,7,1,0,0,69,71,3,20,10,0,70,68,1,0,0,0,70,71,1,0,
  	0,0,71,17,1,0,0,0,72,73,5,14,0,0,73,74,5,29,0,0,74,75,5,15,0,0,75,76,
  	3,20,10,0,76,19,1,0,0,0,77,78,6,10,-1,0,78,87,5,11,0,0,79,87,5,29,0,0,
  	80,87,5,12,0,0,81,87,5,13,0,0,82,83,5,23,0,0,83,84,3,20,10,0,84,85,5,
  	24,0,0,85,87,1,0,0,0,86,77,1,0,0,0,86,79,1,0,0,0,86,80,1,0,0,0,86,81,
  	1,0,0,0,86,82,1,0,0,0,87,96,1,0,0,0,88,89,10,7,0,0,89,90,7,2,0,0,90,95,
  	3,20,10,8,91,92,10,6,0,0,92,93,7,3,0,0,93,95,3,20,10,7,94,88,1,0,0,0,
  	94,91,1,0,0,0,95,98,1,0,0,0,96,94,1,0,0,0,96,97,1,0,0,0,97,21,1,0,0,0,
  	98,96,1,0,0,0,99,101,3,12,6,0,100,99,1,0,0,0,101,104,1,0,0,0,102,100,
  	1,0,0,0,102,103,1,0,0,0,103,105,1,0,0,0,104,102,1,0,0,0,105,106,5,0,0,
  	1,106,23,1,0,0,0,7,51,61,70,86,94,96,102
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  coralParserStaticData = std::move(staticData);
}

}

coralParser::coralParser(TokenStream *input) : coralParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

coralParser::coralParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  coralParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *coralParserStaticData->atn, coralParserStaticData->decisionToDFA, coralParserStaticData->sharedContextCache, options);
}

coralParser::~coralParser() {
  delete _interpreter;
}

const atn::ATN& coralParser::getATN() const {
  return *coralParserStaticData->atn;
}

std::string coralParser::getGrammarFileName() const {
  return "coral.g4";
}

const std::vector<std::string>& coralParser::getRuleNames() const {
  return coralParserStaticData->ruleNames;
}

const dfa::Vocabulary& coralParser::getVocabulary() const {
  return coralParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView coralParser::getSerializedATN() const {
  return coralParserStaticData->serializedATN;
}


//----------------- Command_firstContext ------------------------------------------------------------------

coralParser::Command_firstContext::Command_firstContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* coralParser::Command_firstContext::REWIND() {
  return getToken(coralParser::REWIND, 0);
}

tree::TerminalNode* coralParser::Command_firstContext::LPAREN() {
  return getToken(coralParser::LPAREN, 0);
}

coralParser::Arg_firstContext* coralParser::Command_firstContext::arg_first() {
  return getRuleContext<coralParser::Arg_firstContext>(0);
}

tree::TerminalNode* coralParser::Command_firstContext::RPAREN() {
  return getToken(coralParser::RPAREN, 0);
}


size_t coralParser::Command_firstContext::getRuleIndex() const {
  return coralParser::RuleCommand_first;
}

void coralParser::Command_firstContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<coralListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCommand_first(this);
}

void coralParser::Command_firstContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<coralListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCommand_first(this);
}

coralParser::Command_firstContext* coralParser::command_first() {
  Command_firstContext *_localctx = _tracker.createInstance<Command_firstContext>(_ctx, getState());
  enterRule(_localctx, 0, coralParser::RuleCommand_first);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(24);
    match(coralParser::REWIND);
    setState(25);
    match(coralParser::LPAREN);
    setState(26);
    arg_first();
    setState(27);
    match(coralParser::RPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Arg_firstContext ------------------------------------------------------------------

coralParser::Arg_firstContext::Arg_firstContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* coralParser::Arg_firstContext::STRING() {
  return getToken(coralParser::STRING, 0);
}

tree::TerminalNode* coralParser::Arg_firstContext::INTEGER() {
  return getToken(coralParser::INTEGER, 0);
}


size_t coralParser::Arg_firstContext::getRuleIndex() const {
  return coralParser::RuleArg_first;
}

void coralParser::Arg_firstContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<coralListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArg_first(this);
}

void coralParser::Arg_firstContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<coralListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArg_first(this);
}

coralParser::Arg_firstContext* coralParser::arg_first() {
  Arg_firstContext *_localctx = _tracker.createInstance<Arg_firstContext>(_ctx, getState());
  enterRule(_localctx, 2, coralParser::RuleArg_first);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(29);
    _la = _input->LA(1);
    if (!(_la == coralParser::INTEGER

    || _la == coralParser::STRING)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Command_secondContext ------------------------------------------------------------------

coralParser::Command_secondContext::Command_secondContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* coralParser::Command_secondContext::SET_BREAKPOINT() {
  return getToken(coralParser::SET_BREAKPOINT, 0);
}

tree::TerminalNode* coralParser::Command_secondContext::LPAREN() {
  return getToken(coralParser::LPAREN, 0);
}

coralParser::Arg_secondContext* coralParser::Command_secondContext::arg_second() {
  return getRuleContext<coralParser::Arg_secondContext>(0);
}

tree::TerminalNode* coralParser::Command_secondContext::RPAREN() {
  return getToken(coralParser::RPAREN, 0);
}


size_t coralParser::Command_secondContext::getRuleIndex() const {
  return coralParser::RuleCommand_second;
}

void coralParser::Command_secondContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<coralListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCommand_second(this);
}

void coralParser::Command_secondContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<coralListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCommand_second(this);
}

coralParser::Command_secondContext* coralParser::command_second() {
  Command_secondContext *_localctx = _tracker.createInstance<Command_secondContext>(_ctx, getState());
  enterRule(_localctx, 4, coralParser::RuleCommand_second);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(31);
    match(coralParser::SET_BREAKPOINT);
    setState(32);
    match(coralParser::LPAREN);
    setState(33);
    arg_second();
    setState(34);
    match(coralParser::RPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Arg_secondContext ------------------------------------------------------------------

coralParser::Arg_secondContext::Arg_secondContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* coralParser::Arg_secondContext::STRING() {
  return getToken(coralParser::STRING, 0);
}


size_t coralParser::Arg_secondContext::getRuleIndex() const {
  return coralParser::RuleArg_second;
}

void coralParser::Arg_secondContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<coralListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArg_second(this);
}

void coralParser::Arg_secondContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<coralListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArg_second(this);
}

coralParser::Arg_secondContext* coralParser::arg_second() {
  Arg_secondContext *_localctx = _tracker.createInstance<Arg_secondContext>(_ctx, getState());
  enterRule(_localctx, 6, coralParser::RuleArg_second);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(36);
    match(coralParser::STRING);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LoopContext ------------------------------------------------------------------

coralParser::LoopContext::LoopContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* coralParser::LoopContext::FROM() {
  return getToken(coralParser::FROM, 0);
}

std::vector<tree::TerminalNode *> coralParser::LoopContext::INTEGER() {
  return getTokens(coralParser::INTEGER);
}

tree::TerminalNode* coralParser::LoopContext::INTEGER(size_t i) {
  return getToken(coralParser::INTEGER, i);
}

tree::TerminalNode* coralParser::LoopContext::UNTIL() {
  return getToken(coralParser::UNTIL, 0);
}

tree::TerminalNode* coralParser::LoopContext::BY() {
  return getToken(coralParser::BY, 0);
}

tree::TerminalNode* coralParser::LoopContext::IS() {
  return getToken(coralParser::IS, 0);
}

coralParser::BlockContext* coralParser::LoopContext::block() {
  return getRuleContext<coralParser::BlockContext>(0);
}


size_t coralParser::LoopContext::getRuleIndex() const {
  return coralParser::RuleLoop;
}

void coralParser::LoopContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<coralListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLoop(this);
}

void coralParser::LoopContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<coralListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLoop(this);
}

coralParser::LoopContext* coralParser::loop() {
  LoopContext *_localctx = _tracker.createInstance<LoopContext>(_ctx, getState());
  enterRule(_localctx, 8, coralParser::RuleLoop);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(38);
    match(coralParser::FROM);
    setState(39);
    match(coralParser::INTEGER);
    setState(40);
    match(coralParser::UNTIL);
    setState(41);
    match(coralParser::INTEGER);
    setState(42);
    match(coralParser::BY);
    setState(43);
    match(coralParser::INTEGER);
    setState(44);
    match(coralParser::IS);
    setState(45);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockContext ------------------------------------------------------------------

coralParser::BlockContext::BlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* coralParser::BlockContext::LBRACKET() {
  return getToken(coralParser::LBRACKET, 0);
}

tree::TerminalNode* coralParser::BlockContext::RBRACKET() {
  return getToken(coralParser::RBRACKET, 0);
}

std::vector<coralParser::StatementContext *> coralParser::BlockContext::statement() {
  return getRuleContexts<coralParser::StatementContext>();
}

coralParser::StatementContext* coralParser::BlockContext::statement(size_t i) {
  return getRuleContext<coralParser::StatementContext>(i);
}


size_t coralParser::BlockContext::getRuleIndex() const {
  return coralParser::RuleBlock;
}

void coralParser::BlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<coralListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBlock(this);
}

void coralParser::BlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<coralListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBlock(this);
}

coralParser::BlockContext* coralParser::block() {
  BlockContext *_localctx = _tracker.createInstance<BlockContext>(_ctx, getState());
  enterRule(_localctx, 10, coralParser::RuleBlock);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(47);
    match(coralParser::LBRACKET);
    setState(51);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 2572288) != 0)) {
      setState(48);
      statement();
      setState(53);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(54);
    match(coralParser::RBRACKET);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

coralParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

coralParser::Command_firstContext* coralParser::StatementContext::command_first() {
  return getRuleContext<coralParser::Command_firstContext>(0);
}

coralParser::Command_secondContext* coralParser::StatementContext::command_second() {
  return getRuleContext<coralParser::Command_secondContext>(0);
}

coralParser::LoopContext* coralParser::StatementContext::loop() {
  return getRuleContext<coralParser::LoopContext>(0);
}

coralParser::IfStatementContext* coralParser::StatementContext::ifStatement() {
  return getRuleContext<coralParser::IfStatementContext>(0);
}

coralParser::AssignmentContext* coralParser::StatementContext::assignment() {
  return getRuleContext<coralParser::AssignmentContext>(0);
}


size_t coralParser::StatementContext::getRuleIndex() const {
  return coralParser::RuleStatement;
}

void coralParser::StatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<coralListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatement(this);
}

void coralParser::StatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<coralListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatement(this);
}

coralParser::StatementContext* coralParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 12, coralParser::RuleStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(61);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case coralParser::REWIND: {
        enterOuterAlt(_localctx, 1);
        setState(56);
        command_first();
        break;
      }

      case coralParser::SET_BREAKPOINT: {
        enterOuterAlt(_localctx, 2);
        setState(57);
        command_second();
        break;
      }

      case coralParser::FROM: {
        enterOuterAlt(_localctx, 3);
        setState(58);
        loop();
        break;
      }

      case coralParser::IF: {
        enterOuterAlt(_localctx, 4);
        setState(59);
        ifStatement();
        break;
      }

      case coralParser::LET: {
        enterOuterAlt(_localctx, 5);
        setState(60);
        assignment();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IfStatementContext ------------------------------------------------------------------

coralParser::IfStatementContext::IfStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* coralParser::IfStatementContext::IF() {
  return getToken(coralParser::IF, 0);
}

coralParser::ConditionContext* coralParser::IfStatementContext::condition() {
  return getRuleContext<coralParser::ConditionContext>(0);
}

coralParser::BlockContext* coralParser::IfStatementContext::block() {
  return getRuleContext<coralParser::BlockContext>(0);
}


size_t coralParser::IfStatementContext::getRuleIndex() const {
  return coralParser::RuleIfStatement;
}

void coralParser::IfStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<coralListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIfStatement(this);
}

void coralParser::IfStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<coralListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIfStatement(this);
}

coralParser::IfStatementContext* coralParser::ifStatement() {
  IfStatementContext *_localctx = _tracker.createInstance<IfStatementContext>(_ctx, getState());
  enterRule(_localctx, 14, coralParser::RuleIfStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(63);
    match(coralParser::IF);
    setState(64);
    condition();
    setState(65);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConditionContext ------------------------------------------------------------------

coralParser::ConditionContext::ConditionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<coralParser::ExprContext *> coralParser::ConditionContext::expr() {
  return getRuleContexts<coralParser::ExprContext>();
}

coralParser::ExprContext* coralParser::ConditionContext::expr(size_t i) {
  return getRuleContext<coralParser::ExprContext>(i);
}


size_t coralParser::ConditionContext::getRuleIndex() const {
  return coralParser::RuleCondition;
}

void coralParser::ConditionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<coralListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCondition(this);
}

void coralParser::ConditionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<coralListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCondition(this);
}

coralParser::ConditionContext* coralParser::condition() {
  ConditionContext *_localctx = _tracker.createInstance<ConditionContext>(_ctx, getState());
  enterRule(_localctx, 16, coralParser::RuleCondition);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(67);
    expr(0);
    setState(70);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 126) != 0)) {
      setState(68);
      _la = _input->LA(1);
      if (!((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 126) != 0))) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(69);
      expr(0);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignmentContext ------------------------------------------------------------------

coralParser::AssignmentContext::AssignmentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* coralParser::AssignmentContext::LET() {
  return getToken(coralParser::LET, 0);
}

tree::TerminalNode* coralParser::AssignmentContext::ID() {
  return getToken(coralParser::ID, 0);
}

tree::TerminalNode* coralParser::AssignmentContext::BE() {
  return getToken(coralParser::BE, 0);
}

coralParser::ExprContext* coralParser::AssignmentContext::expr() {
  return getRuleContext<coralParser::ExprContext>(0);
}


size_t coralParser::AssignmentContext::getRuleIndex() const {
  return coralParser::RuleAssignment;
}

void coralParser::AssignmentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<coralListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssignment(this);
}

void coralParser::AssignmentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<coralListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssignment(this);
}

coralParser::AssignmentContext* coralParser::assignment() {
  AssignmentContext *_localctx = _tracker.createInstance<AssignmentContext>(_ctx, getState());
  enterRule(_localctx, 18, coralParser::RuleAssignment);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(72);
    match(coralParser::LET);
    setState(73);
    match(coralParser::ID);
    setState(74);
    match(coralParser::BE);
    setState(75);
    expr(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExprContext ------------------------------------------------------------------

coralParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t coralParser::ExprContext::getRuleIndex() const {
  return coralParser::RuleExpr;
}

void coralParser::ExprContext::copyFrom(ExprContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- FloatContext ------------------------------------------------------------------

tree::TerminalNode* coralParser::FloatContext::FLOAT() {
  return getToken(coralParser::FLOAT, 0);
}

coralParser::FloatContext::FloatContext(ExprContext *ctx) { copyFrom(ctx); }

void coralParser::FloatContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<coralListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFloat(this);
}
void coralParser::FloatContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<coralListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFloat(this);
}
//----------------- MulDivContext ------------------------------------------------------------------

std::vector<coralParser::ExprContext *> coralParser::MulDivContext::expr() {
  return getRuleContexts<coralParser::ExprContext>();
}

coralParser::ExprContext* coralParser::MulDivContext::expr(size_t i) {
  return getRuleContext<coralParser::ExprContext>(i);
}

coralParser::MulDivContext::MulDivContext(ExprContext *ctx) { copyFrom(ctx); }

void coralParser::MulDivContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<coralListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMulDiv(this);
}
void coralParser::MulDivContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<coralListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMulDiv(this);
}
//----------------- AddSubContext ------------------------------------------------------------------

std::vector<coralParser::ExprContext *> coralParser::AddSubContext::expr() {
  return getRuleContexts<coralParser::ExprContext>();
}

coralParser::ExprContext* coralParser::AddSubContext::expr(size_t i) {
  return getRuleContext<coralParser::ExprContext>(i);
}

coralParser::AddSubContext::AddSubContext(ExprContext *ctx) { copyFrom(ctx); }

void coralParser::AddSubContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<coralListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAddSub(this);
}
void coralParser::AddSubContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<coralListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAddSub(this);
}
//----------------- ParensContext ------------------------------------------------------------------

tree::TerminalNode* coralParser::ParensContext::LPAREN() {
  return getToken(coralParser::LPAREN, 0);
}

coralParser::ExprContext* coralParser::ParensContext::expr() {
  return getRuleContext<coralParser::ExprContext>(0);
}

tree::TerminalNode* coralParser::ParensContext::RPAREN() {
  return getToken(coralParser::RPAREN, 0);
}

coralParser::ParensContext::ParensContext(ExprContext *ctx) { copyFrom(ctx); }

void coralParser::ParensContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<coralListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParens(this);
}
void coralParser::ParensContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<coralListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParens(this);
}
//----------------- ANOTHERVARIABLEContext ------------------------------------------------------------------

tree::TerminalNode* coralParser::ANOTHERVARIABLEContext::ID() {
  return getToken(coralParser::ID, 0);
}

coralParser::ANOTHERVARIABLEContext::ANOTHERVARIABLEContext(ExprContext *ctx) { copyFrom(ctx); }

void coralParser::ANOTHERVARIABLEContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<coralListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterANOTHERVARIABLE(this);
}
void coralParser::ANOTHERVARIABLEContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<coralListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitANOTHERVARIABLE(this);
}
//----------------- StringContext ------------------------------------------------------------------

tree::TerminalNode* coralParser::StringContext::STRING() {
  return getToken(coralParser::STRING, 0);
}

coralParser::StringContext::StringContext(ExprContext *ctx) { copyFrom(ctx); }

void coralParser::StringContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<coralListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterString(this);
}
void coralParser::StringContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<coralListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitString(this);
}
//----------------- IntContext ------------------------------------------------------------------

tree::TerminalNode* coralParser::IntContext::INTEGER() {
  return getToken(coralParser::INTEGER, 0);
}

coralParser::IntContext::IntContext(ExprContext *ctx) { copyFrom(ctx); }

void coralParser::IntContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<coralListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInt(this);
}
void coralParser::IntContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<coralListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInt(this);
}

coralParser::ExprContext* coralParser::expr() {
   return expr(0);
}

coralParser::ExprContext* coralParser::expr(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  coralParser::ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, parentState);
  coralParser::ExprContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 20;
  enterRecursionRule(_localctx, 20, coralParser::RuleExpr, precedence);

    size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(86);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case coralParser::INTEGER: {
        _localctx = _tracker.createInstance<IntContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;

        setState(78);
        match(coralParser::INTEGER);
        break;
      }

      case coralParser::ID: {
        _localctx = _tracker.createInstance<ANOTHERVARIABLEContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(79);
        match(coralParser::ID);
        break;
      }

      case coralParser::FLOAT: {
        _localctx = _tracker.createInstance<FloatContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(80);
        match(coralParser::FLOAT);
        break;
      }

      case coralParser::STRING: {
        _localctx = _tracker.createInstance<StringContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(81);
        match(coralParser::STRING);
        break;
      }

      case coralParser::LPAREN: {
        _localctx = _tracker.createInstance<ParensContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(82);
        match(coralParser::LPAREN);
        setState(83);
        expr(0);
        setState(84);
        match(coralParser::RPAREN);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(96);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(94);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<MulDivContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(88);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(89);
          antlrcpp::downCast<MulDivContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == coralParser::T__6

          || _la == coralParser::T__7)) {
            antlrcpp::downCast<MulDivContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(90);
          expr(8);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<AddSubContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(91);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(92);
          antlrcpp::downCast<AddSubContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == coralParser::T__8

          || _la == coralParser::T__9)) {
            antlrcpp::downCast<AddSubContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(93);
          expr(7);
          break;
        }

        default:
          break;
        } 
      }
      setState(98);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- ProgramContext ------------------------------------------------------------------

coralParser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* coralParser::ProgramContext::EOF() {
  return getToken(coralParser::EOF, 0);
}

std::vector<coralParser::StatementContext *> coralParser::ProgramContext::statement() {
  return getRuleContexts<coralParser::StatementContext>();
}

coralParser::StatementContext* coralParser::ProgramContext::statement(size_t i) {
  return getRuleContext<coralParser::StatementContext>(i);
}


size_t coralParser::ProgramContext::getRuleIndex() const {
  return coralParser::RuleProgram;
}

void coralParser::ProgramContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<coralListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProgram(this);
}

void coralParser::ProgramContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<coralListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProgram(this);
}

coralParser::ProgramContext* coralParser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 22, coralParser::RuleProgram);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(102);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 2572288) != 0)) {
      setState(99);
      statement();
      setState(104);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(105);
    match(coralParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool coralParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 10: return exprSempred(antlrcpp::downCast<ExprContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool coralParser::exprSempred(ExprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 7);
    case 1: return precpred(_ctx, 6);

  default:
    break;
  }
  return true;
}

void coralParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  coralParserInitialize();
#else
  ::antlr4::internal::call_once(coralParserOnceFlag, coralParserInitialize);
#endif
}


// Generated from coral.g4 by ANTLR 4.13.2


#include "coralLexer.h"


using namespace antlr4;



using namespace antlr4;

namespace {

struct CoralLexerStaticData final {
  CoralLexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  CoralLexerStaticData(const CoralLexerStaticData&) = delete;
  CoralLexerStaticData(CoralLexerStaticData&&) = delete;
  CoralLexerStaticData& operator=(const CoralLexerStaticData&) = delete;
  CoralLexerStaticData& operator=(CoralLexerStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> channelNames;
  const std::vector<std::string> modeNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag corallexerLexerOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
std::unique_ptr<CoralLexerStaticData> corallexerLexerStaticData = nullptr;

void corallexerLexerInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (corallexerLexerStaticData != nullptr) {
    return;
  }
#else
  assert(corallexerLexerStaticData == nullptr);
#endif
  auto staticData = std::make_unique<CoralLexerStaticData>(
    std::vector<std::string>{
      "T__0", "T__1", "T__2", "T__3", "T__4", "T__5", "T__6", "T__7", "T__8", 
      "T__9", "INTEGER", "FLOAT", "STRING", "LET", "BE", "IF", "SET_BREAKPOINT", 
      "FROM", "UNTIL", "BY", "REWIND", "COMMA", "LPAREN", "RPAREN", "LBRACKET", 
      "RBRACKET", "WS", "IS", "ID"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
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
  	4,0,29,193,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,
  	7,21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,
  	7,28,1,0,1,0,1,0,1,1,1,1,1,1,1,2,1,2,1,3,1,3,1,3,1,4,1,4,1,5,1,5,1,5,
  	1,6,1,6,1,7,1,7,1,8,1,8,1,9,1,9,1,10,4,10,85,8,10,11,10,12,10,86,1,11,
  	4,11,90,8,11,11,11,12,11,91,1,11,1,11,4,11,96,8,11,11,11,12,11,97,1,11,
  	1,11,4,11,102,8,11,11,11,12,11,103,1,11,4,11,107,8,11,11,11,12,11,108,
  	1,11,3,11,112,8,11,1,12,1,12,5,12,116,8,12,10,12,12,12,119,9,12,1,12,
  	1,12,1,13,1,13,1,13,1,13,1,14,1,14,1,14,1,15,1,15,1,15,1,16,1,16,1,16,
  	1,16,1,16,1,16,1,16,1,16,1,16,1,16,1,16,1,16,1,16,1,16,1,16,1,17,1,17,
  	1,17,1,17,1,17,1,18,1,18,1,18,1,18,1,18,1,18,1,19,1,19,1,19,1,20,1,20,
  	1,20,1,20,1,20,1,20,1,20,1,21,1,21,1,22,1,22,1,23,1,23,1,24,1,24,1,25,
  	1,25,1,26,4,26,180,8,26,11,26,12,26,181,1,26,1,26,1,27,1,27,1,27,1,28,
  	4,28,190,8,28,11,28,12,28,191,0,0,29,1,1,3,2,5,3,7,4,9,5,11,6,13,7,15,
  	8,17,9,19,10,21,11,23,12,25,13,27,14,29,15,31,16,33,17,35,18,37,19,39,
  	20,41,21,43,22,45,23,47,24,49,25,51,26,53,27,55,28,57,29,1,0,4,1,0,48,
  	57,3,0,10,10,13,13,34,34,3,0,9,10,13,13,32,32,2,0,65,90,97,122,202,0,
  	1,1,0,0,0,0,3,1,0,0,0,0,5,1,0,0,0,0,7,1,0,0,0,0,9,1,0,0,0,0,11,1,0,0,
  	0,0,13,1,0,0,0,0,15,1,0,0,0,0,17,1,0,0,0,0,19,1,0,0,0,0,21,1,0,0,0,0,
  	23,1,0,0,0,0,25,1,0,0,0,0,27,1,0,0,0,0,29,1,0,0,0,0,31,1,0,0,0,0,33,1,
  	0,0,0,0,35,1,0,0,0,0,37,1,0,0,0,0,39,1,0,0,0,0,41,1,0,0,0,0,43,1,0,0,
  	0,0,45,1,0,0,0,0,47,1,0,0,0,0,49,1,0,0,0,0,51,1,0,0,0,0,53,1,0,0,0,0,
  	55,1,0,0,0,0,57,1,0,0,0,1,59,1,0,0,0,3,62,1,0,0,0,5,65,1,0,0,0,7,67,1,
  	0,0,0,9,70,1,0,0,0,11,72,1,0,0,0,13,75,1,0,0,0,15,77,1,0,0,0,17,79,1,
  	0,0,0,19,81,1,0,0,0,21,84,1,0,0,0,23,111,1,0,0,0,25,113,1,0,0,0,27,122,
  	1,0,0,0,29,126,1,0,0,0,31,129,1,0,0,0,33,132,1,0,0,0,35,147,1,0,0,0,37,
  	152,1,0,0,0,39,158,1,0,0,0,41,161,1,0,0,0,43,168,1,0,0,0,45,170,1,0,0,
  	0,47,172,1,0,0,0,49,174,1,0,0,0,51,176,1,0,0,0,53,179,1,0,0,0,55,185,
  	1,0,0,0,57,189,1,0,0,0,59,60,5,61,0,0,60,61,5,61,0,0,61,2,1,0,0,0,62,
  	63,5,33,0,0,63,64,5,61,0,0,64,4,1,0,0,0,65,66,5,60,0,0,66,6,1,0,0,0,67,
  	68,5,60,0,0,68,69,5,61,0,0,69,8,1,0,0,0,70,71,5,62,0,0,71,10,1,0,0,0,
  	72,73,5,62,0,0,73,74,5,61,0,0,74,12,1,0,0,0,75,76,5,42,0,0,76,14,1,0,
  	0,0,77,78,5,47,0,0,78,16,1,0,0,0,79,80,5,43,0,0,80,18,1,0,0,0,81,82,5,
  	45,0,0,82,20,1,0,0,0,83,85,7,0,0,0,84,83,1,0,0,0,85,86,1,0,0,0,86,84,
  	1,0,0,0,86,87,1,0,0,0,87,22,1,0,0,0,88,90,7,0,0,0,89,88,1,0,0,0,90,91,
  	1,0,0,0,91,89,1,0,0,0,91,92,1,0,0,0,92,93,1,0,0,0,93,95,5,46,0,0,94,96,
  	7,0,0,0,95,94,1,0,0,0,96,97,1,0,0,0,97,95,1,0,0,0,97,98,1,0,0,0,98,112,
  	1,0,0,0,99,101,5,46,0,0,100,102,7,0,0,0,101,100,1,0,0,0,102,103,1,0,0,
  	0,103,101,1,0,0,0,103,104,1,0,0,0,104,112,1,0,0,0,105,107,7,0,0,0,106,
  	105,1,0,0,0,107,108,1,0,0,0,108,106,1,0,0,0,108,109,1,0,0,0,109,110,1,
  	0,0,0,110,112,5,46,0,0,111,89,1,0,0,0,111,99,1,0,0,0,111,106,1,0,0,0,
  	112,24,1,0,0,0,113,117,5,34,0,0,114,116,8,1,0,0,115,114,1,0,0,0,116,119,
  	1,0,0,0,117,115,1,0,0,0,117,118,1,0,0,0,118,120,1,0,0,0,119,117,1,0,0,
  	0,120,121,5,34,0,0,121,26,1,0,0,0,122,123,5,76,0,0,123,124,5,101,0,0,
  	124,125,5,116,0,0,125,28,1,0,0,0,126,127,5,98,0,0,127,128,5,101,0,0,128,
  	30,1,0,0,0,129,130,5,105,0,0,130,131,5,102,0,0,131,32,1,0,0,0,132,133,
  	5,115,0,0,133,134,5,101,0,0,134,135,5,116,0,0,135,136,5,95,0,0,136,137,
  	5,98,0,0,137,138,5,114,0,0,138,139,5,101,0,0,139,140,5,97,0,0,140,141,
  	5,107,0,0,141,142,5,112,0,0,142,143,5,111,0,0,143,144,5,105,0,0,144,145,
  	5,110,0,0,145,146,5,116,0,0,146,34,1,0,0,0,147,148,5,70,0,0,148,149,5,
  	114,0,0,149,150,5,111,0,0,150,151,5,109,0,0,151,36,1,0,0,0,152,153,5,
  	85,0,0,153,154,5,110,0,0,154,155,5,116,0,0,155,156,5,105,0,0,156,157,
  	5,108,0,0,157,38,1,0,0,0,158,159,5,98,0,0,159,160,5,121,0,0,160,40,1,
  	0,0,0,161,162,5,82,0,0,162,163,5,101,0,0,163,164,5,119,0,0,164,165,5,
  	105,0,0,165,166,5,110,0,0,166,167,5,100,0,0,167,42,1,0,0,0,168,169,5,
  	44,0,0,169,44,1,0,0,0,170,171,5,40,0,0,171,46,1,0,0,0,172,173,5,41,0,
  	0,173,48,1,0,0,0,174,175,5,123,0,0,175,50,1,0,0,0,176,177,5,125,0,0,177,
  	52,1,0,0,0,178,180,7,2,0,0,179,178,1,0,0,0,180,181,1,0,0,0,181,179,1,
  	0,0,0,181,182,1,0,0,0,182,183,1,0,0,0,183,184,6,26,0,0,184,54,1,0,0,0,
  	185,186,5,105,0,0,186,187,5,115,0,0,187,56,1,0,0,0,188,190,7,3,0,0,189,
  	188,1,0,0,0,190,191,1,0,0,0,191,189,1,0,0,0,191,192,1,0,0,0,192,58,1,
  	0,0,0,10,0,86,91,97,103,108,111,117,181,191,1,6,0,0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  corallexerLexerStaticData = std::move(staticData);
}

}

coralLexer::coralLexer(CharStream *input) : Lexer(input) {
  coralLexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *corallexerLexerStaticData->atn, corallexerLexerStaticData->decisionToDFA, corallexerLexerStaticData->sharedContextCache);
}

coralLexer::~coralLexer() {
  delete _interpreter;
}

std::string coralLexer::getGrammarFileName() const {
  return "coral.g4";
}

const std::vector<std::string>& coralLexer::getRuleNames() const {
  return corallexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& coralLexer::getChannelNames() const {
  return corallexerLexerStaticData->channelNames;
}

const std::vector<std::string>& coralLexer::getModeNames() const {
  return corallexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& coralLexer::getVocabulary() const {
  return corallexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView coralLexer::getSerializedATN() const {
  return corallexerLexerStaticData->serializedATN;
}

const atn::ATN& coralLexer::getATN() const {
  return *corallexerLexerStaticData->atn;
}




void coralLexer::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  corallexerLexerInitialize();
#else
  ::antlr4::internal::call_once(corallexerLexerOnceFlag, corallexerLexerInitialize);
#endif
}

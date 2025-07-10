
// Generated from coral.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "coralParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by coralParser.
 */
class  coralListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterCommand_first(coralParser::Command_firstContext *ctx) = 0;
  virtual void exitCommand_first(coralParser::Command_firstContext *ctx) = 0;

  virtual void enterArg_first(coralParser::Arg_firstContext *ctx) = 0;
  virtual void exitArg_first(coralParser::Arg_firstContext *ctx) = 0;

  virtual void enterCommand_second(coralParser::Command_secondContext *ctx) = 0;
  virtual void exitCommand_second(coralParser::Command_secondContext *ctx) = 0;

  virtual void enterArg_second(coralParser::Arg_secondContext *ctx) = 0;
  virtual void exitArg_second(coralParser::Arg_secondContext *ctx) = 0;

  virtual void enterLoop(coralParser::LoopContext *ctx) = 0;
  virtual void exitLoop(coralParser::LoopContext *ctx) = 0;

  virtual void enterBlock(coralParser::BlockContext *ctx) = 0;
  virtual void exitBlock(coralParser::BlockContext *ctx) = 0;

  virtual void enterStatement(coralParser::StatementContext *ctx) = 0;
  virtual void exitStatement(coralParser::StatementContext *ctx) = 0;

  virtual void enterIfStatement(coralParser::IfStatementContext *ctx) = 0;
  virtual void exitIfStatement(coralParser::IfStatementContext *ctx) = 0;

  virtual void enterCondition(coralParser::ConditionContext *ctx) = 0;
  virtual void exitCondition(coralParser::ConditionContext *ctx) = 0;

  virtual void enterAssignment(coralParser::AssignmentContext *ctx) = 0;
  virtual void exitAssignment(coralParser::AssignmentContext *ctx) = 0;

  virtual void enterFloat(coralParser::FloatContext *ctx) = 0;
  virtual void exitFloat(coralParser::FloatContext *ctx) = 0;

  virtual void enterMulDiv(coralParser::MulDivContext *ctx) = 0;
  virtual void exitMulDiv(coralParser::MulDivContext *ctx) = 0;

  virtual void enterAddSub(coralParser::AddSubContext *ctx) = 0;
  virtual void exitAddSub(coralParser::AddSubContext *ctx) = 0;

  virtual void enterParens(coralParser::ParensContext *ctx) = 0;
  virtual void exitParens(coralParser::ParensContext *ctx) = 0;

  virtual void enterANOTHERVARIABLE(coralParser::ANOTHERVARIABLEContext *ctx) = 0;
  virtual void exitANOTHERVARIABLE(coralParser::ANOTHERVARIABLEContext *ctx) = 0;

  virtual void enterString(coralParser::StringContext *ctx) = 0;
  virtual void exitString(coralParser::StringContext *ctx) = 0;

  virtual void enterInt(coralParser::IntContext *ctx) = 0;
  virtual void exitInt(coralParser::IntContext *ctx) = 0;

  virtual void enterProgram(coralParser::ProgramContext *ctx) = 0;
  virtual void exitProgram(coralParser::ProgramContext *ctx) = 0;


};


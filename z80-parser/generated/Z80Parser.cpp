
// Generated from Z80.g4 by ANTLR 4.8


#include "Z80Listener.h"

#include "Z80Parser.h"


using namespace antlrcpp;
using namespace antlr4;

Z80Parser::Z80Parser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

Z80Parser::~Z80Parser() {
  delete _interpreter;
}

std::string Z80Parser::getGrammarFileName() const {
  return "Z80.g4";
}

const std::vector<std::string>& Z80Parser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& Z80Parser::getVocabulary() const {
  return _vocabulary;
}


//----------------- ProgramContext ------------------------------------------------------------------

Z80Parser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<Z80Parser::StatementContext *> Z80Parser::ProgramContext::statement() {
  return getRuleContexts<Z80Parser::StatementContext>();
}

Z80Parser::StatementContext* Z80Parser::ProgramContext::statement(size_t i) {
  return getRuleContext<Z80Parser::StatementContext>(i);
}

std::vector<tree::TerminalNode *> Z80Parser::ProgramContext::EOL() {
  return getTokens(Z80Parser::EOL);
}

tree::TerminalNode* Z80Parser::ProgramContext::EOL(size_t i) {
  return getToken(Z80Parser::EOL, i);
}


size_t Z80Parser::ProgramContext::getRuleIndex() const {
  return Z80Parser::RuleProgram;
}

void Z80Parser::ProgramContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProgram(this);
}

void Z80Parser::ProgramContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProgram(this);
}

Z80Parser::ProgramContext* Z80Parser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 0, Z80Parser::RuleProgram);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(689); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(686);
      statement();
      setState(687);
      match(Z80Parser::EOL);
      setState(691); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (((((_la - 72) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 72)) & ((1ULL << (Z80Parser::T__71 - 72))
      | (1ULL << (Z80Parser::T__72 - 72))
      | (1ULL << (Z80Parser::T__74 - 72))
      | (1ULL << (Z80Parser::T__75 - 72))
      | (1ULL << (Z80Parser::T__76 - 72))
      | (1ULL << (Z80Parser::T__77 - 72))
      | (1ULL << (Z80Parser::T__78 - 72))
      | (1ULL << (Z80Parser::T__79 - 72))
      | (1ULL << (Z80Parser::T__80 - 72))
      | (1ULL << (Z80Parser::T__81 - 72))
      | (1ULL << (Z80Parser::T__82 - 72))
      | (1ULL << (Z80Parser::T__83 - 72))
      | (1ULL << (Z80Parser::T__84 - 72))
      | (1ULL << (Z80Parser::T__85 - 72))
      | (1ULL << (Z80Parser::T__86 - 72))
      | (1ULL << (Z80Parser::T__87 - 72))
      | (1ULL << (Z80Parser::T__88 - 72))
      | (1ULL << (Z80Parser::T__89 - 72))
      | (1ULL << (Z80Parser::T__90 - 72))
      | (1ULL << (Z80Parser::T__91 - 72))
      | (1ULL << (Z80Parser::T__92 - 72))
      | (1ULL << (Z80Parser::T__93 - 72))
      | (1ULL << (Z80Parser::T__94 - 72))
      | (1ULL << (Z80Parser::T__95 - 72))
      | (1ULL << (Z80Parser::T__96 - 72))
      | (1ULL << (Z80Parser::T__97 - 72))
      | (1ULL << (Z80Parser::T__98 - 72))
      | (1ULL << (Z80Parser::T__99 - 72))
      | (1ULL << (Z80Parser::T__100 - 72))
      | (1ULL << (Z80Parser::T__101 - 72))
      | (1ULL << (Z80Parser::T__102 - 72))
      | (1ULL << (Z80Parser::T__103 - 72))
      | (1ULL << (Z80Parser::T__104 - 72))
      | (1ULL << (Z80Parser::T__105 - 72))
      | (1ULL << (Z80Parser::T__106 - 72))
      | (1ULL << (Z80Parser::T__107 - 72))
      | (1ULL << (Z80Parser::T__108 - 72))
      | (1ULL << (Z80Parser::T__109 - 72))
      | (1ULL << (Z80Parser::T__110 - 72))
      | (1ULL << (Z80Parser::T__111 - 72))
      | (1ULL << (Z80Parser::T__112 - 72))
      | (1ULL << (Z80Parser::T__113 - 72))
      | (1ULL << (Z80Parser::T__114 - 72))
      | (1ULL << (Z80Parser::T__115 - 72))
      | (1ULL << (Z80Parser::T__116 - 72))
      | (1ULL << (Z80Parser::T__117 - 72))
      | (1ULL << (Z80Parser::T__118 - 72))
      | (1ULL << (Z80Parser::T__119 - 72))
      | (1ULL << (Z80Parser::T__120 - 72))
      | (1ULL << (Z80Parser::T__121 - 72))
      | (1ULL << (Z80Parser::T__122 - 72))
      | (1ULL << (Z80Parser::T__123 - 72))
      | (1ULL << (Z80Parser::T__124 - 72))
      | (1ULL << (Z80Parser::T__125 - 72))
      | (1ULL << (Z80Parser::T__126 - 72))
      | (1ULL << (Z80Parser::T__127 - 72))
      | (1ULL << (Z80Parser::T__128 - 72))
      | (1ULL << (Z80Parser::T__129 - 72))
      | (1ULL << (Z80Parser::T__130 - 72))
      | (1ULL << (Z80Parser::T__131 - 72))
      | (1ULL << (Z80Parser::T__132 - 72))
      | (1ULL << (Z80Parser::T__133 - 72))
      | (1ULL << (Z80Parser::T__134 - 72)))) != 0) || ((((_la - 136) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 136)) & ((1ULL << (Z80Parser::T__135 - 136))
      | (1ULL << (Z80Parser::T__136 - 136))
      | (1ULL << (Z80Parser::T__137 - 136))
      | (1ULL << (Z80Parser::T__138 - 136))
      | (1ULL << (Z80Parser::T__139 - 136))
      | (1ULL << (Z80Parser::T__140 - 136))
      | (1ULL << (Z80Parser::T__141 - 136))
      | (1ULL << (Z80Parser::T__142 - 136))
      | (1ULL << (Z80Parser::T__143 - 136))
      | (1ULL << (Z80Parser::T__144 - 136))
      | (1ULL << (Z80Parser::T__145 - 136))
      | (1ULL << (Z80Parser::T__146 - 136))
      | (1ULL << (Z80Parser::T__147 - 136))
      | (1ULL << (Z80Parser::T__148 - 136))
      | (1ULL << (Z80Parser::T__149 - 136))
      | (1ULL << (Z80Parser::T__150 - 136))
      | (1ULL << (Z80Parser::T__151 - 136))
      | (1ULL << (Z80Parser::T__152 - 136))
      | (1ULL << (Z80Parser::T__153 - 136))
      | (1ULL << (Z80Parser::T__154 - 136))
      | (1ULL << (Z80Parser::T__155 - 136))
      | (1ULL << (Z80Parser::T__156 - 136))
      | (1ULL << (Z80Parser::T__157 - 136))
      | (1ULL << (Z80Parser::T__158 - 136))
      | (1ULL << (Z80Parser::T__159 - 136))
      | (1ULL << (Z80Parser::T__160 - 136))
      | (1ULL << (Z80Parser::T__161 - 136))
      | (1ULL << (Z80Parser::T__162 - 136))
      | (1ULL << (Z80Parser::T__163 - 136))
      | (1ULL << (Z80Parser::T__164 - 136))
      | (1ULL << (Z80Parser::T__165 - 136))
      | (1ULL << (Z80Parser::T__166 - 136))
      | (1ULL << (Z80Parser::T__167 - 136))
      | (1ULL << (Z80Parser::T__168 - 136))
      | (1ULL << (Z80Parser::T__169 - 136))
      | (1ULL << (Z80Parser::T__170 - 136))
      | (1ULL << (Z80Parser::T__171 - 136))
      | (1ULL << (Z80Parser::T__186 - 136))
      | (1ULL << (Z80Parser::T__187 - 136))
      | (1ULL << (Z80Parser::T__188 - 136))
      | (1ULL << (Z80Parser::T__189 - 136))
      | (1ULL << (Z80Parser::T__190 - 136))
      | (1ULL << (Z80Parser::T__191 - 136))
      | (1ULL << (Z80Parser::T__192 - 136))
      | (1ULL << (Z80Parser::T__193 - 136))
      | (1ULL << (Z80Parser::T__194 - 136))
      | (1ULL << (Z80Parser::T__195 - 136))
      | (1ULL << (Z80Parser::T__196 - 136))
      | (1ULL << (Z80Parser::T__197 - 136))
      | (1ULL << (Z80Parser::T__198 - 136)))) != 0) || ((((_la - 200) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 200)) & ((1ULL << (Z80Parser::T__199 - 200))
      | (1ULL << (Z80Parser::T__200 - 200))
      | (1ULL << (Z80Parser::T__201 - 200))
      | (1ULL << (Z80Parser::T__202 - 200))
      | (1ULL << (Z80Parser::T__203 - 200))
      | (1ULL << (Z80Parser::T__204 - 200))
      | (1ULL << (Z80Parser::T__205 - 200))
      | (1ULL << (Z80Parser::T__206 - 200))
      | (1ULL << (Z80Parser::T__207 - 200))
      | (1ULL << (Z80Parser::T__208 - 200))
      | (1ULL << (Z80Parser::T__209 - 200))
      | (1ULL << (Z80Parser::T__210 - 200))
      | (1ULL << (Z80Parser::T__211 - 200))
      | (1ULL << (Z80Parser::T__212 - 200))
      | (1ULL << (Z80Parser::T__213 - 200))
      | (1ULL << (Z80Parser::T__214 - 200))
      | (1ULL << (Z80Parser::T__215 - 200))
      | (1ULL << (Z80Parser::T__216 - 200))
      | (1ULL << (Z80Parser::T__217 - 200))
      | (1ULL << (Z80Parser::T__218 - 200))
      | (1ULL << (Z80Parser::T__219 - 200))
      | (1ULL << (Z80Parser::T__220 - 200))
      | (1ULL << (Z80Parser::T__221 - 200))
      | (1ULL << (Z80Parser::NAME - 200))
      | (1ULL << (Z80Parser::COMMENT - 200))
      | (1ULL << (Z80Parser::EOL - 200)))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

Z80Parser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::LabelContext* Z80Parser::StatementContext::label() {
  return getRuleContext<Z80Parser::LabelContext>(0);
}

Z80Parser::InstructionContext* Z80Parser::StatementContext::instruction() {
  return getRuleContext<Z80Parser::InstructionContext>(0);
}

Z80Parser::CommentContext* Z80Parser::StatementContext::comment() {
  return getRuleContext<Z80Parser::CommentContext>(0);
}


size_t Z80Parser::StatementContext::getRuleIndex() const {
  return Z80Parser::RuleStatement;
}

void Z80Parser::StatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatement(this);
}

void Z80Parser::StatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatement(this);
}

Z80Parser::StatementContext* Z80Parser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 2, Z80Parser::RuleStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(694);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Z80Parser::NAME) {
      setState(693);
      label();
    }
    setState(697);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
    case 1: {
      setState(696);
      instruction();
      break;
    }

    }
    setState(700);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Z80Parser::COMMENT) {
      setState(699);
      comment();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InstructionContext ------------------------------------------------------------------

Z80Parser::InstructionContext::InstructionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::ByteLoadCommandContext* Z80Parser::InstructionContext::byteLoadCommand() {
  return getRuleContext<Z80Parser::ByteLoadCommandContext>(0);
}

Z80Parser::WordLoadCommandContext* Z80Parser::InstructionContext::wordLoadCommand() {
  return getRuleContext<Z80Parser::WordLoadCommandContext>(0);
}

Z80Parser::ExchagneAndBlockTransfrerCommandContext* Z80Parser::InstructionContext::exchagneAndBlockTransfrerCommand() {
  return getRuleContext<Z80Parser::ExchagneAndBlockTransfrerCommandContext>(0);
}

Z80Parser::ArithmeticCommandContext* Z80Parser::InstructionContext::arithmeticCommand() {
  return getRuleContext<Z80Parser::ArithmeticCommandContext>(0);
}

Z80Parser::ArithmeticControlCommandContext* Z80Parser::InstructionContext::arithmeticControlCommand() {
  return getRuleContext<Z80Parser::ArithmeticControlCommandContext>(0);
}

Z80Parser::WordArithemeticCommandContext* Z80Parser::InstructionContext::wordArithemeticCommand() {
  return getRuleContext<Z80Parser::WordArithemeticCommandContext>(0);
}

Z80Parser::RotateCommandContext* Z80Parser::InstructionContext::rotateCommand() {
  return getRuleContext<Z80Parser::RotateCommandContext>(0);
}

Z80Parser::BitManipulationCommandContext* Z80Parser::InstructionContext::bitManipulationCommand() {
  return getRuleContext<Z80Parser::BitManipulationCommandContext>(0);
}

Z80Parser::BranchCommandContext* Z80Parser::InstructionContext::branchCommand() {
  return getRuleContext<Z80Parser::BranchCommandContext>(0);
}

Z80Parser::InputAndOutpuCommandContext* Z80Parser::InstructionContext::inputAndOutpuCommand() {
  return getRuleContext<Z80Parser::InputAndOutpuCommandContext>(0);
}


size_t Z80Parser::InstructionContext::getRuleIndex() const {
  return Z80Parser::RuleInstruction;
}

void Z80Parser::InstructionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInstruction(this);
}

void Z80Parser::InstructionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInstruction(this);
}

Z80Parser::InstructionContext* Z80Parser::instruction() {
  InstructionContext *_localctx = _tracker.createInstance<InstructionContext>(_ctx, getState());
  enterRule(_localctx, 4, Z80Parser::RuleInstruction);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(712);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(702);
      byteLoadCommand();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(703);
      wordLoadCommand();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(704);
      exchagneAndBlockTransfrerCommand();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(705);
      arithmeticCommand();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(706);
      arithmeticControlCommand();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(707);
      wordArithemeticCommand();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(708);
      rotateCommand();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(709);
      bitManipulationCommand();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(710);
      branchCommand();
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(711);
      inputAndOutpuCommand();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AShadowRegisterContext ------------------------------------------------------------------

Z80Parser::AShadowRegisterContext::AShadowRegisterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t Z80Parser::AShadowRegisterContext::getRuleIndex() const {
  return Z80Parser::RuleAShadowRegister;
}

void Z80Parser::AShadowRegisterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAShadowRegister(this);
}

void Z80Parser::AShadowRegisterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAShadowRegister(this);
}

Z80Parser::AShadowRegisterContext* Z80Parser::aShadowRegister() {
  AShadowRegisterContext *_localctx = _tracker.createInstance<AShadowRegisterContext>(_ctx, getState());
  enterRule(_localctx, 6, Z80Parser::RuleAShadowRegister);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(714);
    _la = _input->LA(1);
    if (!(_la == Z80Parser::T__0

    || _la == Z80Parser::T__1)) {
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

//----------------- FShadowRegisterContext ------------------------------------------------------------------

Z80Parser::FShadowRegisterContext::FShadowRegisterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t Z80Parser::FShadowRegisterContext::getRuleIndex() const {
  return Z80Parser::RuleFShadowRegister;
}

void Z80Parser::FShadowRegisterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFShadowRegister(this);
}

void Z80Parser::FShadowRegisterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFShadowRegister(this);
}

Z80Parser::FShadowRegisterContext* Z80Parser::fShadowRegister() {
  FShadowRegisterContext *_localctx = _tracker.createInstance<FShadowRegisterContext>(_ctx, getState());
  enterRule(_localctx, 8, Z80Parser::RuleFShadowRegister);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(716);
    _la = _input->LA(1);
    if (!(_la == Z80Parser::T__2

    || _la == Z80Parser::T__3)) {
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

//----------------- BShadowRegisterContext ------------------------------------------------------------------

Z80Parser::BShadowRegisterContext::BShadowRegisterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t Z80Parser::BShadowRegisterContext::getRuleIndex() const {
  return Z80Parser::RuleBShadowRegister;
}

void Z80Parser::BShadowRegisterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBShadowRegister(this);
}

void Z80Parser::BShadowRegisterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBShadowRegister(this);
}

Z80Parser::BShadowRegisterContext* Z80Parser::bShadowRegister() {
  BShadowRegisterContext *_localctx = _tracker.createInstance<BShadowRegisterContext>(_ctx, getState());
  enterRule(_localctx, 10, Z80Parser::RuleBShadowRegister);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(718);
    _la = _input->LA(1);
    if (!(_la == Z80Parser::T__4

    || _la == Z80Parser::T__5)) {
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

//----------------- CShadowRegisterContext ------------------------------------------------------------------

Z80Parser::CShadowRegisterContext::CShadowRegisterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t Z80Parser::CShadowRegisterContext::getRuleIndex() const {
  return Z80Parser::RuleCShadowRegister;
}

void Z80Parser::CShadowRegisterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCShadowRegister(this);
}

void Z80Parser::CShadowRegisterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCShadowRegister(this);
}

Z80Parser::CShadowRegisterContext* Z80Parser::cShadowRegister() {
  CShadowRegisterContext *_localctx = _tracker.createInstance<CShadowRegisterContext>(_ctx, getState());
  enterRule(_localctx, 12, Z80Parser::RuleCShadowRegister);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(720);
    _la = _input->LA(1);
    if (!(_la == Z80Parser::T__6

    || _la == Z80Parser::T__7)) {
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

//----------------- DShadowRegisterContext ------------------------------------------------------------------

Z80Parser::DShadowRegisterContext::DShadowRegisterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t Z80Parser::DShadowRegisterContext::getRuleIndex() const {
  return Z80Parser::RuleDShadowRegister;
}

void Z80Parser::DShadowRegisterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDShadowRegister(this);
}

void Z80Parser::DShadowRegisterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDShadowRegister(this);
}

Z80Parser::DShadowRegisterContext* Z80Parser::dShadowRegister() {
  DShadowRegisterContext *_localctx = _tracker.createInstance<DShadowRegisterContext>(_ctx, getState());
  enterRule(_localctx, 14, Z80Parser::RuleDShadowRegister);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(722);
    _la = _input->LA(1);
    if (!(_la == Z80Parser::T__8

    || _la == Z80Parser::T__9)) {
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

//----------------- EShadowRegisterContext ------------------------------------------------------------------

Z80Parser::EShadowRegisterContext::EShadowRegisterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t Z80Parser::EShadowRegisterContext::getRuleIndex() const {
  return Z80Parser::RuleEShadowRegister;
}

void Z80Parser::EShadowRegisterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEShadowRegister(this);
}

void Z80Parser::EShadowRegisterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEShadowRegister(this);
}

Z80Parser::EShadowRegisterContext* Z80Parser::eShadowRegister() {
  EShadowRegisterContext *_localctx = _tracker.createInstance<EShadowRegisterContext>(_ctx, getState());
  enterRule(_localctx, 16, Z80Parser::RuleEShadowRegister);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(724);
    _la = _input->LA(1);
    if (!(_la == Z80Parser::T__10

    || _la == Z80Parser::T__11)) {
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

//----------------- HShadowRegisterContext ------------------------------------------------------------------

Z80Parser::HShadowRegisterContext::HShadowRegisterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t Z80Parser::HShadowRegisterContext::getRuleIndex() const {
  return Z80Parser::RuleHShadowRegister;
}

void Z80Parser::HShadowRegisterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterHShadowRegister(this);
}

void Z80Parser::HShadowRegisterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitHShadowRegister(this);
}

Z80Parser::HShadowRegisterContext* Z80Parser::hShadowRegister() {
  HShadowRegisterContext *_localctx = _tracker.createInstance<HShadowRegisterContext>(_ctx, getState());
  enterRule(_localctx, 18, Z80Parser::RuleHShadowRegister);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(726);
    _la = _input->LA(1);
    if (!(_la == Z80Parser::T__12

    || _la == Z80Parser::T__13)) {
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

//----------------- LShadowRegisterContext ------------------------------------------------------------------

Z80Parser::LShadowRegisterContext::LShadowRegisterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t Z80Parser::LShadowRegisterContext::getRuleIndex() const {
  return Z80Parser::RuleLShadowRegister;
}

void Z80Parser::LShadowRegisterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLShadowRegister(this);
}

void Z80Parser::LShadowRegisterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLShadowRegister(this);
}

Z80Parser::LShadowRegisterContext* Z80Parser::lShadowRegister() {
  LShadowRegisterContext *_localctx = _tracker.createInstance<LShadowRegisterContext>(_ctx, getState());
  enterRule(_localctx, 20, Z80Parser::RuleLShadowRegister);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(728);
    _la = _input->LA(1);
    if (!(_la == Z80Parser::T__14

    || _la == Z80Parser::T__15)) {
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

//----------------- ARegisterContext ------------------------------------------------------------------

Z80Parser::ARegisterContext::ARegisterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::AShadowRegisterContext* Z80Parser::ARegisterContext::aShadowRegister() {
  return getRuleContext<Z80Parser::AShadowRegisterContext>(0);
}


size_t Z80Parser::ARegisterContext::getRuleIndex() const {
  return Z80Parser::RuleARegister;
}

void Z80Parser::ARegisterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterARegister(this);
}

void Z80Parser::ARegisterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitARegister(this);
}

Z80Parser::ARegisterContext* Z80Parser::aRegister() {
  ARegisterContext *_localctx = _tracker.createInstance<ARegisterContext>(_ctx, getState());
  enterRule(_localctx, 22, Z80Parser::RuleARegister);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(733);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Z80Parser::T__16: {
        enterOuterAlt(_localctx, 1);
        setState(730);
        match(Z80Parser::T__16);
        break;
      }

      case Z80Parser::T__17: {
        enterOuterAlt(_localctx, 2);
        setState(731);
        match(Z80Parser::T__17);
        break;
      }

      case Z80Parser::T__0:
      case Z80Parser::T__1: {
        enterOuterAlt(_localctx, 3);
        setState(732);
        aShadowRegister();
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

//----------------- FRegisterContext ------------------------------------------------------------------

Z80Parser::FRegisterContext::FRegisterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::FShadowRegisterContext* Z80Parser::FRegisterContext::fShadowRegister() {
  return getRuleContext<Z80Parser::FShadowRegisterContext>(0);
}


size_t Z80Parser::FRegisterContext::getRuleIndex() const {
  return Z80Parser::RuleFRegister;
}

void Z80Parser::FRegisterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFRegister(this);
}

void Z80Parser::FRegisterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFRegister(this);
}

Z80Parser::FRegisterContext* Z80Parser::fRegister() {
  FRegisterContext *_localctx = _tracker.createInstance<FRegisterContext>(_ctx, getState());
  enterRule(_localctx, 24, Z80Parser::RuleFRegister);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(738);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Z80Parser::T__18: {
        enterOuterAlt(_localctx, 1);
        setState(735);
        match(Z80Parser::T__18);
        break;
      }

      case Z80Parser::T__19: {
        enterOuterAlt(_localctx, 2);
        setState(736);
        match(Z80Parser::T__19);
        break;
      }

      case Z80Parser::T__2:
      case Z80Parser::T__3: {
        enterOuterAlt(_localctx, 3);
        setState(737);
        fShadowRegister();
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

//----------------- AfRegisterContext ------------------------------------------------------------------

Z80Parser::AfRegisterContext::AfRegisterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::AfShadowRegisterContext* Z80Parser::AfRegisterContext::afShadowRegister() {
  return getRuleContext<Z80Parser::AfShadowRegisterContext>(0);
}


size_t Z80Parser::AfRegisterContext::getRuleIndex() const {
  return Z80Parser::RuleAfRegister;
}

void Z80Parser::AfRegisterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAfRegister(this);
}

void Z80Parser::AfRegisterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAfRegister(this);
}

Z80Parser::AfRegisterContext* Z80Parser::afRegister() {
  AfRegisterContext *_localctx = _tracker.createInstance<AfRegisterContext>(_ctx, getState());
  enterRule(_localctx, 26, Z80Parser::RuleAfRegister);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(743);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Z80Parser::T__20: {
        enterOuterAlt(_localctx, 1);
        setState(740);
        match(Z80Parser::T__20);
        break;
      }

      case Z80Parser::T__21: {
        enterOuterAlt(_localctx, 2);
        setState(741);
        match(Z80Parser::T__21);
        break;
      }

      case Z80Parser::T__22:
      case Z80Parser::T__23: {
        enterOuterAlt(_localctx, 3);
        setState(742);
        afShadowRegister();
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

//----------------- AfShadowRegisterContext ------------------------------------------------------------------

Z80Parser::AfShadowRegisterContext::AfShadowRegisterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t Z80Parser::AfShadowRegisterContext::getRuleIndex() const {
  return Z80Parser::RuleAfShadowRegister;
}

void Z80Parser::AfShadowRegisterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAfShadowRegister(this);
}

void Z80Parser::AfShadowRegisterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAfShadowRegister(this);
}

Z80Parser::AfShadowRegisterContext* Z80Parser::afShadowRegister() {
  AfShadowRegisterContext *_localctx = _tracker.createInstance<AfShadowRegisterContext>(_ctx, getState());
  enterRule(_localctx, 28, Z80Parser::RuleAfShadowRegister);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(745);
    _la = _input->LA(1);
    if (!(_la == Z80Parser::T__22

    || _la == Z80Parser::T__23)) {
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

//----------------- BcShadowRegisterContext ------------------------------------------------------------------

Z80Parser::BcShadowRegisterContext::BcShadowRegisterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t Z80Parser::BcShadowRegisterContext::getRuleIndex() const {
  return Z80Parser::RuleBcShadowRegister;
}

void Z80Parser::BcShadowRegisterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBcShadowRegister(this);
}

void Z80Parser::BcShadowRegisterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBcShadowRegister(this);
}

Z80Parser::BcShadowRegisterContext* Z80Parser::bcShadowRegister() {
  BcShadowRegisterContext *_localctx = _tracker.createInstance<BcShadowRegisterContext>(_ctx, getState());
  enterRule(_localctx, 30, Z80Parser::RuleBcShadowRegister);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(747);
    _la = _input->LA(1);
    if (!(_la == Z80Parser::T__24

    || _la == Z80Parser::T__25)) {
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

//----------------- DeShadowRegisterContext ------------------------------------------------------------------

Z80Parser::DeShadowRegisterContext::DeShadowRegisterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t Z80Parser::DeShadowRegisterContext::getRuleIndex() const {
  return Z80Parser::RuleDeShadowRegister;
}

void Z80Parser::DeShadowRegisterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeShadowRegister(this);
}

void Z80Parser::DeShadowRegisterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeShadowRegister(this);
}

Z80Parser::DeShadowRegisterContext* Z80Parser::deShadowRegister() {
  DeShadowRegisterContext *_localctx = _tracker.createInstance<DeShadowRegisterContext>(_ctx, getState());
  enterRule(_localctx, 32, Z80Parser::RuleDeShadowRegister);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(749);
    _la = _input->LA(1);
    if (!(_la == Z80Parser::T__26

    || _la == Z80Parser::T__27)) {
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

//----------------- HlShadowRegisterContext ------------------------------------------------------------------

Z80Parser::HlShadowRegisterContext::HlShadowRegisterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t Z80Parser::HlShadowRegisterContext::getRuleIndex() const {
  return Z80Parser::RuleHlShadowRegister;
}

void Z80Parser::HlShadowRegisterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterHlShadowRegister(this);
}

void Z80Parser::HlShadowRegisterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitHlShadowRegister(this);
}

Z80Parser::HlShadowRegisterContext* Z80Parser::hlShadowRegister() {
  HlShadowRegisterContext *_localctx = _tracker.createInstance<HlShadowRegisterContext>(_ctx, getState());
  enterRule(_localctx, 34, Z80Parser::RuleHlShadowRegister);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(751);
    _la = _input->LA(1);
    if (!(_la == Z80Parser::T__28

    || _la == Z80Parser::T__29)) {
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

//----------------- BRegisterContext ------------------------------------------------------------------

Z80Parser::BRegisterContext::BRegisterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::BShadowRegisterContext* Z80Parser::BRegisterContext::bShadowRegister() {
  return getRuleContext<Z80Parser::BShadowRegisterContext>(0);
}


size_t Z80Parser::BRegisterContext::getRuleIndex() const {
  return Z80Parser::RuleBRegister;
}

void Z80Parser::BRegisterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBRegister(this);
}

void Z80Parser::BRegisterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBRegister(this);
}

Z80Parser::BRegisterContext* Z80Parser::bRegister() {
  BRegisterContext *_localctx = _tracker.createInstance<BRegisterContext>(_ctx, getState());
  enterRule(_localctx, 36, Z80Parser::RuleBRegister);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(756);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Z80Parser::T__30: {
        enterOuterAlt(_localctx, 1);
        setState(753);
        match(Z80Parser::T__30);
        break;
      }

      case Z80Parser::T__31: {
        enterOuterAlt(_localctx, 2);
        setState(754);
        match(Z80Parser::T__31);
        break;
      }

      case Z80Parser::T__4:
      case Z80Parser::T__5: {
        enterOuterAlt(_localctx, 3);
        setState(755);
        bShadowRegister();
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

//----------------- CRegisterContext ------------------------------------------------------------------

Z80Parser::CRegisterContext::CRegisterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::CShadowRegisterContext* Z80Parser::CRegisterContext::cShadowRegister() {
  return getRuleContext<Z80Parser::CShadowRegisterContext>(0);
}


size_t Z80Parser::CRegisterContext::getRuleIndex() const {
  return Z80Parser::RuleCRegister;
}

void Z80Parser::CRegisterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCRegister(this);
}

void Z80Parser::CRegisterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCRegister(this);
}

Z80Parser::CRegisterContext* Z80Parser::cRegister() {
  CRegisterContext *_localctx = _tracker.createInstance<CRegisterContext>(_ctx, getState());
  enterRule(_localctx, 38, Z80Parser::RuleCRegister);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(761);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Z80Parser::T__32: {
        enterOuterAlt(_localctx, 1);
        setState(758);
        match(Z80Parser::T__32);
        break;
      }

      case Z80Parser::T__33: {
        enterOuterAlt(_localctx, 2);
        setState(759);
        match(Z80Parser::T__33);
        break;
      }

      case Z80Parser::T__6:
      case Z80Parser::T__7: {
        enterOuterAlt(_localctx, 3);
        setState(760);
        cShadowRegister();
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

//----------------- BcRegisterContext ------------------------------------------------------------------

Z80Parser::BcRegisterContext::BcRegisterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::BcShadowRegisterContext* Z80Parser::BcRegisterContext::bcShadowRegister() {
  return getRuleContext<Z80Parser::BcShadowRegisterContext>(0);
}


size_t Z80Parser::BcRegisterContext::getRuleIndex() const {
  return Z80Parser::RuleBcRegister;
}

void Z80Parser::BcRegisterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBcRegister(this);
}

void Z80Parser::BcRegisterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBcRegister(this);
}

Z80Parser::BcRegisterContext* Z80Parser::bcRegister() {
  BcRegisterContext *_localctx = _tracker.createInstance<BcRegisterContext>(_ctx, getState());
  enterRule(_localctx, 40, Z80Parser::RuleBcRegister);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(766);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Z80Parser::T__34: {
        enterOuterAlt(_localctx, 1);
        setState(763);
        match(Z80Parser::T__34);
        break;
      }

      case Z80Parser::T__35: {
        enterOuterAlt(_localctx, 2);
        setState(764);
        match(Z80Parser::T__35);
        break;
      }

      case Z80Parser::T__24:
      case Z80Parser::T__25: {
        enterOuterAlt(_localctx, 3);
        setState(765);
        bcShadowRegister();
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

//----------------- DRegisterContext ------------------------------------------------------------------

Z80Parser::DRegisterContext::DRegisterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::DShadowRegisterContext* Z80Parser::DRegisterContext::dShadowRegister() {
  return getRuleContext<Z80Parser::DShadowRegisterContext>(0);
}


size_t Z80Parser::DRegisterContext::getRuleIndex() const {
  return Z80Parser::RuleDRegister;
}

void Z80Parser::DRegisterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDRegister(this);
}

void Z80Parser::DRegisterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDRegister(this);
}

Z80Parser::DRegisterContext* Z80Parser::dRegister() {
  DRegisterContext *_localctx = _tracker.createInstance<DRegisterContext>(_ctx, getState());
  enterRule(_localctx, 42, Z80Parser::RuleDRegister);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(771);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Z80Parser::T__36: {
        enterOuterAlt(_localctx, 1);
        setState(768);
        match(Z80Parser::T__36);
        break;
      }

      case Z80Parser::T__37: {
        enterOuterAlt(_localctx, 2);
        setState(769);
        match(Z80Parser::T__37);
        break;
      }

      case Z80Parser::T__8:
      case Z80Parser::T__9: {
        enterOuterAlt(_localctx, 3);
        setState(770);
        dShadowRegister();
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

//----------------- ERegisterContext ------------------------------------------------------------------

Z80Parser::ERegisterContext::ERegisterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::EShadowRegisterContext* Z80Parser::ERegisterContext::eShadowRegister() {
  return getRuleContext<Z80Parser::EShadowRegisterContext>(0);
}


size_t Z80Parser::ERegisterContext::getRuleIndex() const {
  return Z80Parser::RuleERegister;
}

void Z80Parser::ERegisterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterERegister(this);
}

void Z80Parser::ERegisterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitERegister(this);
}

Z80Parser::ERegisterContext* Z80Parser::eRegister() {
  ERegisterContext *_localctx = _tracker.createInstance<ERegisterContext>(_ctx, getState());
  enterRule(_localctx, 44, Z80Parser::RuleERegister);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(776);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Z80Parser::T__38: {
        enterOuterAlt(_localctx, 1);
        setState(773);
        match(Z80Parser::T__38);
        break;
      }

      case Z80Parser::T__39: {
        enterOuterAlt(_localctx, 2);
        setState(774);
        match(Z80Parser::T__39);
        break;
      }

      case Z80Parser::T__10:
      case Z80Parser::T__11: {
        enterOuterAlt(_localctx, 3);
        setState(775);
        eShadowRegister();
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

//----------------- DeRegisterContext ------------------------------------------------------------------

Z80Parser::DeRegisterContext::DeRegisterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::DeShadowRegisterContext* Z80Parser::DeRegisterContext::deShadowRegister() {
  return getRuleContext<Z80Parser::DeShadowRegisterContext>(0);
}


size_t Z80Parser::DeRegisterContext::getRuleIndex() const {
  return Z80Parser::RuleDeRegister;
}

void Z80Parser::DeRegisterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeRegister(this);
}

void Z80Parser::DeRegisterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeRegister(this);
}

Z80Parser::DeRegisterContext* Z80Parser::deRegister() {
  DeRegisterContext *_localctx = _tracker.createInstance<DeRegisterContext>(_ctx, getState());
  enterRule(_localctx, 46, Z80Parser::RuleDeRegister);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(781);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Z80Parser::T__40: {
        enterOuterAlt(_localctx, 1);
        setState(778);
        match(Z80Parser::T__40);
        break;
      }

      case Z80Parser::T__41: {
        enterOuterAlt(_localctx, 2);
        setState(779);
        match(Z80Parser::T__41);
        break;
      }

      case Z80Parser::T__26:
      case Z80Parser::T__27: {
        enterOuterAlt(_localctx, 3);
        setState(780);
        deShadowRegister();
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

//----------------- HRegisterContext ------------------------------------------------------------------

Z80Parser::HRegisterContext::HRegisterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::HShadowRegisterContext* Z80Parser::HRegisterContext::hShadowRegister() {
  return getRuleContext<Z80Parser::HShadowRegisterContext>(0);
}


size_t Z80Parser::HRegisterContext::getRuleIndex() const {
  return Z80Parser::RuleHRegister;
}

void Z80Parser::HRegisterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterHRegister(this);
}

void Z80Parser::HRegisterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitHRegister(this);
}

Z80Parser::HRegisterContext* Z80Parser::hRegister() {
  HRegisterContext *_localctx = _tracker.createInstance<HRegisterContext>(_ctx, getState());
  enterRule(_localctx, 48, Z80Parser::RuleHRegister);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(786);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Z80Parser::T__42: {
        enterOuterAlt(_localctx, 1);
        setState(783);
        match(Z80Parser::T__42);
        break;
      }

      case Z80Parser::T__43: {
        enterOuterAlt(_localctx, 2);
        setState(784);
        match(Z80Parser::T__43);
        break;
      }

      case Z80Parser::T__12:
      case Z80Parser::T__13: {
        enterOuterAlt(_localctx, 3);
        setState(785);
        hShadowRegister();
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

//----------------- LRegisterContext ------------------------------------------------------------------

Z80Parser::LRegisterContext::LRegisterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::LShadowRegisterContext* Z80Parser::LRegisterContext::lShadowRegister() {
  return getRuleContext<Z80Parser::LShadowRegisterContext>(0);
}


size_t Z80Parser::LRegisterContext::getRuleIndex() const {
  return Z80Parser::RuleLRegister;
}

void Z80Parser::LRegisterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLRegister(this);
}

void Z80Parser::LRegisterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLRegister(this);
}

Z80Parser::LRegisterContext* Z80Parser::lRegister() {
  LRegisterContext *_localctx = _tracker.createInstance<LRegisterContext>(_ctx, getState());
  enterRule(_localctx, 50, Z80Parser::RuleLRegister);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(791);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Z80Parser::T__44: {
        enterOuterAlt(_localctx, 1);
        setState(788);
        match(Z80Parser::T__44);
        break;
      }

      case Z80Parser::T__45: {
        enterOuterAlt(_localctx, 2);
        setState(789);
        match(Z80Parser::T__45);
        break;
      }

      case Z80Parser::T__14:
      case Z80Parser::T__15: {
        enterOuterAlt(_localctx, 3);
        setState(790);
        lShadowRegister();
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

//----------------- HlRegisterContext ------------------------------------------------------------------

Z80Parser::HlRegisterContext::HlRegisterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::HlShadowRegisterContext* Z80Parser::HlRegisterContext::hlShadowRegister() {
  return getRuleContext<Z80Parser::HlShadowRegisterContext>(0);
}


size_t Z80Parser::HlRegisterContext::getRuleIndex() const {
  return Z80Parser::RuleHlRegister;
}

void Z80Parser::HlRegisterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterHlRegister(this);
}

void Z80Parser::HlRegisterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitHlRegister(this);
}

Z80Parser::HlRegisterContext* Z80Parser::hlRegister() {
  HlRegisterContext *_localctx = _tracker.createInstance<HlRegisterContext>(_ctx, getState());
  enterRule(_localctx, 52, Z80Parser::RuleHlRegister);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(796);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Z80Parser::T__46: {
        enterOuterAlt(_localctx, 1);
        setState(793);
        match(Z80Parser::T__46);
        break;
      }

      case Z80Parser::T__47: {
        enterOuterAlt(_localctx, 2);
        setState(794);
        match(Z80Parser::T__47);
        break;
      }

      case Z80Parser::T__28:
      case Z80Parser::T__29: {
        enterOuterAlt(_localctx, 3);
        setState(795);
        hlShadowRegister();
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

//----------------- IRegisterContext ------------------------------------------------------------------

Z80Parser::IRegisterContext::IRegisterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t Z80Parser::IRegisterContext::getRuleIndex() const {
  return Z80Parser::RuleIRegister;
}

void Z80Parser::IRegisterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIRegister(this);
}

void Z80Parser::IRegisterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIRegister(this);
}

Z80Parser::IRegisterContext* Z80Parser::iRegister() {
  IRegisterContext *_localctx = _tracker.createInstance<IRegisterContext>(_ctx, getState());
  enterRule(_localctx, 54, Z80Parser::RuleIRegister);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(798);
    _la = _input->LA(1);
    if (!(_la == Z80Parser::T__48

    || _la == Z80Parser::T__49)) {
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

//----------------- RRegisterContext ------------------------------------------------------------------

Z80Parser::RRegisterContext::RRegisterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t Z80Parser::RRegisterContext::getRuleIndex() const {
  return Z80Parser::RuleRRegister;
}

void Z80Parser::RRegisterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRRegister(this);
}

void Z80Parser::RRegisterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRRegister(this);
}

Z80Parser::RRegisterContext* Z80Parser::rRegister() {
  RRegisterContext *_localctx = _tracker.createInstance<RRegisterContext>(_ctx, getState());
  enterRule(_localctx, 56, Z80Parser::RuleRRegister);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(800);
    _la = _input->LA(1);
    if (!(_la == Z80Parser::T__50

    || _la == Z80Parser::T__51)) {
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

//----------------- IxRegisterContext ------------------------------------------------------------------

Z80Parser::IxRegisterContext::IxRegisterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t Z80Parser::IxRegisterContext::getRuleIndex() const {
  return Z80Parser::RuleIxRegister;
}

void Z80Parser::IxRegisterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIxRegister(this);
}

void Z80Parser::IxRegisterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIxRegister(this);
}

Z80Parser::IxRegisterContext* Z80Parser::ixRegister() {
  IxRegisterContext *_localctx = _tracker.createInstance<IxRegisterContext>(_ctx, getState());
  enterRule(_localctx, 58, Z80Parser::RuleIxRegister);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(802);
    _la = _input->LA(1);
    if (!(_la == Z80Parser::T__52

    || _la == Z80Parser::T__53)) {
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

//----------------- IyRegisterContext ------------------------------------------------------------------

Z80Parser::IyRegisterContext::IyRegisterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t Z80Parser::IyRegisterContext::getRuleIndex() const {
  return Z80Parser::RuleIyRegister;
}

void Z80Parser::IyRegisterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIyRegister(this);
}

void Z80Parser::IyRegisterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIyRegister(this);
}

Z80Parser::IyRegisterContext* Z80Parser::iyRegister() {
  IyRegisterContext *_localctx = _tracker.createInstance<IyRegisterContext>(_ctx, getState());
  enterRule(_localctx, 60, Z80Parser::RuleIyRegister);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(804);
    _la = _input->LA(1);
    if (!(_la == Z80Parser::T__54

    || _la == Z80Parser::T__55)) {
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

//----------------- IxHighRegisterContext ------------------------------------------------------------------

Z80Parser::IxHighRegisterContext::IxHighRegisterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t Z80Parser::IxHighRegisterContext::getRuleIndex() const {
  return Z80Parser::RuleIxHighRegister;
}

void Z80Parser::IxHighRegisterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIxHighRegister(this);
}

void Z80Parser::IxHighRegisterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIxHighRegister(this);
}

Z80Parser::IxHighRegisterContext* Z80Parser::ixHighRegister() {
  IxHighRegisterContext *_localctx = _tracker.createInstance<IxHighRegisterContext>(_ctx, getState());
  enterRule(_localctx, 62, Z80Parser::RuleIxHighRegister);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(806);
    _la = _input->LA(1);
    if (!(_la == Z80Parser::T__56

    || _la == Z80Parser::T__57)) {
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

//----------------- IxLowRegisterContext ------------------------------------------------------------------

Z80Parser::IxLowRegisterContext::IxLowRegisterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t Z80Parser::IxLowRegisterContext::getRuleIndex() const {
  return Z80Parser::RuleIxLowRegister;
}

void Z80Parser::IxLowRegisterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIxLowRegister(this);
}

void Z80Parser::IxLowRegisterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIxLowRegister(this);
}

Z80Parser::IxLowRegisterContext* Z80Parser::ixLowRegister() {
  IxLowRegisterContext *_localctx = _tracker.createInstance<IxLowRegisterContext>(_ctx, getState());
  enterRule(_localctx, 64, Z80Parser::RuleIxLowRegister);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(808);
    _la = _input->LA(1);
    if (!(_la == Z80Parser::T__58

    || _la == Z80Parser::T__59)) {
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

//----------------- IyHighRegisterContext ------------------------------------------------------------------

Z80Parser::IyHighRegisterContext::IyHighRegisterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t Z80Parser::IyHighRegisterContext::getRuleIndex() const {
  return Z80Parser::RuleIyHighRegister;
}

void Z80Parser::IyHighRegisterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIyHighRegister(this);
}

void Z80Parser::IyHighRegisterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIyHighRegister(this);
}

Z80Parser::IyHighRegisterContext* Z80Parser::iyHighRegister() {
  IyHighRegisterContext *_localctx = _tracker.createInstance<IyHighRegisterContext>(_ctx, getState());
  enterRule(_localctx, 66, Z80Parser::RuleIyHighRegister);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(810);
    _la = _input->LA(1);
    if (!(_la == Z80Parser::T__60

    || _la == Z80Parser::T__61)) {
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

//----------------- IyLowRegisterContext ------------------------------------------------------------------

Z80Parser::IyLowRegisterContext::IyLowRegisterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t Z80Parser::IyLowRegisterContext::getRuleIndex() const {
  return Z80Parser::RuleIyLowRegister;
}

void Z80Parser::IyLowRegisterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIyLowRegister(this);
}

void Z80Parser::IyLowRegisterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIyLowRegister(this);
}

Z80Parser::IyLowRegisterContext* Z80Parser::iyLowRegister() {
  IyLowRegisterContext *_localctx = _tracker.createInstance<IyLowRegisterContext>(_ctx, getState());
  enterRule(_localctx, 68, Z80Parser::RuleIyLowRegister);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(812);
    _la = _input->LA(1);
    if (!(_la == Z80Parser::T__62

    || _la == Z80Parser::T__63)) {
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

//----------------- SpRegisterContext ------------------------------------------------------------------

Z80Parser::SpRegisterContext::SpRegisterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t Z80Parser::SpRegisterContext::getRuleIndex() const {
  return Z80Parser::RuleSpRegister;
}

void Z80Parser::SpRegisterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSpRegister(this);
}

void Z80Parser::SpRegisterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSpRegister(this);
}

Z80Parser::SpRegisterContext* Z80Parser::spRegister() {
  SpRegisterContext *_localctx = _tracker.createInstance<SpRegisterContext>(_ctx, getState());
  enterRule(_localctx, 70, Z80Parser::RuleSpRegister);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(814);
    _la = _input->LA(1);
    if (!(_la == Z80Parser::T__64

    || _la == Z80Parser::T__65)) {
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

//----------------- PcRegisterContext ------------------------------------------------------------------

Z80Parser::PcRegisterContext::PcRegisterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t Z80Parser::PcRegisterContext::getRuleIndex() const {
  return Z80Parser::RulePcRegister;
}

void Z80Parser::PcRegisterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPcRegister(this);
}

void Z80Parser::PcRegisterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPcRegister(this);
}

Z80Parser::PcRegisterContext* Z80Parser::pcRegister() {
  PcRegisterContext *_localctx = _tracker.createInstance<PcRegisterContext>(_ctx, getState());
  enterRule(_localctx, 72, Z80Parser::RulePcRegister);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(816);
    _la = _input->LA(1);
    if (!(_la == Z80Parser::T__66

    || _la == Z80Parser::T__67)) {
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

//----------------- HlPointerContext ------------------------------------------------------------------

Z80Parser::HlPointerContext::HlPointerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::HlRegisterContext* Z80Parser::HlPointerContext::hlRegister() {
  return getRuleContext<Z80Parser::HlRegisterContext>(0);
}


size_t Z80Parser::HlPointerContext::getRuleIndex() const {
  return Z80Parser::RuleHlPointer;
}

void Z80Parser::HlPointerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterHlPointer(this);
}

void Z80Parser::HlPointerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitHlPointer(this);
}

Z80Parser::HlPointerContext* Z80Parser::hlPointer() {
  HlPointerContext *_localctx = _tracker.createInstance<HlPointerContext>(_ctx, getState());
  enterRule(_localctx, 74, Z80Parser::RuleHlPointer);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(818);
    match(Z80Parser::T__68);
    setState(819);
    hlRegister();
    setState(820);
    match(Z80Parser::T__69);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BcPointerContext ------------------------------------------------------------------

Z80Parser::BcPointerContext::BcPointerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::BcRegisterContext* Z80Parser::BcPointerContext::bcRegister() {
  return getRuleContext<Z80Parser::BcRegisterContext>(0);
}


size_t Z80Parser::BcPointerContext::getRuleIndex() const {
  return Z80Parser::RuleBcPointer;
}

void Z80Parser::BcPointerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBcPointer(this);
}

void Z80Parser::BcPointerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBcPointer(this);
}

Z80Parser::BcPointerContext* Z80Parser::bcPointer() {
  BcPointerContext *_localctx = _tracker.createInstance<BcPointerContext>(_ctx, getState());
  enterRule(_localctx, 76, Z80Parser::RuleBcPointer);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(822);
    match(Z80Parser::T__68);
    setState(823);
    bcRegister();
    setState(824);
    match(Z80Parser::T__69);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DePointerContext ------------------------------------------------------------------

Z80Parser::DePointerContext::DePointerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::DeRegisterContext* Z80Parser::DePointerContext::deRegister() {
  return getRuleContext<Z80Parser::DeRegisterContext>(0);
}


size_t Z80Parser::DePointerContext::getRuleIndex() const {
  return Z80Parser::RuleDePointer;
}

void Z80Parser::DePointerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDePointer(this);
}

void Z80Parser::DePointerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDePointer(this);
}

Z80Parser::DePointerContext* Z80Parser::dePointer() {
  DePointerContext *_localctx = _tracker.createInstance<DePointerContext>(_ctx, getState());
  enterRule(_localctx, 78, Z80Parser::RuleDePointer);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(826);
    match(Z80Parser::T__68);
    setState(827);
    deRegister();
    setState(828);
    match(Z80Parser::T__69);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SpPointerContext ------------------------------------------------------------------

Z80Parser::SpPointerContext::SpPointerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::SpRegisterContext* Z80Parser::SpPointerContext::spRegister() {
  return getRuleContext<Z80Parser::SpRegisterContext>(0);
}


size_t Z80Parser::SpPointerContext::getRuleIndex() const {
  return Z80Parser::RuleSpPointer;
}

void Z80Parser::SpPointerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSpPointer(this);
}

void Z80Parser::SpPointerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSpPointer(this);
}

Z80Parser::SpPointerContext* Z80Parser::spPointer() {
  SpPointerContext *_localctx = _tracker.createInstance<SpPointerContext>(_ctx, getState());
  enterRule(_localctx, 80, Z80Parser::RuleSpPointer);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(830);
    match(Z80Parser::T__68);
    setState(831);
    spRegister();
    setState(832);
    match(Z80Parser::T__69);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CPointerContext ------------------------------------------------------------------

Z80Parser::CPointerContext::CPointerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::CRegisterContext* Z80Parser::CPointerContext::cRegister() {
  return getRuleContext<Z80Parser::CRegisterContext>(0);
}


size_t Z80Parser::CPointerContext::getRuleIndex() const {
  return Z80Parser::RuleCPointer;
}

void Z80Parser::CPointerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCPointer(this);
}

void Z80Parser::CPointerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCPointer(this);
}

Z80Parser::CPointerContext* Z80Parser::cPointer() {
  CPointerContext *_localctx = _tracker.createInstance<CPointerContext>(_ctx, getState());
  enterRule(_localctx, 82, Z80Parser::RuleCPointer);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(834);
    match(Z80Parser::T__68);
    setState(835);
    cRegister();
    setState(836);
    match(Z80Parser::T__69);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IxPointerWithOffsetContext ------------------------------------------------------------------

Z80Parser::IxPointerWithOffsetContext::IxPointerWithOffsetContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::IxRegisterContext* Z80Parser::IxPointerWithOffsetContext::ixRegister() {
  return getRuleContext<Z80Parser::IxRegisterContext>(0);
}

Z80Parser::NumberContext* Z80Parser::IxPointerWithOffsetContext::number() {
  return getRuleContext<Z80Parser::NumberContext>(0);
}


size_t Z80Parser::IxPointerWithOffsetContext::getRuleIndex() const {
  return Z80Parser::RuleIxPointerWithOffset;
}

void Z80Parser::IxPointerWithOffsetContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIxPointerWithOffset(this);
}

void Z80Parser::IxPointerWithOffsetContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIxPointerWithOffset(this);
}

Z80Parser::IxPointerWithOffsetContext* Z80Parser::ixPointerWithOffset() {
  IxPointerWithOffsetContext *_localctx = _tracker.createInstance<IxPointerWithOffsetContext>(_ctx, getState());
  enterRule(_localctx, 84, Z80Parser::RuleIxPointerWithOffset);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(838);
    match(Z80Parser::T__68);
    setState(839);
    ixRegister();
    setState(840);
    match(Z80Parser::T__70);
    setState(841);
    number();
    setState(842);
    match(Z80Parser::T__69);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IyPointerWithOffsetContext ------------------------------------------------------------------

Z80Parser::IyPointerWithOffsetContext::IyPointerWithOffsetContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::IyRegisterContext* Z80Parser::IyPointerWithOffsetContext::iyRegister() {
  return getRuleContext<Z80Parser::IyRegisterContext>(0);
}

Z80Parser::NumberContext* Z80Parser::IyPointerWithOffsetContext::number() {
  return getRuleContext<Z80Parser::NumberContext>(0);
}


size_t Z80Parser::IyPointerWithOffsetContext::getRuleIndex() const {
  return Z80Parser::RuleIyPointerWithOffset;
}

void Z80Parser::IyPointerWithOffsetContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIyPointerWithOffset(this);
}

void Z80Parser::IyPointerWithOffsetContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIyPointerWithOffset(this);
}

Z80Parser::IyPointerWithOffsetContext* Z80Parser::iyPointerWithOffset() {
  IyPointerWithOffsetContext *_localctx = _tracker.createInstance<IyPointerWithOffsetContext>(_ctx, getState());
  enterRule(_localctx, 86, Z80Parser::RuleIyPointerWithOffset);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(844);
    match(Z80Parser::T__68);
    setState(845);
    iyRegister();
    setState(846);
    match(Z80Parser::T__70);
    setState(847);
    number();
    setState(848);
    match(Z80Parser::T__69);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NumberPointerContext ------------------------------------------------------------------

Z80Parser::NumberPointerContext::NumberPointerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::NumberContext* Z80Parser::NumberPointerContext::number() {
  return getRuleContext<Z80Parser::NumberContext>(0);
}


size_t Z80Parser::NumberPointerContext::getRuleIndex() const {
  return Z80Parser::RuleNumberPointer;
}

void Z80Parser::NumberPointerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNumberPointer(this);
}

void Z80Parser::NumberPointerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNumberPointer(this);
}

Z80Parser::NumberPointerContext* Z80Parser::numberPointer() {
  NumberPointerContext *_localctx = _tracker.createInstance<NumberPointerContext>(_ctx, getState());
  enterRule(_localctx, 88, Z80Parser::RuleNumberPointer);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(850);
    match(Z80Parser::T__68);
    setState(851);
    number();
    setState(852);
    match(Z80Parser::T__69);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SimpleByteRegisterContext ------------------------------------------------------------------

Z80Parser::SimpleByteRegisterContext::SimpleByteRegisterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::BRegisterContext* Z80Parser::SimpleByteRegisterContext::bRegister() {
  return getRuleContext<Z80Parser::BRegisterContext>(0);
}

Z80Parser::CRegisterContext* Z80Parser::SimpleByteRegisterContext::cRegister() {
  return getRuleContext<Z80Parser::CRegisterContext>(0);
}

Z80Parser::DRegisterContext* Z80Parser::SimpleByteRegisterContext::dRegister() {
  return getRuleContext<Z80Parser::DRegisterContext>(0);
}

Z80Parser::ERegisterContext* Z80Parser::SimpleByteRegisterContext::eRegister() {
  return getRuleContext<Z80Parser::ERegisterContext>(0);
}

Z80Parser::HRegisterContext* Z80Parser::SimpleByteRegisterContext::hRegister() {
  return getRuleContext<Z80Parser::HRegisterContext>(0);
}

Z80Parser::LRegisterContext* Z80Parser::SimpleByteRegisterContext::lRegister() {
  return getRuleContext<Z80Parser::LRegisterContext>(0);
}

Z80Parser::ARegisterContext* Z80Parser::SimpleByteRegisterContext::aRegister() {
  return getRuleContext<Z80Parser::ARegisterContext>(0);
}


size_t Z80Parser::SimpleByteRegisterContext::getRuleIndex() const {
  return Z80Parser::RuleSimpleByteRegister;
}

void Z80Parser::SimpleByteRegisterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSimpleByteRegister(this);
}

void Z80Parser::SimpleByteRegisterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSimpleByteRegister(this);
}

Z80Parser::SimpleByteRegisterContext* Z80Parser::simpleByteRegister() {
  SimpleByteRegisterContext *_localctx = _tracker.createInstance<SimpleByteRegisterContext>(_ctx, getState());
  enterRule(_localctx, 90, Z80Parser::RuleSimpleByteRegister);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(861);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Z80Parser::T__4:
      case Z80Parser::T__5:
      case Z80Parser::T__30:
      case Z80Parser::T__31: {
        enterOuterAlt(_localctx, 1);
        setState(854);
        bRegister();
        break;
      }

      case Z80Parser::T__6:
      case Z80Parser::T__7:
      case Z80Parser::T__32:
      case Z80Parser::T__33: {
        enterOuterAlt(_localctx, 2);
        setState(855);
        cRegister();
        break;
      }

      case Z80Parser::T__8:
      case Z80Parser::T__9:
      case Z80Parser::T__36:
      case Z80Parser::T__37: {
        enterOuterAlt(_localctx, 3);
        setState(856);
        dRegister();
        break;
      }

      case Z80Parser::T__10:
      case Z80Parser::T__11:
      case Z80Parser::T__38:
      case Z80Parser::T__39: {
        enterOuterAlt(_localctx, 4);
        setState(857);
        eRegister();
        break;
      }

      case Z80Parser::T__12:
      case Z80Parser::T__13:
      case Z80Parser::T__42:
      case Z80Parser::T__43: {
        enterOuterAlt(_localctx, 5);
        setState(858);
        hRegister();
        break;
      }

      case Z80Parser::T__14:
      case Z80Parser::T__15:
      case Z80Parser::T__44:
      case Z80Parser::T__45: {
        enterOuterAlt(_localctx, 6);
        setState(859);
        lRegister();
        break;
      }

      case Z80Parser::T__0:
      case Z80Parser::T__1:
      case Z80Parser::T__16:
      case Z80Parser::T__17: {
        enterOuterAlt(_localctx, 7);
        setState(860);
        aRegister();
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

//----------------- LoadCommandNameContext ------------------------------------------------------------------

Z80Parser::LoadCommandNameContext::LoadCommandNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t Z80Parser::LoadCommandNameContext::getRuleIndex() const {
  return Z80Parser::RuleLoadCommandName;
}

void Z80Parser::LoadCommandNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLoadCommandName(this);
}

void Z80Parser::LoadCommandNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLoadCommandName(this);
}

Z80Parser::LoadCommandNameContext* Z80Parser::loadCommandName() {
  LoadCommandNameContext *_localctx = _tracker.createInstance<LoadCommandNameContext>(_ctx, getState());
  enterRule(_localctx, 92, Z80Parser::RuleLoadCommandName);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(863);
    _la = _input->LA(1);
    if (!(_la == Z80Parser::T__71

    || _la == Z80Parser::T__72)) {
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

//----------------- LoadByteRegisterWithByteRegisterContext ------------------------------------------------------------------

Z80Parser::LoadByteRegisterWithByteRegisterContext::LoadByteRegisterWithByteRegisterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::LoadCommandNameContext* Z80Parser::LoadByteRegisterWithByteRegisterContext::loadCommandName() {
  return getRuleContext<Z80Parser::LoadCommandNameContext>(0);
}

std::vector<Z80Parser::SimpleByteRegisterContext *> Z80Parser::LoadByteRegisterWithByteRegisterContext::simpleByteRegister() {
  return getRuleContexts<Z80Parser::SimpleByteRegisterContext>();
}

Z80Parser::SimpleByteRegisterContext* Z80Parser::LoadByteRegisterWithByteRegisterContext::simpleByteRegister(size_t i) {
  return getRuleContext<Z80Parser::SimpleByteRegisterContext>(i);
}


size_t Z80Parser::LoadByteRegisterWithByteRegisterContext::getRuleIndex() const {
  return Z80Parser::RuleLoadByteRegisterWithByteRegister;
}

void Z80Parser::LoadByteRegisterWithByteRegisterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLoadByteRegisterWithByteRegister(this);
}

void Z80Parser::LoadByteRegisterWithByteRegisterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLoadByteRegisterWithByteRegister(this);
}

Z80Parser::LoadByteRegisterWithByteRegisterContext* Z80Parser::loadByteRegisterWithByteRegister() {
  LoadByteRegisterWithByteRegisterContext *_localctx = _tracker.createInstance<LoadByteRegisterWithByteRegisterContext>(_ctx, getState());
  enterRule(_localctx, 94, Z80Parser::RuleLoadByteRegisterWithByteRegister);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(865);
    loadCommandName();
    setState(866);
    dynamic_cast<LoadByteRegisterWithByteRegisterContext *>(_localctx)->dest = simpleByteRegister();
    setState(867);
    match(Z80Parser::T__73);
    setState(868);
    dynamic_cast<LoadByteRegisterWithByteRegisterContext *>(_localctx)->source = simpleByteRegister();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LoadByteRegisterWithImmediateByteContext ------------------------------------------------------------------

Z80Parser::LoadByteRegisterWithImmediateByteContext::LoadByteRegisterWithImmediateByteContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::LoadCommandNameContext* Z80Parser::LoadByteRegisterWithImmediateByteContext::loadCommandName() {
  return getRuleContext<Z80Parser::LoadCommandNameContext>(0);
}

Z80Parser::SimpleByteRegisterContext* Z80Parser::LoadByteRegisterWithImmediateByteContext::simpleByteRegister() {
  return getRuleContext<Z80Parser::SimpleByteRegisterContext>(0);
}

Z80Parser::NumberContext* Z80Parser::LoadByteRegisterWithImmediateByteContext::number() {
  return getRuleContext<Z80Parser::NumberContext>(0);
}


size_t Z80Parser::LoadByteRegisterWithImmediateByteContext::getRuleIndex() const {
  return Z80Parser::RuleLoadByteRegisterWithImmediateByte;
}

void Z80Parser::LoadByteRegisterWithImmediateByteContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLoadByteRegisterWithImmediateByte(this);
}

void Z80Parser::LoadByteRegisterWithImmediateByteContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLoadByteRegisterWithImmediateByte(this);
}

Z80Parser::LoadByteRegisterWithImmediateByteContext* Z80Parser::loadByteRegisterWithImmediateByte() {
  LoadByteRegisterWithImmediateByteContext *_localctx = _tracker.createInstance<LoadByteRegisterWithImmediateByteContext>(_ctx, getState());
  enterRule(_localctx, 96, Z80Parser::RuleLoadByteRegisterWithImmediateByte);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(870);
    loadCommandName();
    setState(871);
    dynamic_cast<LoadByteRegisterWithImmediateByteContext *>(_localctx)->dest = simpleByteRegister();
    setState(872);
    match(Z80Parser::T__73);
    setState(873);
    dynamic_cast<LoadByteRegisterWithImmediateByteContext *>(_localctx)->source = number();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LoadByteRegisterWithHLPointerContext ------------------------------------------------------------------

Z80Parser::LoadByteRegisterWithHLPointerContext::LoadByteRegisterWithHLPointerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::LoadCommandNameContext* Z80Parser::LoadByteRegisterWithHLPointerContext::loadCommandName() {
  return getRuleContext<Z80Parser::LoadCommandNameContext>(0);
}

Z80Parser::SimpleByteRegisterContext* Z80Parser::LoadByteRegisterWithHLPointerContext::simpleByteRegister() {
  return getRuleContext<Z80Parser::SimpleByteRegisterContext>(0);
}

Z80Parser::HlPointerContext* Z80Parser::LoadByteRegisterWithHLPointerContext::hlPointer() {
  return getRuleContext<Z80Parser::HlPointerContext>(0);
}


size_t Z80Parser::LoadByteRegisterWithHLPointerContext::getRuleIndex() const {
  return Z80Parser::RuleLoadByteRegisterWithHLPointer;
}

void Z80Parser::LoadByteRegisterWithHLPointerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLoadByteRegisterWithHLPointer(this);
}

void Z80Parser::LoadByteRegisterWithHLPointerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLoadByteRegisterWithHLPointer(this);
}

Z80Parser::LoadByteRegisterWithHLPointerContext* Z80Parser::loadByteRegisterWithHLPointer() {
  LoadByteRegisterWithHLPointerContext *_localctx = _tracker.createInstance<LoadByteRegisterWithHLPointerContext>(_ctx, getState());
  enterRule(_localctx, 98, Z80Parser::RuleLoadByteRegisterWithHLPointer);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(875);
    loadCommandName();
    setState(876);
    dynamic_cast<LoadByteRegisterWithHLPointerContext *>(_localctx)->dest = simpleByteRegister();
    setState(877);
    match(Z80Parser::T__73);
    setState(878);
    dynamic_cast<LoadByteRegisterWithHLPointerContext *>(_localctx)->source = hlPointer();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LoadByteRegisterWithIXOffsetContext ------------------------------------------------------------------

Z80Parser::LoadByteRegisterWithIXOffsetContext::LoadByteRegisterWithIXOffsetContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::LoadCommandNameContext* Z80Parser::LoadByteRegisterWithIXOffsetContext::loadCommandName() {
  return getRuleContext<Z80Parser::LoadCommandNameContext>(0);
}

Z80Parser::SimpleByteRegisterContext* Z80Parser::LoadByteRegisterWithIXOffsetContext::simpleByteRegister() {
  return getRuleContext<Z80Parser::SimpleByteRegisterContext>(0);
}

Z80Parser::IxPointerWithOffsetContext* Z80Parser::LoadByteRegisterWithIXOffsetContext::ixPointerWithOffset() {
  return getRuleContext<Z80Parser::IxPointerWithOffsetContext>(0);
}


size_t Z80Parser::LoadByteRegisterWithIXOffsetContext::getRuleIndex() const {
  return Z80Parser::RuleLoadByteRegisterWithIXOffset;
}

void Z80Parser::LoadByteRegisterWithIXOffsetContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLoadByteRegisterWithIXOffset(this);
}

void Z80Parser::LoadByteRegisterWithIXOffsetContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLoadByteRegisterWithIXOffset(this);
}

Z80Parser::LoadByteRegisterWithIXOffsetContext* Z80Parser::loadByteRegisterWithIXOffset() {
  LoadByteRegisterWithIXOffsetContext *_localctx = _tracker.createInstance<LoadByteRegisterWithIXOffsetContext>(_ctx, getState());
  enterRule(_localctx, 100, Z80Parser::RuleLoadByteRegisterWithIXOffset);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(880);
    loadCommandName();
    setState(881);
    dynamic_cast<LoadByteRegisterWithIXOffsetContext *>(_localctx)->dest = simpleByteRegister();
    setState(882);
    match(Z80Parser::T__73);
    setState(883);
    dynamic_cast<LoadByteRegisterWithIXOffsetContext *>(_localctx)->source = ixPointerWithOffset();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LoadByteRegisterWithIYOffsetContext ------------------------------------------------------------------

Z80Parser::LoadByteRegisterWithIYOffsetContext::LoadByteRegisterWithIYOffsetContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::LoadCommandNameContext* Z80Parser::LoadByteRegisterWithIYOffsetContext::loadCommandName() {
  return getRuleContext<Z80Parser::LoadCommandNameContext>(0);
}

Z80Parser::SimpleByteRegisterContext* Z80Parser::LoadByteRegisterWithIYOffsetContext::simpleByteRegister() {
  return getRuleContext<Z80Parser::SimpleByteRegisterContext>(0);
}

Z80Parser::IyPointerWithOffsetContext* Z80Parser::LoadByteRegisterWithIYOffsetContext::iyPointerWithOffset() {
  return getRuleContext<Z80Parser::IyPointerWithOffsetContext>(0);
}


size_t Z80Parser::LoadByteRegisterWithIYOffsetContext::getRuleIndex() const {
  return Z80Parser::RuleLoadByteRegisterWithIYOffset;
}

void Z80Parser::LoadByteRegisterWithIYOffsetContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLoadByteRegisterWithIYOffset(this);
}

void Z80Parser::LoadByteRegisterWithIYOffsetContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLoadByteRegisterWithIYOffset(this);
}

Z80Parser::LoadByteRegisterWithIYOffsetContext* Z80Parser::loadByteRegisterWithIYOffset() {
  LoadByteRegisterWithIYOffsetContext *_localctx = _tracker.createInstance<LoadByteRegisterWithIYOffsetContext>(_ctx, getState());
  enterRule(_localctx, 102, Z80Parser::RuleLoadByteRegisterWithIYOffset);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(885);
    loadCommandName();
    setState(886);
    dynamic_cast<LoadByteRegisterWithIYOffsetContext *>(_localctx)->dest = simpleByteRegister();
    setState(887);
    match(Z80Parser::T__73);
    setState(888);
    dynamic_cast<LoadByteRegisterWithIYOffsetContext *>(_localctx)->source = iyPointerWithOffset();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LoadHLPointerWithRegisterContext ------------------------------------------------------------------

Z80Parser::LoadHLPointerWithRegisterContext::LoadHLPointerWithRegisterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::LoadCommandNameContext* Z80Parser::LoadHLPointerWithRegisterContext::loadCommandName() {
  return getRuleContext<Z80Parser::LoadCommandNameContext>(0);
}

Z80Parser::HlPointerContext* Z80Parser::LoadHLPointerWithRegisterContext::hlPointer() {
  return getRuleContext<Z80Parser::HlPointerContext>(0);
}

Z80Parser::SimpleByteRegisterContext* Z80Parser::LoadHLPointerWithRegisterContext::simpleByteRegister() {
  return getRuleContext<Z80Parser::SimpleByteRegisterContext>(0);
}


size_t Z80Parser::LoadHLPointerWithRegisterContext::getRuleIndex() const {
  return Z80Parser::RuleLoadHLPointerWithRegister;
}

void Z80Parser::LoadHLPointerWithRegisterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLoadHLPointerWithRegister(this);
}

void Z80Parser::LoadHLPointerWithRegisterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLoadHLPointerWithRegister(this);
}

Z80Parser::LoadHLPointerWithRegisterContext* Z80Parser::loadHLPointerWithRegister() {
  LoadHLPointerWithRegisterContext *_localctx = _tracker.createInstance<LoadHLPointerWithRegisterContext>(_ctx, getState());
  enterRule(_localctx, 104, Z80Parser::RuleLoadHLPointerWithRegister);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(890);
    loadCommandName();
    setState(891);
    dynamic_cast<LoadHLPointerWithRegisterContext *>(_localctx)->dest = hlPointer();
    setState(892);
    match(Z80Parser::T__73);
    setState(893);
    dynamic_cast<LoadHLPointerWithRegisterContext *>(_localctx)->source = simpleByteRegister();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LoadIXOffsetWithRegisterContext ------------------------------------------------------------------

Z80Parser::LoadIXOffsetWithRegisterContext::LoadIXOffsetWithRegisterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::LoadCommandNameContext* Z80Parser::LoadIXOffsetWithRegisterContext::loadCommandName() {
  return getRuleContext<Z80Parser::LoadCommandNameContext>(0);
}

Z80Parser::IxPointerWithOffsetContext* Z80Parser::LoadIXOffsetWithRegisterContext::ixPointerWithOffset() {
  return getRuleContext<Z80Parser::IxPointerWithOffsetContext>(0);
}

Z80Parser::SimpleByteRegisterContext* Z80Parser::LoadIXOffsetWithRegisterContext::simpleByteRegister() {
  return getRuleContext<Z80Parser::SimpleByteRegisterContext>(0);
}


size_t Z80Parser::LoadIXOffsetWithRegisterContext::getRuleIndex() const {
  return Z80Parser::RuleLoadIXOffsetWithRegister;
}

void Z80Parser::LoadIXOffsetWithRegisterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLoadIXOffsetWithRegister(this);
}

void Z80Parser::LoadIXOffsetWithRegisterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLoadIXOffsetWithRegister(this);
}

Z80Parser::LoadIXOffsetWithRegisterContext* Z80Parser::loadIXOffsetWithRegister() {
  LoadIXOffsetWithRegisterContext *_localctx = _tracker.createInstance<LoadIXOffsetWithRegisterContext>(_ctx, getState());
  enterRule(_localctx, 106, Z80Parser::RuleLoadIXOffsetWithRegister);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(895);
    loadCommandName();
    setState(896);
    dynamic_cast<LoadIXOffsetWithRegisterContext *>(_localctx)->dest = ixPointerWithOffset();
    setState(897);
    match(Z80Parser::T__73);
    setState(898);
    dynamic_cast<LoadIXOffsetWithRegisterContext *>(_localctx)->source = simpleByteRegister();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LoadIYOffsetWithRegisterContext ------------------------------------------------------------------

Z80Parser::LoadIYOffsetWithRegisterContext::LoadIYOffsetWithRegisterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::LoadCommandNameContext* Z80Parser::LoadIYOffsetWithRegisterContext::loadCommandName() {
  return getRuleContext<Z80Parser::LoadCommandNameContext>(0);
}

Z80Parser::IyPointerWithOffsetContext* Z80Parser::LoadIYOffsetWithRegisterContext::iyPointerWithOffset() {
  return getRuleContext<Z80Parser::IyPointerWithOffsetContext>(0);
}

Z80Parser::SimpleByteRegisterContext* Z80Parser::LoadIYOffsetWithRegisterContext::simpleByteRegister() {
  return getRuleContext<Z80Parser::SimpleByteRegisterContext>(0);
}


size_t Z80Parser::LoadIYOffsetWithRegisterContext::getRuleIndex() const {
  return Z80Parser::RuleLoadIYOffsetWithRegister;
}

void Z80Parser::LoadIYOffsetWithRegisterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLoadIYOffsetWithRegister(this);
}

void Z80Parser::LoadIYOffsetWithRegisterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLoadIYOffsetWithRegister(this);
}

Z80Parser::LoadIYOffsetWithRegisterContext* Z80Parser::loadIYOffsetWithRegister() {
  LoadIYOffsetWithRegisterContext *_localctx = _tracker.createInstance<LoadIYOffsetWithRegisterContext>(_ctx, getState());
  enterRule(_localctx, 108, Z80Parser::RuleLoadIYOffsetWithRegister);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(900);
    loadCommandName();
    setState(901);
    dynamic_cast<LoadIYOffsetWithRegisterContext *>(_localctx)->dest = iyPointerWithOffset();
    setState(902);
    match(Z80Parser::T__73);
    setState(903);
    dynamic_cast<LoadIYOffsetWithRegisterContext *>(_localctx)->source = simpleByteRegister();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LoadHLPointerWithImmediateByteContext ------------------------------------------------------------------

Z80Parser::LoadHLPointerWithImmediateByteContext::LoadHLPointerWithImmediateByteContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::LoadCommandNameContext* Z80Parser::LoadHLPointerWithImmediateByteContext::loadCommandName() {
  return getRuleContext<Z80Parser::LoadCommandNameContext>(0);
}

Z80Parser::HlPointerContext* Z80Parser::LoadHLPointerWithImmediateByteContext::hlPointer() {
  return getRuleContext<Z80Parser::HlPointerContext>(0);
}

Z80Parser::NumberContext* Z80Parser::LoadHLPointerWithImmediateByteContext::number() {
  return getRuleContext<Z80Parser::NumberContext>(0);
}


size_t Z80Parser::LoadHLPointerWithImmediateByteContext::getRuleIndex() const {
  return Z80Parser::RuleLoadHLPointerWithImmediateByte;
}

void Z80Parser::LoadHLPointerWithImmediateByteContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLoadHLPointerWithImmediateByte(this);
}

void Z80Parser::LoadHLPointerWithImmediateByteContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLoadHLPointerWithImmediateByte(this);
}

Z80Parser::LoadHLPointerWithImmediateByteContext* Z80Parser::loadHLPointerWithImmediateByte() {
  LoadHLPointerWithImmediateByteContext *_localctx = _tracker.createInstance<LoadHLPointerWithImmediateByteContext>(_ctx, getState());
  enterRule(_localctx, 110, Z80Parser::RuleLoadHLPointerWithImmediateByte);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(905);
    loadCommandName();
    setState(906);
    dynamic_cast<LoadHLPointerWithImmediateByteContext *>(_localctx)->dest = hlPointer();
    setState(907);
    match(Z80Parser::T__73);
    setState(908);
    dynamic_cast<LoadHLPointerWithImmediateByteContext *>(_localctx)->source = number();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LoadIXOffsetWithImmediateByteContext ------------------------------------------------------------------

Z80Parser::LoadIXOffsetWithImmediateByteContext::LoadIXOffsetWithImmediateByteContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::LoadCommandNameContext* Z80Parser::LoadIXOffsetWithImmediateByteContext::loadCommandName() {
  return getRuleContext<Z80Parser::LoadCommandNameContext>(0);
}

Z80Parser::IxPointerWithOffsetContext* Z80Parser::LoadIXOffsetWithImmediateByteContext::ixPointerWithOffset() {
  return getRuleContext<Z80Parser::IxPointerWithOffsetContext>(0);
}

Z80Parser::NumberContext* Z80Parser::LoadIXOffsetWithImmediateByteContext::number() {
  return getRuleContext<Z80Parser::NumberContext>(0);
}


size_t Z80Parser::LoadIXOffsetWithImmediateByteContext::getRuleIndex() const {
  return Z80Parser::RuleLoadIXOffsetWithImmediateByte;
}

void Z80Parser::LoadIXOffsetWithImmediateByteContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLoadIXOffsetWithImmediateByte(this);
}

void Z80Parser::LoadIXOffsetWithImmediateByteContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLoadIXOffsetWithImmediateByte(this);
}

Z80Parser::LoadIXOffsetWithImmediateByteContext* Z80Parser::loadIXOffsetWithImmediateByte() {
  LoadIXOffsetWithImmediateByteContext *_localctx = _tracker.createInstance<LoadIXOffsetWithImmediateByteContext>(_ctx, getState());
  enterRule(_localctx, 112, Z80Parser::RuleLoadIXOffsetWithImmediateByte);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(910);
    loadCommandName();
    setState(911);
    dynamic_cast<LoadIXOffsetWithImmediateByteContext *>(_localctx)->dest = ixPointerWithOffset();
    setState(912);
    match(Z80Parser::T__73);
    setState(913);
    dynamic_cast<LoadIXOffsetWithImmediateByteContext *>(_localctx)->source = number();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LoadIYOffsetWithImmediateByteContext ------------------------------------------------------------------

Z80Parser::LoadIYOffsetWithImmediateByteContext::LoadIYOffsetWithImmediateByteContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::LoadCommandNameContext* Z80Parser::LoadIYOffsetWithImmediateByteContext::loadCommandName() {
  return getRuleContext<Z80Parser::LoadCommandNameContext>(0);
}

Z80Parser::IyPointerWithOffsetContext* Z80Parser::LoadIYOffsetWithImmediateByteContext::iyPointerWithOffset() {
  return getRuleContext<Z80Parser::IyPointerWithOffsetContext>(0);
}

Z80Parser::NumberContext* Z80Parser::LoadIYOffsetWithImmediateByteContext::number() {
  return getRuleContext<Z80Parser::NumberContext>(0);
}


size_t Z80Parser::LoadIYOffsetWithImmediateByteContext::getRuleIndex() const {
  return Z80Parser::RuleLoadIYOffsetWithImmediateByte;
}

void Z80Parser::LoadIYOffsetWithImmediateByteContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLoadIYOffsetWithImmediateByte(this);
}

void Z80Parser::LoadIYOffsetWithImmediateByteContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLoadIYOffsetWithImmediateByte(this);
}

Z80Parser::LoadIYOffsetWithImmediateByteContext* Z80Parser::loadIYOffsetWithImmediateByte() {
  LoadIYOffsetWithImmediateByteContext *_localctx = _tracker.createInstance<LoadIYOffsetWithImmediateByteContext>(_ctx, getState());
  enterRule(_localctx, 114, Z80Parser::RuleLoadIYOffsetWithImmediateByte);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(915);
    loadCommandName();
    setState(916);
    dynamic_cast<LoadIYOffsetWithImmediateByteContext *>(_localctx)->dest = iyPointerWithOffset();
    setState(917);
    match(Z80Parser::T__73);
    setState(918);
    dynamic_cast<LoadIYOffsetWithImmediateByteContext *>(_localctx)->source = number();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LoadAWithBCPointerContext ------------------------------------------------------------------

Z80Parser::LoadAWithBCPointerContext::LoadAWithBCPointerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::LoadCommandNameContext* Z80Parser::LoadAWithBCPointerContext::loadCommandName() {
  return getRuleContext<Z80Parser::LoadCommandNameContext>(0);
}

Z80Parser::ARegisterContext* Z80Parser::LoadAWithBCPointerContext::aRegister() {
  return getRuleContext<Z80Parser::ARegisterContext>(0);
}

Z80Parser::BcPointerContext* Z80Parser::LoadAWithBCPointerContext::bcPointer() {
  return getRuleContext<Z80Parser::BcPointerContext>(0);
}


size_t Z80Parser::LoadAWithBCPointerContext::getRuleIndex() const {
  return Z80Parser::RuleLoadAWithBCPointer;
}

void Z80Parser::LoadAWithBCPointerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLoadAWithBCPointer(this);
}

void Z80Parser::LoadAWithBCPointerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLoadAWithBCPointer(this);
}

Z80Parser::LoadAWithBCPointerContext* Z80Parser::loadAWithBCPointer() {
  LoadAWithBCPointerContext *_localctx = _tracker.createInstance<LoadAWithBCPointerContext>(_ctx, getState());
  enterRule(_localctx, 116, Z80Parser::RuleLoadAWithBCPointer);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(920);
    loadCommandName();
    setState(921);
    dynamic_cast<LoadAWithBCPointerContext *>(_localctx)->dest = aRegister();
    setState(922);
    match(Z80Parser::T__73);
    setState(923);
    dynamic_cast<LoadAWithBCPointerContext *>(_localctx)->source = bcPointer();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LoadAWithDEPointerContext ------------------------------------------------------------------

Z80Parser::LoadAWithDEPointerContext::LoadAWithDEPointerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::LoadCommandNameContext* Z80Parser::LoadAWithDEPointerContext::loadCommandName() {
  return getRuleContext<Z80Parser::LoadCommandNameContext>(0);
}

Z80Parser::ARegisterContext* Z80Parser::LoadAWithDEPointerContext::aRegister() {
  return getRuleContext<Z80Parser::ARegisterContext>(0);
}

Z80Parser::DePointerContext* Z80Parser::LoadAWithDEPointerContext::dePointer() {
  return getRuleContext<Z80Parser::DePointerContext>(0);
}


size_t Z80Parser::LoadAWithDEPointerContext::getRuleIndex() const {
  return Z80Parser::RuleLoadAWithDEPointer;
}

void Z80Parser::LoadAWithDEPointerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLoadAWithDEPointer(this);
}

void Z80Parser::LoadAWithDEPointerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLoadAWithDEPointer(this);
}

Z80Parser::LoadAWithDEPointerContext* Z80Parser::loadAWithDEPointer() {
  LoadAWithDEPointerContext *_localctx = _tracker.createInstance<LoadAWithDEPointerContext>(_ctx, getState());
  enterRule(_localctx, 118, Z80Parser::RuleLoadAWithDEPointer);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(925);
    loadCommandName();
    setState(926);
    dynamic_cast<LoadAWithDEPointerContext *>(_localctx)->dest = aRegister();
    setState(927);
    match(Z80Parser::T__73);
    setState(928);
    dynamic_cast<LoadAWithDEPointerContext *>(_localctx)->source = dePointer();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LoadAWithNNPointerContext ------------------------------------------------------------------

Z80Parser::LoadAWithNNPointerContext::LoadAWithNNPointerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::LoadCommandNameContext* Z80Parser::LoadAWithNNPointerContext::loadCommandName() {
  return getRuleContext<Z80Parser::LoadCommandNameContext>(0);
}

Z80Parser::ARegisterContext* Z80Parser::LoadAWithNNPointerContext::aRegister() {
  return getRuleContext<Z80Parser::ARegisterContext>(0);
}

Z80Parser::NumberPointerContext* Z80Parser::LoadAWithNNPointerContext::numberPointer() {
  return getRuleContext<Z80Parser::NumberPointerContext>(0);
}


size_t Z80Parser::LoadAWithNNPointerContext::getRuleIndex() const {
  return Z80Parser::RuleLoadAWithNNPointer;
}

void Z80Parser::LoadAWithNNPointerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLoadAWithNNPointer(this);
}

void Z80Parser::LoadAWithNNPointerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLoadAWithNNPointer(this);
}

Z80Parser::LoadAWithNNPointerContext* Z80Parser::loadAWithNNPointer() {
  LoadAWithNNPointerContext *_localctx = _tracker.createInstance<LoadAWithNNPointerContext>(_ctx, getState());
  enterRule(_localctx, 120, Z80Parser::RuleLoadAWithNNPointer);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(930);
    loadCommandName();
    setState(931);
    dynamic_cast<LoadAWithNNPointerContext *>(_localctx)->dest = aRegister();
    setState(932);
    match(Z80Parser::T__73);
    setState(933);
    dynamic_cast<LoadAWithNNPointerContext *>(_localctx)->source = numberPointer();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LoadBCPointerWithAContext ------------------------------------------------------------------

Z80Parser::LoadBCPointerWithAContext::LoadBCPointerWithAContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::LoadCommandNameContext* Z80Parser::LoadBCPointerWithAContext::loadCommandName() {
  return getRuleContext<Z80Parser::LoadCommandNameContext>(0);
}

Z80Parser::BcPointerContext* Z80Parser::LoadBCPointerWithAContext::bcPointer() {
  return getRuleContext<Z80Parser::BcPointerContext>(0);
}

Z80Parser::ARegisterContext* Z80Parser::LoadBCPointerWithAContext::aRegister() {
  return getRuleContext<Z80Parser::ARegisterContext>(0);
}


size_t Z80Parser::LoadBCPointerWithAContext::getRuleIndex() const {
  return Z80Parser::RuleLoadBCPointerWithA;
}

void Z80Parser::LoadBCPointerWithAContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLoadBCPointerWithA(this);
}

void Z80Parser::LoadBCPointerWithAContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLoadBCPointerWithA(this);
}

Z80Parser::LoadBCPointerWithAContext* Z80Parser::loadBCPointerWithA() {
  LoadBCPointerWithAContext *_localctx = _tracker.createInstance<LoadBCPointerWithAContext>(_ctx, getState());
  enterRule(_localctx, 122, Z80Parser::RuleLoadBCPointerWithA);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(935);
    loadCommandName();
    setState(936);
    dynamic_cast<LoadBCPointerWithAContext *>(_localctx)->dest = bcPointer();
    setState(937);
    match(Z80Parser::T__73);
    setState(938);
    dynamic_cast<LoadBCPointerWithAContext *>(_localctx)->source = aRegister();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LoadDEPointerWithAContext ------------------------------------------------------------------

Z80Parser::LoadDEPointerWithAContext::LoadDEPointerWithAContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::LoadCommandNameContext* Z80Parser::LoadDEPointerWithAContext::loadCommandName() {
  return getRuleContext<Z80Parser::LoadCommandNameContext>(0);
}

Z80Parser::DePointerContext* Z80Parser::LoadDEPointerWithAContext::dePointer() {
  return getRuleContext<Z80Parser::DePointerContext>(0);
}

Z80Parser::ARegisterContext* Z80Parser::LoadDEPointerWithAContext::aRegister() {
  return getRuleContext<Z80Parser::ARegisterContext>(0);
}


size_t Z80Parser::LoadDEPointerWithAContext::getRuleIndex() const {
  return Z80Parser::RuleLoadDEPointerWithA;
}

void Z80Parser::LoadDEPointerWithAContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLoadDEPointerWithA(this);
}

void Z80Parser::LoadDEPointerWithAContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLoadDEPointerWithA(this);
}

Z80Parser::LoadDEPointerWithAContext* Z80Parser::loadDEPointerWithA() {
  LoadDEPointerWithAContext *_localctx = _tracker.createInstance<LoadDEPointerWithAContext>(_ctx, getState());
  enterRule(_localctx, 124, Z80Parser::RuleLoadDEPointerWithA);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(940);
    loadCommandName();
    setState(941);
    dynamic_cast<LoadDEPointerWithAContext *>(_localctx)->dest = dePointer();
    setState(942);
    match(Z80Parser::T__73);
    setState(943);
    dynamic_cast<LoadDEPointerWithAContext *>(_localctx)->source = aRegister();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LoadNNPointerWithAContext ------------------------------------------------------------------

Z80Parser::LoadNNPointerWithAContext::LoadNNPointerWithAContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::LoadCommandNameContext* Z80Parser::LoadNNPointerWithAContext::loadCommandName() {
  return getRuleContext<Z80Parser::LoadCommandNameContext>(0);
}

Z80Parser::NumberPointerContext* Z80Parser::LoadNNPointerWithAContext::numberPointer() {
  return getRuleContext<Z80Parser::NumberPointerContext>(0);
}

Z80Parser::ARegisterContext* Z80Parser::LoadNNPointerWithAContext::aRegister() {
  return getRuleContext<Z80Parser::ARegisterContext>(0);
}


size_t Z80Parser::LoadNNPointerWithAContext::getRuleIndex() const {
  return Z80Parser::RuleLoadNNPointerWithA;
}

void Z80Parser::LoadNNPointerWithAContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLoadNNPointerWithA(this);
}

void Z80Parser::LoadNNPointerWithAContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLoadNNPointerWithA(this);
}

Z80Parser::LoadNNPointerWithAContext* Z80Parser::loadNNPointerWithA() {
  LoadNNPointerWithAContext *_localctx = _tracker.createInstance<LoadNNPointerWithAContext>(_ctx, getState());
  enterRule(_localctx, 126, Z80Parser::RuleLoadNNPointerWithA);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(945);
    loadCommandName();
    setState(946);
    dynamic_cast<LoadNNPointerWithAContext *>(_localctx)->dest = numberPointer();
    setState(947);
    match(Z80Parser::T__73);
    setState(948);
    dynamic_cast<LoadNNPointerWithAContext *>(_localctx)->source = aRegister();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LoadAWithIContext ------------------------------------------------------------------

Z80Parser::LoadAWithIContext::LoadAWithIContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::LoadCommandNameContext* Z80Parser::LoadAWithIContext::loadCommandName() {
  return getRuleContext<Z80Parser::LoadCommandNameContext>(0);
}

Z80Parser::ARegisterContext* Z80Parser::LoadAWithIContext::aRegister() {
  return getRuleContext<Z80Parser::ARegisterContext>(0);
}

Z80Parser::IRegisterContext* Z80Parser::LoadAWithIContext::iRegister() {
  return getRuleContext<Z80Parser::IRegisterContext>(0);
}


size_t Z80Parser::LoadAWithIContext::getRuleIndex() const {
  return Z80Parser::RuleLoadAWithI;
}

void Z80Parser::LoadAWithIContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLoadAWithI(this);
}

void Z80Parser::LoadAWithIContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLoadAWithI(this);
}

Z80Parser::LoadAWithIContext* Z80Parser::loadAWithI() {
  LoadAWithIContext *_localctx = _tracker.createInstance<LoadAWithIContext>(_ctx, getState());
  enterRule(_localctx, 128, Z80Parser::RuleLoadAWithI);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(950);
    loadCommandName();
    setState(951);
    dynamic_cast<LoadAWithIContext *>(_localctx)->dest = aRegister();
    setState(952);
    match(Z80Parser::T__73);
    setState(953);
    dynamic_cast<LoadAWithIContext *>(_localctx)->source = iRegister();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LoadAWithRContext ------------------------------------------------------------------

Z80Parser::LoadAWithRContext::LoadAWithRContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::LoadCommandNameContext* Z80Parser::LoadAWithRContext::loadCommandName() {
  return getRuleContext<Z80Parser::LoadCommandNameContext>(0);
}

Z80Parser::ARegisterContext* Z80Parser::LoadAWithRContext::aRegister() {
  return getRuleContext<Z80Parser::ARegisterContext>(0);
}

Z80Parser::RRegisterContext* Z80Parser::LoadAWithRContext::rRegister() {
  return getRuleContext<Z80Parser::RRegisterContext>(0);
}


size_t Z80Parser::LoadAWithRContext::getRuleIndex() const {
  return Z80Parser::RuleLoadAWithR;
}

void Z80Parser::LoadAWithRContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLoadAWithR(this);
}

void Z80Parser::LoadAWithRContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLoadAWithR(this);
}

Z80Parser::LoadAWithRContext* Z80Parser::loadAWithR() {
  LoadAWithRContext *_localctx = _tracker.createInstance<LoadAWithRContext>(_ctx, getState());
  enterRule(_localctx, 130, Z80Parser::RuleLoadAWithR);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(955);
    loadCommandName();
    setState(956);
    dynamic_cast<LoadAWithRContext *>(_localctx)->dest = aRegister();
    setState(957);
    match(Z80Parser::T__73);
    setState(958);
    dynamic_cast<LoadAWithRContext *>(_localctx)->source = rRegister();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LoadIWithAContext ------------------------------------------------------------------

Z80Parser::LoadIWithAContext::LoadIWithAContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::LoadCommandNameContext* Z80Parser::LoadIWithAContext::loadCommandName() {
  return getRuleContext<Z80Parser::LoadCommandNameContext>(0);
}

Z80Parser::IRegisterContext* Z80Parser::LoadIWithAContext::iRegister() {
  return getRuleContext<Z80Parser::IRegisterContext>(0);
}

Z80Parser::ARegisterContext* Z80Parser::LoadIWithAContext::aRegister() {
  return getRuleContext<Z80Parser::ARegisterContext>(0);
}


size_t Z80Parser::LoadIWithAContext::getRuleIndex() const {
  return Z80Parser::RuleLoadIWithA;
}

void Z80Parser::LoadIWithAContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLoadIWithA(this);
}

void Z80Parser::LoadIWithAContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLoadIWithA(this);
}

Z80Parser::LoadIWithAContext* Z80Parser::loadIWithA() {
  LoadIWithAContext *_localctx = _tracker.createInstance<LoadIWithAContext>(_ctx, getState());
  enterRule(_localctx, 132, Z80Parser::RuleLoadIWithA);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(960);
    loadCommandName();
    setState(961);
    dynamic_cast<LoadIWithAContext *>(_localctx)->dest = iRegister();
    setState(962);
    match(Z80Parser::T__73);
    setState(963);
    dynamic_cast<LoadIWithAContext *>(_localctx)->source = aRegister();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LoadRWithAContext ------------------------------------------------------------------

Z80Parser::LoadRWithAContext::LoadRWithAContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::LoadCommandNameContext* Z80Parser::LoadRWithAContext::loadCommandName() {
  return getRuleContext<Z80Parser::LoadCommandNameContext>(0);
}

Z80Parser::RRegisterContext* Z80Parser::LoadRWithAContext::rRegister() {
  return getRuleContext<Z80Parser::RRegisterContext>(0);
}

Z80Parser::ARegisterContext* Z80Parser::LoadRWithAContext::aRegister() {
  return getRuleContext<Z80Parser::ARegisterContext>(0);
}


size_t Z80Parser::LoadRWithAContext::getRuleIndex() const {
  return Z80Parser::RuleLoadRWithA;
}

void Z80Parser::LoadRWithAContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLoadRWithA(this);
}

void Z80Parser::LoadRWithAContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLoadRWithA(this);
}

Z80Parser::LoadRWithAContext* Z80Parser::loadRWithA() {
  LoadRWithAContext *_localctx = _tracker.createInstance<LoadRWithAContext>(_ctx, getState());
  enterRule(_localctx, 134, Z80Parser::RuleLoadRWithA);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(965);
    loadCommandName();
    setState(966);
    dynamic_cast<LoadRWithAContext *>(_localctx)->dest = rRegister();
    setState(967);
    match(Z80Parser::T__73);
    setState(968);
    dynamic_cast<LoadRWithAContext *>(_localctx)->source = aRegister();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LoadRegisterWithIXHighContext ------------------------------------------------------------------

Z80Parser::LoadRegisterWithIXHighContext::LoadRegisterWithIXHighContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::LoadCommandNameContext* Z80Parser::LoadRegisterWithIXHighContext::loadCommandName() {
  return getRuleContext<Z80Parser::LoadCommandNameContext>(0);
}

Z80Parser::SimpleByteRegisterContext* Z80Parser::LoadRegisterWithIXHighContext::simpleByteRegister() {
  return getRuleContext<Z80Parser::SimpleByteRegisterContext>(0);
}

Z80Parser::IxHighRegisterContext* Z80Parser::LoadRegisterWithIXHighContext::ixHighRegister() {
  return getRuleContext<Z80Parser::IxHighRegisterContext>(0);
}


size_t Z80Parser::LoadRegisterWithIXHighContext::getRuleIndex() const {
  return Z80Parser::RuleLoadRegisterWithIXHigh;
}

void Z80Parser::LoadRegisterWithIXHighContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLoadRegisterWithIXHigh(this);
}

void Z80Parser::LoadRegisterWithIXHighContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLoadRegisterWithIXHigh(this);
}

Z80Parser::LoadRegisterWithIXHighContext* Z80Parser::loadRegisterWithIXHigh() {
  LoadRegisterWithIXHighContext *_localctx = _tracker.createInstance<LoadRegisterWithIXHighContext>(_ctx, getState());
  enterRule(_localctx, 136, Z80Parser::RuleLoadRegisterWithIXHigh);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(970);
    loadCommandName();
    setState(971);
    dynamic_cast<LoadRegisterWithIXHighContext *>(_localctx)->dest = simpleByteRegister();
    setState(972);
    match(Z80Parser::T__73);
    setState(973);
    dynamic_cast<LoadRegisterWithIXHighContext *>(_localctx)->source = ixHighRegister();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LoadRegisterWithIXLowContext ------------------------------------------------------------------

Z80Parser::LoadRegisterWithIXLowContext::LoadRegisterWithIXLowContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::LoadCommandNameContext* Z80Parser::LoadRegisterWithIXLowContext::loadCommandName() {
  return getRuleContext<Z80Parser::LoadCommandNameContext>(0);
}

Z80Parser::SimpleByteRegisterContext* Z80Parser::LoadRegisterWithIXLowContext::simpleByteRegister() {
  return getRuleContext<Z80Parser::SimpleByteRegisterContext>(0);
}

Z80Parser::IxLowRegisterContext* Z80Parser::LoadRegisterWithIXLowContext::ixLowRegister() {
  return getRuleContext<Z80Parser::IxLowRegisterContext>(0);
}


size_t Z80Parser::LoadRegisterWithIXLowContext::getRuleIndex() const {
  return Z80Parser::RuleLoadRegisterWithIXLow;
}

void Z80Parser::LoadRegisterWithIXLowContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLoadRegisterWithIXLow(this);
}

void Z80Parser::LoadRegisterWithIXLowContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLoadRegisterWithIXLow(this);
}

Z80Parser::LoadRegisterWithIXLowContext* Z80Parser::loadRegisterWithIXLow() {
  LoadRegisterWithIXLowContext *_localctx = _tracker.createInstance<LoadRegisterWithIXLowContext>(_ctx, getState());
  enterRule(_localctx, 138, Z80Parser::RuleLoadRegisterWithIXLow);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(975);
    loadCommandName();
    setState(976);
    dynamic_cast<LoadRegisterWithIXLowContext *>(_localctx)->dest = simpleByteRegister();
    setState(977);
    match(Z80Parser::T__73);
    setState(978);
    dynamic_cast<LoadRegisterWithIXLowContext *>(_localctx)->source = ixLowRegister();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LoadRegisterWithIYHighContext ------------------------------------------------------------------

Z80Parser::LoadRegisterWithIYHighContext::LoadRegisterWithIYHighContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::LoadCommandNameContext* Z80Parser::LoadRegisterWithIYHighContext::loadCommandName() {
  return getRuleContext<Z80Parser::LoadCommandNameContext>(0);
}

Z80Parser::SimpleByteRegisterContext* Z80Parser::LoadRegisterWithIYHighContext::simpleByteRegister() {
  return getRuleContext<Z80Parser::SimpleByteRegisterContext>(0);
}

Z80Parser::IyHighRegisterContext* Z80Parser::LoadRegisterWithIYHighContext::iyHighRegister() {
  return getRuleContext<Z80Parser::IyHighRegisterContext>(0);
}


size_t Z80Parser::LoadRegisterWithIYHighContext::getRuleIndex() const {
  return Z80Parser::RuleLoadRegisterWithIYHigh;
}

void Z80Parser::LoadRegisterWithIYHighContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLoadRegisterWithIYHigh(this);
}

void Z80Parser::LoadRegisterWithIYHighContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLoadRegisterWithIYHigh(this);
}

Z80Parser::LoadRegisterWithIYHighContext* Z80Parser::loadRegisterWithIYHigh() {
  LoadRegisterWithIYHighContext *_localctx = _tracker.createInstance<LoadRegisterWithIYHighContext>(_ctx, getState());
  enterRule(_localctx, 140, Z80Parser::RuleLoadRegisterWithIYHigh);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(980);
    loadCommandName();
    setState(981);
    dynamic_cast<LoadRegisterWithIYHighContext *>(_localctx)->dest = simpleByteRegister();
    setState(982);
    match(Z80Parser::T__73);
    setState(983);
    dynamic_cast<LoadRegisterWithIYHighContext *>(_localctx)->source = iyHighRegister();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LoadRegisterWithIYLowContext ------------------------------------------------------------------

Z80Parser::LoadRegisterWithIYLowContext::LoadRegisterWithIYLowContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::LoadCommandNameContext* Z80Parser::LoadRegisterWithIYLowContext::loadCommandName() {
  return getRuleContext<Z80Parser::LoadCommandNameContext>(0);
}

Z80Parser::SimpleByteRegisterContext* Z80Parser::LoadRegisterWithIYLowContext::simpleByteRegister() {
  return getRuleContext<Z80Parser::SimpleByteRegisterContext>(0);
}

Z80Parser::IyLowRegisterContext* Z80Parser::LoadRegisterWithIYLowContext::iyLowRegister() {
  return getRuleContext<Z80Parser::IyLowRegisterContext>(0);
}


size_t Z80Parser::LoadRegisterWithIYLowContext::getRuleIndex() const {
  return Z80Parser::RuleLoadRegisterWithIYLow;
}

void Z80Parser::LoadRegisterWithIYLowContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLoadRegisterWithIYLow(this);
}

void Z80Parser::LoadRegisterWithIYLowContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLoadRegisterWithIYLow(this);
}

Z80Parser::LoadRegisterWithIYLowContext* Z80Parser::loadRegisterWithIYLow() {
  LoadRegisterWithIYLowContext *_localctx = _tracker.createInstance<LoadRegisterWithIYLowContext>(_ctx, getState());
  enterRule(_localctx, 142, Z80Parser::RuleLoadRegisterWithIYLow);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(985);
    loadCommandName();
    setState(986);
    dynamic_cast<LoadRegisterWithIYLowContext *>(_localctx)->dest = simpleByteRegister();
    setState(987);
    match(Z80Parser::T__73);
    setState(988);
    dynamic_cast<LoadRegisterWithIYLowContext *>(_localctx)->source = iyLowRegister();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LoadIXHighWithRegisterContext ------------------------------------------------------------------

Z80Parser::LoadIXHighWithRegisterContext::LoadIXHighWithRegisterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::LoadCommandNameContext* Z80Parser::LoadIXHighWithRegisterContext::loadCommandName() {
  return getRuleContext<Z80Parser::LoadCommandNameContext>(0);
}

Z80Parser::IxHighRegisterContext* Z80Parser::LoadIXHighWithRegisterContext::ixHighRegister() {
  return getRuleContext<Z80Parser::IxHighRegisterContext>(0);
}

Z80Parser::SimpleByteRegisterContext* Z80Parser::LoadIXHighWithRegisterContext::simpleByteRegister() {
  return getRuleContext<Z80Parser::SimpleByteRegisterContext>(0);
}


size_t Z80Parser::LoadIXHighWithRegisterContext::getRuleIndex() const {
  return Z80Parser::RuleLoadIXHighWithRegister;
}

void Z80Parser::LoadIXHighWithRegisterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLoadIXHighWithRegister(this);
}

void Z80Parser::LoadIXHighWithRegisterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLoadIXHighWithRegister(this);
}

Z80Parser::LoadIXHighWithRegisterContext* Z80Parser::loadIXHighWithRegister() {
  LoadIXHighWithRegisterContext *_localctx = _tracker.createInstance<LoadIXHighWithRegisterContext>(_ctx, getState());
  enterRule(_localctx, 144, Z80Parser::RuleLoadIXHighWithRegister);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(990);
    loadCommandName();
    setState(991);
    dynamic_cast<LoadIXHighWithRegisterContext *>(_localctx)->dest = ixHighRegister();
    setState(992);
    match(Z80Parser::T__73);
    setState(993);
    dynamic_cast<LoadIXHighWithRegisterContext *>(_localctx)->source = simpleByteRegister();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IxHighOrLowRegisterContext ------------------------------------------------------------------

Z80Parser::IxHighOrLowRegisterContext::IxHighOrLowRegisterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::IxHighRegisterContext* Z80Parser::IxHighOrLowRegisterContext::ixHighRegister() {
  return getRuleContext<Z80Parser::IxHighRegisterContext>(0);
}

Z80Parser::IxLowRegisterContext* Z80Parser::IxHighOrLowRegisterContext::ixLowRegister() {
  return getRuleContext<Z80Parser::IxLowRegisterContext>(0);
}


size_t Z80Parser::IxHighOrLowRegisterContext::getRuleIndex() const {
  return Z80Parser::RuleIxHighOrLowRegister;
}

void Z80Parser::IxHighOrLowRegisterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIxHighOrLowRegister(this);
}

void Z80Parser::IxHighOrLowRegisterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIxHighOrLowRegister(this);
}

Z80Parser::IxHighOrLowRegisterContext* Z80Parser::ixHighOrLowRegister() {
  IxHighOrLowRegisterContext *_localctx = _tracker.createInstance<IxHighOrLowRegisterContext>(_ctx, getState());
  enterRule(_localctx, 146, Z80Parser::RuleIxHighOrLowRegister);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(997);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Z80Parser::T__56:
      case Z80Parser::T__57: {
        enterOuterAlt(_localctx, 1);
        setState(995);
        ixHighRegister();
        break;
      }

      case Z80Parser::T__58:
      case Z80Parser::T__59: {
        enterOuterAlt(_localctx, 2);
        setState(996);
        ixLowRegister();
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

//----------------- IyHighOrLowRegisterContext ------------------------------------------------------------------

Z80Parser::IyHighOrLowRegisterContext::IyHighOrLowRegisterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::IyHighRegisterContext* Z80Parser::IyHighOrLowRegisterContext::iyHighRegister() {
  return getRuleContext<Z80Parser::IyHighRegisterContext>(0);
}

Z80Parser::IyLowRegisterContext* Z80Parser::IyHighOrLowRegisterContext::iyLowRegister() {
  return getRuleContext<Z80Parser::IyLowRegisterContext>(0);
}


size_t Z80Parser::IyHighOrLowRegisterContext::getRuleIndex() const {
  return Z80Parser::RuleIyHighOrLowRegister;
}

void Z80Parser::IyHighOrLowRegisterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIyHighOrLowRegister(this);
}

void Z80Parser::IyHighOrLowRegisterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIyHighOrLowRegister(this);
}

Z80Parser::IyHighOrLowRegisterContext* Z80Parser::iyHighOrLowRegister() {
  IyHighOrLowRegisterContext *_localctx = _tracker.createInstance<IyHighOrLowRegisterContext>(_ctx, getState());
  enterRule(_localctx, 148, Z80Parser::RuleIyHighOrLowRegister);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1001);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Z80Parser::T__60:
      case Z80Parser::T__61: {
        enterOuterAlt(_localctx, 1);
        setState(999);
        iyHighRegister();
        break;
      }

      case Z80Parser::T__62:
      case Z80Parser::T__63: {
        enterOuterAlt(_localctx, 2);
        setState(1000);
        iyLowRegister();
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

//----------------- LoadIXNibblesContext ------------------------------------------------------------------

Z80Parser::LoadIXNibblesContext::LoadIXNibblesContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::LoadCommandNameContext* Z80Parser::LoadIXNibblesContext::loadCommandName() {
  return getRuleContext<Z80Parser::LoadCommandNameContext>(0);
}

std::vector<Z80Parser::IxHighOrLowRegisterContext *> Z80Parser::LoadIXNibblesContext::ixHighOrLowRegister() {
  return getRuleContexts<Z80Parser::IxHighOrLowRegisterContext>();
}

Z80Parser::IxHighOrLowRegisterContext* Z80Parser::LoadIXNibblesContext::ixHighOrLowRegister(size_t i) {
  return getRuleContext<Z80Parser::IxHighOrLowRegisterContext>(i);
}


size_t Z80Parser::LoadIXNibblesContext::getRuleIndex() const {
  return Z80Parser::RuleLoadIXNibbles;
}

void Z80Parser::LoadIXNibblesContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLoadIXNibbles(this);
}

void Z80Parser::LoadIXNibblesContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLoadIXNibbles(this);
}

Z80Parser::LoadIXNibblesContext* Z80Parser::loadIXNibbles() {
  LoadIXNibblesContext *_localctx = _tracker.createInstance<LoadIXNibblesContext>(_ctx, getState());
  enterRule(_localctx, 150, Z80Parser::RuleLoadIXNibbles);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1003);
    loadCommandName();
    setState(1004);
    dynamic_cast<LoadIXNibblesContext *>(_localctx)->dest = ixHighOrLowRegister();
    setState(1005);
    match(Z80Parser::T__73);
    setState(1006);
    dynamic_cast<LoadIXNibblesContext *>(_localctx)->source = ixHighOrLowRegister();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LoadIYNibblesContext ------------------------------------------------------------------

Z80Parser::LoadIYNibblesContext::LoadIYNibblesContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::LoadCommandNameContext* Z80Parser::LoadIYNibblesContext::loadCommandName() {
  return getRuleContext<Z80Parser::LoadCommandNameContext>(0);
}

std::vector<Z80Parser::IyHighOrLowRegisterContext *> Z80Parser::LoadIYNibblesContext::iyHighOrLowRegister() {
  return getRuleContexts<Z80Parser::IyHighOrLowRegisterContext>();
}

Z80Parser::IyHighOrLowRegisterContext* Z80Parser::LoadIYNibblesContext::iyHighOrLowRegister(size_t i) {
  return getRuleContext<Z80Parser::IyHighOrLowRegisterContext>(i);
}


size_t Z80Parser::LoadIYNibblesContext::getRuleIndex() const {
  return Z80Parser::RuleLoadIYNibbles;
}

void Z80Parser::LoadIYNibblesContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLoadIYNibbles(this);
}

void Z80Parser::LoadIYNibblesContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLoadIYNibbles(this);
}

Z80Parser::LoadIYNibblesContext* Z80Parser::loadIYNibbles() {
  LoadIYNibblesContext *_localctx = _tracker.createInstance<LoadIYNibblesContext>(_ctx, getState());
  enterRule(_localctx, 152, Z80Parser::RuleLoadIYNibbles);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1008);
    loadCommandName();
    setState(1009);
    dynamic_cast<LoadIYNibblesContext *>(_localctx)->dest = iyHighOrLowRegister();
    setState(1010);
    match(Z80Parser::T__73);
    setState(1011);
    dynamic_cast<LoadIYNibblesContext *>(_localctx)->source = iyHighOrLowRegister();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LoadIXLowWithRegisterContext ------------------------------------------------------------------

Z80Parser::LoadIXLowWithRegisterContext::LoadIXLowWithRegisterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::LoadCommandNameContext* Z80Parser::LoadIXLowWithRegisterContext::loadCommandName() {
  return getRuleContext<Z80Parser::LoadCommandNameContext>(0);
}

Z80Parser::IxLowRegisterContext* Z80Parser::LoadIXLowWithRegisterContext::ixLowRegister() {
  return getRuleContext<Z80Parser::IxLowRegisterContext>(0);
}

Z80Parser::SimpleByteRegisterContext* Z80Parser::LoadIXLowWithRegisterContext::simpleByteRegister() {
  return getRuleContext<Z80Parser::SimpleByteRegisterContext>(0);
}


size_t Z80Parser::LoadIXLowWithRegisterContext::getRuleIndex() const {
  return Z80Parser::RuleLoadIXLowWithRegister;
}

void Z80Parser::LoadIXLowWithRegisterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLoadIXLowWithRegister(this);
}

void Z80Parser::LoadIXLowWithRegisterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLoadIXLowWithRegister(this);
}

Z80Parser::LoadIXLowWithRegisterContext* Z80Parser::loadIXLowWithRegister() {
  LoadIXLowWithRegisterContext *_localctx = _tracker.createInstance<LoadIXLowWithRegisterContext>(_ctx, getState());
  enterRule(_localctx, 154, Z80Parser::RuleLoadIXLowWithRegister);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1013);
    loadCommandName();
    setState(1014);
    dynamic_cast<LoadIXLowWithRegisterContext *>(_localctx)->dest = ixLowRegister();
    setState(1015);
    match(Z80Parser::T__73);
    setState(1016);
    dynamic_cast<LoadIXLowWithRegisterContext *>(_localctx)->source = simpleByteRegister();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LoadIYHighWithRegisterContext ------------------------------------------------------------------

Z80Parser::LoadIYHighWithRegisterContext::LoadIYHighWithRegisterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::LoadCommandNameContext* Z80Parser::LoadIYHighWithRegisterContext::loadCommandName() {
  return getRuleContext<Z80Parser::LoadCommandNameContext>(0);
}

Z80Parser::IyHighRegisterContext* Z80Parser::LoadIYHighWithRegisterContext::iyHighRegister() {
  return getRuleContext<Z80Parser::IyHighRegisterContext>(0);
}

Z80Parser::SimpleByteRegisterContext* Z80Parser::LoadIYHighWithRegisterContext::simpleByteRegister() {
  return getRuleContext<Z80Parser::SimpleByteRegisterContext>(0);
}


size_t Z80Parser::LoadIYHighWithRegisterContext::getRuleIndex() const {
  return Z80Parser::RuleLoadIYHighWithRegister;
}

void Z80Parser::LoadIYHighWithRegisterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLoadIYHighWithRegister(this);
}

void Z80Parser::LoadIYHighWithRegisterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLoadIYHighWithRegister(this);
}

Z80Parser::LoadIYHighWithRegisterContext* Z80Parser::loadIYHighWithRegister() {
  LoadIYHighWithRegisterContext *_localctx = _tracker.createInstance<LoadIYHighWithRegisterContext>(_ctx, getState());
  enterRule(_localctx, 156, Z80Parser::RuleLoadIYHighWithRegister);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1018);
    loadCommandName();
    setState(1019);
    dynamic_cast<LoadIYHighWithRegisterContext *>(_localctx)->dest = iyHighRegister();
    setState(1020);
    match(Z80Parser::T__73);
    setState(1021);
    dynamic_cast<LoadIYHighWithRegisterContext *>(_localctx)->source = simpleByteRegister();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LoadIYLowWithRegisterContext ------------------------------------------------------------------

Z80Parser::LoadIYLowWithRegisterContext::LoadIYLowWithRegisterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::LoadCommandNameContext* Z80Parser::LoadIYLowWithRegisterContext::loadCommandName() {
  return getRuleContext<Z80Parser::LoadCommandNameContext>(0);
}

Z80Parser::IyLowRegisterContext* Z80Parser::LoadIYLowWithRegisterContext::iyLowRegister() {
  return getRuleContext<Z80Parser::IyLowRegisterContext>(0);
}

Z80Parser::SimpleByteRegisterContext* Z80Parser::LoadIYLowWithRegisterContext::simpleByteRegister() {
  return getRuleContext<Z80Parser::SimpleByteRegisterContext>(0);
}


size_t Z80Parser::LoadIYLowWithRegisterContext::getRuleIndex() const {
  return Z80Parser::RuleLoadIYLowWithRegister;
}

void Z80Parser::LoadIYLowWithRegisterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLoadIYLowWithRegister(this);
}

void Z80Parser::LoadIYLowWithRegisterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLoadIYLowWithRegister(this);
}

Z80Parser::LoadIYLowWithRegisterContext* Z80Parser::loadIYLowWithRegister() {
  LoadIYLowWithRegisterContext *_localctx = _tracker.createInstance<LoadIYLowWithRegisterContext>(_ctx, getState());
  enterRule(_localctx, 158, Z80Parser::RuleLoadIYLowWithRegister);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1023);
    loadCommandName();
    setState(1024);
    dynamic_cast<LoadIYLowWithRegisterContext *>(_localctx)->dest = iyLowRegister();
    setState(1025);
    match(Z80Parser::T__73);
    setState(1026);
    dynamic_cast<LoadIYLowWithRegisterContext *>(_localctx)->source = simpleByteRegister();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ByteLoadCommandContext ------------------------------------------------------------------

Z80Parser::ByteLoadCommandContext::ByteLoadCommandContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::LoadByteRegisterWithByteRegisterContext* Z80Parser::ByteLoadCommandContext::loadByteRegisterWithByteRegister() {
  return getRuleContext<Z80Parser::LoadByteRegisterWithByteRegisterContext>(0);
}

Z80Parser::LoadByteRegisterWithImmediateByteContext* Z80Parser::ByteLoadCommandContext::loadByteRegisterWithImmediateByte() {
  return getRuleContext<Z80Parser::LoadByteRegisterWithImmediateByteContext>(0);
}

Z80Parser::LoadByteRegisterWithHLPointerContext* Z80Parser::ByteLoadCommandContext::loadByteRegisterWithHLPointer() {
  return getRuleContext<Z80Parser::LoadByteRegisterWithHLPointerContext>(0);
}

Z80Parser::LoadByteRegisterWithIXOffsetContext* Z80Parser::ByteLoadCommandContext::loadByteRegisterWithIXOffset() {
  return getRuleContext<Z80Parser::LoadByteRegisterWithIXOffsetContext>(0);
}

Z80Parser::LoadByteRegisterWithIYOffsetContext* Z80Parser::ByteLoadCommandContext::loadByteRegisterWithIYOffset() {
  return getRuleContext<Z80Parser::LoadByteRegisterWithIYOffsetContext>(0);
}

Z80Parser::LoadHLPointerWithRegisterContext* Z80Parser::ByteLoadCommandContext::loadHLPointerWithRegister() {
  return getRuleContext<Z80Parser::LoadHLPointerWithRegisterContext>(0);
}

Z80Parser::LoadIXOffsetWithRegisterContext* Z80Parser::ByteLoadCommandContext::loadIXOffsetWithRegister() {
  return getRuleContext<Z80Parser::LoadIXOffsetWithRegisterContext>(0);
}

Z80Parser::LoadIYOffsetWithRegisterContext* Z80Parser::ByteLoadCommandContext::loadIYOffsetWithRegister() {
  return getRuleContext<Z80Parser::LoadIYOffsetWithRegisterContext>(0);
}

Z80Parser::LoadHLPointerWithImmediateByteContext* Z80Parser::ByteLoadCommandContext::loadHLPointerWithImmediateByte() {
  return getRuleContext<Z80Parser::LoadHLPointerWithImmediateByteContext>(0);
}

Z80Parser::LoadIXOffsetWithImmediateByteContext* Z80Parser::ByteLoadCommandContext::loadIXOffsetWithImmediateByte() {
  return getRuleContext<Z80Parser::LoadIXOffsetWithImmediateByteContext>(0);
}

Z80Parser::LoadIYOffsetWithImmediateByteContext* Z80Parser::ByteLoadCommandContext::loadIYOffsetWithImmediateByte() {
  return getRuleContext<Z80Parser::LoadIYOffsetWithImmediateByteContext>(0);
}

Z80Parser::LoadAWithBCPointerContext* Z80Parser::ByteLoadCommandContext::loadAWithBCPointer() {
  return getRuleContext<Z80Parser::LoadAWithBCPointerContext>(0);
}

Z80Parser::LoadAWithDEPointerContext* Z80Parser::ByteLoadCommandContext::loadAWithDEPointer() {
  return getRuleContext<Z80Parser::LoadAWithDEPointerContext>(0);
}

Z80Parser::LoadAWithNNPointerContext* Z80Parser::ByteLoadCommandContext::loadAWithNNPointer() {
  return getRuleContext<Z80Parser::LoadAWithNNPointerContext>(0);
}

Z80Parser::LoadBCPointerWithAContext* Z80Parser::ByteLoadCommandContext::loadBCPointerWithA() {
  return getRuleContext<Z80Parser::LoadBCPointerWithAContext>(0);
}

Z80Parser::LoadDEPointerWithAContext* Z80Parser::ByteLoadCommandContext::loadDEPointerWithA() {
  return getRuleContext<Z80Parser::LoadDEPointerWithAContext>(0);
}

Z80Parser::LoadNNPointerWithAContext* Z80Parser::ByteLoadCommandContext::loadNNPointerWithA() {
  return getRuleContext<Z80Parser::LoadNNPointerWithAContext>(0);
}

Z80Parser::LoadAWithIContext* Z80Parser::ByteLoadCommandContext::loadAWithI() {
  return getRuleContext<Z80Parser::LoadAWithIContext>(0);
}

Z80Parser::LoadAWithRContext* Z80Parser::ByteLoadCommandContext::loadAWithR() {
  return getRuleContext<Z80Parser::LoadAWithRContext>(0);
}

Z80Parser::LoadIWithAContext* Z80Parser::ByteLoadCommandContext::loadIWithA() {
  return getRuleContext<Z80Parser::LoadIWithAContext>(0);
}

Z80Parser::LoadRWithAContext* Z80Parser::ByteLoadCommandContext::loadRWithA() {
  return getRuleContext<Z80Parser::LoadRWithAContext>(0);
}

Z80Parser::LoadRegisterWithIXHighContext* Z80Parser::ByteLoadCommandContext::loadRegisterWithIXHigh() {
  return getRuleContext<Z80Parser::LoadRegisterWithIXHighContext>(0);
}

Z80Parser::LoadRegisterWithIXLowContext* Z80Parser::ByteLoadCommandContext::loadRegisterWithIXLow() {
  return getRuleContext<Z80Parser::LoadRegisterWithIXLowContext>(0);
}

Z80Parser::LoadRegisterWithIYHighContext* Z80Parser::ByteLoadCommandContext::loadRegisterWithIYHigh() {
  return getRuleContext<Z80Parser::LoadRegisterWithIYHighContext>(0);
}

Z80Parser::LoadRegisterWithIYLowContext* Z80Parser::ByteLoadCommandContext::loadRegisterWithIYLow() {
  return getRuleContext<Z80Parser::LoadRegisterWithIYLowContext>(0);
}

Z80Parser::LoadIXHighWithRegisterContext* Z80Parser::ByteLoadCommandContext::loadIXHighWithRegister() {
  return getRuleContext<Z80Parser::LoadIXHighWithRegisterContext>(0);
}

Z80Parser::LoadIXLowWithRegisterContext* Z80Parser::ByteLoadCommandContext::loadIXLowWithRegister() {
  return getRuleContext<Z80Parser::LoadIXLowWithRegisterContext>(0);
}

Z80Parser::LoadIYHighWithRegisterContext* Z80Parser::ByteLoadCommandContext::loadIYHighWithRegister() {
  return getRuleContext<Z80Parser::LoadIYHighWithRegisterContext>(0);
}

Z80Parser::LoadIYLowWithRegisterContext* Z80Parser::ByteLoadCommandContext::loadIYLowWithRegister() {
  return getRuleContext<Z80Parser::LoadIYLowWithRegisterContext>(0);
}

Z80Parser::LoadIYNibblesContext* Z80Parser::ByteLoadCommandContext::loadIYNibbles() {
  return getRuleContext<Z80Parser::LoadIYNibblesContext>(0);
}

Z80Parser::LoadIXNibblesContext* Z80Parser::ByteLoadCommandContext::loadIXNibbles() {
  return getRuleContext<Z80Parser::LoadIXNibblesContext>(0);
}


size_t Z80Parser::ByteLoadCommandContext::getRuleIndex() const {
  return Z80Parser::RuleByteLoadCommand;
}

void Z80Parser::ByteLoadCommandContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterByteLoadCommand(this);
}

void Z80Parser::ByteLoadCommandContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitByteLoadCommand(this);
}

Z80Parser::ByteLoadCommandContext* Z80Parser::byteLoadCommand() {
  ByteLoadCommandContext *_localctx = _tracker.createInstance<ByteLoadCommandContext>(_ctx, getState());
  enterRule(_localctx, 160, Z80Parser::RuleByteLoadCommand);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1059);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1028);
      loadByteRegisterWithByteRegister();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1029);
      loadByteRegisterWithImmediateByte();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1030);
      loadByteRegisterWithHLPointer();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1031);
      loadByteRegisterWithIXOffset();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(1032);
      loadByteRegisterWithIYOffset();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(1033);
      loadHLPointerWithRegister();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(1034);
      loadIXOffsetWithRegister();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(1035);
      loadIYOffsetWithRegister();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(1036);
      loadHLPointerWithImmediateByte();
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(1037);
      loadIXOffsetWithImmediateByte();
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(1038);
      loadIYOffsetWithImmediateByte();
      break;
    }

    case 12: {
      enterOuterAlt(_localctx, 12);
      setState(1039);
      loadAWithBCPointer();
      break;
    }

    case 13: {
      enterOuterAlt(_localctx, 13);
      setState(1040);
      loadAWithDEPointer();
      break;
    }

    case 14: {
      enterOuterAlt(_localctx, 14);
      setState(1041);
      loadAWithNNPointer();
      break;
    }

    case 15: {
      enterOuterAlt(_localctx, 15);
      setState(1042);
      loadBCPointerWithA();
      break;
    }

    case 16: {
      enterOuterAlt(_localctx, 16);
      setState(1043);
      loadDEPointerWithA();
      break;
    }

    case 17: {
      enterOuterAlt(_localctx, 17);
      setState(1044);
      loadNNPointerWithA();
      break;
    }

    case 18: {
      enterOuterAlt(_localctx, 18);
      setState(1045);
      loadAWithI();
      break;
    }

    case 19: {
      enterOuterAlt(_localctx, 19);
      setState(1046);
      loadAWithR();
      break;
    }

    case 20: {
      enterOuterAlt(_localctx, 20);
      setState(1047);
      loadIWithA();
      break;
    }

    case 21: {
      enterOuterAlt(_localctx, 21);
      setState(1048);
      loadRWithA();
      break;
    }

    case 22: {
      enterOuterAlt(_localctx, 22);
      setState(1049);
      loadRegisterWithIXHigh();
      break;
    }

    case 23: {
      enterOuterAlt(_localctx, 23);
      setState(1050);
      loadRegisterWithIXLow();
      break;
    }

    case 24: {
      enterOuterAlt(_localctx, 24);
      setState(1051);
      loadRegisterWithIYHigh();
      break;
    }

    case 25: {
      enterOuterAlt(_localctx, 25);
      setState(1052);
      loadRegisterWithIYLow();
      break;
    }

    case 26: {
      enterOuterAlt(_localctx, 26);
      setState(1053);
      loadIXHighWithRegister();
      break;
    }

    case 27: {
      enterOuterAlt(_localctx, 27);
      setState(1054);
      loadIXLowWithRegister();
      break;
    }

    case 28: {
      enterOuterAlt(_localctx, 28);
      setState(1055);
      loadIYHighWithRegister();
      break;
    }

    case 29: {
      enterOuterAlt(_localctx, 29);
      setState(1056);
      loadIYLowWithRegister();
      break;
    }

    case 30: {
      enterOuterAlt(_localctx, 30);
      setState(1057);
      loadIYNibbles();
      break;
    }

    case 31: {
      enterOuterAlt(_localctx, 31);
      setState(1058);
      loadIXNibbles();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SimpleWordRegisterContext ------------------------------------------------------------------

Z80Parser::SimpleWordRegisterContext::SimpleWordRegisterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::BcRegisterContext* Z80Parser::SimpleWordRegisterContext::bcRegister() {
  return getRuleContext<Z80Parser::BcRegisterContext>(0);
}

Z80Parser::DeRegisterContext* Z80Parser::SimpleWordRegisterContext::deRegister() {
  return getRuleContext<Z80Parser::DeRegisterContext>(0);
}

Z80Parser::HlRegisterContext* Z80Parser::SimpleWordRegisterContext::hlRegister() {
  return getRuleContext<Z80Parser::HlRegisterContext>(0);
}

Z80Parser::SpRegisterContext* Z80Parser::SimpleWordRegisterContext::spRegister() {
  return getRuleContext<Z80Parser::SpRegisterContext>(0);
}


size_t Z80Parser::SimpleWordRegisterContext::getRuleIndex() const {
  return Z80Parser::RuleSimpleWordRegister;
}

void Z80Parser::SimpleWordRegisterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSimpleWordRegister(this);
}

void Z80Parser::SimpleWordRegisterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSimpleWordRegister(this);
}

Z80Parser::SimpleWordRegisterContext* Z80Parser::simpleWordRegister() {
  SimpleWordRegisterContext *_localctx = _tracker.createInstance<SimpleWordRegisterContext>(_ctx, getState());
  enterRule(_localctx, 162, Z80Parser::RuleSimpleWordRegister);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1065);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Z80Parser::T__24:
      case Z80Parser::T__25:
      case Z80Parser::T__34:
      case Z80Parser::T__35: {
        enterOuterAlt(_localctx, 1);
        setState(1061);
        bcRegister();
        break;
      }

      case Z80Parser::T__26:
      case Z80Parser::T__27:
      case Z80Parser::T__40:
      case Z80Parser::T__41: {
        enterOuterAlt(_localctx, 2);
        setState(1062);
        deRegister();
        break;
      }

      case Z80Parser::T__28:
      case Z80Parser::T__29:
      case Z80Parser::T__46:
      case Z80Parser::T__47: {
        enterOuterAlt(_localctx, 3);
        setState(1063);
        hlRegister();
        break;
      }

      case Z80Parser::T__64:
      case Z80Parser::T__65: {
        enterOuterAlt(_localctx, 4);
        setState(1064);
        spRegister();
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

//----------------- LoadWordWithImmediateWordContext ------------------------------------------------------------------

Z80Parser::LoadWordWithImmediateWordContext::LoadWordWithImmediateWordContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::LoadCommandNameContext* Z80Parser::LoadWordWithImmediateWordContext::loadCommandName() {
  return getRuleContext<Z80Parser::LoadCommandNameContext>(0);
}

Z80Parser::SimpleWordRegisterContext* Z80Parser::LoadWordWithImmediateWordContext::simpleWordRegister() {
  return getRuleContext<Z80Parser::SimpleWordRegisterContext>(0);
}

Z80Parser::NumberContext* Z80Parser::LoadWordWithImmediateWordContext::number() {
  return getRuleContext<Z80Parser::NumberContext>(0);
}


size_t Z80Parser::LoadWordWithImmediateWordContext::getRuleIndex() const {
  return Z80Parser::RuleLoadWordWithImmediateWord;
}

void Z80Parser::LoadWordWithImmediateWordContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLoadWordWithImmediateWord(this);
}

void Z80Parser::LoadWordWithImmediateWordContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLoadWordWithImmediateWord(this);
}

Z80Parser::LoadWordWithImmediateWordContext* Z80Parser::loadWordWithImmediateWord() {
  LoadWordWithImmediateWordContext *_localctx = _tracker.createInstance<LoadWordWithImmediateWordContext>(_ctx, getState());
  enterRule(_localctx, 164, Z80Parser::RuleLoadWordWithImmediateWord);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1067);
    loadCommandName();
    setState(1068);
    dynamic_cast<LoadWordWithImmediateWordContext *>(_localctx)->dest = simpleWordRegister();
    setState(1069);
    match(Z80Parser::T__73);
    setState(1070);
    dynamic_cast<LoadWordWithImmediateWordContext *>(_localctx)->source = number();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LoadIXWithImmediateWordContext ------------------------------------------------------------------

Z80Parser::LoadIXWithImmediateWordContext::LoadIXWithImmediateWordContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::LoadCommandNameContext* Z80Parser::LoadIXWithImmediateWordContext::loadCommandName() {
  return getRuleContext<Z80Parser::LoadCommandNameContext>(0);
}

Z80Parser::IxRegisterContext* Z80Parser::LoadIXWithImmediateWordContext::ixRegister() {
  return getRuleContext<Z80Parser::IxRegisterContext>(0);
}

Z80Parser::NumberContext* Z80Parser::LoadIXWithImmediateWordContext::number() {
  return getRuleContext<Z80Parser::NumberContext>(0);
}


size_t Z80Parser::LoadIXWithImmediateWordContext::getRuleIndex() const {
  return Z80Parser::RuleLoadIXWithImmediateWord;
}

void Z80Parser::LoadIXWithImmediateWordContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLoadIXWithImmediateWord(this);
}

void Z80Parser::LoadIXWithImmediateWordContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLoadIXWithImmediateWord(this);
}

Z80Parser::LoadIXWithImmediateWordContext* Z80Parser::loadIXWithImmediateWord() {
  LoadIXWithImmediateWordContext *_localctx = _tracker.createInstance<LoadIXWithImmediateWordContext>(_ctx, getState());
  enterRule(_localctx, 166, Z80Parser::RuleLoadIXWithImmediateWord);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1072);
    loadCommandName();
    setState(1073);
    dynamic_cast<LoadIXWithImmediateWordContext *>(_localctx)->dest = ixRegister();
    setState(1074);
    match(Z80Parser::T__73);
    setState(1075);
    dynamic_cast<LoadIXWithImmediateWordContext *>(_localctx)->source = number();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LoadIYWithImmediateWordContext ------------------------------------------------------------------

Z80Parser::LoadIYWithImmediateWordContext::LoadIYWithImmediateWordContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::LoadCommandNameContext* Z80Parser::LoadIYWithImmediateWordContext::loadCommandName() {
  return getRuleContext<Z80Parser::LoadCommandNameContext>(0);
}

Z80Parser::IyRegisterContext* Z80Parser::LoadIYWithImmediateWordContext::iyRegister() {
  return getRuleContext<Z80Parser::IyRegisterContext>(0);
}

Z80Parser::NumberContext* Z80Parser::LoadIYWithImmediateWordContext::number() {
  return getRuleContext<Z80Parser::NumberContext>(0);
}


size_t Z80Parser::LoadIYWithImmediateWordContext::getRuleIndex() const {
  return Z80Parser::RuleLoadIYWithImmediateWord;
}

void Z80Parser::LoadIYWithImmediateWordContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLoadIYWithImmediateWord(this);
}

void Z80Parser::LoadIYWithImmediateWordContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLoadIYWithImmediateWord(this);
}

Z80Parser::LoadIYWithImmediateWordContext* Z80Parser::loadIYWithImmediateWord() {
  LoadIYWithImmediateWordContext *_localctx = _tracker.createInstance<LoadIYWithImmediateWordContext>(_ctx, getState());
  enterRule(_localctx, 168, Z80Parser::RuleLoadIYWithImmediateWord);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1077);
    loadCommandName();
    setState(1078);
    dynamic_cast<LoadIYWithImmediateWordContext *>(_localctx)->dest = iyRegister();
    setState(1079);
    match(Z80Parser::T__73);
    setState(1080);
    dynamic_cast<LoadIYWithImmediateWordContext *>(_localctx)->source = number();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LoadWordRegisterWithNNPointerContext ------------------------------------------------------------------

Z80Parser::LoadWordRegisterWithNNPointerContext::LoadWordRegisterWithNNPointerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::LoadCommandNameContext* Z80Parser::LoadWordRegisterWithNNPointerContext::loadCommandName() {
  return getRuleContext<Z80Parser::LoadCommandNameContext>(0);
}

Z80Parser::SimpleWordRegisterContext* Z80Parser::LoadWordRegisterWithNNPointerContext::simpleWordRegister() {
  return getRuleContext<Z80Parser::SimpleWordRegisterContext>(0);
}

Z80Parser::NumberPointerContext* Z80Parser::LoadWordRegisterWithNNPointerContext::numberPointer() {
  return getRuleContext<Z80Parser::NumberPointerContext>(0);
}


size_t Z80Parser::LoadWordRegisterWithNNPointerContext::getRuleIndex() const {
  return Z80Parser::RuleLoadWordRegisterWithNNPointer;
}

void Z80Parser::LoadWordRegisterWithNNPointerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLoadWordRegisterWithNNPointer(this);
}

void Z80Parser::LoadWordRegisterWithNNPointerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLoadWordRegisterWithNNPointer(this);
}

Z80Parser::LoadWordRegisterWithNNPointerContext* Z80Parser::loadWordRegisterWithNNPointer() {
  LoadWordRegisterWithNNPointerContext *_localctx = _tracker.createInstance<LoadWordRegisterWithNNPointerContext>(_ctx, getState());
  enterRule(_localctx, 170, Z80Parser::RuleLoadWordRegisterWithNNPointer);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1082);
    loadCommandName();
    setState(1083);
    dynamic_cast<LoadWordRegisterWithNNPointerContext *>(_localctx)->dest = simpleWordRegister();
    setState(1084);
    match(Z80Parser::T__73);
    setState(1085);
    dynamic_cast<LoadWordRegisterWithNNPointerContext *>(_localctx)->source = numberPointer();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LoadIXWithNNPointerContext ------------------------------------------------------------------

Z80Parser::LoadIXWithNNPointerContext::LoadIXWithNNPointerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::LoadCommandNameContext* Z80Parser::LoadIXWithNNPointerContext::loadCommandName() {
  return getRuleContext<Z80Parser::LoadCommandNameContext>(0);
}

Z80Parser::IxRegisterContext* Z80Parser::LoadIXWithNNPointerContext::ixRegister() {
  return getRuleContext<Z80Parser::IxRegisterContext>(0);
}

Z80Parser::NumberPointerContext* Z80Parser::LoadIXWithNNPointerContext::numberPointer() {
  return getRuleContext<Z80Parser::NumberPointerContext>(0);
}


size_t Z80Parser::LoadIXWithNNPointerContext::getRuleIndex() const {
  return Z80Parser::RuleLoadIXWithNNPointer;
}

void Z80Parser::LoadIXWithNNPointerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLoadIXWithNNPointer(this);
}

void Z80Parser::LoadIXWithNNPointerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLoadIXWithNNPointer(this);
}

Z80Parser::LoadIXWithNNPointerContext* Z80Parser::loadIXWithNNPointer() {
  LoadIXWithNNPointerContext *_localctx = _tracker.createInstance<LoadIXWithNNPointerContext>(_ctx, getState());
  enterRule(_localctx, 172, Z80Parser::RuleLoadIXWithNNPointer);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1087);
    loadCommandName();
    setState(1088);
    dynamic_cast<LoadIXWithNNPointerContext *>(_localctx)->dest = ixRegister();
    setState(1089);
    match(Z80Parser::T__73);
    setState(1090);
    dynamic_cast<LoadIXWithNNPointerContext *>(_localctx)->source = numberPointer();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LoadIYWithNNPointerContext ------------------------------------------------------------------

Z80Parser::LoadIYWithNNPointerContext::LoadIYWithNNPointerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::LoadCommandNameContext* Z80Parser::LoadIYWithNNPointerContext::loadCommandName() {
  return getRuleContext<Z80Parser::LoadCommandNameContext>(0);
}

Z80Parser::IyRegisterContext* Z80Parser::LoadIYWithNNPointerContext::iyRegister() {
  return getRuleContext<Z80Parser::IyRegisterContext>(0);
}

Z80Parser::NumberPointerContext* Z80Parser::LoadIYWithNNPointerContext::numberPointer() {
  return getRuleContext<Z80Parser::NumberPointerContext>(0);
}


size_t Z80Parser::LoadIYWithNNPointerContext::getRuleIndex() const {
  return Z80Parser::RuleLoadIYWithNNPointer;
}

void Z80Parser::LoadIYWithNNPointerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLoadIYWithNNPointer(this);
}

void Z80Parser::LoadIYWithNNPointerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLoadIYWithNNPointer(this);
}

Z80Parser::LoadIYWithNNPointerContext* Z80Parser::loadIYWithNNPointer() {
  LoadIYWithNNPointerContext *_localctx = _tracker.createInstance<LoadIYWithNNPointerContext>(_ctx, getState());
  enterRule(_localctx, 174, Z80Parser::RuleLoadIYWithNNPointer);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1092);
    loadCommandName();
    setState(1093);
    dynamic_cast<LoadIYWithNNPointerContext *>(_localctx)->dest = iyRegister();
    setState(1094);
    match(Z80Parser::T__73);
    setState(1095);
    dynamic_cast<LoadIYWithNNPointerContext *>(_localctx)->source = numberPointer();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LoadNNPointerWithWordRegisterContext ------------------------------------------------------------------

Z80Parser::LoadNNPointerWithWordRegisterContext::LoadNNPointerWithWordRegisterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::LoadCommandNameContext* Z80Parser::LoadNNPointerWithWordRegisterContext::loadCommandName() {
  return getRuleContext<Z80Parser::LoadCommandNameContext>(0);
}

Z80Parser::NumberPointerContext* Z80Parser::LoadNNPointerWithWordRegisterContext::numberPointer() {
  return getRuleContext<Z80Parser::NumberPointerContext>(0);
}

Z80Parser::SimpleWordRegisterContext* Z80Parser::LoadNNPointerWithWordRegisterContext::simpleWordRegister() {
  return getRuleContext<Z80Parser::SimpleWordRegisterContext>(0);
}


size_t Z80Parser::LoadNNPointerWithWordRegisterContext::getRuleIndex() const {
  return Z80Parser::RuleLoadNNPointerWithWordRegister;
}

void Z80Parser::LoadNNPointerWithWordRegisterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLoadNNPointerWithWordRegister(this);
}

void Z80Parser::LoadNNPointerWithWordRegisterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLoadNNPointerWithWordRegister(this);
}

Z80Parser::LoadNNPointerWithWordRegisterContext* Z80Parser::loadNNPointerWithWordRegister() {
  LoadNNPointerWithWordRegisterContext *_localctx = _tracker.createInstance<LoadNNPointerWithWordRegisterContext>(_ctx, getState());
  enterRule(_localctx, 176, Z80Parser::RuleLoadNNPointerWithWordRegister);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1097);
    loadCommandName();
    setState(1098);
    dynamic_cast<LoadNNPointerWithWordRegisterContext *>(_localctx)->dest = numberPointer();
    setState(1099);
    match(Z80Parser::T__73);
    setState(1100);
    dynamic_cast<LoadNNPointerWithWordRegisterContext *>(_localctx)->source = simpleWordRegister();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LoadNNPointerWithIXContext ------------------------------------------------------------------

Z80Parser::LoadNNPointerWithIXContext::LoadNNPointerWithIXContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::LoadCommandNameContext* Z80Parser::LoadNNPointerWithIXContext::loadCommandName() {
  return getRuleContext<Z80Parser::LoadCommandNameContext>(0);
}

Z80Parser::NumberPointerContext* Z80Parser::LoadNNPointerWithIXContext::numberPointer() {
  return getRuleContext<Z80Parser::NumberPointerContext>(0);
}

Z80Parser::IxRegisterContext* Z80Parser::LoadNNPointerWithIXContext::ixRegister() {
  return getRuleContext<Z80Parser::IxRegisterContext>(0);
}


size_t Z80Parser::LoadNNPointerWithIXContext::getRuleIndex() const {
  return Z80Parser::RuleLoadNNPointerWithIX;
}

void Z80Parser::LoadNNPointerWithIXContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLoadNNPointerWithIX(this);
}

void Z80Parser::LoadNNPointerWithIXContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLoadNNPointerWithIX(this);
}

Z80Parser::LoadNNPointerWithIXContext* Z80Parser::loadNNPointerWithIX() {
  LoadNNPointerWithIXContext *_localctx = _tracker.createInstance<LoadNNPointerWithIXContext>(_ctx, getState());
  enterRule(_localctx, 178, Z80Parser::RuleLoadNNPointerWithIX);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1102);
    loadCommandName();
    setState(1103);
    dynamic_cast<LoadNNPointerWithIXContext *>(_localctx)->dest = numberPointer();
    setState(1104);
    match(Z80Parser::T__73);
    setState(1105);
    dynamic_cast<LoadNNPointerWithIXContext *>(_localctx)->source = ixRegister();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LoadNNPointerWithIYContext ------------------------------------------------------------------

Z80Parser::LoadNNPointerWithIYContext::LoadNNPointerWithIYContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::LoadCommandNameContext* Z80Parser::LoadNNPointerWithIYContext::loadCommandName() {
  return getRuleContext<Z80Parser::LoadCommandNameContext>(0);
}

Z80Parser::NumberPointerContext* Z80Parser::LoadNNPointerWithIYContext::numberPointer() {
  return getRuleContext<Z80Parser::NumberPointerContext>(0);
}

Z80Parser::IyRegisterContext* Z80Parser::LoadNNPointerWithIYContext::iyRegister() {
  return getRuleContext<Z80Parser::IyRegisterContext>(0);
}


size_t Z80Parser::LoadNNPointerWithIYContext::getRuleIndex() const {
  return Z80Parser::RuleLoadNNPointerWithIY;
}

void Z80Parser::LoadNNPointerWithIYContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLoadNNPointerWithIY(this);
}

void Z80Parser::LoadNNPointerWithIYContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLoadNNPointerWithIY(this);
}

Z80Parser::LoadNNPointerWithIYContext* Z80Parser::loadNNPointerWithIY() {
  LoadNNPointerWithIYContext *_localctx = _tracker.createInstance<LoadNNPointerWithIYContext>(_ctx, getState());
  enterRule(_localctx, 180, Z80Parser::RuleLoadNNPointerWithIY);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1107);
    loadCommandName();
    setState(1108);
    dynamic_cast<LoadNNPointerWithIYContext *>(_localctx)->dest = numberPointer();
    setState(1109);
    match(Z80Parser::T__73);
    setState(1110);
    dynamic_cast<LoadNNPointerWithIYContext *>(_localctx)->source = iyRegister();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LoadSPWithHLContext ------------------------------------------------------------------

Z80Parser::LoadSPWithHLContext::LoadSPWithHLContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::LoadCommandNameContext* Z80Parser::LoadSPWithHLContext::loadCommandName() {
  return getRuleContext<Z80Parser::LoadCommandNameContext>(0);
}

Z80Parser::SpRegisterContext* Z80Parser::LoadSPWithHLContext::spRegister() {
  return getRuleContext<Z80Parser::SpRegisterContext>(0);
}

Z80Parser::HlRegisterContext* Z80Parser::LoadSPWithHLContext::hlRegister() {
  return getRuleContext<Z80Parser::HlRegisterContext>(0);
}


size_t Z80Parser::LoadSPWithHLContext::getRuleIndex() const {
  return Z80Parser::RuleLoadSPWithHL;
}

void Z80Parser::LoadSPWithHLContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLoadSPWithHL(this);
}

void Z80Parser::LoadSPWithHLContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLoadSPWithHL(this);
}

Z80Parser::LoadSPWithHLContext* Z80Parser::loadSPWithHL() {
  LoadSPWithHLContext *_localctx = _tracker.createInstance<LoadSPWithHLContext>(_ctx, getState());
  enterRule(_localctx, 182, Z80Parser::RuleLoadSPWithHL);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1112);
    loadCommandName();
    setState(1113);
    dynamic_cast<LoadSPWithHLContext *>(_localctx)->dest = spRegister();
    setState(1114);
    match(Z80Parser::T__73);
    setState(1115);
    dynamic_cast<LoadSPWithHLContext *>(_localctx)->source = hlRegister();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LoadSPWithIXContext ------------------------------------------------------------------

Z80Parser::LoadSPWithIXContext::LoadSPWithIXContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::LoadCommandNameContext* Z80Parser::LoadSPWithIXContext::loadCommandName() {
  return getRuleContext<Z80Parser::LoadCommandNameContext>(0);
}

Z80Parser::SpRegisterContext* Z80Parser::LoadSPWithIXContext::spRegister() {
  return getRuleContext<Z80Parser::SpRegisterContext>(0);
}

Z80Parser::IxRegisterContext* Z80Parser::LoadSPWithIXContext::ixRegister() {
  return getRuleContext<Z80Parser::IxRegisterContext>(0);
}


size_t Z80Parser::LoadSPWithIXContext::getRuleIndex() const {
  return Z80Parser::RuleLoadSPWithIX;
}

void Z80Parser::LoadSPWithIXContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLoadSPWithIX(this);
}

void Z80Parser::LoadSPWithIXContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLoadSPWithIX(this);
}

Z80Parser::LoadSPWithIXContext* Z80Parser::loadSPWithIX() {
  LoadSPWithIXContext *_localctx = _tracker.createInstance<LoadSPWithIXContext>(_ctx, getState());
  enterRule(_localctx, 184, Z80Parser::RuleLoadSPWithIX);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1117);
    loadCommandName();
    setState(1118);
    dynamic_cast<LoadSPWithIXContext *>(_localctx)->dest = spRegister();
    setState(1119);
    match(Z80Parser::T__73);
    setState(1120);
    dynamic_cast<LoadSPWithIXContext *>(_localctx)->source = ixRegister();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LoadSPWithIYContext ------------------------------------------------------------------

Z80Parser::LoadSPWithIYContext::LoadSPWithIYContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::LoadCommandNameContext* Z80Parser::LoadSPWithIYContext::loadCommandName() {
  return getRuleContext<Z80Parser::LoadCommandNameContext>(0);
}

Z80Parser::SpRegisterContext* Z80Parser::LoadSPWithIYContext::spRegister() {
  return getRuleContext<Z80Parser::SpRegisterContext>(0);
}

Z80Parser::IyRegisterContext* Z80Parser::LoadSPWithIYContext::iyRegister() {
  return getRuleContext<Z80Parser::IyRegisterContext>(0);
}


size_t Z80Parser::LoadSPWithIYContext::getRuleIndex() const {
  return Z80Parser::RuleLoadSPWithIY;
}

void Z80Parser::LoadSPWithIYContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLoadSPWithIY(this);
}

void Z80Parser::LoadSPWithIYContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLoadSPWithIY(this);
}

Z80Parser::LoadSPWithIYContext* Z80Parser::loadSPWithIY() {
  LoadSPWithIYContext *_localctx = _tracker.createInstance<LoadSPWithIYContext>(_ctx, getState());
  enterRule(_localctx, 186, Z80Parser::RuleLoadSPWithIY);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1122);
    loadCommandName();
    setState(1123);
    dynamic_cast<LoadSPWithIYContext *>(_localctx)->dest = spRegister();
    setState(1124);
    match(Z80Parser::T__73);
    setState(1125);
    dynamic_cast<LoadSPWithIYContext *>(_localctx)->source = iyRegister();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PushCommandNameContext ------------------------------------------------------------------

Z80Parser::PushCommandNameContext::PushCommandNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t Z80Parser::PushCommandNameContext::getRuleIndex() const {
  return Z80Parser::RulePushCommandName;
}

void Z80Parser::PushCommandNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPushCommandName(this);
}

void Z80Parser::PushCommandNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPushCommandName(this);
}

Z80Parser::PushCommandNameContext* Z80Parser::pushCommandName() {
  PushCommandNameContext *_localctx = _tracker.createInstance<PushCommandNameContext>(_ctx, getState());
  enterRule(_localctx, 188, Z80Parser::RulePushCommandName);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1127);
    _la = _input->LA(1);
    if (!(_la == Z80Parser::T__74

    || _la == Z80Parser::T__75)) {
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

//----------------- PopCommandNameContext ------------------------------------------------------------------

Z80Parser::PopCommandNameContext::PopCommandNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t Z80Parser::PopCommandNameContext::getRuleIndex() const {
  return Z80Parser::RulePopCommandName;
}

void Z80Parser::PopCommandNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPopCommandName(this);
}

void Z80Parser::PopCommandNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPopCommandName(this);
}

Z80Parser::PopCommandNameContext* Z80Parser::popCommandName() {
  PopCommandNameContext *_localctx = _tracker.createInstance<PopCommandNameContext>(_ctx, getState());
  enterRule(_localctx, 190, Z80Parser::RulePopCommandName);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1129);
    _la = _input->LA(1);
    if (!(_la == Z80Parser::T__76

    || _la == Z80Parser::T__77)) {
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

//----------------- PushAndPopRegisterContext ------------------------------------------------------------------

Z80Parser::PushAndPopRegisterContext::PushAndPopRegisterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::BcRegisterContext* Z80Parser::PushAndPopRegisterContext::bcRegister() {
  return getRuleContext<Z80Parser::BcRegisterContext>(0);
}

Z80Parser::DeRegisterContext* Z80Parser::PushAndPopRegisterContext::deRegister() {
  return getRuleContext<Z80Parser::DeRegisterContext>(0);
}

Z80Parser::HlRegisterContext* Z80Parser::PushAndPopRegisterContext::hlRegister() {
  return getRuleContext<Z80Parser::HlRegisterContext>(0);
}

Z80Parser::AfRegisterContext* Z80Parser::PushAndPopRegisterContext::afRegister() {
  return getRuleContext<Z80Parser::AfRegisterContext>(0);
}


size_t Z80Parser::PushAndPopRegisterContext::getRuleIndex() const {
  return Z80Parser::RulePushAndPopRegister;
}

void Z80Parser::PushAndPopRegisterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPushAndPopRegister(this);
}

void Z80Parser::PushAndPopRegisterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPushAndPopRegister(this);
}

Z80Parser::PushAndPopRegisterContext* Z80Parser::pushAndPopRegister() {
  PushAndPopRegisterContext *_localctx = _tracker.createInstance<PushAndPopRegisterContext>(_ctx, getState());
  enterRule(_localctx, 192, Z80Parser::RulePushAndPopRegister);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1136);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Z80Parser::T__24:
      case Z80Parser::T__25:
      case Z80Parser::T__34:
      case Z80Parser::T__35: {
        enterOuterAlt(_localctx, 1);
        setState(1131);
        bcRegister();
        break;
      }

      case Z80Parser::T__26:
      case Z80Parser::T__27:
      case Z80Parser::T__40:
      case Z80Parser::T__41: {
        enterOuterAlt(_localctx, 2);
        setState(1132);
        deRegister();
        break;
      }

      case Z80Parser::T__28:
      case Z80Parser::T__29:
      case Z80Parser::T__46:
      case Z80Parser::T__47: {
        enterOuterAlt(_localctx, 3);
        setState(1133);
        hlRegister();
        break;
      }

      case Z80Parser::T__20:
      case Z80Parser::T__21:
      case Z80Parser::T__22:
      case Z80Parser::T__23: {
        enterOuterAlt(_localctx, 4);
        setState(1134);
        afRegister();
        break;
      }

      case Z80Parser::COMMENT:
      case Z80Parser::EOL: {
        enterOuterAlt(_localctx, 5);

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

//----------------- PushWordRegisterContext ------------------------------------------------------------------

Z80Parser::PushWordRegisterContext::PushWordRegisterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::PushCommandNameContext* Z80Parser::PushWordRegisterContext::pushCommandName() {
  return getRuleContext<Z80Parser::PushCommandNameContext>(0);
}

Z80Parser::PushAndPopRegisterContext* Z80Parser::PushWordRegisterContext::pushAndPopRegister() {
  return getRuleContext<Z80Parser::PushAndPopRegisterContext>(0);
}


size_t Z80Parser::PushWordRegisterContext::getRuleIndex() const {
  return Z80Parser::RulePushWordRegister;
}

void Z80Parser::PushWordRegisterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPushWordRegister(this);
}

void Z80Parser::PushWordRegisterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPushWordRegister(this);
}

Z80Parser::PushWordRegisterContext* Z80Parser::pushWordRegister() {
  PushWordRegisterContext *_localctx = _tracker.createInstance<PushWordRegisterContext>(_ctx, getState());
  enterRule(_localctx, 194, Z80Parser::RulePushWordRegister);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1138);
    pushCommandName();
    setState(1139);
    dynamic_cast<PushWordRegisterContext *>(_localctx)->source = pushAndPopRegister();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PushIXContext ------------------------------------------------------------------

Z80Parser::PushIXContext::PushIXContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::PushCommandNameContext* Z80Parser::PushIXContext::pushCommandName() {
  return getRuleContext<Z80Parser::PushCommandNameContext>(0);
}

Z80Parser::IxRegisterContext* Z80Parser::PushIXContext::ixRegister() {
  return getRuleContext<Z80Parser::IxRegisterContext>(0);
}


size_t Z80Parser::PushIXContext::getRuleIndex() const {
  return Z80Parser::RulePushIX;
}

void Z80Parser::PushIXContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPushIX(this);
}

void Z80Parser::PushIXContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPushIX(this);
}

Z80Parser::PushIXContext* Z80Parser::pushIX() {
  PushIXContext *_localctx = _tracker.createInstance<PushIXContext>(_ctx, getState());
  enterRule(_localctx, 196, Z80Parser::RulePushIX);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1141);
    pushCommandName();
    setState(1142);
    dynamic_cast<PushIXContext *>(_localctx)->source = ixRegister();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PushIYContext ------------------------------------------------------------------

Z80Parser::PushIYContext::PushIYContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::PushCommandNameContext* Z80Parser::PushIYContext::pushCommandName() {
  return getRuleContext<Z80Parser::PushCommandNameContext>(0);
}

Z80Parser::IyRegisterContext* Z80Parser::PushIYContext::iyRegister() {
  return getRuleContext<Z80Parser::IyRegisterContext>(0);
}


size_t Z80Parser::PushIYContext::getRuleIndex() const {
  return Z80Parser::RulePushIY;
}

void Z80Parser::PushIYContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPushIY(this);
}

void Z80Parser::PushIYContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPushIY(this);
}

Z80Parser::PushIYContext* Z80Parser::pushIY() {
  PushIYContext *_localctx = _tracker.createInstance<PushIYContext>(_ctx, getState());
  enterRule(_localctx, 198, Z80Parser::RulePushIY);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1144);
    pushCommandName();
    setState(1145);
    dynamic_cast<PushIYContext *>(_localctx)->source = iyRegister();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PopWordRegisterContext ------------------------------------------------------------------

Z80Parser::PopWordRegisterContext::PopWordRegisterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::PopCommandNameContext* Z80Parser::PopWordRegisterContext::popCommandName() {
  return getRuleContext<Z80Parser::PopCommandNameContext>(0);
}

Z80Parser::PushAndPopRegisterContext* Z80Parser::PopWordRegisterContext::pushAndPopRegister() {
  return getRuleContext<Z80Parser::PushAndPopRegisterContext>(0);
}


size_t Z80Parser::PopWordRegisterContext::getRuleIndex() const {
  return Z80Parser::RulePopWordRegister;
}

void Z80Parser::PopWordRegisterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPopWordRegister(this);
}

void Z80Parser::PopWordRegisterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPopWordRegister(this);
}

Z80Parser::PopWordRegisterContext* Z80Parser::popWordRegister() {
  PopWordRegisterContext *_localctx = _tracker.createInstance<PopWordRegisterContext>(_ctx, getState());
  enterRule(_localctx, 200, Z80Parser::RulePopWordRegister);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1147);
    popCommandName();
    setState(1148);
    dynamic_cast<PopWordRegisterContext *>(_localctx)->source = pushAndPopRegister();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PopIXContext ------------------------------------------------------------------

Z80Parser::PopIXContext::PopIXContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::PopCommandNameContext* Z80Parser::PopIXContext::popCommandName() {
  return getRuleContext<Z80Parser::PopCommandNameContext>(0);
}

Z80Parser::IxRegisterContext* Z80Parser::PopIXContext::ixRegister() {
  return getRuleContext<Z80Parser::IxRegisterContext>(0);
}


size_t Z80Parser::PopIXContext::getRuleIndex() const {
  return Z80Parser::RulePopIX;
}

void Z80Parser::PopIXContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPopIX(this);
}

void Z80Parser::PopIXContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPopIX(this);
}

Z80Parser::PopIXContext* Z80Parser::popIX() {
  PopIXContext *_localctx = _tracker.createInstance<PopIXContext>(_ctx, getState());
  enterRule(_localctx, 202, Z80Parser::RulePopIX);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1150);
    popCommandName();
    setState(1151);
    dynamic_cast<PopIXContext *>(_localctx)->source = ixRegister();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PopIYContext ------------------------------------------------------------------

Z80Parser::PopIYContext::PopIYContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::PopCommandNameContext* Z80Parser::PopIYContext::popCommandName() {
  return getRuleContext<Z80Parser::PopCommandNameContext>(0);
}

Z80Parser::IyRegisterContext* Z80Parser::PopIYContext::iyRegister() {
  return getRuleContext<Z80Parser::IyRegisterContext>(0);
}


size_t Z80Parser::PopIYContext::getRuleIndex() const {
  return Z80Parser::RulePopIY;
}

void Z80Parser::PopIYContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPopIY(this);
}

void Z80Parser::PopIYContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPopIY(this);
}

Z80Parser::PopIYContext* Z80Parser::popIY() {
  PopIYContext *_localctx = _tracker.createInstance<PopIYContext>(_ctx, getState());
  enterRule(_localctx, 204, Z80Parser::RulePopIY);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1153);
    popCommandName();
    setState(1154);
    dynamic_cast<PopIYContext *>(_localctx)->source = iyRegister();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- WordLoadCommandContext ------------------------------------------------------------------

Z80Parser::WordLoadCommandContext::WordLoadCommandContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::LoadWordWithImmediateWordContext* Z80Parser::WordLoadCommandContext::loadWordWithImmediateWord() {
  return getRuleContext<Z80Parser::LoadWordWithImmediateWordContext>(0);
}

Z80Parser::LoadIXWithImmediateWordContext* Z80Parser::WordLoadCommandContext::loadIXWithImmediateWord() {
  return getRuleContext<Z80Parser::LoadIXWithImmediateWordContext>(0);
}

Z80Parser::LoadIYWithImmediateWordContext* Z80Parser::WordLoadCommandContext::loadIYWithImmediateWord() {
  return getRuleContext<Z80Parser::LoadIYWithImmediateWordContext>(0);
}

Z80Parser::LoadWordRegisterWithNNPointerContext* Z80Parser::WordLoadCommandContext::loadWordRegisterWithNNPointer() {
  return getRuleContext<Z80Parser::LoadWordRegisterWithNNPointerContext>(0);
}

Z80Parser::LoadIXWithNNPointerContext* Z80Parser::WordLoadCommandContext::loadIXWithNNPointer() {
  return getRuleContext<Z80Parser::LoadIXWithNNPointerContext>(0);
}

Z80Parser::LoadIYWithNNPointerContext* Z80Parser::WordLoadCommandContext::loadIYWithNNPointer() {
  return getRuleContext<Z80Parser::LoadIYWithNNPointerContext>(0);
}

Z80Parser::LoadNNPointerWithIXContext* Z80Parser::WordLoadCommandContext::loadNNPointerWithIX() {
  return getRuleContext<Z80Parser::LoadNNPointerWithIXContext>(0);
}

Z80Parser::LoadNNPointerWithIYContext* Z80Parser::WordLoadCommandContext::loadNNPointerWithIY() {
  return getRuleContext<Z80Parser::LoadNNPointerWithIYContext>(0);
}

Z80Parser::LoadNNPointerWithWordRegisterContext* Z80Parser::WordLoadCommandContext::loadNNPointerWithWordRegister() {
  return getRuleContext<Z80Parser::LoadNNPointerWithWordRegisterContext>(0);
}

Z80Parser::LoadSPWithHLContext* Z80Parser::WordLoadCommandContext::loadSPWithHL() {
  return getRuleContext<Z80Parser::LoadSPWithHLContext>(0);
}

Z80Parser::LoadSPWithIXContext* Z80Parser::WordLoadCommandContext::loadSPWithIX() {
  return getRuleContext<Z80Parser::LoadSPWithIXContext>(0);
}

Z80Parser::LoadSPWithIYContext* Z80Parser::WordLoadCommandContext::loadSPWithIY() {
  return getRuleContext<Z80Parser::LoadSPWithIYContext>(0);
}

Z80Parser::PushWordRegisterContext* Z80Parser::WordLoadCommandContext::pushWordRegister() {
  return getRuleContext<Z80Parser::PushWordRegisterContext>(0);
}

Z80Parser::PushIXContext* Z80Parser::WordLoadCommandContext::pushIX() {
  return getRuleContext<Z80Parser::PushIXContext>(0);
}

Z80Parser::PushIYContext* Z80Parser::WordLoadCommandContext::pushIY() {
  return getRuleContext<Z80Parser::PushIYContext>(0);
}

Z80Parser::PopWordRegisterContext* Z80Parser::WordLoadCommandContext::popWordRegister() {
  return getRuleContext<Z80Parser::PopWordRegisterContext>(0);
}

Z80Parser::PopIXContext* Z80Parser::WordLoadCommandContext::popIX() {
  return getRuleContext<Z80Parser::PopIXContext>(0);
}

Z80Parser::PopIYContext* Z80Parser::WordLoadCommandContext::popIY() {
  return getRuleContext<Z80Parser::PopIYContext>(0);
}


size_t Z80Parser::WordLoadCommandContext::getRuleIndex() const {
  return Z80Parser::RuleWordLoadCommand;
}

void Z80Parser::WordLoadCommandContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWordLoadCommand(this);
}

void Z80Parser::WordLoadCommandContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWordLoadCommand(this);
}

Z80Parser::WordLoadCommandContext* Z80Parser::wordLoadCommand() {
  WordLoadCommandContext *_localctx = _tracker.createInstance<WordLoadCommandContext>(_ctx, getState());
  enterRule(_localctx, 206, Z80Parser::RuleWordLoadCommand);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1174);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1156);
      loadWordWithImmediateWord();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1157);
      loadIXWithImmediateWord();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1158);
      loadIYWithImmediateWord();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1159);
      loadWordRegisterWithNNPointer();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(1160);
      loadIXWithNNPointer();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(1161);
      loadIYWithNNPointer();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(1162);
      loadNNPointerWithIX();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(1163);
      loadNNPointerWithIY();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(1164);
      loadNNPointerWithWordRegister();
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(1165);
      loadSPWithHL();
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(1166);
      loadSPWithIX();
      break;
    }

    case 12: {
      enterOuterAlt(_localctx, 12);
      setState(1167);
      loadSPWithIY();
      break;
    }

    case 13: {
      enterOuterAlt(_localctx, 13);
      setState(1168);
      pushWordRegister();
      break;
    }

    case 14: {
      enterOuterAlt(_localctx, 14);
      setState(1169);
      pushIX();
      break;
    }

    case 15: {
      enterOuterAlt(_localctx, 15);
      setState(1170);
      pushIY();
      break;
    }

    case 16: {
      enterOuterAlt(_localctx, 16);
      setState(1171);
      popWordRegister();
      break;
    }

    case 17: {
      enterOuterAlt(_localctx, 17);
      setState(1172);
      popIX();
      break;
    }

    case 18: {
      enterOuterAlt(_localctx, 18);
      setState(1173);
      popIY();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExchangeCommandNameContext ------------------------------------------------------------------

Z80Parser::ExchangeCommandNameContext::ExchangeCommandNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t Z80Parser::ExchangeCommandNameContext::getRuleIndex() const {
  return Z80Parser::RuleExchangeCommandName;
}

void Z80Parser::ExchangeCommandNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExchangeCommandName(this);
}

void Z80Parser::ExchangeCommandNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExchangeCommandName(this);
}

Z80Parser::ExchangeCommandNameContext* Z80Parser::exchangeCommandName() {
  ExchangeCommandNameContext *_localctx = _tracker.createInstance<ExchangeCommandNameContext>(_ctx, getState());
  enterRule(_localctx, 208, Z80Parser::RuleExchangeCommandName);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1176);
    _la = _input->LA(1);
    if (!(_la == Z80Parser::T__78

    || _la == Z80Parser::T__79)) {
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

//----------------- ExchangeDEWithHLContext ------------------------------------------------------------------

Z80Parser::ExchangeDEWithHLContext::ExchangeDEWithHLContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::ExchangeCommandNameContext* Z80Parser::ExchangeDEWithHLContext::exchangeCommandName() {
  return getRuleContext<Z80Parser::ExchangeCommandNameContext>(0);
}

Z80Parser::DeRegisterContext* Z80Parser::ExchangeDEWithHLContext::deRegister() {
  return getRuleContext<Z80Parser::DeRegisterContext>(0);
}

Z80Parser::HlRegisterContext* Z80Parser::ExchangeDEWithHLContext::hlRegister() {
  return getRuleContext<Z80Parser::HlRegisterContext>(0);
}


size_t Z80Parser::ExchangeDEWithHLContext::getRuleIndex() const {
  return Z80Parser::RuleExchangeDEWithHL;
}

void Z80Parser::ExchangeDEWithHLContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExchangeDEWithHL(this);
}

void Z80Parser::ExchangeDEWithHLContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExchangeDEWithHL(this);
}

Z80Parser::ExchangeDEWithHLContext* Z80Parser::exchangeDEWithHL() {
  ExchangeDEWithHLContext *_localctx = _tracker.createInstance<ExchangeDEWithHLContext>(_ctx, getState());
  enterRule(_localctx, 210, Z80Parser::RuleExchangeDEWithHL);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1178);
    exchangeCommandName();
    setState(1179);
    deRegister();
    setState(1180);
    match(Z80Parser::T__73);
    setState(1181);
    hlRegister();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExchangeAFWithShadowAFContext ------------------------------------------------------------------

Z80Parser::ExchangeAFWithShadowAFContext::ExchangeAFWithShadowAFContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::ExchangeCommandNameContext* Z80Parser::ExchangeAFWithShadowAFContext::exchangeCommandName() {
  return getRuleContext<Z80Parser::ExchangeCommandNameContext>(0);
}

std::vector<Z80Parser::AfRegisterContext *> Z80Parser::ExchangeAFWithShadowAFContext::afRegister() {
  return getRuleContexts<Z80Parser::AfRegisterContext>();
}

Z80Parser::AfRegisterContext* Z80Parser::ExchangeAFWithShadowAFContext::afRegister(size_t i) {
  return getRuleContext<Z80Parser::AfRegisterContext>(i);
}


size_t Z80Parser::ExchangeAFWithShadowAFContext::getRuleIndex() const {
  return Z80Parser::RuleExchangeAFWithShadowAF;
}

void Z80Parser::ExchangeAFWithShadowAFContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExchangeAFWithShadowAF(this);
}

void Z80Parser::ExchangeAFWithShadowAFContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExchangeAFWithShadowAF(this);
}

Z80Parser::ExchangeAFWithShadowAFContext* Z80Parser::exchangeAFWithShadowAF() {
  ExchangeAFWithShadowAFContext *_localctx = _tracker.createInstance<ExchangeAFWithShadowAFContext>(_ctx, getState());
  enterRule(_localctx, 212, Z80Parser::RuleExchangeAFWithShadowAF);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1183);
    exchangeCommandName();
    setState(1184);
    afRegister();
    setState(1185);
    match(Z80Parser::T__73);
    setState(1186);
    afRegister();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExchangeMultipleWordRegistersContext ------------------------------------------------------------------

Z80Parser::ExchangeMultipleWordRegistersContext::ExchangeMultipleWordRegistersContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t Z80Parser::ExchangeMultipleWordRegistersContext::getRuleIndex() const {
  return Z80Parser::RuleExchangeMultipleWordRegisters;
}

void Z80Parser::ExchangeMultipleWordRegistersContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExchangeMultipleWordRegisters(this);
}

void Z80Parser::ExchangeMultipleWordRegistersContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExchangeMultipleWordRegisters(this);
}

Z80Parser::ExchangeMultipleWordRegistersContext* Z80Parser::exchangeMultipleWordRegisters() {
  ExchangeMultipleWordRegistersContext *_localctx = _tracker.createInstance<ExchangeMultipleWordRegistersContext>(_ctx, getState());
  enterRule(_localctx, 214, Z80Parser::RuleExchangeMultipleWordRegisters);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1188);
    _la = _input->LA(1);
    if (!(_la == Z80Parser::T__80

    || _la == Z80Parser::T__81)) {
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

//----------------- ExchangeSPPointerWithHLContext ------------------------------------------------------------------

Z80Parser::ExchangeSPPointerWithHLContext::ExchangeSPPointerWithHLContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::ExchangeCommandNameContext* Z80Parser::ExchangeSPPointerWithHLContext::exchangeCommandName() {
  return getRuleContext<Z80Parser::ExchangeCommandNameContext>(0);
}

Z80Parser::SpPointerContext* Z80Parser::ExchangeSPPointerWithHLContext::spPointer() {
  return getRuleContext<Z80Parser::SpPointerContext>(0);
}

Z80Parser::HlRegisterContext* Z80Parser::ExchangeSPPointerWithHLContext::hlRegister() {
  return getRuleContext<Z80Parser::HlRegisterContext>(0);
}


size_t Z80Parser::ExchangeSPPointerWithHLContext::getRuleIndex() const {
  return Z80Parser::RuleExchangeSPPointerWithHL;
}

void Z80Parser::ExchangeSPPointerWithHLContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExchangeSPPointerWithHL(this);
}

void Z80Parser::ExchangeSPPointerWithHLContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExchangeSPPointerWithHL(this);
}

Z80Parser::ExchangeSPPointerWithHLContext* Z80Parser::exchangeSPPointerWithHL() {
  ExchangeSPPointerWithHLContext *_localctx = _tracker.createInstance<ExchangeSPPointerWithHLContext>(_ctx, getState());
  enterRule(_localctx, 216, Z80Parser::RuleExchangeSPPointerWithHL);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1190);
    exchangeCommandName();
    setState(1191);
    spPointer();
    setState(1192);
    match(Z80Parser::T__73);
    setState(1193);
    hlRegister();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExchangeSPPointerWithIXContext ------------------------------------------------------------------

Z80Parser::ExchangeSPPointerWithIXContext::ExchangeSPPointerWithIXContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::ExchangeCommandNameContext* Z80Parser::ExchangeSPPointerWithIXContext::exchangeCommandName() {
  return getRuleContext<Z80Parser::ExchangeCommandNameContext>(0);
}

Z80Parser::SpPointerContext* Z80Parser::ExchangeSPPointerWithIXContext::spPointer() {
  return getRuleContext<Z80Parser::SpPointerContext>(0);
}

Z80Parser::IxRegisterContext* Z80Parser::ExchangeSPPointerWithIXContext::ixRegister() {
  return getRuleContext<Z80Parser::IxRegisterContext>(0);
}


size_t Z80Parser::ExchangeSPPointerWithIXContext::getRuleIndex() const {
  return Z80Parser::RuleExchangeSPPointerWithIX;
}

void Z80Parser::ExchangeSPPointerWithIXContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExchangeSPPointerWithIX(this);
}

void Z80Parser::ExchangeSPPointerWithIXContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExchangeSPPointerWithIX(this);
}

Z80Parser::ExchangeSPPointerWithIXContext* Z80Parser::exchangeSPPointerWithIX() {
  ExchangeSPPointerWithIXContext *_localctx = _tracker.createInstance<ExchangeSPPointerWithIXContext>(_ctx, getState());
  enterRule(_localctx, 218, Z80Parser::RuleExchangeSPPointerWithIX);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1195);
    exchangeCommandName();
    setState(1196);
    spPointer();
    setState(1197);
    match(Z80Parser::T__73);
    setState(1198);
    ixRegister();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExchangeSPPointerWithIYContext ------------------------------------------------------------------

Z80Parser::ExchangeSPPointerWithIYContext::ExchangeSPPointerWithIYContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::ExchangeCommandNameContext* Z80Parser::ExchangeSPPointerWithIYContext::exchangeCommandName() {
  return getRuleContext<Z80Parser::ExchangeCommandNameContext>(0);
}

Z80Parser::SpPointerContext* Z80Parser::ExchangeSPPointerWithIYContext::spPointer() {
  return getRuleContext<Z80Parser::SpPointerContext>(0);
}

Z80Parser::IyRegisterContext* Z80Parser::ExchangeSPPointerWithIYContext::iyRegister() {
  return getRuleContext<Z80Parser::IyRegisterContext>(0);
}


size_t Z80Parser::ExchangeSPPointerWithIYContext::getRuleIndex() const {
  return Z80Parser::RuleExchangeSPPointerWithIY;
}

void Z80Parser::ExchangeSPPointerWithIYContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExchangeSPPointerWithIY(this);
}

void Z80Parser::ExchangeSPPointerWithIYContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExchangeSPPointerWithIY(this);
}

Z80Parser::ExchangeSPPointerWithIYContext* Z80Parser::exchangeSPPointerWithIY() {
  ExchangeSPPointerWithIYContext *_localctx = _tracker.createInstance<ExchangeSPPointerWithIYContext>(_ctx, getState());
  enterRule(_localctx, 220, Z80Parser::RuleExchangeSPPointerWithIY);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1200);
    exchangeCommandName();
    setState(1201);
    spPointer();
    setState(1202);
    match(Z80Parser::T__73);
    setState(1203);
    iyRegister();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LoadHLPointerIntoDEThenDecrementBCAndIncrementHLContext ------------------------------------------------------------------

Z80Parser::LoadHLPointerIntoDEThenDecrementBCAndIncrementHLContext::LoadHLPointerIntoDEThenDecrementBCAndIncrementHLContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t Z80Parser::LoadHLPointerIntoDEThenDecrementBCAndIncrementHLContext::getRuleIndex() const {
  return Z80Parser::RuleLoadHLPointerIntoDEThenDecrementBCAndIncrementHL;
}

void Z80Parser::LoadHLPointerIntoDEThenDecrementBCAndIncrementHLContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLoadHLPointerIntoDEThenDecrementBCAndIncrementHL(this);
}

void Z80Parser::LoadHLPointerIntoDEThenDecrementBCAndIncrementHLContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLoadHLPointerIntoDEThenDecrementBCAndIncrementHL(this);
}

Z80Parser::LoadHLPointerIntoDEThenDecrementBCAndIncrementHLContext* Z80Parser::loadHLPointerIntoDEThenDecrementBCAndIncrementHL() {
  LoadHLPointerIntoDEThenDecrementBCAndIncrementHLContext *_localctx = _tracker.createInstance<LoadHLPointerIntoDEThenDecrementBCAndIncrementHLContext>(_ctx, getState());
  enterRule(_localctx, 222, Z80Parser::RuleLoadHLPointerIntoDEThenDecrementBCAndIncrementHL);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1205);
    _la = _input->LA(1);
    if (!(_la == Z80Parser::T__82

    || _la == Z80Parser::T__83)) {
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

//----------------- LoadDEPointerWithHLPointerThenDecrementBCAndIncrementHLRepeatContext ------------------------------------------------------------------

Z80Parser::LoadDEPointerWithHLPointerThenDecrementBCAndIncrementHLRepeatContext::LoadDEPointerWithHLPointerThenDecrementBCAndIncrementHLRepeatContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t Z80Parser::LoadDEPointerWithHLPointerThenDecrementBCAndIncrementHLRepeatContext::getRuleIndex() const {
  return Z80Parser::RuleLoadDEPointerWithHLPointerThenDecrementBCAndIncrementHLRepeat;
}

void Z80Parser::LoadDEPointerWithHLPointerThenDecrementBCAndIncrementHLRepeatContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLoadDEPointerWithHLPointerThenDecrementBCAndIncrementHLRepeat(this);
}

void Z80Parser::LoadDEPointerWithHLPointerThenDecrementBCAndIncrementHLRepeatContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLoadDEPointerWithHLPointerThenDecrementBCAndIncrementHLRepeat(this);
}

Z80Parser::LoadDEPointerWithHLPointerThenDecrementBCAndIncrementHLRepeatContext* Z80Parser::loadDEPointerWithHLPointerThenDecrementBCAndIncrementHLRepeat() {
  LoadDEPointerWithHLPointerThenDecrementBCAndIncrementHLRepeatContext *_localctx = _tracker.createInstance<LoadDEPointerWithHLPointerThenDecrementBCAndIncrementHLRepeatContext>(_ctx, getState());
  enterRule(_localctx, 224, Z80Parser::RuleLoadDEPointerWithHLPointerThenDecrementBCAndIncrementHLRepeat);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1210);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Z80Parser::T__84: {
        enterOuterAlt(_localctx, 1);
        setState(1207);
        match(Z80Parser::T__84);
        break;
      }

      case Z80Parser::T__85: {
        enterOuterAlt(_localctx, 2);
        setState(1208);
        match(Z80Parser::T__85);
        break;
      }

      case Z80Parser::COMMENT:
      case Z80Parser::EOL: {
        enterOuterAlt(_localctx, 3);

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

//----------------- LoadDEPointerWithHLPointerThenDecrementBCAndHLContext ------------------------------------------------------------------

Z80Parser::LoadDEPointerWithHLPointerThenDecrementBCAndHLContext::LoadDEPointerWithHLPointerThenDecrementBCAndHLContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t Z80Parser::LoadDEPointerWithHLPointerThenDecrementBCAndHLContext::getRuleIndex() const {
  return Z80Parser::RuleLoadDEPointerWithHLPointerThenDecrementBCAndHL;
}

void Z80Parser::LoadDEPointerWithHLPointerThenDecrementBCAndHLContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLoadDEPointerWithHLPointerThenDecrementBCAndHL(this);
}

void Z80Parser::LoadDEPointerWithHLPointerThenDecrementBCAndHLContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLoadDEPointerWithHLPointerThenDecrementBCAndHL(this);
}

Z80Parser::LoadDEPointerWithHLPointerThenDecrementBCAndHLContext* Z80Parser::loadDEPointerWithHLPointerThenDecrementBCAndHL() {
  LoadDEPointerWithHLPointerThenDecrementBCAndHLContext *_localctx = _tracker.createInstance<LoadDEPointerWithHLPointerThenDecrementBCAndHLContext>(_ctx, getState());
  enterRule(_localctx, 226, Z80Parser::RuleLoadDEPointerWithHLPointerThenDecrementBCAndHL);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1215);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Z80Parser::T__86: {
        enterOuterAlt(_localctx, 1);
        setState(1212);
        match(Z80Parser::T__86);
        break;
      }

      case Z80Parser::T__87: {
        enterOuterAlt(_localctx, 2);
        setState(1213);
        match(Z80Parser::T__87);
        break;
      }

      case Z80Parser::COMMENT:
      case Z80Parser::EOL: {
        enterOuterAlt(_localctx, 3);

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

//----------------- LoadDEPointerWithHLPointerThenDecrementBCAndHLRepeatContext ------------------------------------------------------------------

Z80Parser::LoadDEPointerWithHLPointerThenDecrementBCAndHLRepeatContext::LoadDEPointerWithHLPointerThenDecrementBCAndHLRepeatContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t Z80Parser::LoadDEPointerWithHLPointerThenDecrementBCAndHLRepeatContext::getRuleIndex() const {
  return Z80Parser::RuleLoadDEPointerWithHLPointerThenDecrementBCAndHLRepeat;
}

void Z80Parser::LoadDEPointerWithHLPointerThenDecrementBCAndHLRepeatContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLoadDEPointerWithHLPointerThenDecrementBCAndHLRepeat(this);
}

void Z80Parser::LoadDEPointerWithHLPointerThenDecrementBCAndHLRepeatContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLoadDEPointerWithHLPointerThenDecrementBCAndHLRepeat(this);
}

Z80Parser::LoadDEPointerWithHLPointerThenDecrementBCAndHLRepeatContext* Z80Parser::loadDEPointerWithHLPointerThenDecrementBCAndHLRepeat() {
  LoadDEPointerWithHLPointerThenDecrementBCAndHLRepeatContext *_localctx = _tracker.createInstance<LoadDEPointerWithHLPointerThenDecrementBCAndHLRepeatContext>(_ctx, getState());
  enterRule(_localctx, 228, Z80Parser::RuleLoadDEPointerWithHLPointerThenDecrementBCAndHLRepeat);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1220);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Z80Parser::T__88: {
        enterOuterAlt(_localctx, 1);
        setState(1217);
        match(Z80Parser::T__88);
        break;
      }

      case Z80Parser::T__89: {
        enterOuterAlt(_localctx, 2);
        setState(1218);
        match(Z80Parser::T__89);
        break;
      }

      case Z80Parser::COMMENT:
      case Z80Parser::EOL: {
        enterOuterAlt(_localctx, 3);

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

//----------------- CompareAToHLPointerThenIncrementHLAndDecrementBCContext ------------------------------------------------------------------

Z80Parser::CompareAToHLPointerThenIncrementHLAndDecrementBCContext::CompareAToHLPointerThenIncrementHLAndDecrementBCContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t Z80Parser::CompareAToHLPointerThenIncrementHLAndDecrementBCContext::getRuleIndex() const {
  return Z80Parser::RuleCompareAToHLPointerThenIncrementHLAndDecrementBC;
}

void Z80Parser::CompareAToHLPointerThenIncrementHLAndDecrementBCContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCompareAToHLPointerThenIncrementHLAndDecrementBC(this);
}

void Z80Parser::CompareAToHLPointerThenIncrementHLAndDecrementBCContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCompareAToHLPointerThenIncrementHLAndDecrementBC(this);
}

Z80Parser::CompareAToHLPointerThenIncrementHLAndDecrementBCContext* Z80Parser::compareAToHLPointerThenIncrementHLAndDecrementBC() {
  CompareAToHLPointerThenIncrementHLAndDecrementBCContext *_localctx = _tracker.createInstance<CompareAToHLPointerThenIncrementHLAndDecrementBCContext>(_ctx, getState());
  enterRule(_localctx, 230, Z80Parser::RuleCompareAToHLPointerThenIncrementHLAndDecrementBC);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1222);
    _la = _input->LA(1);
    if (!(_la == Z80Parser::T__90

    || _la == Z80Parser::T__91)) {
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

//----------------- CompareAToHLPointerThenIncrementHLAndDecrementBCRepeatContext ------------------------------------------------------------------

Z80Parser::CompareAToHLPointerThenIncrementHLAndDecrementBCRepeatContext::CompareAToHLPointerThenIncrementHLAndDecrementBCRepeatContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t Z80Parser::CompareAToHLPointerThenIncrementHLAndDecrementBCRepeatContext::getRuleIndex() const {
  return Z80Parser::RuleCompareAToHLPointerThenIncrementHLAndDecrementBCRepeat;
}

void Z80Parser::CompareAToHLPointerThenIncrementHLAndDecrementBCRepeatContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCompareAToHLPointerThenIncrementHLAndDecrementBCRepeat(this);
}

void Z80Parser::CompareAToHLPointerThenIncrementHLAndDecrementBCRepeatContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCompareAToHLPointerThenIncrementHLAndDecrementBCRepeat(this);
}

Z80Parser::CompareAToHLPointerThenIncrementHLAndDecrementBCRepeatContext* Z80Parser::compareAToHLPointerThenIncrementHLAndDecrementBCRepeat() {
  CompareAToHLPointerThenIncrementHLAndDecrementBCRepeatContext *_localctx = _tracker.createInstance<CompareAToHLPointerThenIncrementHLAndDecrementBCRepeatContext>(_ctx, getState());
  enterRule(_localctx, 232, Z80Parser::RuleCompareAToHLPointerThenIncrementHLAndDecrementBCRepeat);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1224);
    _la = _input->LA(1);
    if (!(_la == Z80Parser::T__92

    || _la == Z80Parser::T__93)) {
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

//----------------- CompareAToHLPointerThenDecrementHLAndBCContext ------------------------------------------------------------------

Z80Parser::CompareAToHLPointerThenDecrementHLAndBCContext::CompareAToHLPointerThenDecrementHLAndBCContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t Z80Parser::CompareAToHLPointerThenDecrementHLAndBCContext::getRuleIndex() const {
  return Z80Parser::RuleCompareAToHLPointerThenDecrementHLAndBC;
}

void Z80Parser::CompareAToHLPointerThenDecrementHLAndBCContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCompareAToHLPointerThenDecrementHLAndBC(this);
}

void Z80Parser::CompareAToHLPointerThenDecrementHLAndBCContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCompareAToHLPointerThenDecrementHLAndBC(this);
}

Z80Parser::CompareAToHLPointerThenDecrementHLAndBCContext* Z80Parser::compareAToHLPointerThenDecrementHLAndBC() {
  CompareAToHLPointerThenDecrementHLAndBCContext *_localctx = _tracker.createInstance<CompareAToHLPointerThenDecrementHLAndBCContext>(_ctx, getState());
  enterRule(_localctx, 234, Z80Parser::RuleCompareAToHLPointerThenDecrementHLAndBC);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1226);
    _la = _input->LA(1);
    if (!(_la == Z80Parser::T__94

    || _la == Z80Parser::T__95)) {
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

//----------------- CompareAToHLPointerThenDecrementHLAndBCRepeatContext ------------------------------------------------------------------

Z80Parser::CompareAToHLPointerThenDecrementHLAndBCRepeatContext::CompareAToHLPointerThenDecrementHLAndBCRepeatContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t Z80Parser::CompareAToHLPointerThenDecrementHLAndBCRepeatContext::getRuleIndex() const {
  return Z80Parser::RuleCompareAToHLPointerThenDecrementHLAndBCRepeat;
}

void Z80Parser::CompareAToHLPointerThenDecrementHLAndBCRepeatContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCompareAToHLPointerThenDecrementHLAndBCRepeat(this);
}

void Z80Parser::CompareAToHLPointerThenDecrementHLAndBCRepeatContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCompareAToHLPointerThenDecrementHLAndBCRepeat(this);
}

Z80Parser::CompareAToHLPointerThenDecrementHLAndBCRepeatContext* Z80Parser::compareAToHLPointerThenDecrementHLAndBCRepeat() {
  CompareAToHLPointerThenDecrementHLAndBCRepeatContext *_localctx = _tracker.createInstance<CompareAToHLPointerThenDecrementHLAndBCRepeatContext>(_ctx, getState());
  enterRule(_localctx, 236, Z80Parser::RuleCompareAToHLPointerThenDecrementHLAndBCRepeat);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1228);
    _la = _input->LA(1);
    if (!(_la == Z80Parser::T__96

    || _la == Z80Parser::T__97)) {
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

//----------------- ExchagneAndBlockTransfrerCommandContext ------------------------------------------------------------------

Z80Parser::ExchagneAndBlockTransfrerCommandContext::ExchagneAndBlockTransfrerCommandContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::ExchangeDEWithHLContext* Z80Parser::ExchagneAndBlockTransfrerCommandContext::exchangeDEWithHL() {
  return getRuleContext<Z80Parser::ExchangeDEWithHLContext>(0);
}

Z80Parser::ExchangeAFWithShadowAFContext* Z80Parser::ExchagneAndBlockTransfrerCommandContext::exchangeAFWithShadowAF() {
  return getRuleContext<Z80Parser::ExchangeAFWithShadowAFContext>(0);
}

Z80Parser::ExchangeMultipleWordRegistersContext* Z80Parser::ExchagneAndBlockTransfrerCommandContext::exchangeMultipleWordRegisters() {
  return getRuleContext<Z80Parser::ExchangeMultipleWordRegistersContext>(0);
}

Z80Parser::ExchangeSPPointerWithHLContext* Z80Parser::ExchagneAndBlockTransfrerCommandContext::exchangeSPPointerWithHL() {
  return getRuleContext<Z80Parser::ExchangeSPPointerWithHLContext>(0);
}

Z80Parser::ExchangeSPPointerWithIXContext* Z80Parser::ExchagneAndBlockTransfrerCommandContext::exchangeSPPointerWithIX() {
  return getRuleContext<Z80Parser::ExchangeSPPointerWithIXContext>(0);
}

Z80Parser::ExchangeSPPointerWithIYContext* Z80Parser::ExchagneAndBlockTransfrerCommandContext::exchangeSPPointerWithIY() {
  return getRuleContext<Z80Parser::ExchangeSPPointerWithIYContext>(0);
}

Z80Parser::LoadHLPointerIntoDEThenDecrementBCAndIncrementHLContext* Z80Parser::ExchagneAndBlockTransfrerCommandContext::loadHLPointerIntoDEThenDecrementBCAndIncrementHL() {
  return getRuleContext<Z80Parser::LoadHLPointerIntoDEThenDecrementBCAndIncrementHLContext>(0);
}

Z80Parser::LoadDEPointerWithHLPointerThenDecrementBCAndIncrementHLRepeatContext* Z80Parser::ExchagneAndBlockTransfrerCommandContext::loadDEPointerWithHLPointerThenDecrementBCAndIncrementHLRepeat() {
  return getRuleContext<Z80Parser::LoadDEPointerWithHLPointerThenDecrementBCAndIncrementHLRepeatContext>(0);
}

Z80Parser::LoadDEPointerWithHLPointerThenDecrementBCAndHLContext* Z80Parser::ExchagneAndBlockTransfrerCommandContext::loadDEPointerWithHLPointerThenDecrementBCAndHL() {
  return getRuleContext<Z80Parser::LoadDEPointerWithHLPointerThenDecrementBCAndHLContext>(0);
}

Z80Parser::LoadDEPointerWithHLPointerThenDecrementBCAndHLRepeatContext* Z80Parser::ExchagneAndBlockTransfrerCommandContext::loadDEPointerWithHLPointerThenDecrementBCAndHLRepeat() {
  return getRuleContext<Z80Parser::LoadDEPointerWithHLPointerThenDecrementBCAndHLRepeatContext>(0);
}

Z80Parser::CompareAToHLPointerThenIncrementHLAndDecrementBCContext* Z80Parser::ExchagneAndBlockTransfrerCommandContext::compareAToHLPointerThenIncrementHLAndDecrementBC() {
  return getRuleContext<Z80Parser::CompareAToHLPointerThenIncrementHLAndDecrementBCContext>(0);
}

Z80Parser::CompareAToHLPointerThenIncrementHLAndDecrementBCRepeatContext* Z80Parser::ExchagneAndBlockTransfrerCommandContext::compareAToHLPointerThenIncrementHLAndDecrementBCRepeat() {
  return getRuleContext<Z80Parser::CompareAToHLPointerThenIncrementHLAndDecrementBCRepeatContext>(0);
}

Z80Parser::CompareAToHLPointerThenDecrementHLAndBCContext* Z80Parser::ExchagneAndBlockTransfrerCommandContext::compareAToHLPointerThenDecrementHLAndBC() {
  return getRuleContext<Z80Parser::CompareAToHLPointerThenDecrementHLAndBCContext>(0);
}

Z80Parser::CompareAToHLPointerThenDecrementHLAndBCRepeatContext* Z80Parser::ExchagneAndBlockTransfrerCommandContext::compareAToHLPointerThenDecrementHLAndBCRepeat() {
  return getRuleContext<Z80Parser::CompareAToHLPointerThenDecrementHLAndBCRepeatContext>(0);
}


size_t Z80Parser::ExchagneAndBlockTransfrerCommandContext::getRuleIndex() const {
  return Z80Parser::RuleExchagneAndBlockTransfrerCommand;
}

void Z80Parser::ExchagneAndBlockTransfrerCommandContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExchagneAndBlockTransfrerCommand(this);
}

void Z80Parser::ExchagneAndBlockTransfrerCommandContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExchagneAndBlockTransfrerCommand(this);
}

Z80Parser::ExchagneAndBlockTransfrerCommandContext* Z80Parser::exchagneAndBlockTransfrerCommand() {
  ExchagneAndBlockTransfrerCommandContext *_localctx = _tracker.createInstance<ExchagneAndBlockTransfrerCommandContext>(_ctx, getState());
  enterRule(_localctx, 238, Z80Parser::RuleExchagneAndBlockTransfrerCommand);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1244);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 27, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1230);
      exchangeDEWithHL();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1231);
      exchangeAFWithShadowAF();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1232);
      exchangeMultipleWordRegisters();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1233);
      exchangeSPPointerWithHL();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(1234);
      exchangeSPPointerWithIX();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(1235);
      exchangeSPPointerWithIY();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(1236);
      loadHLPointerIntoDEThenDecrementBCAndIncrementHL();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(1237);
      loadDEPointerWithHLPointerThenDecrementBCAndIncrementHLRepeat();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(1238);
      loadDEPointerWithHLPointerThenDecrementBCAndHL();
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(1239);
      loadDEPointerWithHLPointerThenDecrementBCAndHLRepeat();
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(1240);
      compareAToHLPointerThenIncrementHLAndDecrementBC();
      break;
    }

    case 12: {
      enterOuterAlt(_localctx, 12);
      setState(1241);
      compareAToHLPointerThenIncrementHLAndDecrementBCRepeat();
      break;
    }

    case 13: {
      enterOuterAlt(_localctx, 13);
      setState(1242);
      compareAToHLPointerThenDecrementHLAndBC();
      break;
    }

    case 14: {
      enterOuterAlt(_localctx, 14);
      setState(1243);
      compareAToHLPointerThenDecrementHLAndBCRepeat();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AddCommandNameContext ------------------------------------------------------------------

Z80Parser::AddCommandNameContext::AddCommandNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t Z80Parser::AddCommandNameContext::getRuleIndex() const {
  return Z80Parser::RuleAddCommandName;
}

void Z80Parser::AddCommandNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAddCommandName(this);
}

void Z80Parser::AddCommandNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAddCommandName(this);
}

Z80Parser::AddCommandNameContext* Z80Parser::addCommandName() {
  AddCommandNameContext *_localctx = _tracker.createInstance<AddCommandNameContext>(_ctx, getState());
  enterRule(_localctx, 240, Z80Parser::RuleAddCommandName);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1246);
    _la = _input->LA(1);
    if (!(_la == Z80Parser::T__98

    || _la == Z80Parser::T__99)) {
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

//----------------- AddWithCarryCommandNameContext ------------------------------------------------------------------

Z80Parser::AddWithCarryCommandNameContext::AddWithCarryCommandNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t Z80Parser::AddWithCarryCommandNameContext::getRuleIndex() const {
  return Z80Parser::RuleAddWithCarryCommandName;
}

void Z80Parser::AddWithCarryCommandNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAddWithCarryCommandName(this);
}

void Z80Parser::AddWithCarryCommandNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAddWithCarryCommandName(this);
}

Z80Parser::AddWithCarryCommandNameContext* Z80Parser::addWithCarryCommandName() {
  AddWithCarryCommandNameContext *_localctx = _tracker.createInstance<AddWithCarryCommandNameContext>(_ctx, getState());
  enterRule(_localctx, 242, Z80Parser::RuleAddWithCarryCommandName);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1248);
    _la = _input->LA(1);
    if (!(_la == Z80Parser::T__100

    || _la == Z80Parser::T__101)) {
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

//----------------- SubtractCommandNameContext ------------------------------------------------------------------

Z80Parser::SubtractCommandNameContext::SubtractCommandNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t Z80Parser::SubtractCommandNameContext::getRuleIndex() const {
  return Z80Parser::RuleSubtractCommandName;
}

void Z80Parser::SubtractCommandNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSubtractCommandName(this);
}

void Z80Parser::SubtractCommandNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSubtractCommandName(this);
}

Z80Parser::SubtractCommandNameContext* Z80Parser::subtractCommandName() {
  SubtractCommandNameContext *_localctx = _tracker.createInstance<SubtractCommandNameContext>(_ctx, getState());
  enterRule(_localctx, 244, Z80Parser::RuleSubtractCommandName);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1250);
    _la = _input->LA(1);
    if (!(_la == Z80Parser::T__102

    || _la == Z80Parser::T__103)) {
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

//----------------- SubtractWithBorrowCommandNameContext ------------------------------------------------------------------

Z80Parser::SubtractWithBorrowCommandNameContext::SubtractWithBorrowCommandNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t Z80Parser::SubtractWithBorrowCommandNameContext::getRuleIndex() const {
  return Z80Parser::RuleSubtractWithBorrowCommandName;
}

void Z80Parser::SubtractWithBorrowCommandNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSubtractWithBorrowCommandName(this);
}

void Z80Parser::SubtractWithBorrowCommandNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSubtractWithBorrowCommandName(this);
}

Z80Parser::SubtractWithBorrowCommandNameContext* Z80Parser::subtractWithBorrowCommandName() {
  SubtractWithBorrowCommandNameContext *_localctx = _tracker.createInstance<SubtractWithBorrowCommandNameContext>(_ctx, getState());
  enterRule(_localctx, 246, Z80Parser::RuleSubtractWithBorrowCommandName);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1252);
    _la = _input->LA(1);
    if (!(_la == Z80Parser::T__104

    || _la == Z80Parser::T__105)) {
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

//----------------- AndCommandNameContext ------------------------------------------------------------------

Z80Parser::AndCommandNameContext::AndCommandNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t Z80Parser::AndCommandNameContext::getRuleIndex() const {
  return Z80Parser::RuleAndCommandName;
}

void Z80Parser::AndCommandNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAndCommandName(this);
}

void Z80Parser::AndCommandNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAndCommandName(this);
}

Z80Parser::AndCommandNameContext* Z80Parser::andCommandName() {
  AndCommandNameContext *_localctx = _tracker.createInstance<AndCommandNameContext>(_ctx, getState());
  enterRule(_localctx, 248, Z80Parser::RuleAndCommandName);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1254);
    _la = _input->LA(1);
    if (!(_la == Z80Parser::T__106

    || _la == Z80Parser::T__107)) {
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

//----------------- OrCommandNameContext ------------------------------------------------------------------

Z80Parser::OrCommandNameContext::OrCommandNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t Z80Parser::OrCommandNameContext::getRuleIndex() const {
  return Z80Parser::RuleOrCommandName;
}

void Z80Parser::OrCommandNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOrCommandName(this);
}

void Z80Parser::OrCommandNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOrCommandName(this);
}

Z80Parser::OrCommandNameContext* Z80Parser::orCommandName() {
  OrCommandNameContext *_localctx = _tracker.createInstance<OrCommandNameContext>(_ctx, getState());
  enterRule(_localctx, 250, Z80Parser::RuleOrCommandName);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1256);
    _la = _input->LA(1);
    if (!(_la == Z80Parser::T__108

    || _la == Z80Parser::T__109)) {
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

//----------------- XorCommandNameContext ------------------------------------------------------------------

Z80Parser::XorCommandNameContext::XorCommandNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t Z80Parser::XorCommandNameContext::getRuleIndex() const {
  return Z80Parser::RuleXorCommandName;
}

void Z80Parser::XorCommandNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterXorCommandName(this);
}

void Z80Parser::XorCommandNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitXorCommandName(this);
}

Z80Parser::XorCommandNameContext* Z80Parser::xorCommandName() {
  XorCommandNameContext *_localctx = _tracker.createInstance<XorCommandNameContext>(_ctx, getState());
  enterRule(_localctx, 252, Z80Parser::RuleXorCommandName);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1258);
    _la = _input->LA(1);
    if (!(_la == Z80Parser::T__110

    || _la == Z80Parser::T__111)) {
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

//----------------- CompareCommandNameContext ------------------------------------------------------------------

Z80Parser::CompareCommandNameContext::CompareCommandNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t Z80Parser::CompareCommandNameContext::getRuleIndex() const {
  return Z80Parser::RuleCompareCommandName;
}

void Z80Parser::CompareCommandNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCompareCommandName(this);
}

void Z80Parser::CompareCommandNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCompareCommandName(this);
}

Z80Parser::CompareCommandNameContext* Z80Parser::compareCommandName() {
  CompareCommandNameContext *_localctx = _tracker.createInstance<CompareCommandNameContext>(_ctx, getState());
  enterRule(_localctx, 254, Z80Parser::RuleCompareCommandName);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1260);
    _la = _input->LA(1);
    if (!(_la == Z80Parser::T__112

    || _la == Z80Parser::T__113)) {
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

//----------------- IncrementCommandNameContext ------------------------------------------------------------------

Z80Parser::IncrementCommandNameContext::IncrementCommandNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t Z80Parser::IncrementCommandNameContext::getRuleIndex() const {
  return Z80Parser::RuleIncrementCommandName;
}

void Z80Parser::IncrementCommandNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIncrementCommandName(this);
}

void Z80Parser::IncrementCommandNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIncrementCommandName(this);
}

Z80Parser::IncrementCommandNameContext* Z80Parser::incrementCommandName() {
  IncrementCommandNameContext *_localctx = _tracker.createInstance<IncrementCommandNameContext>(_ctx, getState());
  enterRule(_localctx, 256, Z80Parser::RuleIncrementCommandName);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1262);
    _la = _input->LA(1);
    if (!(_la == Z80Parser::T__114

    || _la == Z80Parser::T__115)) {
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

//----------------- DecrementCommandNameContext ------------------------------------------------------------------

Z80Parser::DecrementCommandNameContext::DecrementCommandNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t Z80Parser::DecrementCommandNameContext::getRuleIndex() const {
  return Z80Parser::RuleDecrementCommandName;
}

void Z80Parser::DecrementCommandNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDecrementCommandName(this);
}

void Z80Parser::DecrementCommandNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDecrementCommandName(this);
}

Z80Parser::DecrementCommandNameContext* Z80Parser::decrementCommandName() {
  DecrementCommandNameContext *_localctx = _tracker.createInstance<DecrementCommandNameContext>(_ctx, getState());
  enterRule(_localctx, 258, Z80Parser::RuleDecrementCommandName);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1264);
    _la = _input->LA(1);
    if (!(_la == Z80Parser::T__116

    || _la == Z80Parser::T__117)) {
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

//----------------- AddAAndRegisterContext ------------------------------------------------------------------

Z80Parser::AddAAndRegisterContext::AddAAndRegisterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::AddCommandNameContext* Z80Parser::AddAAndRegisterContext::addCommandName() {
  return getRuleContext<Z80Parser::AddCommandNameContext>(0);
}

Z80Parser::SimpleByteRegisterContext* Z80Parser::AddAAndRegisterContext::simpleByteRegister() {
  return getRuleContext<Z80Parser::SimpleByteRegisterContext>(0);
}

Z80Parser::ARegisterContext* Z80Parser::AddAAndRegisterContext::aRegister() {
  return getRuleContext<Z80Parser::ARegisterContext>(0);
}


size_t Z80Parser::AddAAndRegisterContext::getRuleIndex() const {
  return Z80Parser::RuleAddAAndRegister;
}

void Z80Parser::AddAAndRegisterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAddAAndRegister(this);
}

void Z80Parser::AddAAndRegisterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAddAAndRegister(this);
}

Z80Parser::AddAAndRegisterContext* Z80Parser::addAAndRegister() {
  AddAAndRegisterContext *_localctx = _tracker.createInstance<AddAAndRegisterContext>(_ctx, getState());
  enterRule(_localctx, 260, Z80Parser::RuleAddAAndRegister);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1274);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 28, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1266);
      addCommandName();
      setState(1267);
      dynamic_cast<AddAAndRegisterContext *>(_localctx)->source = simpleByteRegister();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1269);
      addCommandName();
      setState(1270);
      aRegister();
      setState(1271);
      match(Z80Parser::T__73);
      setState(1272);
      dynamic_cast<AddAAndRegisterContext *>(_localctx)->source = simpleByteRegister();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AddAAndImmediateByteContext ------------------------------------------------------------------

Z80Parser::AddAAndImmediateByteContext::AddAAndImmediateByteContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::AddCommandNameContext* Z80Parser::AddAAndImmediateByteContext::addCommandName() {
  return getRuleContext<Z80Parser::AddCommandNameContext>(0);
}

Z80Parser::NumberContext* Z80Parser::AddAAndImmediateByteContext::number() {
  return getRuleContext<Z80Parser::NumberContext>(0);
}

Z80Parser::ARegisterContext* Z80Parser::AddAAndImmediateByteContext::aRegister() {
  return getRuleContext<Z80Parser::ARegisterContext>(0);
}


size_t Z80Parser::AddAAndImmediateByteContext::getRuleIndex() const {
  return Z80Parser::RuleAddAAndImmediateByte;
}

void Z80Parser::AddAAndImmediateByteContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAddAAndImmediateByte(this);
}

void Z80Parser::AddAAndImmediateByteContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAddAAndImmediateByte(this);
}

Z80Parser::AddAAndImmediateByteContext* Z80Parser::addAAndImmediateByte() {
  AddAAndImmediateByteContext *_localctx = _tracker.createInstance<AddAAndImmediateByteContext>(_ctx, getState());
  enterRule(_localctx, 262, Z80Parser::RuleAddAAndImmediateByte);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1284);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 29, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1276);
      addCommandName();
      setState(1277);
      dynamic_cast<AddAAndImmediateByteContext *>(_localctx)->source = number();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1279);
      addCommandName();
      setState(1280);
      aRegister();
      setState(1281);
      match(Z80Parser::T__73);
      setState(1282);
      dynamic_cast<AddAAndImmediateByteContext *>(_localctx)->source = number();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AddAAndIXHContext ------------------------------------------------------------------

Z80Parser::AddAAndIXHContext::AddAAndIXHContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::AddCommandNameContext* Z80Parser::AddAAndIXHContext::addCommandName() {
  return getRuleContext<Z80Parser::AddCommandNameContext>(0);
}

Z80Parser::IxHighRegisterContext* Z80Parser::AddAAndIXHContext::ixHighRegister() {
  return getRuleContext<Z80Parser::IxHighRegisterContext>(0);
}

Z80Parser::ARegisterContext* Z80Parser::AddAAndIXHContext::aRegister() {
  return getRuleContext<Z80Parser::ARegisterContext>(0);
}


size_t Z80Parser::AddAAndIXHContext::getRuleIndex() const {
  return Z80Parser::RuleAddAAndIXH;
}

void Z80Parser::AddAAndIXHContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAddAAndIXH(this);
}

void Z80Parser::AddAAndIXHContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAddAAndIXH(this);
}

Z80Parser::AddAAndIXHContext* Z80Parser::addAAndIXH() {
  AddAAndIXHContext *_localctx = _tracker.createInstance<AddAAndIXHContext>(_ctx, getState());
  enterRule(_localctx, 264, Z80Parser::RuleAddAAndIXH);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1294);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 30, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1286);
      addCommandName();
      setState(1287);
      dynamic_cast<AddAAndIXHContext *>(_localctx)->source = ixHighRegister();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1289);
      addCommandName();
      setState(1290);
      aRegister();
      setState(1291);
      match(Z80Parser::T__73);
      setState(1292);
      dynamic_cast<AddAAndIXHContext *>(_localctx)->source = ixHighRegister();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AddAAndIXLContext ------------------------------------------------------------------

Z80Parser::AddAAndIXLContext::AddAAndIXLContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::AddCommandNameContext* Z80Parser::AddAAndIXLContext::addCommandName() {
  return getRuleContext<Z80Parser::AddCommandNameContext>(0);
}

Z80Parser::IxLowRegisterContext* Z80Parser::AddAAndIXLContext::ixLowRegister() {
  return getRuleContext<Z80Parser::IxLowRegisterContext>(0);
}

Z80Parser::ARegisterContext* Z80Parser::AddAAndIXLContext::aRegister() {
  return getRuleContext<Z80Parser::ARegisterContext>(0);
}


size_t Z80Parser::AddAAndIXLContext::getRuleIndex() const {
  return Z80Parser::RuleAddAAndIXL;
}

void Z80Parser::AddAAndIXLContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAddAAndIXL(this);
}

void Z80Parser::AddAAndIXLContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAddAAndIXL(this);
}

Z80Parser::AddAAndIXLContext* Z80Parser::addAAndIXL() {
  AddAAndIXLContext *_localctx = _tracker.createInstance<AddAAndIXLContext>(_ctx, getState());
  enterRule(_localctx, 266, Z80Parser::RuleAddAAndIXL);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1304);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 31, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1296);
      addCommandName();
      setState(1297);
      dynamic_cast<AddAAndIXLContext *>(_localctx)->source = ixLowRegister();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1299);
      addCommandName();
      setState(1300);
      aRegister();
      setState(1301);
      match(Z80Parser::T__73);
      setState(1302);
      dynamic_cast<AddAAndIXLContext *>(_localctx)->source = ixLowRegister();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AddAAndIYHContext ------------------------------------------------------------------

Z80Parser::AddAAndIYHContext::AddAAndIYHContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::AddCommandNameContext* Z80Parser::AddAAndIYHContext::addCommandName() {
  return getRuleContext<Z80Parser::AddCommandNameContext>(0);
}

Z80Parser::IyHighRegisterContext* Z80Parser::AddAAndIYHContext::iyHighRegister() {
  return getRuleContext<Z80Parser::IyHighRegisterContext>(0);
}

Z80Parser::ARegisterContext* Z80Parser::AddAAndIYHContext::aRegister() {
  return getRuleContext<Z80Parser::ARegisterContext>(0);
}


size_t Z80Parser::AddAAndIYHContext::getRuleIndex() const {
  return Z80Parser::RuleAddAAndIYH;
}

void Z80Parser::AddAAndIYHContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAddAAndIYH(this);
}

void Z80Parser::AddAAndIYHContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAddAAndIYH(this);
}

Z80Parser::AddAAndIYHContext* Z80Parser::addAAndIYH() {
  AddAAndIYHContext *_localctx = _tracker.createInstance<AddAAndIYHContext>(_ctx, getState());
  enterRule(_localctx, 268, Z80Parser::RuleAddAAndIYH);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1314);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 32, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1306);
      addCommandName();
      setState(1307);
      dynamic_cast<AddAAndIYHContext *>(_localctx)->source = iyHighRegister();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1309);
      addCommandName();
      setState(1310);
      aRegister();
      setState(1311);
      match(Z80Parser::T__73);
      setState(1312);
      dynamic_cast<AddAAndIYHContext *>(_localctx)->source = iyHighRegister();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AddAAndIYLContext ------------------------------------------------------------------

Z80Parser::AddAAndIYLContext::AddAAndIYLContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::AddCommandNameContext* Z80Parser::AddAAndIYLContext::addCommandName() {
  return getRuleContext<Z80Parser::AddCommandNameContext>(0);
}

Z80Parser::IyLowRegisterContext* Z80Parser::AddAAndIYLContext::iyLowRegister() {
  return getRuleContext<Z80Parser::IyLowRegisterContext>(0);
}

Z80Parser::ARegisterContext* Z80Parser::AddAAndIYLContext::aRegister() {
  return getRuleContext<Z80Parser::ARegisterContext>(0);
}


size_t Z80Parser::AddAAndIYLContext::getRuleIndex() const {
  return Z80Parser::RuleAddAAndIYL;
}

void Z80Parser::AddAAndIYLContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAddAAndIYL(this);
}

void Z80Parser::AddAAndIYLContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAddAAndIYL(this);
}

Z80Parser::AddAAndIYLContext* Z80Parser::addAAndIYL() {
  AddAAndIYLContext *_localctx = _tracker.createInstance<AddAAndIYLContext>(_ctx, getState());
  enterRule(_localctx, 270, Z80Parser::RuleAddAAndIYL);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1324);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 33, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1316);
      addCommandName();
      setState(1317);
      dynamic_cast<AddAAndIYLContext *>(_localctx)->source = iyLowRegister();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1319);
      addCommandName();
      setState(1320);
      aRegister();
      setState(1321);
      match(Z80Parser::T__73);
      setState(1322);
      dynamic_cast<AddAAndIYLContext *>(_localctx)->source = iyLowRegister();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AddAAndHLPointerContext ------------------------------------------------------------------

Z80Parser::AddAAndHLPointerContext::AddAAndHLPointerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::AddCommandNameContext* Z80Parser::AddAAndHLPointerContext::addCommandName() {
  return getRuleContext<Z80Parser::AddCommandNameContext>(0);
}

Z80Parser::HlPointerContext* Z80Parser::AddAAndHLPointerContext::hlPointer() {
  return getRuleContext<Z80Parser::HlPointerContext>(0);
}

Z80Parser::ARegisterContext* Z80Parser::AddAAndHLPointerContext::aRegister() {
  return getRuleContext<Z80Parser::ARegisterContext>(0);
}


size_t Z80Parser::AddAAndHLPointerContext::getRuleIndex() const {
  return Z80Parser::RuleAddAAndHLPointer;
}

void Z80Parser::AddAAndHLPointerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAddAAndHLPointer(this);
}

void Z80Parser::AddAAndHLPointerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAddAAndHLPointer(this);
}

Z80Parser::AddAAndHLPointerContext* Z80Parser::addAAndHLPointer() {
  AddAAndHLPointerContext *_localctx = _tracker.createInstance<AddAAndHLPointerContext>(_ctx, getState());
  enterRule(_localctx, 272, Z80Parser::RuleAddAAndHLPointer);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1334);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 34, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1326);
      addCommandName();
      setState(1327);
      dynamic_cast<AddAAndHLPointerContext *>(_localctx)->source = hlPointer();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1329);
      addCommandName();
      setState(1330);
      aRegister();
      setState(1331);
      match(Z80Parser::T__73);
      setState(1332);
      dynamic_cast<AddAAndHLPointerContext *>(_localctx)->source = hlPointer();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AddAAndIXOffsetContext ------------------------------------------------------------------

Z80Parser::AddAAndIXOffsetContext::AddAAndIXOffsetContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::AddCommandNameContext* Z80Parser::AddAAndIXOffsetContext::addCommandName() {
  return getRuleContext<Z80Parser::AddCommandNameContext>(0);
}

Z80Parser::IxPointerWithOffsetContext* Z80Parser::AddAAndIXOffsetContext::ixPointerWithOffset() {
  return getRuleContext<Z80Parser::IxPointerWithOffsetContext>(0);
}

Z80Parser::ARegisterContext* Z80Parser::AddAAndIXOffsetContext::aRegister() {
  return getRuleContext<Z80Parser::ARegisterContext>(0);
}


size_t Z80Parser::AddAAndIXOffsetContext::getRuleIndex() const {
  return Z80Parser::RuleAddAAndIXOffset;
}

void Z80Parser::AddAAndIXOffsetContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAddAAndIXOffset(this);
}

void Z80Parser::AddAAndIXOffsetContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAddAAndIXOffset(this);
}

Z80Parser::AddAAndIXOffsetContext* Z80Parser::addAAndIXOffset() {
  AddAAndIXOffsetContext *_localctx = _tracker.createInstance<AddAAndIXOffsetContext>(_ctx, getState());
  enterRule(_localctx, 274, Z80Parser::RuleAddAAndIXOffset);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1344);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 35, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1336);
      addCommandName();
      setState(1337);
      dynamic_cast<AddAAndIXOffsetContext *>(_localctx)->source = ixPointerWithOffset();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1339);
      addCommandName();
      setState(1340);
      aRegister();
      setState(1341);
      match(Z80Parser::T__73);
      setState(1342);
      dynamic_cast<AddAAndIXOffsetContext *>(_localctx)->source = ixPointerWithOffset();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AddAAndIYOffsetContext ------------------------------------------------------------------

Z80Parser::AddAAndIYOffsetContext::AddAAndIYOffsetContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::AddCommandNameContext* Z80Parser::AddAAndIYOffsetContext::addCommandName() {
  return getRuleContext<Z80Parser::AddCommandNameContext>(0);
}

Z80Parser::IyPointerWithOffsetContext* Z80Parser::AddAAndIYOffsetContext::iyPointerWithOffset() {
  return getRuleContext<Z80Parser::IyPointerWithOffsetContext>(0);
}

Z80Parser::ARegisterContext* Z80Parser::AddAAndIYOffsetContext::aRegister() {
  return getRuleContext<Z80Parser::ARegisterContext>(0);
}


size_t Z80Parser::AddAAndIYOffsetContext::getRuleIndex() const {
  return Z80Parser::RuleAddAAndIYOffset;
}

void Z80Parser::AddAAndIYOffsetContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAddAAndIYOffset(this);
}

void Z80Parser::AddAAndIYOffsetContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAddAAndIYOffset(this);
}

Z80Parser::AddAAndIYOffsetContext* Z80Parser::addAAndIYOffset() {
  AddAAndIYOffsetContext *_localctx = _tracker.createInstance<AddAAndIYOffsetContext>(_ctx, getState());
  enterRule(_localctx, 276, Z80Parser::RuleAddAAndIYOffset);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1354);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 36, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1346);
      addCommandName();
      setState(1347);
      dynamic_cast<AddAAndIYOffsetContext *>(_localctx)->source = iyPointerWithOffset();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1349);
      addCommandName();
      setState(1350);
      aRegister();
      setState(1351);
      match(Z80Parser::T__73);
      setState(1352);
      dynamic_cast<AddAAndIYOffsetContext *>(_localctx)->source = iyPointerWithOffset();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AddWithCarryAAndRegisterContext ------------------------------------------------------------------

Z80Parser::AddWithCarryAAndRegisterContext::AddWithCarryAAndRegisterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::AddWithCarryCommandNameContext* Z80Parser::AddWithCarryAAndRegisterContext::addWithCarryCommandName() {
  return getRuleContext<Z80Parser::AddWithCarryCommandNameContext>(0);
}

Z80Parser::SimpleByteRegisterContext* Z80Parser::AddWithCarryAAndRegisterContext::simpleByteRegister() {
  return getRuleContext<Z80Parser::SimpleByteRegisterContext>(0);
}

Z80Parser::ARegisterContext* Z80Parser::AddWithCarryAAndRegisterContext::aRegister() {
  return getRuleContext<Z80Parser::ARegisterContext>(0);
}


size_t Z80Parser::AddWithCarryAAndRegisterContext::getRuleIndex() const {
  return Z80Parser::RuleAddWithCarryAAndRegister;
}

void Z80Parser::AddWithCarryAAndRegisterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAddWithCarryAAndRegister(this);
}

void Z80Parser::AddWithCarryAAndRegisterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAddWithCarryAAndRegister(this);
}

Z80Parser::AddWithCarryAAndRegisterContext* Z80Parser::addWithCarryAAndRegister() {
  AddWithCarryAAndRegisterContext *_localctx = _tracker.createInstance<AddWithCarryAAndRegisterContext>(_ctx, getState());
  enterRule(_localctx, 278, Z80Parser::RuleAddWithCarryAAndRegister);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1364);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 37, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1356);
      addWithCarryCommandName();
      setState(1357);
      dynamic_cast<AddWithCarryAAndRegisterContext *>(_localctx)->source = simpleByteRegister();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1359);
      addWithCarryCommandName();
      setState(1360);
      aRegister();
      setState(1361);
      match(Z80Parser::T__73);
      setState(1362);
      dynamic_cast<AddWithCarryAAndRegisterContext *>(_localctx)->source = simpleByteRegister();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AddWithCarryAAndHLPointerContext ------------------------------------------------------------------

Z80Parser::AddWithCarryAAndHLPointerContext::AddWithCarryAAndHLPointerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::AddWithCarryCommandNameContext* Z80Parser::AddWithCarryAAndHLPointerContext::addWithCarryCommandName() {
  return getRuleContext<Z80Parser::AddWithCarryCommandNameContext>(0);
}

Z80Parser::HlPointerContext* Z80Parser::AddWithCarryAAndHLPointerContext::hlPointer() {
  return getRuleContext<Z80Parser::HlPointerContext>(0);
}

Z80Parser::ARegisterContext* Z80Parser::AddWithCarryAAndHLPointerContext::aRegister() {
  return getRuleContext<Z80Parser::ARegisterContext>(0);
}


size_t Z80Parser::AddWithCarryAAndHLPointerContext::getRuleIndex() const {
  return Z80Parser::RuleAddWithCarryAAndHLPointer;
}

void Z80Parser::AddWithCarryAAndHLPointerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAddWithCarryAAndHLPointer(this);
}

void Z80Parser::AddWithCarryAAndHLPointerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAddWithCarryAAndHLPointer(this);
}

Z80Parser::AddWithCarryAAndHLPointerContext* Z80Parser::addWithCarryAAndHLPointer() {
  AddWithCarryAAndHLPointerContext *_localctx = _tracker.createInstance<AddWithCarryAAndHLPointerContext>(_ctx, getState());
  enterRule(_localctx, 280, Z80Parser::RuleAddWithCarryAAndHLPointer);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1374);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 38, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1366);
      addWithCarryCommandName();
      setState(1367);
      dynamic_cast<AddWithCarryAAndHLPointerContext *>(_localctx)->source = hlPointer();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1369);
      addWithCarryCommandName();
      setState(1370);
      aRegister();
      setState(1371);
      match(Z80Parser::T__73);
      setState(1372);
      dynamic_cast<AddWithCarryAAndHLPointerContext *>(_localctx)->source = hlPointer();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AddWithCarryAAndImmediateContext ------------------------------------------------------------------

Z80Parser::AddWithCarryAAndImmediateContext::AddWithCarryAAndImmediateContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::AddWithCarryCommandNameContext* Z80Parser::AddWithCarryAAndImmediateContext::addWithCarryCommandName() {
  return getRuleContext<Z80Parser::AddWithCarryCommandNameContext>(0);
}

Z80Parser::NumberContext* Z80Parser::AddWithCarryAAndImmediateContext::number() {
  return getRuleContext<Z80Parser::NumberContext>(0);
}

Z80Parser::ARegisterContext* Z80Parser::AddWithCarryAAndImmediateContext::aRegister() {
  return getRuleContext<Z80Parser::ARegisterContext>(0);
}


size_t Z80Parser::AddWithCarryAAndImmediateContext::getRuleIndex() const {
  return Z80Parser::RuleAddWithCarryAAndImmediate;
}

void Z80Parser::AddWithCarryAAndImmediateContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAddWithCarryAAndImmediate(this);
}

void Z80Parser::AddWithCarryAAndImmediateContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAddWithCarryAAndImmediate(this);
}

Z80Parser::AddWithCarryAAndImmediateContext* Z80Parser::addWithCarryAAndImmediate() {
  AddWithCarryAAndImmediateContext *_localctx = _tracker.createInstance<AddWithCarryAAndImmediateContext>(_ctx, getState());
  enterRule(_localctx, 282, Z80Parser::RuleAddWithCarryAAndImmediate);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1384);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 39, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1376);
      addWithCarryCommandName();
      setState(1377);
      dynamic_cast<AddWithCarryAAndImmediateContext *>(_localctx)->source = number();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1379);
      addWithCarryCommandName();
      setState(1380);
      aRegister();
      setState(1381);
      match(Z80Parser::T__73);
      setState(1382);
      dynamic_cast<AddWithCarryAAndImmediateContext *>(_localctx)->source = number();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AddWithCarryAAndIXOffsetContext ------------------------------------------------------------------

Z80Parser::AddWithCarryAAndIXOffsetContext::AddWithCarryAAndIXOffsetContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::AddWithCarryCommandNameContext* Z80Parser::AddWithCarryAAndIXOffsetContext::addWithCarryCommandName() {
  return getRuleContext<Z80Parser::AddWithCarryCommandNameContext>(0);
}

Z80Parser::IxPointerWithOffsetContext* Z80Parser::AddWithCarryAAndIXOffsetContext::ixPointerWithOffset() {
  return getRuleContext<Z80Parser::IxPointerWithOffsetContext>(0);
}

Z80Parser::ARegisterContext* Z80Parser::AddWithCarryAAndIXOffsetContext::aRegister() {
  return getRuleContext<Z80Parser::ARegisterContext>(0);
}


size_t Z80Parser::AddWithCarryAAndIXOffsetContext::getRuleIndex() const {
  return Z80Parser::RuleAddWithCarryAAndIXOffset;
}

void Z80Parser::AddWithCarryAAndIXOffsetContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAddWithCarryAAndIXOffset(this);
}

void Z80Parser::AddWithCarryAAndIXOffsetContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAddWithCarryAAndIXOffset(this);
}

Z80Parser::AddWithCarryAAndIXOffsetContext* Z80Parser::addWithCarryAAndIXOffset() {
  AddWithCarryAAndIXOffsetContext *_localctx = _tracker.createInstance<AddWithCarryAAndIXOffsetContext>(_ctx, getState());
  enterRule(_localctx, 284, Z80Parser::RuleAddWithCarryAAndIXOffset);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1394);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 40, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1386);
      addWithCarryCommandName();
      setState(1387);
      dynamic_cast<AddWithCarryAAndIXOffsetContext *>(_localctx)->source = ixPointerWithOffset();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1389);
      addWithCarryCommandName();
      setState(1390);
      aRegister();
      setState(1391);
      match(Z80Parser::T__73);
      setState(1392);
      dynamic_cast<AddWithCarryAAndIXOffsetContext *>(_localctx)->source = ixPointerWithOffset();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AddWithCarryAAndIYOffsetContext ------------------------------------------------------------------

Z80Parser::AddWithCarryAAndIYOffsetContext::AddWithCarryAAndIYOffsetContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::AddWithCarryCommandNameContext* Z80Parser::AddWithCarryAAndIYOffsetContext::addWithCarryCommandName() {
  return getRuleContext<Z80Parser::AddWithCarryCommandNameContext>(0);
}

Z80Parser::IyPointerWithOffsetContext* Z80Parser::AddWithCarryAAndIYOffsetContext::iyPointerWithOffset() {
  return getRuleContext<Z80Parser::IyPointerWithOffsetContext>(0);
}

Z80Parser::ARegisterContext* Z80Parser::AddWithCarryAAndIYOffsetContext::aRegister() {
  return getRuleContext<Z80Parser::ARegisterContext>(0);
}


size_t Z80Parser::AddWithCarryAAndIYOffsetContext::getRuleIndex() const {
  return Z80Parser::RuleAddWithCarryAAndIYOffset;
}

void Z80Parser::AddWithCarryAAndIYOffsetContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAddWithCarryAAndIYOffset(this);
}

void Z80Parser::AddWithCarryAAndIYOffsetContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAddWithCarryAAndIYOffset(this);
}

Z80Parser::AddWithCarryAAndIYOffsetContext* Z80Parser::addWithCarryAAndIYOffset() {
  AddWithCarryAAndIYOffsetContext *_localctx = _tracker.createInstance<AddWithCarryAAndIYOffsetContext>(_ctx, getState());
  enterRule(_localctx, 286, Z80Parser::RuleAddWithCarryAAndIYOffset);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1404);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 41, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1396);
      addWithCarryCommandName();
      setState(1397);
      dynamic_cast<AddWithCarryAAndIYOffsetContext *>(_localctx)->source = iyPointerWithOffset();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1399);
      addWithCarryCommandName();
      setState(1400);
      aRegister();
      setState(1401);
      match(Z80Parser::T__73);
      setState(1402);
      dynamic_cast<AddWithCarryAAndIYOffsetContext *>(_localctx)->source = iyPointerWithOffset();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AddWithCarryAAndIXHContext ------------------------------------------------------------------

Z80Parser::AddWithCarryAAndIXHContext::AddWithCarryAAndIXHContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::AddWithCarryCommandNameContext* Z80Parser::AddWithCarryAAndIXHContext::addWithCarryCommandName() {
  return getRuleContext<Z80Parser::AddWithCarryCommandNameContext>(0);
}

Z80Parser::IxHighRegisterContext* Z80Parser::AddWithCarryAAndIXHContext::ixHighRegister() {
  return getRuleContext<Z80Parser::IxHighRegisterContext>(0);
}

Z80Parser::ARegisterContext* Z80Parser::AddWithCarryAAndIXHContext::aRegister() {
  return getRuleContext<Z80Parser::ARegisterContext>(0);
}


size_t Z80Parser::AddWithCarryAAndIXHContext::getRuleIndex() const {
  return Z80Parser::RuleAddWithCarryAAndIXH;
}

void Z80Parser::AddWithCarryAAndIXHContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAddWithCarryAAndIXH(this);
}

void Z80Parser::AddWithCarryAAndIXHContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAddWithCarryAAndIXH(this);
}

Z80Parser::AddWithCarryAAndIXHContext* Z80Parser::addWithCarryAAndIXH() {
  AddWithCarryAAndIXHContext *_localctx = _tracker.createInstance<AddWithCarryAAndIXHContext>(_ctx, getState());
  enterRule(_localctx, 288, Z80Parser::RuleAddWithCarryAAndIXH);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1414);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 42, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1406);
      addWithCarryCommandName();
      setState(1407);
      dynamic_cast<AddWithCarryAAndIXHContext *>(_localctx)->source = ixHighRegister();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1409);
      addWithCarryCommandName();
      setState(1410);
      aRegister();
      setState(1411);
      match(Z80Parser::T__73);
      setState(1412);
      dynamic_cast<AddWithCarryAAndIXHContext *>(_localctx)->source = ixHighRegister();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AddWithCarryAAndIXLContext ------------------------------------------------------------------

Z80Parser::AddWithCarryAAndIXLContext::AddWithCarryAAndIXLContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::AddWithCarryCommandNameContext* Z80Parser::AddWithCarryAAndIXLContext::addWithCarryCommandName() {
  return getRuleContext<Z80Parser::AddWithCarryCommandNameContext>(0);
}

Z80Parser::IxLowRegisterContext* Z80Parser::AddWithCarryAAndIXLContext::ixLowRegister() {
  return getRuleContext<Z80Parser::IxLowRegisterContext>(0);
}

Z80Parser::ARegisterContext* Z80Parser::AddWithCarryAAndIXLContext::aRegister() {
  return getRuleContext<Z80Parser::ARegisterContext>(0);
}


size_t Z80Parser::AddWithCarryAAndIXLContext::getRuleIndex() const {
  return Z80Parser::RuleAddWithCarryAAndIXL;
}

void Z80Parser::AddWithCarryAAndIXLContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAddWithCarryAAndIXL(this);
}

void Z80Parser::AddWithCarryAAndIXLContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAddWithCarryAAndIXL(this);
}

Z80Parser::AddWithCarryAAndIXLContext* Z80Parser::addWithCarryAAndIXL() {
  AddWithCarryAAndIXLContext *_localctx = _tracker.createInstance<AddWithCarryAAndIXLContext>(_ctx, getState());
  enterRule(_localctx, 290, Z80Parser::RuleAddWithCarryAAndIXL);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1424);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 43, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1416);
      addWithCarryCommandName();
      setState(1417);
      dynamic_cast<AddWithCarryAAndIXLContext *>(_localctx)->source = ixLowRegister();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1419);
      addWithCarryCommandName();
      setState(1420);
      aRegister();
      setState(1421);
      match(Z80Parser::T__73);
      setState(1422);
      dynamic_cast<AddWithCarryAAndIXLContext *>(_localctx)->source = ixLowRegister();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AddWithCarryAAndIYHContext ------------------------------------------------------------------

Z80Parser::AddWithCarryAAndIYHContext::AddWithCarryAAndIYHContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::AddWithCarryCommandNameContext* Z80Parser::AddWithCarryAAndIYHContext::addWithCarryCommandName() {
  return getRuleContext<Z80Parser::AddWithCarryCommandNameContext>(0);
}

Z80Parser::IyHighRegisterContext* Z80Parser::AddWithCarryAAndIYHContext::iyHighRegister() {
  return getRuleContext<Z80Parser::IyHighRegisterContext>(0);
}

Z80Parser::ARegisterContext* Z80Parser::AddWithCarryAAndIYHContext::aRegister() {
  return getRuleContext<Z80Parser::ARegisterContext>(0);
}


size_t Z80Parser::AddWithCarryAAndIYHContext::getRuleIndex() const {
  return Z80Parser::RuleAddWithCarryAAndIYH;
}

void Z80Parser::AddWithCarryAAndIYHContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAddWithCarryAAndIYH(this);
}

void Z80Parser::AddWithCarryAAndIYHContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAddWithCarryAAndIYH(this);
}

Z80Parser::AddWithCarryAAndIYHContext* Z80Parser::addWithCarryAAndIYH() {
  AddWithCarryAAndIYHContext *_localctx = _tracker.createInstance<AddWithCarryAAndIYHContext>(_ctx, getState());
  enterRule(_localctx, 292, Z80Parser::RuleAddWithCarryAAndIYH);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1434);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 44, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1426);
      addWithCarryCommandName();
      setState(1427);
      dynamic_cast<AddWithCarryAAndIYHContext *>(_localctx)->source = iyHighRegister();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1429);
      addWithCarryCommandName();
      setState(1430);
      aRegister();
      setState(1431);
      match(Z80Parser::T__73);
      setState(1432);
      dynamic_cast<AddWithCarryAAndIYHContext *>(_localctx)->source = iyHighRegister();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AddWithCarryAAndIYLContext ------------------------------------------------------------------

Z80Parser::AddWithCarryAAndIYLContext::AddWithCarryAAndIYLContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::AddWithCarryCommandNameContext* Z80Parser::AddWithCarryAAndIYLContext::addWithCarryCommandName() {
  return getRuleContext<Z80Parser::AddWithCarryCommandNameContext>(0);
}

Z80Parser::IyLowRegisterContext* Z80Parser::AddWithCarryAAndIYLContext::iyLowRegister() {
  return getRuleContext<Z80Parser::IyLowRegisterContext>(0);
}

Z80Parser::ARegisterContext* Z80Parser::AddWithCarryAAndIYLContext::aRegister() {
  return getRuleContext<Z80Parser::ARegisterContext>(0);
}


size_t Z80Parser::AddWithCarryAAndIYLContext::getRuleIndex() const {
  return Z80Parser::RuleAddWithCarryAAndIYL;
}

void Z80Parser::AddWithCarryAAndIYLContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAddWithCarryAAndIYL(this);
}

void Z80Parser::AddWithCarryAAndIYLContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAddWithCarryAAndIYL(this);
}

Z80Parser::AddWithCarryAAndIYLContext* Z80Parser::addWithCarryAAndIYL() {
  AddWithCarryAAndIYLContext *_localctx = _tracker.createInstance<AddWithCarryAAndIYLContext>(_ctx, getState());
  enterRule(_localctx, 294, Z80Parser::RuleAddWithCarryAAndIYL);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1444);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 45, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1436);
      addWithCarryCommandName();
      setState(1437);
      dynamic_cast<AddWithCarryAAndIYLContext *>(_localctx)->source = iyLowRegister();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1439);
      addWithCarryCommandName();
      setState(1440);
      aRegister();
      setState(1441);
      match(Z80Parser::T__73);
      setState(1442);
      dynamic_cast<AddWithCarryAAndIYLContext *>(_localctx)->source = iyLowRegister();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SubtractRegisterFromAContext ------------------------------------------------------------------

Z80Parser::SubtractRegisterFromAContext::SubtractRegisterFromAContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::SubtractCommandNameContext* Z80Parser::SubtractRegisterFromAContext::subtractCommandName() {
  return getRuleContext<Z80Parser::SubtractCommandNameContext>(0);
}

Z80Parser::SimpleByteRegisterContext* Z80Parser::SubtractRegisterFromAContext::simpleByteRegister() {
  return getRuleContext<Z80Parser::SimpleByteRegisterContext>(0);
}

Z80Parser::ARegisterContext* Z80Parser::SubtractRegisterFromAContext::aRegister() {
  return getRuleContext<Z80Parser::ARegisterContext>(0);
}


size_t Z80Parser::SubtractRegisterFromAContext::getRuleIndex() const {
  return Z80Parser::RuleSubtractRegisterFromA;
}

void Z80Parser::SubtractRegisterFromAContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSubtractRegisterFromA(this);
}

void Z80Parser::SubtractRegisterFromAContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSubtractRegisterFromA(this);
}

Z80Parser::SubtractRegisterFromAContext* Z80Parser::subtractRegisterFromA() {
  SubtractRegisterFromAContext *_localctx = _tracker.createInstance<SubtractRegisterFromAContext>(_ctx, getState());
  enterRule(_localctx, 296, Z80Parser::RuleSubtractRegisterFromA);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1454);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 46, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1446);
      subtractCommandName();
      setState(1447);
      dynamic_cast<SubtractRegisterFromAContext *>(_localctx)->source = simpleByteRegister();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1449);
      subtractCommandName();
      setState(1450);
      aRegister();
      setState(1451);
      match(Z80Parser::T__73);
      setState(1452);
      dynamic_cast<SubtractRegisterFromAContext *>(_localctx)->source = simpleByteRegister();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SubtractHLPointerFromAContext ------------------------------------------------------------------

Z80Parser::SubtractHLPointerFromAContext::SubtractHLPointerFromAContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::SubtractCommandNameContext* Z80Parser::SubtractHLPointerFromAContext::subtractCommandName() {
  return getRuleContext<Z80Parser::SubtractCommandNameContext>(0);
}

Z80Parser::HlPointerContext* Z80Parser::SubtractHLPointerFromAContext::hlPointer() {
  return getRuleContext<Z80Parser::HlPointerContext>(0);
}

Z80Parser::ARegisterContext* Z80Parser::SubtractHLPointerFromAContext::aRegister() {
  return getRuleContext<Z80Parser::ARegisterContext>(0);
}


size_t Z80Parser::SubtractHLPointerFromAContext::getRuleIndex() const {
  return Z80Parser::RuleSubtractHLPointerFromA;
}

void Z80Parser::SubtractHLPointerFromAContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSubtractHLPointerFromA(this);
}

void Z80Parser::SubtractHLPointerFromAContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSubtractHLPointerFromA(this);
}

Z80Parser::SubtractHLPointerFromAContext* Z80Parser::subtractHLPointerFromA() {
  SubtractHLPointerFromAContext *_localctx = _tracker.createInstance<SubtractHLPointerFromAContext>(_ctx, getState());
  enterRule(_localctx, 298, Z80Parser::RuleSubtractHLPointerFromA);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1464);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 47, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1456);
      subtractCommandName();
      setState(1457);
      dynamic_cast<SubtractHLPointerFromAContext *>(_localctx)->source = hlPointer();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1459);
      subtractCommandName();
      setState(1460);
      aRegister();
      setState(1461);
      match(Z80Parser::T__73);
      setState(1462);
      dynamic_cast<SubtractHLPointerFromAContext *>(_localctx)->source = hlPointer();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SubtractImmediateFromAContext ------------------------------------------------------------------

Z80Parser::SubtractImmediateFromAContext::SubtractImmediateFromAContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::SubtractCommandNameContext* Z80Parser::SubtractImmediateFromAContext::subtractCommandName() {
  return getRuleContext<Z80Parser::SubtractCommandNameContext>(0);
}

Z80Parser::NumberContext* Z80Parser::SubtractImmediateFromAContext::number() {
  return getRuleContext<Z80Parser::NumberContext>(0);
}

Z80Parser::ARegisterContext* Z80Parser::SubtractImmediateFromAContext::aRegister() {
  return getRuleContext<Z80Parser::ARegisterContext>(0);
}


size_t Z80Parser::SubtractImmediateFromAContext::getRuleIndex() const {
  return Z80Parser::RuleSubtractImmediateFromA;
}

void Z80Parser::SubtractImmediateFromAContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSubtractImmediateFromA(this);
}

void Z80Parser::SubtractImmediateFromAContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSubtractImmediateFromA(this);
}

Z80Parser::SubtractImmediateFromAContext* Z80Parser::subtractImmediateFromA() {
  SubtractImmediateFromAContext *_localctx = _tracker.createInstance<SubtractImmediateFromAContext>(_ctx, getState());
  enterRule(_localctx, 300, Z80Parser::RuleSubtractImmediateFromA);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1474);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 48, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1466);
      subtractCommandName();
      setState(1467);
      dynamic_cast<SubtractImmediateFromAContext *>(_localctx)->source = number();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1469);
      subtractCommandName();
      setState(1470);
      aRegister();
      setState(1471);
      match(Z80Parser::T__73);
      setState(1472);
      dynamic_cast<SubtractImmediateFromAContext *>(_localctx)->source = number();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SubtractIXOffsetFromAContext ------------------------------------------------------------------

Z80Parser::SubtractIXOffsetFromAContext::SubtractIXOffsetFromAContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::SubtractCommandNameContext* Z80Parser::SubtractIXOffsetFromAContext::subtractCommandName() {
  return getRuleContext<Z80Parser::SubtractCommandNameContext>(0);
}

Z80Parser::IxPointerWithOffsetContext* Z80Parser::SubtractIXOffsetFromAContext::ixPointerWithOffset() {
  return getRuleContext<Z80Parser::IxPointerWithOffsetContext>(0);
}

Z80Parser::ARegisterContext* Z80Parser::SubtractIXOffsetFromAContext::aRegister() {
  return getRuleContext<Z80Parser::ARegisterContext>(0);
}


size_t Z80Parser::SubtractIXOffsetFromAContext::getRuleIndex() const {
  return Z80Parser::RuleSubtractIXOffsetFromA;
}

void Z80Parser::SubtractIXOffsetFromAContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSubtractIXOffsetFromA(this);
}

void Z80Parser::SubtractIXOffsetFromAContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSubtractIXOffsetFromA(this);
}

Z80Parser::SubtractIXOffsetFromAContext* Z80Parser::subtractIXOffsetFromA() {
  SubtractIXOffsetFromAContext *_localctx = _tracker.createInstance<SubtractIXOffsetFromAContext>(_ctx, getState());
  enterRule(_localctx, 302, Z80Parser::RuleSubtractIXOffsetFromA);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1484);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 49, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1476);
      subtractCommandName();
      setState(1477);
      dynamic_cast<SubtractIXOffsetFromAContext *>(_localctx)->source = ixPointerWithOffset();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1479);
      subtractCommandName();
      setState(1480);
      aRegister();
      setState(1481);
      match(Z80Parser::T__73);
      setState(1482);
      dynamic_cast<SubtractIXOffsetFromAContext *>(_localctx)->source = ixPointerWithOffset();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SubtractIYOffsetFromAContext ------------------------------------------------------------------

Z80Parser::SubtractIYOffsetFromAContext::SubtractIYOffsetFromAContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::SubtractCommandNameContext* Z80Parser::SubtractIYOffsetFromAContext::subtractCommandName() {
  return getRuleContext<Z80Parser::SubtractCommandNameContext>(0);
}

Z80Parser::IyPointerWithOffsetContext* Z80Parser::SubtractIYOffsetFromAContext::iyPointerWithOffset() {
  return getRuleContext<Z80Parser::IyPointerWithOffsetContext>(0);
}

Z80Parser::ARegisterContext* Z80Parser::SubtractIYOffsetFromAContext::aRegister() {
  return getRuleContext<Z80Parser::ARegisterContext>(0);
}


size_t Z80Parser::SubtractIYOffsetFromAContext::getRuleIndex() const {
  return Z80Parser::RuleSubtractIYOffsetFromA;
}

void Z80Parser::SubtractIYOffsetFromAContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSubtractIYOffsetFromA(this);
}

void Z80Parser::SubtractIYOffsetFromAContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSubtractIYOffsetFromA(this);
}

Z80Parser::SubtractIYOffsetFromAContext* Z80Parser::subtractIYOffsetFromA() {
  SubtractIYOffsetFromAContext *_localctx = _tracker.createInstance<SubtractIYOffsetFromAContext>(_ctx, getState());
  enterRule(_localctx, 304, Z80Parser::RuleSubtractIYOffsetFromA);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1494);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 50, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1486);
      subtractCommandName();
      setState(1487);
      dynamic_cast<SubtractIYOffsetFromAContext *>(_localctx)->source = iyPointerWithOffset();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1489);
      subtractCommandName();
      setState(1490);
      aRegister();
      setState(1491);
      match(Z80Parser::T__73);
      setState(1492);
      dynamic_cast<SubtractIYOffsetFromAContext *>(_localctx)->source = iyPointerWithOffset();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SubtractIXHighOrLowFromAContext ------------------------------------------------------------------

Z80Parser::SubtractIXHighOrLowFromAContext::SubtractIXHighOrLowFromAContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::SubtractCommandNameContext* Z80Parser::SubtractIXHighOrLowFromAContext::subtractCommandName() {
  return getRuleContext<Z80Parser::SubtractCommandNameContext>(0);
}

Z80Parser::IxHighOrLowRegisterContext* Z80Parser::SubtractIXHighOrLowFromAContext::ixHighOrLowRegister() {
  return getRuleContext<Z80Parser::IxHighOrLowRegisterContext>(0);
}

Z80Parser::ARegisterContext* Z80Parser::SubtractIXHighOrLowFromAContext::aRegister() {
  return getRuleContext<Z80Parser::ARegisterContext>(0);
}


size_t Z80Parser::SubtractIXHighOrLowFromAContext::getRuleIndex() const {
  return Z80Parser::RuleSubtractIXHighOrLowFromA;
}

void Z80Parser::SubtractIXHighOrLowFromAContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSubtractIXHighOrLowFromA(this);
}

void Z80Parser::SubtractIXHighOrLowFromAContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSubtractIXHighOrLowFromA(this);
}

Z80Parser::SubtractIXHighOrLowFromAContext* Z80Parser::subtractIXHighOrLowFromA() {
  SubtractIXHighOrLowFromAContext *_localctx = _tracker.createInstance<SubtractIXHighOrLowFromAContext>(_ctx, getState());
  enterRule(_localctx, 306, Z80Parser::RuleSubtractIXHighOrLowFromA);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1504);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 51, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1496);
      subtractCommandName();
      setState(1497);
      dynamic_cast<SubtractIXHighOrLowFromAContext *>(_localctx)->source = ixHighOrLowRegister();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1499);
      subtractCommandName();
      setState(1500);
      aRegister();
      setState(1501);
      match(Z80Parser::T__73);
      setState(1502);
      dynamic_cast<SubtractIXHighOrLowFromAContext *>(_localctx)->source = ixHighOrLowRegister();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SubtractIYHighOrLowFromAContext ------------------------------------------------------------------

Z80Parser::SubtractIYHighOrLowFromAContext::SubtractIYHighOrLowFromAContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::SubtractCommandNameContext* Z80Parser::SubtractIYHighOrLowFromAContext::subtractCommandName() {
  return getRuleContext<Z80Parser::SubtractCommandNameContext>(0);
}

Z80Parser::IyHighOrLowRegisterContext* Z80Parser::SubtractIYHighOrLowFromAContext::iyHighOrLowRegister() {
  return getRuleContext<Z80Parser::IyHighOrLowRegisterContext>(0);
}

Z80Parser::ARegisterContext* Z80Parser::SubtractIYHighOrLowFromAContext::aRegister() {
  return getRuleContext<Z80Parser::ARegisterContext>(0);
}


size_t Z80Parser::SubtractIYHighOrLowFromAContext::getRuleIndex() const {
  return Z80Parser::RuleSubtractIYHighOrLowFromA;
}

void Z80Parser::SubtractIYHighOrLowFromAContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSubtractIYHighOrLowFromA(this);
}

void Z80Parser::SubtractIYHighOrLowFromAContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSubtractIYHighOrLowFromA(this);
}

Z80Parser::SubtractIYHighOrLowFromAContext* Z80Parser::subtractIYHighOrLowFromA() {
  SubtractIYHighOrLowFromAContext *_localctx = _tracker.createInstance<SubtractIYHighOrLowFromAContext>(_ctx, getState());
  enterRule(_localctx, 308, Z80Parser::RuleSubtractIYHighOrLowFromA);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1514);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 52, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1506);
      subtractCommandName();
      setState(1507);
      dynamic_cast<SubtractIYHighOrLowFromAContext *>(_localctx)->source = iyHighOrLowRegister();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1509);
      subtractCommandName();
      setState(1510);
      aRegister();
      setState(1511);
      match(Z80Parser::T__73);
      setState(1512);
      dynamic_cast<SubtractIYHighOrLowFromAContext *>(_localctx)->source = iyHighOrLowRegister();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SubtractWithBorrowRegisterFromAContext ------------------------------------------------------------------

Z80Parser::SubtractWithBorrowRegisterFromAContext::SubtractWithBorrowRegisterFromAContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::SubtractWithBorrowCommandNameContext* Z80Parser::SubtractWithBorrowRegisterFromAContext::subtractWithBorrowCommandName() {
  return getRuleContext<Z80Parser::SubtractWithBorrowCommandNameContext>(0);
}

Z80Parser::SimpleByteRegisterContext* Z80Parser::SubtractWithBorrowRegisterFromAContext::simpleByteRegister() {
  return getRuleContext<Z80Parser::SimpleByteRegisterContext>(0);
}

Z80Parser::ARegisterContext* Z80Parser::SubtractWithBorrowRegisterFromAContext::aRegister() {
  return getRuleContext<Z80Parser::ARegisterContext>(0);
}


size_t Z80Parser::SubtractWithBorrowRegisterFromAContext::getRuleIndex() const {
  return Z80Parser::RuleSubtractWithBorrowRegisterFromA;
}

void Z80Parser::SubtractWithBorrowRegisterFromAContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSubtractWithBorrowRegisterFromA(this);
}

void Z80Parser::SubtractWithBorrowRegisterFromAContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSubtractWithBorrowRegisterFromA(this);
}

Z80Parser::SubtractWithBorrowRegisterFromAContext* Z80Parser::subtractWithBorrowRegisterFromA() {
  SubtractWithBorrowRegisterFromAContext *_localctx = _tracker.createInstance<SubtractWithBorrowRegisterFromAContext>(_ctx, getState());
  enterRule(_localctx, 310, Z80Parser::RuleSubtractWithBorrowRegisterFromA);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1524);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 53, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1516);
      subtractWithBorrowCommandName();
      setState(1517);
      dynamic_cast<SubtractWithBorrowRegisterFromAContext *>(_localctx)->source = simpleByteRegister();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1519);
      subtractWithBorrowCommandName();
      setState(1520);
      aRegister();
      setState(1521);
      match(Z80Parser::T__73);
      setState(1522);
      dynamic_cast<SubtractWithBorrowRegisterFromAContext *>(_localctx)->source = simpleByteRegister();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SubtractWithBorrowHLPointerFromAContext ------------------------------------------------------------------

Z80Parser::SubtractWithBorrowHLPointerFromAContext::SubtractWithBorrowHLPointerFromAContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::SubtractWithBorrowCommandNameContext* Z80Parser::SubtractWithBorrowHLPointerFromAContext::subtractWithBorrowCommandName() {
  return getRuleContext<Z80Parser::SubtractWithBorrowCommandNameContext>(0);
}

Z80Parser::HlPointerContext* Z80Parser::SubtractWithBorrowHLPointerFromAContext::hlPointer() {
  return getRuleContext<Z80Parser::HlPointerContext>(0);
}

Z80Parser::ARegisterContext* Z80Parser::SubtractWithBorrowHLPointerFromAContext::aRegister() {
  return getRuleContext<Z80Parser::ARegisterContext>(0);
}


size_t Z80Parser::SubtractWithBorrowHLPointerFromAContext::getRuleIndex() const {
  return Z80Parser::RuleSubtractWithBorrowHLPointerFromA;
}

void Z80Parser::SubtractWithBorrowHLPointerFromAContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSubtractWithBorrowHLPointerFromA(this);
}

void Z80Parser::SubtractWithBorrowHLPointerFromAContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSubtractWithBorrowHLPointerFromA(this);
}

Z80Parser::SubtractWithBorrowHLPointerFromAContext* Z80Parser::subtractWithBorrowHLPointerFromA() {
  SubtractWithBorrowHLPointerFromAContext *_localctx = _tracker.createInstance<SubtractWithBorrowHLPointerFromAContext>(_ctx, getState());
  enterRule(_localctx, 312, Z80Parser::RuleSubtractWithBorrowHLPointerFromA);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1534);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 54, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1526);
      subtractWithBorrowCommandName();
      setState(1527);
      dynamic_cast<SubtractWithBorrowHLPointerFromAContext *>(_localctx)->source = hlPointer();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1529);
      subtractWithBorrowCommandName();
      setState(1530);
      aRegister();
      setState(1531);
      match(Z80Parser::T__73);
      setState(1532);
      dynamic_cast<SubtractWithBorrowHLPointerFromAContext *>(_localctx)->source = hlPointer();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SubtractWithBorrowIXOffsetFromAContext ------------------------------------------------------------------

Z80Parser::SubtractWithBorrowIXOffsetFromAContext::SubtractWithBorrowIXOffsetFromAContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::SubtractWithBorrowCommandNameContext* Z80Parser::SubtractWithBorrowIXOffsetFromAContext::subtractWithBorrowCommandName() {
  return getRuleContext<Z80Parser::SubtractWithBorrowCommandNameContext>(0);
}

Z80Parser::IxPointerWithOffsetContext* Z80Parser::SubtractWithBorrowIXOffsetFromAContext::ixPointerWithOffset() {
  return getRuleContext<Z80Parser::IxPointerWithOffsetContext>(0);
}

Z80Parser::ARegisterContext* Z80Parser::SubtractWithBorrowIXOffsetFromAContext::aRegister() {
  return getRuleContext<Z80Parser::ARegisterContext>(0);
}


size_t Z80Parser::SubtractWithBorrowIXOffsetFromAContext::getRuleIndex() const {
  return Z80Parser::RuleSubtractWithBorrowIXOffsetFromA;
}

void Z80Parser::SubtractWithBorrowIXOffsetFromAContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSubtractWithBorrowIXOffsetFromA(this);
}

void Z80Parser::SubtractWithBorrowIXOffsetFromAContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSubtractWithBorrowIXOffsetFromA(this);
}

Z80Parser::SubtractWithBorrowIXOffsetFromAContext* Z80Parser::subtractWithBorrowIXOffsetFromA() {
  SubtractWithBorrowIXOffsetFromAContext *_localctx = _tracker.createInstance<SubtractWithBorrowIXOffsetFromAContext>(_ctx, getState());
  enterRule(_localctx, 314, Z80Parser::RuleSubtractWithBorrowIXOffsetFromA);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1544);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 55, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1536);
      subtractWithBorrowCommandName();
      setState(1537);
      dynamic_cast<SubtractWithBorrowIXOffsetFromAContext *>(_localctx)->source = ixPointerWithOffset();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1539);
      subtractWithBorrowCommandName();
      setState(1540);
      aRegister();
      setState(1541);
      match(Z80Parser::T__73);
      setState(1542);
      dynamic_cast<SubtractWithBorrowIXOffsetFromAContext *>(_localctx)->source = ixPointerWithOffset();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SubtractWithBorrowIYOffsetFromAContext ------------------------------------------------------------------

Z80Parser::SubtractWithBorrowIYOffsetFromAContext::SubtractWithBorrowIYOffsetFromAContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::SubtractWithBorrowCommandNameContext* Z80Parser::SubtractWithBorrowIYOffsetFromAContext::subtractWithBorrowCommandName() {
  return getRuleContext<Z80Parser::SubtractWithBorrowCommandNameContext>(0);
}

Z80Parser::IyPointerWithOffsetContext* Z80Parser::SubtractWithBorrowIYOffsetFromAContext::iyPointerWithOffset() {
  return getRuleContext<Z80Parser::IyPointerWithOffsetContext>(0);
}

Z80Parser::ARegisterContext* Z80Parser::SubtractWithBorrowIYOffsetFromAContext::aRegister() {
  return getRuleContext<Z80Parser::ARegisterContext>(0);
}


size_t Z80Parser::SubtractWithBorrowIYOffsetFromAContext::getRuleIndex() const {
  return Z80Parser::RuleSubtractWithBorrowIYOffsetFromA;
}

void Z80Parser::SubtractWithBorrowIYOffsetFromAContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSubtractWithBorrowIYOffsetFromA(this);
}

void Z80Parser::SubtractWithBorrowIYOffsetFromAContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSubtractWithBorrowIYOffsetFromA(this);
}

Z80Parser::SubtractWithBorrowIYOffsetFromAContext* Z80Parser::subtractWithBorrowIYOffsetFromA() {
  SubtractWithBorrowIYOffsetFromAContext *_localctx = _tracker.createInstance<SubtractWithBorrowIYOffsetFromAContext>(_ctx, getState());
  enterRule(_localctx, 316, Z80Parser::RuleSubtractWithBorrowIYOffsetFromA);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1554);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 56, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1546);
      subtractWithBorrowCommandName();
      setState(1547);
      dynamic_cast<SubtractWithBorrowIYOffsetFromAContext *>(_localctx)->source = iyPointerWithOffset();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1549);
      subtractWithBorrowCommandName();
      setState(1550);
      aRegister();
      setState(1551);
      match(Z80Parser::T__73);
      setState(1552);
      dynamic_cast<SubtractWithBorrowIYOffsetFromAContext *>(_localctx)->source = iyPointerWithOffset();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SubtractWithBorrowImmediateFromAContext ------------------------------------------------------------------

Z80Parser::SubtractWithBorrowImmediateFromAContext::SubtractWithBorrowImmediateFromAContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::SubtractWithBorrowCommandNameContext* Z80Parser::SubtractWithBorrowImmediateFromAContext::subtractWithBorrowCommandName() {
  return getRuleContext<Z80Parser::SubtractWithBorrowCommandNameContext>(0);
}

Z80Parser::NumberContext* Z80Parser::SubtractWithBorrowImmediateFromAContext::number() {
  return getRuleContext<Z80Parser::NumberContext>(0);
}

Z80Parser::ARegisterContext* Z80Parser::SubtractWithBorrowImmediateFromAContext::aRegister() {
  return getRuleContext<Z80Parser::ARegisterContext>(0);
}


size_t Z80Parser::SubtractWithBorrowImmediateFromAContext::getRuleIndex() const {
  return Z80Parser::RuleSubtractWithBorrowImmediateFromA;
}

void Z80Parser::SubtractWithBorrowImmediateFromAContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSubtractWithBorrowImmediateFromA(this);
}

void Z80Parser::SubtractWithBorrowImmediateFromAContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSubtractWithBorrowImmediateFromA(this);
}

Z80Parser::SubtractWithBorrowImmediateFromAContext* Z80Parser::subtractWithBorrowImmediateFromA() {
  SubtractWithBorrowImmediateFromAContext *_localctx = _tracker.createInstance<SubtractWithBorrowImmediateFromAContext>(_ctx, getState());
  enterRule(_localctx, 318, Z80Parser::RuleSubtractWithBorrowImmediateFromA);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1564);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 57, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1556);
      subtractWithBorrowCommandName();
      setState(1557);
      dynamic_cast<SubtractWithBorrowImmediateFromAContext *>(_localctx)->source = number();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1559);
      subtractWithBorrowCommandName();
      setState(1560);
      aRegister();
      setState(1561);
      match(Z80Parser::T__73);
      setState(1562);
      dynamic_cast<SubtractWithBorrowImmediateFromAContext *>(_localctx)->source = number();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SubtractWithBorrowIXHFromAContext ------------------------------------------------------------------

Z80Parser::SubtractWithBorrowIXHFromAContext::SubtractWithBorrowIXHFromAContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::SubtractWithBorrowCommandNameContext* Z80Parser::SubtractWithBorrowIXHFromAContext::subtractWithBorrowCommandName() {
  return getRuleContext<Z80Parser::SubtractWithBorrowCommandNameContext>(0);
}

Z80Parser::IxHighRegisterContext* Z80Parser::SubtractWithBorrowIXHFromAContext::ixHighRegister() {
  return getRuleContext<Z80Parser::IxHighRegisterContext>(0);
}

Z80Parser::ARegisterContext* Z80Parser::SubtractWithBorrowIXHFromAContext::aRegister() {
  return getRuleContext<Z80Parser::ARegisterContext>(0);
}


size_t Z80Parser::SubtractWithBorrowIXHFromAContext::getRuleIndex() const {
  return Z80Parser::RuleSubtractWithBorrowIXHFromA;
}

void Z80Parser::SubtractWithBorrowIXHFromAContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSubtractWithBorrowIXHFromA(this);
}

void Z80Parser::SubtractWithBorrowIXHFromAContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSubtractWithBorrowIXHFromA(this);
}

Z80Parser::SubtractWithBorrowIXHFromAContext* Z80Parser::subtractWithBorrowIXHFromA() {
  SubtractWithBorrowIXHFromAContext *_localctx = _tracker.createInstance<SubtractWithBorrowIXHFromAContext>(_ctx, getState());
  enterRule(_localctx, 320, Z80Parser::RuleSubtractWithBorrowIXHFromA);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1574);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 58, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1566);
      subtractWithBorrowCommandName();
      setState(1567);
      dynamic_cast<SubtractWithBorrowIXHFromAContext *>(_localctx)->source = ixHighRegister();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1569);
      subtractWithBorrowCommandName();
      setState(1570);
      aRegister();
      setState(1571);
      match(Z80Parser::T__73);
      setState(1572);
      dynamic_cast<SubtractWithBorrowIXHFromAContext *>(_localctx)->source = ixHighRegister();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SubtractWithBorrowIXLFromAContext ------------------------------------------------------------------

Z80Parser::SubtractWithBorrowIXLFromAContext::SubtractWithBorrowIXLFromAContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::SubtractWithBorrowCommandNameContext* Z80Parser::SubtractWithBorrowIXLFromAContext::subtractWithBorrowCommandName() {
  return getRuleContext<Z80Parser::SubtractWithBorrowCommandNameContext>(0);
}

Z80Parser::IxLowRegisterContext* Z80Parser::SubtractWithBorrowIXLFromAContext::ixLowRegister() {
  return getRuleContext<Z80Parser::IxLowRegisterContext>(0);
}

Z80Parser::ARegisterContext* Z80Parser::SubtractWithBorrowIXLFromAContext::aRegister() {
  return getRuleContext<Z80Parser::ARegisterContext>(0);
}


size_t Z80Parser::SubtractWithBorrowIXLFromAContext::getRuleIndex() const {
  return Z80Parser::RuleSubtractWithBorrowIXLFromA;
}

void Z80Parser::SubtractWithBorrowIXLFromAContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSubtractWithBorrowIXLFromA(this);
}

void Z80Parser::SubtractWithBorrowIXLFromAContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSubtractWithBorrowIXLFromA(this);
}

Z80Parser::SubtractWithBorrowIXLFromAContext* Z80Parser::subtractWithBorrowIXLFromA() {
  SubtractWithBorrowIXLFromAContext *_localctx = _tracker.createInstance<SubtractWithBorrowIXLFromAContext>(_ctx, getState());
  enterRule(_localctx, 322, Z80Parser::RuleSubtractWithBorrowIXLFromA);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1584);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 59, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1576);
      subtractWithBorrowCommandName();
      setState(1577);
      dynamic_cast<SubtractWithBorrowIXLFromAContext *>(_localctx)->source = ixLowRegister();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1579);
      subtractWithBorrowCommandName();
      setState(1580);
      aRegister();
      setState(1581);
      match(Z80Parser::T__73);
      setState(1582);
      dynamic_cast<SubtractWithBorrowIXLFromAContext *>(_localctx)->source = ixLowRegister();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SubtractWithBorrowIYHFromAContext ------------------------------------------------------------------

Z80Parser::SubtractWithBorrowIYHFromAContext::SubtractWithBorrowIYHFromAContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::SubtractWithBorrowCommandNameContext* Z80Parser::SubtractWithBorrowIYHFromAContext::subtractWithBorrowCommandName() {
  return getRuleContext<Z80Parser::SubtractWithBorrowCommandNameContext>(0);
}

Z80Parser::IyHighRegisterContext* Z80Parser::SubtractWithBorrowIYHFromAContext::iyHighRegister() {
  return getRuleContext<Z80Parser::IyHighRegisterContext>(0);
}

Z80Parser::ARegisterContext* Z80Parser::SubtractWithBorrowIYHFromAContext::aRegister() {
  return getRuleContext<Z80Parser::ARegisterContext>(0);
}


size_t Z80Parser::SubtractWithBorrowIYHFromAContext::getRuleIndex() const {
  return Z80Parser::RuleSubtractWithBorrowIYHFromA;
}

void Z80Parser::SubtractWithBorrowIYHFromAContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSubtractWithBorrowIYHFromA(this);
}

void Z80Parser::SubtractWithBorrowIYHFromAContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSubtractWithBorrowIYHFromA(this);
}

Z80Parser::SubtractWithBorrowIYHFromAContext* Z80Parser::subtractWithBorrowIYHFromA() {
  SubtractWithBorrowIYHFromAContext *_localctx = _tracker.createInstance<SubtractWithBorrowIYHFromAContext>(_ctx, getState());
  enterRule(_localctx, 324, Z80Parser::RuleSubtractWithBorrowIYHFromA);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1594);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 60, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1586);
      subtractWithBorrowCommandName();
      setState(1587);
      dynamic_cast<SubtractWithBorrowIYHFromAContext *>(_localctx)->source = iyHighRegister();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1589);
      subtractWithBorrowCommandName();
      setState(1590);
      aRegister();
      setState(1591);
      match(Z80Parser::T__73);
      setState(1592);
      dynamic_cast<SubtractWithBorrowIYHFromAContext *>(_localctx)->source = iyHighRegister();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SubtractWithBorrowIYLFromAContext ------------------------------------------------------------------

Z80Parser::SubtractWithBorrowIYLFromAContext::SubtractWithBorrowIYLFromAContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::SubtractWithBorrowCommandNameContext* Z80Parser::SubtractWithBorrowIYLFromAContext::subtractWithBorrowCommandName() {
  return getRuleContext<Z80Parser::SubtractWithBorrowCommandNameContext>(0);
}

Z80Parser::IyLowRegisterContext* Z80Parser::SubtractWithBorrowIYLFromAContext::iyLowRegister() {
  return getRuleContext<Z80Parser::IyLowRegisterContext>(0);
}

Z80Parser::ARegisterContext* Z80Parser::SubtractWithBorrowIYLFromAContext::aRegister() {
  return getRuleContext<Z80Parser::ARegisterContext>(0);
}


size_t Z80Parser::SubtractWithBorrowIYLFromAContext::getRuleIndex() const {
  return Z80Parser::RuleSubtractWithBorrowIYLFromA;
}

void Z80Parser::SubtractWithBorrowIYLFromAContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSubtractWithBorrowIYLFromA(this);
}

void Z80Parser::SubtractWithBorrowIYLFromAContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSubtractWithBorrowIYLFromA(this);
}

Z80Parser::SubtractWithBorrowIYLFromAContext* Z80Parser::subtractWithBorrowIYLFromA() {
  SubtractWithBorrowIYLFromAContext *_localctx = _tracker.createInstance<SubtractWithBorrowIYLFromAContext>(_ctx, getState());
  enterRule(_localctx, 326, Z80Parser::RuleSubtractWithBorrowIYLFromA);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1604);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 61, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1596);
      subtractWithBorrowCommandName();
      setState(1597);
      dynamic_cast<SubtractWithBorrowIYLFromAContext *>(_localctx)->source = iyLowRegister();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1599);
      subtractWithBorrowCommandName();
      setState(1600);
      aRegister();
      setState(1601);
      match(Z80Parser::T__73);
      setState(1602);
      dynamic_cast<SubtractWithBorrowIYLFromAContext *>(_localctx)->source = iyLowRegister();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AndAWithRegisterContext ------------------------------------------------------------------

Z80Parser::AndAWithRegisterContext::AndAWithRegisterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::AndCommandNameContext* Z80Parser::AndAWithRegisterContext::andCommandName() {
  return getRuleContext<Z80Parser::AndCommandNameContext>(0);
}

Z80Parser::SimpleByteRegisterContext* Z80Parser::AndAWithRegisterContext::simpleByteRegister() {
  return getRuleContext<Z80Parser::SimpleByteRegisterContext>(0);
}

Z80Parser::ARegisterContext* Z80Parser::AndAWithRegisterContext::aRegister() {
  return getRuleContext<Z80Parser::ARegisterContext>(0);
}


size_t Z80Parser::AndAWithRegisterContext::getRuleIndex() const {
  return Z80Parser::RuleAndAWithRegister;
}

void Z80Parser::AndAWithRegisterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAndAWithRegister(this);
}

void Z80Parser::AndAWithRegisterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAndAWithRegister(this);
}

Z80Parser::AndAWithRegisterContext* Z80Parser::andAWithRegister() {
  AndAWithRegisterContext *_localctx = _tracker.createInstance<AndAWithRegisterContext>(_ctx, getState());
  enterRule(_localctx, 328, Z80Parser::RuleAndAWithRegister);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1614);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 62, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1606);
      andCommandName();
      setState(1607);
      dynamic_cast<AndAWithRegisterContext *>(_localctx)->source = simpleByteRegister();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1609);
      andCommandName();
      setState(1610);
      aRegister();
      setState(1611);
      match(Z80Parser::T__73);
      setState(1612);
      dynamic_cast<AndAWithRegisterContext *>(_localctx)->source = simpleByteRegister();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AndAWithImmediateContext ------------------------------------------------------------------

Z80Parser::AndAWithImmediateContext::AndAWithImmediateContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::AndCommandNameContext* Z80Parser::AndAWithImmediateContext::andCommandName() {
  return getRuleContext<Z80Parser::AndCommandNameContext>(0);
}

Z80Parser::NumberContext* Z80Parser::AndAWithImmediateContext::number() {
  return getRuleContext<Z80Parser::NumberContext>(0);
}

Z80Parser::ARegisterContext* Z80Parser::AndAWithImmediateContext::aRegister() {
  return getRuleContext<Z80Parser::ARegisterContext>(0);
}


size_t Z80Parser::AndAWithImmediateContext::getRuleIndex() const {
  return Z80Parser::RuleAndAWithImmediate;
}

void Z80Parser::AndAWithImmediateContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAndAWithImmediate(this);
}

void Z80Parser::AndAWithImmediateContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAndAWithImmediate(this);
}

Z80Parser::AndAWithImmediateContext* Z80Parser::andAWithImmediate() {
  AndAWithImmediateContext *_localctx = _tracker.createInstance<AndAWithImmediateContext>(_ctx, getState());
  enterRule(_localctx, 330, Z80Parser::RuleAndAWithImmediate);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1624);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 63, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1616);
      andCommandName();
      setState(1617);
      dynamic_cast<AndAWithImmediateContext *>(_localctx)->source = number();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1619);
      andCommandName();
      setState(1620);
      aRegister();
      setState(1621);
      match(Z80Parser::T__73);
      setState(1622);
      dynamic_cast<AndAWithImmediateContext *>(_localctx)->source = number();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AndAWithHLPointerContext ------------------------------------------------------------------

Z80Parser::AndAWithHLPointerContext::AndAWithHLPointerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::AndCommandNameContext* Z80Parser::AndAWithHLPointerContext::andCommandName() {
  return getRuleContext<Z80Parser::AndCommandNameContext>(0);
}

Z80Parser::HlPointerContext* Z80Parser::AndAWithHLPointerContext::hlPointer() {
  return getRuleContext<Z80Parser::HlPointerContext>(0);
}

Z80Parser::ARegisterContext* Z80Parser::AndAWithHLPointerContext::aRegister() {
  return getRuleContext<Z80Parser::ARegisterContext>(0);
}


size_t Z80Parser::AndAWithHLPointerContext::getRuleIndex() const {
  return Z80Parser::RuleAndAWithHLPointer;
}

void Z80Parser::AndAWithHLPointerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAndAWithHLPointer(this);
}

void Z80Parser::AndAWithHLPointerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAndAWithHLPointer(this);
}

Z80Parser::AndAWithHLPointerContext* Z80Parser::andAWithHLPointer() {
  AndAWithHLPointerContext *_localctx = _tracker.createInstance<AndAWithHLPointerContext>(_ctx, getState());
  enterRule(_localctx, 332, Z80Parser::RuleAndAWithHLPointer);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1634);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 64, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1626);
      andCommandName();
      setState(1627);
      dynamic_cast<AndAWithHLPointerContext *>(_localctx)->source = hlPointer();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1629);
      andCommandName();
      setState(1630);
      aRegister();
      setState(1631);
      match(Z80Parser::T__73);
      setState(1632);
      dynamic_cast<AndAWithHLPointerContext *>(_localctx)->source = hlPointer();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AndAWithIXOffsetContext ------------------------------------------------------------------

Z80Parser::AndAWithIXOffsetContext::AndAWithIXOffsetContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::AndCommandNameContext* Z80Parser::AndAWithIXOffsetContext::andCommandName() {
  return getRuleContext<Z80Parser::AndCommandNameContext>(0);
}

Z80Parser::IxPointerWithOffsetContext* Z80Parser::AndAWithIXOffsetContext::ixPointerWithOffset() {
  return getRuleContext<Z80Parser::IxPointerWithOffsetContext>(0);
}

Z80Parser::ARegisterContext* Z80Parser::AndAWithIXOffsetContext::aRegister() {
  return getRuleContext<Z80Parser::ARegisterContext>(0);
}


size_t Z80Parser::AndAWithIXOffsetContext::getRuleIndex() const {
  return Z80Parser::RuleAndAWithIXOffset;
}

void Z80Parser::AndAWithIXOffsetContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAndAWithIXOffset(this);
}

void Z80Parser::AndAWithIXOffsetContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAndAWithIXOffset(this);
}

Z80Parser::AndAWithIXOffsetContext* Z80Parser::andAWithIXOffset() {
  AndAWithIXOffsetContext *_localctx = _tracker.createInstance<AndAWithIXOffsetContext>(_ctx, getState());
  enterRule(_localctx, 334, Z80Parser::RuleAndAWithIXOffset);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1644);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 65, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1636);
      andCommandName();
      setState(1637);
      dynamic_cast<AndAWithIXOffsetContext *>(_localctx)->source = ixPointerWithOffset();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1639);
      andCommandName();
      setState(1640);
      aRegister();
      setState(1641);
      match(Z80Parser::T__73);
      setState(1642);
      dynamic_cast<AndAWithIXOffsetContext *>(_localctx)->source = ixPointerWithOffset();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AndAWithIYOffsetContext ------------------------------------------------------------------

Z80Parser::AndAWithIYOffsetContext::AndAWithIYOffsetContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::AndCommandNameContext* Z80Parser::AndAWithIYOffsetContext::andCommandName() {
  return getRuleContext<Z80Parser::AndCommandNameContext>(0);
}

Z80Parser::IyPointerWithOffsetContext* Z80Parser::AndAWithIYOffsetContext::iyPointerWithOffset() {
  return getRuleContext<Z80Parser::IyPointerWithOffsetContext>(0);
}

Z80Parser::ARegisterContext* Z80Parser::AndAWithIYOffsetContext::aRegister() {
  return getRuleContext<Z80Parser::ARegisterContext>(0);
}


size_t Z80Parser::AndAWithIYOffsetContext::getRuleIndex() const {
  return Z80Parser::RuleAndAWithIYOffset;
}

void Z80Parser::AndAWithIYOffsetContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAndAWithIYOffset(this);
}

void Z80Parser::AndAWithIYOffsetContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAndAWithIYOffset(this);
}

Z80Parser::AndAWithIYOffsetContext* Z80Parser::andAWithIYOffset() {
  AndAWithIYOffsetContext *_localctx = _tracker.createInstance<AndAWithIYOffsetContext>(_ctx, getState());
  enterRule(_localctx, 336, Z80Parser::RuleAndAWithIYOffset);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1654);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 66, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1646);
      andCommandName();
      setState(1647);
      dynamic_cast<AndAWithIYOffsetContext *>(_localctx)->source = iyPointerWithOffset();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1649);
      andCommandName();
      setState(1650);
      aRegister();
      setState(1651);
      match(Z80Parser::T__73);
      setState(1652);
      dynamic_cast<AndAWithIYOffsetContext *>(_localctx)->source = iyPointerWithOffset();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AndAWithIXHContext ------------------------------------------------------------------

Z80Parser::AndAWithIXHContext::AndAWithIXHContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::AndCommandNameContext* Z80Parser::AndAWithIXHContext::andCommandName() {
  return getRuleContext<Z80Parser::AndCommandNameContext>(0);
}

Z80Parser::IxHighRegisterContext* Z80Parser::AndAWithIXHContext::ixHighRegister() {
  return getRuleContext<Z80Parser::IxHighRegisterContext>(0);
}

Z80Parser::ARegisterContext* Z80Parser::AndAWithIXHContext::aRegister() {
  return getRuleContext<Z80Parser::ARegisterContext>(0);
}


size_t Z80Parser::AndAWithIXHContext::getRuleIndex() const {
  return Z80Parser::RuleAndAWithIXH;
}

void Z80Parser::AndAWithIXHContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAndAWithIXH(this);
}

void Z80Parser::AndAWithIXHContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAndAWithIXH(this);
}

Z80Parser::AndAWithIXHContext* Z80Parser::andAWithIXH() {
  AndAWithIXHContext *_localctx = _tracker.createInstance<AndAWithIXHContext>(_ctx, getState());
  enterRule(_localctx, 338, Z80Parser::RuleAndAWithIXH);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1664);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 67, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1656);
      andCommandName();
      setState(1657);
      dynamic_cast<AndAWithIXHContext *>(_localctx)->source = ixHighRegister();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1659);
      andCommandName();
      setState(1660);
      aRegister();
      setState(1661);
      match(Z80Parser::T__73);
      setState(1662);
      dynamic_cast<AndAWithIXHContext *>(_localctx)->source = ixHighRegister();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AndAWithIXLContext ------------------------------------------------------------------

Z80Parser::AndAWithIXLContext::AndAWithIXLContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::AndCommandNameContext* Z80Parser::AndAWithIXLContext::andCommandName() {
  return getRuleContext<Z80Parser::AndCommandNameContext>(0);
}

Z80Parser::IxLowRegisterContext* Z80Parser::AndAWithIXLContext::ixLowRegister() {
  return getRuleContext<Z80Parser::IxLowRegisterContext>(0);
}

Z80Parser::ARegisterContext* Z80Parser::AndAWithIXLContext::aRegister() {
  return getRuleContext<Z80Parser::ARegisterContext>(0);
}


size_t Z80Parser::AndAWithIXLContext::getRuleIndex() const {
  return Z80Parser::RuleAndAWithIXL;
}

void Z80Parser::AndAWithIXLContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAndAWithIXL(this);
}

void Z80Parser::AndAWithIXLContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAndAWithIXL(this);
}

Z80Parser::AndAWithIXLContext* Z80Parser::andAWithIXL() {
  AndAWithIXLContext *_localctx = _tracker.createInstance<AndAWithIXLContext>(_ctx, getState());
  enterRule(_localctx, 340, Z80Parser::RuleAndAWithIXL);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1674);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 68, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1666);
      andCommandName();
      setState(1667);
      dynamic_cast<AndAWithIXLContext *>(_localctx)->source = ixLowRegister();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1669);
      andCommandName();
      setState(1670);
      aRegister();
      setState(1671);
      match(Z80Parser::T__73);
      setState(1672);
      dynamic_cast<AndAWithIXLContext *>(_localctx)->source = ixLowRegister();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AndAWithIYHContext ------------------------------------------------------------------

Z80Parser::AndAWithIYHContext::AndAWithIYHContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::AndCommandNameContext* Z80Parser::AndAWithIYHContext::andCommandName() {
  return getRuleContext<Z80Parser::AndCommandNameContext>(0);
}

Z80Parser::IyHighRegisterContext* Z80Parser::AndAWithIYHContext::iyHighRegister() {
  return getRuleContext<Z80Parser::IyHighRegisterContext>(0);
}

Z80Parser::ARegisterContext* Z80Parser::AndAWithIYHContext::aRegister() {
  return getRuleContext<Z80Parser::ARegisterContext>(0);
}


size_t Z80Parser::AndAWithIYHContext::getRuleIndex() const {
  return Z80Parser::RuleAndAWithIYH;
}

void Z80Parser::AndAWithIYHContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAndAWithIYH(this);
}

void Z80Parser::AndAWithIYHContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAndAWithIYH(this);
}

Z80Parser::AndAWithIYHContext* Z80Parser::andAWithIYH() {
  AndAWithIYHContext *_localctx = _tracker.createInstance<AndAWithIYHContext>(_ctx, getState());
  enterRule(_localctx, 342, Z80Parser::RuleAndAWithIYH);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1684);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 69, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1676);
      andCommandName();
      setState(1677);
      dynamic_cast<AndAWithIYHContext *>(_localctx)->source = iyHighRegister();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1679);
      andCommandName();
      setState(1680);
      aRegister();
      setState(1681);
      match(Z80Parser::T__73);
      setState(1682);
      dynamic_cast<AndAWithIYHContext *>(_localctx)->source = iyHighRegister();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AndAWithIYLContext ------------------------------------------------------------------

Z80Parser::AndAWithIYLContext::AndAWithIYLContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::AndCommandNameContext* Z80Parser::AndAWithIYLContext::andCommandName() {
  return getRuleContext<Z80Parser::AndCommandNameContext>(0);
}

Z80Parser::IyLowRegisterContext* Z80Parser::AndAWithIYLContext::iyLowRegister() {
  return getRuleContext<Z80Parser::IyLowRegisterContext>(0);
}

Z80Parser::ARegisterContext* Z80Parser::AndAWithIYLContext::aRegister() {
  return getRuleContext<Z80Parser::ARegisterContext>(0);
}


size_t Z80Parser::AndAWithIYLContext::getRuleIndex() const {
  return Z80Parser::RuleAndAWithIYL;
}

void Z80Parser::AndAWithIYLContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAndAWithIYL(this);
}

void Z80Parser::AndAWithIYLContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAndAWithIYL(this);
}

Z80Parser::AndAWithIYLContext* Z80Parser::andAWithIYL() {
  AndAWithIYLContext *_localctx = _tracker.createInstance<AndAWithIYLContext>(_ctx, getState());
  enterRule(_localctx, 344, Z80Parser::RuleAndAWithIYL);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1694);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 70, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1686);
      andCommandName();
      setState(1687);
      dynamic_cast<AndAWithIYLContext *>(_localctx)->source = iyLowRegister();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1689);
      andCommandName();
      setState(1690);
      aRegister();
      setState(1691);
      match(Z80Parser::T__73);
      setState(1692);
      dynamic_cast<AndAWithIYLContext *>(_localctx)->source = iyLowRegister();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OrAWithRegisterContext ------------------------------------------------------------------

Z80Parser::OrAWithRegisterContext::OrAWithRegisterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::OrCommandNameContext* Z80Parser::OrAWithRegisterContext::orCommandName() {
  return getRuleContext<Z80Parser::OrCommandNameContext>(0);
}

Z80Parser::SimpleByteRegisterContext* Z80Parser::OrAWithRegisterContext::simpleByteRegister() {
  return getRuleContext<Z80Parser::SimpleByteRegisterContext>(0);
}

Z80Parser::ARegisterContext* Z80Parser::OrAWithRegisterContext::aRegister() {
  return getRuleContext<Z80Parser::ARegisterContext>(0);
}


size_t Z80Parser::OrAWithRegisterContext::getRuleIndex() const {
  return Z80Parser::RuleOrAWithRegister;
}

void Z80Parser::OrAWithRegisterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOrAWithRegister(this);
}

void Z80Parser::OrAWithRegisterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOrAWithRegister(this);
}

Z80Parser::OrAWithRegisterContext* Z80Parser::orAWithRegister() {
  OrAWithRegisterContext *_localctx = _tracker.createInstance<OrAWithRegisterContext>(_ctx, getState());
  enterRule(_localctx, 346, Z80Parser::RuleOrAWithRegister);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1704);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 71, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1696);
      orCommandName();
      setState(1697);
      dynamic_cast<OrAWithRegisterContext *>(_localctx)->source = simpleByteRegister();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1699);
      orCommandName();
      setState(1700);
      aRegister();
      setState(1701);
      match(Z80Parser::T__73);
      setState(1702);
      dynamic_cast<OrAWithRegisterContext *>(_localctx)->source = simpleByteRegister();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OrAWithImmediateContext ------------------------------------------------------------------

Z80Parser::OrAWithImmediateContext::OrAWithImmediateContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::OrCommandNameContext* Z80Parser::OrAWithImmediateContext::orCommandName() {
  return getRuleContext<Z80Parser::OrCommandNameContext>(0);
}

Z80Parser::NumberContext* Z80Parser::OrAWithImmediateContext::number() {
  return getRuleContext<Z80Parser::NumberContext>(0);
}

Z80Parser::ARegisterContext* Z80Parser::OrAWithImmediateContext::aRegister() {
  return getRuleContext<Z80Parser::ARegisterContext>(0);
}


size_t Z80Parser::OrAWithImmediateContext::getRuleIndex() const {
  return Z80Parser::RuleOrAWithImmediate;
}

void Z80Parser::OrAWithImmediateContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOrAWithImmediate(this);
}

void Z80Parser::OrAWithImmediateContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOrAWithImmediate(this);
}

Z80Parser::OrAWithImmediateContext* Z80Parser::orAWithImmediate() {
  OrAWithImmediateContext *_localctx = _tracker.createInstance<OrAWithImmediateContext>(_ctx, getState());
  enterRule(_localctx, 348, Z80Parser::RuleOrAWithImmediate);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1714);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 72, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1706);
      orCommandName();
      setState(1707);
      dynamic_cast<OrAWithImmediateContext *>(_localctx)->source = number();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1709);
      orCommandName();
      setState(1710);
      aRegister();
      setState(1711);
      match(Z80Parser::T__73);
      setState(1712);
      dynamic_cast<OrAWithImmediateContext *>(_localctx)->source = number();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OrAWithHLPointerContext ------------------------------------------------------------------

Z80Parser::OrAWithHLPointerContext::OrAWithHLPointerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::OrCommandNameContext* Z80Parser::OrAWithHLPointerContext::orCommandName() {
  return getRuleContext<Z80Parser::OrCommandNameContext>(0);
}

Z80Parser::HlPointerContext* Z80Parser::OrAWithHLPointerContext::hlPointer() {
  return getRuleContext<Z80Parser::HlPointerContext>(0);
}

Z80Parser::ARegisterContext* Z80Parser::OrAWithHLPointerContext::aRegister() {
  return getRuleContext<Z80Parser::ARegisterContext>(0);
}


size_t Z80Parser::OrAWithHLPointerContext::getRuleIndex() const {
  return Z80Parser::RuleOrAWithHLPointer;
}

void Z80Parser::OrAWithHLPointerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOrAWithHLPointer(this);
}

void Z80Parser::OrAWithHLPointerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOrAWithHLPointer(this);
}

Z80Parser::OrAWithHLPointerContext* Z80Parser::orAWithHLPointer() {
  OrAWithHLPointerContext *_localctx = _tracker.createInstance<OrAWithHLPointerContext>(_ctx, getState());
  enterRule(_localctx, 350, Z80Parser::RuleOrAWithHLPointer);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1724);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 73, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1716);
      orCommandName();
      setState(1717);
      dynamic_cast<OrAWithHLPointerContext *>(_localctx)->source = hlPointer();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1719);
      orCommandName();
      setState(1720);
      aRegister();
      setState(1721);
      match(Z80Parser::T__73);
      setState(1722);
      dynamic_cast<OrAWithHLPointerContext *>(_localctx)->source = hlPointer();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OrAWithIXOffsetContext ------------------------------------------------------------------

Z80Parser::OrAWithIXOffsetContext::OrAWithIXOffsetContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::OrCommandNameContext* Z80Parser::OrAWithIXOffsetContext::orCommandName() {
  return getRuleContext<Z80Parser::OrCommandNameContext>(0);
}

Z80Parser::IxPointerWithOffsetContext* Z80Parser::OrAWithIXOffsetContext::ixPointerWithOffset() {
  return getRuleContext<Z80Parser::IxPointerWithOffsetContext>(0);
}

Z80Parser::ARegisterContext* Z80Parser::OrAWithIXOffsetContext::aRegister() {
  return getRuleContext<Z80Parser::ARegisterContext>(0);
}


size_t Z80Parser::OrAWithIXOffsetContext::getRuleIndex() const {
  return Z80Parser::RuleOrAWithIXOffset;
}

void Z80Parser::OrAWithIXOffsetContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOrAWithIXOffset(this);
}

void Z80Parser::OrAWithIXOffsetContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOrAWithIXOffset(this);
}

Z80Parser::OrAWithIXOffsetContext* Z80Parser::orAWithIXOffset() {
  OrAWithIXOffsetContext *_localctx = _tracker.createInstance<OrAWithIXOffsetContext>(_ctx, getState());
  enterRule(_localctx, 352, Z80Parser::RuleOrAWithIXOffset);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1734);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 74, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1726);
      orCommandName();
      setState(1727);
      dynamic_cast<OrAWithIXOffsetContext *>(_localctx)->source = ixPointerWithOffset();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1729);
      orCommandName();
      setState(1730);
      aRegister();
      setState(1731);
      match(Z80Parser::T__73);
      setState(1732);
      dynamic_cast<OrAWithIXOffsetContext *>(_localctx)->source = ixPointerWithOffset();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OrAWithIYOffsetContext ------------------------------------------------------------------

Z80Parser::OrAWithIYOffsetContext::OrAWithIYOffsetContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::OrCommandNameContext* Z80Parser::OrAWithIYOffsetContext::orCommandName() {
  return getRuleContext<Z80Parser::OrCommandNameContext>(0);
}

Z80Parser::IyPointerWithOffsetContext* Z80Parser::OrAWithIYOffsetContext::iyPointerWithOffset() {
  return getRuleContext<Z80Parser::IyPointerWithOffsetContext>(0);
}

Z80Parser::ARegisterContext* Z80Parser::OrAWithIYOffsetContext::aRegister() {
  return getRuleContext<Z80Parser::ARegisterContext>(0);
}


size_t Z80Parser::OrAWithIYOffsetContext::getRuleIndex() const {
  return Z80Parser::RuleOrAWithIYOffset;
}

void Z80Parser::OrAWithIYOffsetContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOrAWithIYOffset(this);
}

void Z80Parser::OrAWithIYOffsetContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOrAWithIYOffset(this);
}

Z80Parser::OrAWithIYOffsetContext* Z80Parser::orAWithIYOffset() {
  OrAWithIYOffsetContext *_localctx = _tracker.createInstance<OrAWithIYOffsetContext>(_ctx, getState());
  enterRule(_localctx, 354, Z80Parser::RuleOrAWithIYOffset);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1744);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 75, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1736);
      orCommandName();
      setState(1737);
      dynamic_cast<OrAWithIYOffsetContext *>(_localctx)->source = iyPointerWithOffset();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1739);
      orCommandName();
      setState(1740);
      aRegister();
      setState(1741);
      match(Z80Parser::T__73);
      setState(1742);
      dynamic_cast<OrAWithIYOffsetContext *>(_localctx)->source = iyPointerWithOffset();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OrAWithIXHContext ------------------------------------------------------------------

Z80Parser::OrAWithIXHContext::OrAWithIXHContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::OrCommandNameContext* Z80Parser::OrAWithIXHContext::orCommandName() {
  return getRuleContext<Z80Parser::OrCommandNameContext>(0);
}

Z80Parser::IxHighRegisterContext* Z80Parser::OrAWithIXHContext::ixHighRegister() {
  return getRuleContext<Z80Parser::IxHighRegisterContext>(0);
}

Z80Parser::ARegisterContext* Z80Parser::OrAWithIXHContext::aRegister() {
  return getRuleContext<Z80Parser::ARegisterContext>(0);
}


size_t Z80Parser::OrAWithIXHContext::getRuleIndex() const {
  return Z80Parser::RuleOrAWithIXH;
}

void Z80Parser::OrAWithIXHContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOrAWithIXH(this);
}

void Z80Parser::OrAWithIXHContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOrAWithIXH(this);
}

Z80Parser::OrAWithIXHContext* Z80Parser::orAWithIXH() {
  OrAWithIXHContext *_localctx = _tracker.createInstance<OrAWithIXHContext>(_ctx, getState());
  enterRule(_localctx, 356, Z80Parser::RuleOrAWithIXH);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1754);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 76, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1746);
      orCommandName();
      setState(1747);
      dynamic_cast<OrAWithIXHContext *>(_localctx)->source = ixHighRegister();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1749);
      orCommandName();
      setState(1750);
      aRegister();
      setState(1751);
      match(Z80Parser::T__73);
      setState(1752);
      dynamic_cast<OrAWithIXHContext *>(_localctx)->source = ixHighRegister();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OrAWithIXLContext ------------------------------------------------------------------

Z80Parser::OrAWithIXLContext::OrAWithIXLContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::OrCommandNameContext* Z80Parser::OrAWithIXLContext::orCommandName() {
  return getRuleContext<Z80Parser::OrCommandNameContext>(0);
}

Z80Parser::IxLowRegisterContext* Z80Parser::OrAWithIXLContext::ixLowRegister() {
  return getRuleContext<Z80Parser::IxLowRegisterContext>(0);
}

Z80Parser::ARegisterContext* Z80Parser::OrAWithIXLContext::aRegister() {
  return getRuleContext<Z80Parser::ARegisterContext>(0);
}


size_t Z80Parser::OrAWithIXLContext::getRuleIndex() const {
  return Z80Parser::RuleOrAWithIXL;
}

void Z80Parser::OrAWithIXLContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOrAWithIXL(this);
}

void Z80Parser::OrAWithIXLContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOrAWithIXL(this);
}

Z80Parser::OrAWithIXLContext* Z80Parser::orAWithIXL() {
  OrAWithIXLContext *_localctx = _tracker.createInstance<OrAWithIXLContext>(_ctx, getState());
  enterRule(_localctx, 358, Z80Parser::RuleOrAWithIXL);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1764);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 77, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1756);
      orCommandName();
      setState(1757);
      dynamic_cast<OrAWithIXLContext *>(_localctx)->source = ixLowRegister();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1759);
      orCommandName();
      setState(1760);
      aRegister();
      setState(1761);
      match(Z80Parser::T__73);
      setState(1762);
      dynamic_cast<OrAWithIXLContext *>(_localctx)->source = ixLowRegister();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OrAWithIYHContext ------------------------------------------------------------------

Z80Parser::OrAWithIYHContext::OrAWithIYHContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::OrCommandNameContext* Z80Parser::OrAWithIYHContext::orCommandName() {
  return getRuleContext<Z80Parser::OrCommandNameContext>(0);
}

Z80Parser::IyHighRegisterContext* Z80Parser::OrAWithIYHContext::iyHighRegister() {
  return getRuleContext<Z80Parser::IyHighRegisterContext>(0);
}

Z80Parser::ARegisterContext* Z80Parser::OrAWithIYHContext::aRegister() {
  return getRuleContext<Z80Parser::ARegisterContext>(0);
}


size_t Z80Parser::OrAWithIYHContext::getRuleIndex() const {
  return Z80Parser::RuleOrAWithIYH;
}

void Z80Parser::OrAWithIYHContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOrAWithIYH(this);
}

void Z80Parser::OrAWithIYHContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOrAWithIYH(this);
}

Z80Parser::OrAWithIYHContext* Z80Parser::orAWithIYH() {
  OrAWithIYHContext *_localctx = _tracker.createInstance<OrAWithIYHContext>(_ctx, getState());
  enterRule(_localctx, 360, Z80Parser::RuleOrAWithIYH);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1774);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 78, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1766);
      orCommandName();
      setState(1767);
      dynamic_cast<OrAWithIYHContext *>(_localctx)->source = iyHighRegister();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1769);
      orCommandName();
      setState(1770);
      aRegister();
      setState(1771);
      match(Z80Parser::T__73);
      setState(1772);
      dynamic_cast<OrAWithIYHContext *>(_localctx)->source = iyHighRegister();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OrAWithIYLContext ------------------------------------------------------------------

Z80Parser::OrAWithIYLContext::OrAWithIYLContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::OrCommandNameContext* Z80Parser::OrAWithIYLContext::orCommandName() {
  return getRuleContext<Z80Parser::OrCommandNameContext>(0);
}

Z80Parser::IyLowRegisterContext* Z80Parser::OrAWithIYLContext::iyLowRegister() {
  return getRuleContext<Z80Parser::IyLowRegisterContext>(0);
}

Z80Parser::ARegisterContext* Z80Parser::OrAWithIYLContext::aRegister() {
  return getRuleContext<Z80Parser::ARegisterContext>(0);
}


size_t Z80Parser::OrAWithIYLContext::getRuleIndex() const {
  return Z80Parser::RuleOrAWithIYL;
}

void Z80Parser::OrAWithIYLContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOrAWithIYL(this);
}

void Z80Parser::OrAWithIYLContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOrAWithIYL(this);
}

Z80Parser::OrAWithIYLContext* Z80Parser::orAWithIYL() {
  OrAWithIYLContext *_localctx = _tracker.createInstance<OrAWithIYLContext>(_ctx, getState());
  enterRule(_localctx, 362, Z80Parser::RuleOrAWithIYL);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1784);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 79, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1776);
      orCommandName();
      setState(1777);
      dynamic_cast<OrAWithIYLContext *>(_localctx)->source = iyLowRegister();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1779);
      orCommandName();
      setState(1780);
      aRegister();
      setState(1781);
      match(Z80Parser::T__73);
      setState(1782);
      dynamic_cast<OrAWithIYLContext *>(_localctx)->source = iyLowRegister();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- XorAWithRegisterContext ------------------------------------------------------------------

Z80Parser::XorAWithRegisterContext::XorAWithRegisterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::XorCommandNameContext* Z80Parser::XorAWithRegisterContext::xorCommandName() {
  return getRuleContext<Z80Parser::XorCommandNameContext>(0);
}

Z80Parser::SimpleByteRegisterContext* Z80Parser::XorAWithRegisterContext::simpleByteRegister() {
  return getRuleContext<Z80Parser::SimpleByteRegisterContext>(0);
}

Z80Parser::ARegisterContext* Z80Parser::XorAWithRegisterContext::aRegister() {
  return getRuleContext<Z80Parser::ARegisterContext>(0);
}


size_t Z80Parser::XorAWithRegisterContext::getRuleIndex() const {
  return Z80Parser::RuleXorAWithRegister;
}

void Z80Parser::XorAWithRegisterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterXorAWithRegister(this);
}

void Z80Parser::XorAWithRegisterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitXorAWithRegister(this);
}

Z80Parser::XorAWithRegisterContext* Z80Parser::xorAWithRegister() {
  XorAWithRegisterContext *_localctx = _tracker.createInstance<XorAWithRegisterContext>(_ctx, getState());
  enterRule(_localctx, 364, Z80Parser::RuleXorAWithRegister);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1794);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 80, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1786);
      xorCommandName();
      setState(1787);
      dynamic_cast<XorAWithRegisterContext *>(_localctx)->source = simpleByteRegister();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1789);
      xorCommandName();
      setState(1790);
      aRegister();
      setState(1791);
      match(Z80Parser::T__73);
      setState(1792);
      dynamic_cast<XorAWithRegisterContext *>(_localctx)->source = simpleByteRegister();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- XorAWithImmediateContext ------------------------------------------------------------------

Z80Parser::XorAWithImmediateContext::XorAWithImmediateContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::XorCommandNameContext* Z80Parser::XorAWithImmediateContext::xorCommandName() {
  return getRuleContext<Z80Parser::XorCommandNameContext>(0);
}

Z80Parser::NumberContext* Z80Parser::XorAWithImmediateContext::number() {
  return getRuleContext<Z80Parser::NumberContext>(0);
}

Z80Parser::ARegisterContext* Z80Parser::XorAWithImmediateContext::aRegister() {
  return getRuleContext<Z80Parser::ARegisterContext>(0);
}


size_t Z80Parser::XorAWithImmediateContext::getRuleIndex() const {
  return Z80Parser::RuleXorAWithImmediate;
}

void Z80Parser::XorAWithImmediateContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterXorAWithImmediate(this);
}

void Z80Parser::XorAWithImmediateContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitXorAWithImmediate(this);
}

Z80Parser::XorAWithImmediateContext* Z80Parser::xorAWithImmediate() {
  XorAWithImmediateContext *_localctx = _tracker.createInstance<XorAWithImmediateContext>(_ctx, getState());
  enterRule(_localctx, 366, Z80Parser::RuleXorAWithImmediate);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1804);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 81, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1796);
      xorCommandName();
      setState(1797);
      dynamic_cast<XorAWithImmediateContext *>(_localctx)->source = number();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1799);
      xorCommandName();
      setState(1800);
      aRegister();
      setState(1801);
      match(Z80Parser::T__73);
      setState(1802);
      dynamic_cast<XorAWithImmediateContext *>(_localctx)->source = number();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- XorAWithHLPointerContext ------------------------------------------------------------------

Z80Parser::XorAWithHLPointerContext::XorAWithHLPointerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::XorCommandNameContext* Z80Parser::XorAWithHLPointerContext::xorCommandName() {
  return getRuleContext<Z80Parser::XorCommandNameContext>(0);
}

Z80Parser::HlPointerContext* Z80Parser::XorAWithHLPointerContext::hlPointer() {
  return getRuleContext<Z80Parser::HlPointerContext>(0);
}

Z80Parser::ARegisterContext* Z80Parser::XorAWithHLPointerContext::aRegister() {
  return getRuleContext<Z80Parser::ARegisterContext>(0);
}


size_t Z80Parser::XorAWithHLPointerContext::getRuleIndex() const {
  return Z80Parser::RuleXorAWithHLPointer;
}

void Z80Parser::XorAWithHLPointerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterXorAWithHLPointer(this);
}

void Z80Parser::XorAWithHLPointerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitXorAWithHLPointer(this);
}

Z80Parser::XorAWithHLPointerContext* Z80Parser::xorAWithHLPointer() {
  XorAWithHLPointerContext *_localctx = _tracker.createInstance<XorAWithHLPointerContext>(_ctx, getState());
  enterRule(_localctx, 368, Z80Parser::RuleXorAWithHLPointer);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1814);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 82, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1806);
      xorCommandName();
      setState(1807);
      dynamic_cast<XorAWithHLPointerContext *>(_localctx)->source = hlPointer();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1809);
      xorCommandName();
      setState(1810);
      aRegister();
      setState(1811);
      match(Z80Parser::T__73);
      setState(1812);
      dynamic_cast<XorAWithHLPointerContext *>(_localctx)->source = hlPointer();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- XorAWithIXOffsetContext ------------------------------------------------------------------

Z80Parser::XorAWithIXOffsetContext::XorAWithIXOffsetContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::XorCommandNameContext* Z80Parser::XorAWithIXOffsetContext::xorCommandName() {
  return getRuleContext<Z80Parser::XorCommandNameContext>(0);
}

Z80Parser::IxPointerWithOffsetContext* Z80Parser::XorAWithIXOffsetContext::ixPointerWithOffset() {
  return getRuleContext<Z80Parser::IxPointerWithOffsetContext>(0);
}

Z80Parser::ARegisterContext* Z80Parser::XorAWithIXOffsetContext::aRegister() {
  return getRuleContext<Z80Parser::ARegisterContext>(0);
}


size_t Z80Parser::XorAWithIXOffsetContext::getRuleIndex() const {
  return Z80Parser::RuleXorAWithIXOffset;
}

void Z80Parser::XorAWithIXOffsetContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterXorAWithIXOffset(this);
}

void Z80Parser::XorAWithIXOffsetContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitXorAWithIXOffset(this);
}

Z80Parser::XorAWithIXOffsetContext* Z80Parser::xorAWithIXOffset() {
  XorAWithIXOffsetContext *_localctx = _tracker.createInstance<XorAWithIXOffsetContext>(_ctx, getState());
  enterRule(_localctx, 370, Z80Parser::RuleXorAWithIXOffset);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1824);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 83, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1816);
      xorCommandName();
      setState(1817);
      dynamic_cast<XorAWithIXOffsetContext *>(_localctx)->source = ixPointerWithOffset();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1819);
      xorCommandName();
      setState(1820);
      aRegister();
      setState(1821);
      match(Z80Parser::T__73);
      setState(1822);
      dynamic_cast<XorAWithIXOffsetContext *>(_localctx)->source = ixPointerWithOffset();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- XorAWithIYOffsetContext ------------------------------------------------------------------

Z80Parser::XorAWithIYOffsetContext::XorAWithIYOffsetContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::XorCommandNameContext* Z80Parser::XorAWithIYOffsetContext::xorCommandName() {
  return getRuleContext<Z80Parser::XorCommandNameContext>(0);
}

Z80Parser::IyPointerWithOffsetContext* Z80Parser::XorAWithIYOffsetContext::iyPointerWithOffset() {
  return getRuleContext<Z80Parser::IyPointerWithOffsetContext>(0);
}

Z80Parser::ARegisterContext* Z80Parser::XorAWithIYOffsetContext::aRegister() {
  return getRuleContext<Z80Parser::ARegisterContext>(0);
}


size_t Z80Parser::XorAWithIYOffsetContext::getRuleIndex() const {
  return Z80Parser::RuleXorAWithIYOffset;
}

void Z80Parser::XorAWithIYOffsetContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterXorAWithIYOffset(this);
}

void Z80Parser::XorAWithIYOffsetContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitXorAWithIYOffset(this);
}

Z80Parser::XorAWithIYOffsetContext* Z80Parser::xorAWithIYOffset() {
  XorAWithIYOffsetContext *_localctx = _tracker.createInstance<XorAWithIYOffsetContext>(_ctx, getState());
  enterRule(_localctx, 372, Z80Parser::RuleXorAWithIYOffset);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1834);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 84, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1826);
      xorCommandName();
      setState(1827);
      dynamic_cast<XorAWithIYOffsetContext *>(_localctx)->source = iyPointerWithOffset();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1829);
      xorCommandName();
      setState(1830);
      aRegister();
      setState(1831);
      match(Z80Parser::T__73);
      setState(1832);
      dynamic_cast<XorAWithIYOffsetContext *>(_localctx)->source = iyPointerWithOffset();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- XorAWithIXHContext ------------------------------------------------------------------

Z80Parser::XorAWithIXHContext::XorAWithIXHContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::XorCommandNameContext* Z80Parser::XorAWithIXHContext::xorCommandName() {
  return getRuleContext<Z80Parser::XorCommandNameContext>(0);
}

Z80Parser::IxHighRegisterContext* Z80Parser::XorAWithIXHContext::ixHighRegister() {
  return getRuleContext<Z80Parser::IxHighRegisterContext>(0);
}

Z80Parser::ARegisterContext* Z80Parser::XorAWithIXHContext::aRegister() {
  return getRuleContext<Z80Parser::ARegisterContext>(0);
}


size_t Z80Parser::XorAWithIXHContext::getRuleIndex() const {
  return Z80Parser::RuleXorAWithIXH;
}

void Z80Parser::XorAWithIXHContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterXorAWithIXH(this);
}

void Z80Parser::XorAWithIXHContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitXorAWithIXH(this);
}

Z80Parser::XorAWithIXHContext* Z80Parser::xorAWithIXH() {
  XorAWithIXHContext *_localctx = _tracker.createInstance<XorAWithIXHContext>(_ctx, getState());
  enterRule(_localctx, 374, Z80Parser::RuleXorAWithIXH);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1844);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 85, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1836);
      xorCommandName();
      setState(1837);
      dynamic_cast<XorAWithIXHContext *>(_localctx)->source = ixHighRegister();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1839);
      xorCommandName();
      setState(1840);
      aRegister();
      setState(1841);
      match(Z80Parser::T__73);
      setState(1842);
      dynamic_cast<XorAWithIXHContext *>(_localctx)->source = ixHighRegister();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- XorAWithIXLContext ------------------------------------------------------------------

Z80Parser::XorAWithIXLContext::XorAWithIXLContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::XorCommandNameContext* Z80Parser::XorAWithIXLContext::xorCommandName() {
  return getRuleContext<Z80Parser::XorCommandNameContext>(0);
}

Z80Parser::IxLowRegisterContext* Z80Parser::XorAWithIXLContext::ixLowRegister() {
  return getRuleContext<Z80Parser::IxLowRegisterContext>(0);
}

Z80Parser::ARegisterContext* Z80Parser::XorAWithIXLContext::aRegister() {
  return getRuleContext<Z80Parser::ARegisterContext>(0);
}


size_t Z80Parser::XorAWithIXLContext::getRuleIndex() const {
  return Z80Parser::RuleXorAWithIXL;
}

void Z80Parser::XorAWithIXLContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterXorAWithIXL(this);
}

void Z80Parser::XorAWithIXLContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitXorAWithIXL(this);
}

Z80Parser::XorAWithIXLContext* Z80Parser::xorAWithIXL() {
  XorAWithIXLContext *_localctx = _tracker.createInstance<XorAWithIXLContext>(_ctx, getState());
  enterRule(_localctx, 376, Z80Parser::RuleXorAWithIXL);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1854);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 86, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1846);
      xorCommandName();
      setState(1847);
      dynamic_cast<XorAWithIXLContext *>(_localctx)->source = ixLowRegister();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1849);
      xorCommandName();
      setState(1850);
      aRegister();
      setState(1851);
      match(Z80Parser::T__73);
      setState(1852);
      dynamic_cast<XorAWithIXLContext *>(_localctx)->source = ixLowRegister();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- XorAWithIYHContext ------------------------------------------------------------------

Z80Parser::XorAWithIYHContext::XorAWithIYHContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::XorCommandNameContext* Z80Parser::XorAWithIYHContext::xorCommandName() {
  return getRuleContext<Z80Parser::XorCommandNameContext>(0);
}

Z80Parser::IyHighRegisterContext* Z80Parser::XorAWithIYHContext::iyHighRegister() {
  return getRuleContext<Z80Parser::IyHighRegisterContext>(0);
}

Z80Parser::ARegisterContext* Z80Parser::XorAWithIYHContext::aRegister() {
  return getRuleContext<Z80Parser::ARegisterContext>(0);
}


size_t Z80Parser::XorAWithIYHContext::getRuleIndex() const {
  return Z80Parser::RuleXorAWithIYH;
}

void Z80Parser::XorAWithIYHContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterXorAWithIYH(this);
}

void Z80Parser::XorAWithIYHContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitXorAWithIYH(this);
}

Z80Parser::XorAWithIYHContext* Z80Parser::xorAWithIYH() {
  XorAWithIYHContext *_localctx = _tracker.createInstance<XorAWithIYHContext>(_ctx, getState());
  enterRule(_localctx, 378, Z80Parser::RuleXorAWithIYH);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1864);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 87, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1856);
      xorCommandName();
      setState(1857);
      dynamic_cast<XorAWithIYHContext *>(_localctx)->source = iyHighRegister();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1859);
      xorCommandName();
      setState(1860);
      aRegister();
      setState(1861);
      match(Z80Parser::T__73);
      setState(1862);
      dynamic_cast<XorAWithIYHContext *>(_localctx)->source = iyHighRegister();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- XorAWithIYLContext ------------------------------------------------------------------

Z80Parser::XorAWithIYLContext::XorAWithIYLContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::XorCommandNameContext* Z80Parser::XorAWithIYLContext::xorCommandName() {
  return getRuleContext<Z80Parser::XorCommandNameContext>(0);
}

Z80Parser::IyLowRegisterContext* Z80Parser::XorAWithIYLContext::iyLowRegister() {
  return getRuleContext<Z80Parser::IyLowRegisterContext>(0);
}

Z80Parser::ARegisterContext* Z80Parser::XorAWithIYLContext::aRegister() {
  return getRuleContext<Z80Parser::ARegisterContext>(0);
}


size_t Z80Parser::XorAWithIYLContext::getRuleIndex() const {
  return Z80Parser::RuleXorAWithIYL;
}

void Z80Parser::XorAWithIYLContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterXorAWithIYL(this);
}

void Z80Parser::XorAWithIYLContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitXorAWithIYL(this);
}

Z80Parser::XorAWithIYLContext* Z80Parser::xorAWithIYL() {
  XorAWithIYLContext *_localctx = _tracker.createInstance<XorAWithIYLContext>(_ctx, getState());
  enterRule(_localctx, 380, Z80Parser::RuleXorAWithIYL);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1874);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 88, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1866);
      xorCommandName();
      setState(1867);
      dynamic_cast<XorAWithIYLContext *>(_localctx)->source = iyLowRegister();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1869);
      xorCommandName();
      setState(1870);
      aRegister();
      setState(1871);
      match(Z80Parser::T__73);
      setState(1872);
      dynamic_cast<XorAWithIYLContext *>(_localctx)->source = iyLowRegister();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CompareAWithRegisterContext ------------------------------------------------------------------

Z80Parser::CompareAWithRegisterContext::CompareAWithRegisterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::CompareCommandNameContext* Z80Parser::CompareAWithRegisterContext::compareCommandName() {
  return getRuleContext<Z80Parser::CompareCommandNameContext>(0);
}

Z80Parser::SimpleByteRegisterContext* Z80Parser::CompareAWithRegisterContext::simpleByteRegister() {
  return getRuleContext<Z80Parser::SimpleByteRegisterContext>(0);
}

Z80Parser::ARegisterContext* Z80Parser::CompareAWithRegisterContext::aRegister() {
  return getRuleContext<Z80Parser::ARegisterContext>(0);
}


size_t Z80Parser::CompareAWithRegisterContext::getRuleIndex() const {
  return Z80Parser::RuleCompareAWithRegister;
}

void Z80Parser::CompareAWithRegisterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCompareAWithRegister(this);
}

void Z80Parser::CompareAWithRegisterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCompareAWithRegister(this);
}

Z80Parser::CompareAWithRegisterContext* Z80Parser::compareAWithRegister() {
  CompareAWithRegisterContext *_localctx = _tracker.createInstance<CompareAWithRegisterContext>(_ctx, getState());
  enterRule(_localctx, 382, Z80Parser::RuleCompareAWithRegister);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1884);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 89, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1876);
      compareCommandName();
      setState(1877);
      dynamic_cast<CompareAWithRegisterContext *>(_localctx)->source = simpleByteRegister();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1879);
      compareCommandName();
      setState(1880);
      aRegister();
      setState(1881);
      match(Z80Parser::T__73);
      setState(1882);
      dynamic_cast<CompareAWithRegisterContext *>(_localctx)->source = simpleByteRegister();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CompareAWithHLPointerContext ------------------------------------------------------------------

Z80Parser::CompareAWithHLPointerContext::CompareAWithHLPointerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::CompareCommandNameContext* Z80Parser::CompareAWithHLPointerContext::compareCommandName() {
  return getRuleContext<Z80Parser::CompareCommandNameContext>(0);
}

Z80Parser::HlPointerContext* Z80Parser::CompareAWithHLPointerContext::hlPointer() {
  return getRuleContext<Z80Parser::HlPointerContext>(0);
}

Z80Parser::ARegisterContext* Z80Parser::CompareAWithHLPointerContext::aRegister() {
  return getRuleContext<Z80Parser::ARegisterContext>(0);
}


size_t Z80Parser::CompareAWithHLPointerContext::getRuleIndex() const {
  return Z80Parser::RuleCompareAWithHLPointer;
}

void Z80Parser::CompareAWithHLPointerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCompareAWithHLPointer(this);
}

void Z80Parser::CompareAWithHLPointerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCompareAWithHLPointer(this);
}

Z80Parser::CompareAWithHLPointerContext* Z80Parser::compareAWithHLPointer() {
  CompareAWithHLPointerContext *_localctx = _tracker.createInstance<CompareAWithHLPointerContext>(_ctx, getState());
  enterRule(_localctx, 384, Z80Parser::RuleCompareAWithHLPointer);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1894);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 90, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1886);
      compareCommandName();
      setState(1887);
      dynamic_cast<CompareAWithHLPointerContext *>(_localctx)->source = hlPointer();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1889);
      compareCommandName();
      setState(1890);
      aRegister();
      setState(1891);
      match(Z80Parser::T__73);
      setState(1892);
      dynamic_cast<CompareAWithHLPointerContext *>(_localctx)->source = hlPointer();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CompareAWithImmediateContext ------------------------------------------------------------------

Z80Parser::CompareAWithImmediateContext::CompareAWithImmediateContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::CompareCommandNameContext* Z80Parser::CompareAWithImmediateContext::compareCommandName() {
  return getRuleContext<Z80Parser::CompareCommandNameContext>(0);
}

Z80Parser::NumberContext* Z80Parser::CompareAWithImmediateContext::number() {
  return getRuleContext<Z80Parser::NumberContext>(0);
}

Z80Parser::ARegisterContext* Z80Parser::CompareAWithImmediateContext::aRegister() {
  return getRuleContext<Z80Parser::ARegisterContext>(0);
}


size_t Z80Parser::CompareAWithImmediateContext::getRuleIndex() const {
  return Z80Parser::RuleCompareAWithImmediate;
}

void Z80Parser::CompareAWithImmediateContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCompareAWithImmediate(this);
}

void Z80Parser::CompareAWithImmediateContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCompareAWithImmediate(this);
}

Z80Parser::CompareAWithImmediateContext* Z80Parser::compareAWithImmediate() {
  CompareAWithImmediateContext *_localctx = _tracker.createInstance<CompareAWithImmediateContext>(_ctx, getState());
  enterRule(_localctx, 386, Z80Parser::RuleCompareAWithImmediate);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1904);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 91, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1896);
      compareCommandName();
      setState(1897);
      dynamic_cast<CompareAWithImmediateContext *>(_localctx)->source = number();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1899);
      compareCommandName();
      setState(1900);
      aRegister();
      setState(1901);
      match(Z80Parser::T__73);
      setState(1902);
      dynamic_cast<CompareAWithImmediateContext *>(_localctx)->source = number();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CompareAWithIXOffsetContext ------------------------------------------------------------------

Z80Parser::CompareAWithIXOffsetContext::CompareAWithIXOffsetContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::CompareCommandNameContext* Z80Parser::CompareAWithIXOffsetContext::compareCommandName() {
  return getRuleContext<Z80Parser::CompareCommandNameContext>(0);
}

Z80Parser::IxPointerWithOffsetContext* Z80Parser::CompareAWithIXOffsetContext::ixPointerWithOffset() {
  return getRuleContext<Z80Parser::IxPointerWithOffsetContext>(0);
}

Z80Parser::ARegisterContext* Z80Parser::CompareAWithIXOffsetContext::aRegister() {
  return getRuleContext<Z80Parser::ARegisterContext>(0);
}


size_t Z80Parser::CompareAWithIXOffsetContext::getRuleIndex() const {
  return Z80Parser::RuleCompareAWithIXOffset;
}

void Z80Parser::CompareAWithIXOffsetContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCompareAWithIXOffset(this);
}

void Z80Parser::CompareAWithIXOffsetContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCompareAWithIXOffset(this);
}

Z80Parser::CompareAWithIXOffsetContext* Z80Parser::compareAWithIXOffset() {
  CompareAWithIXOffsetContext *_localctx = _tracker.createInstance<CompareAWithIXOffsetContext>(_ctx, getState());
  enterRule(_localctx, 388, Z80Parser::RuleCompareAWithIXOffset);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1914);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 92, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1906);
      compareCommandName();
      setState(1907);
      dynamic_cast<CompareAWithIXOffsetContext *>(_localctx)->source = ixPointerWithOffset();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1909);
      compareCommandName();
      setState(1910);
      aRegister();
      setState(1911);
      match(Z80Parser::T__73);
      setState(1912);
      dynamic_cast<CompareAWithIXOffsetContext *>(_localctx)->source = ixPointerWithOffset();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CompareAWithIYOffsetContext ------------------------------------------------------------------

Z80Parser::CompareAWithIYOffsetContext::CompareAWithIYOffsetContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::CompareCommandNameContext* Z80Parser::CompareAWithIYOffsetContext::compareCommandName() {
  return getRuleContext<Z80Parser::CompareCommandNameContext>(0);
}

Z80Parser::IyPointerWithOffsetContext* Z80Parser::CompareAWithIYOffsetContext::iyPointerWithOffset() {
  return getRuleContext<Z80Parser::IyPointerWithOffsetContext>(0);
}

Z80Parser::ARegisterContext* Z80Parser::CompareAWithIYOffsetContext::aRegister() {
  return getRuleContext<Z80Parser::ARegisterContext>(0);
}


size_t Z80Parser::CompareAWithIYOffsetContext::getRuleIndex() const {
  return Z80Parser::RuleCompareAWithIYOffset;
}

void Z80Parser::CompareAWithIYOffsetContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCompareAWithIYOffset(this);
}

void Z80Parser::CompareAWithIYOffsetContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCompareAWithIYOffset(this);
}

Z80Parser::CompareAWithIYOffsetContext* Z80Parser::compareAWithIYOffset() {
  CompareAWithIYOffsetContext *_localctx = _tracker.createInstance<CompareAWithIYOffsetContext>(_ctx, getState());
  enterRule(_localctx, 390, Z80Parser::RuleCompareAWithIYOffset);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1924);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 93, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1916);
      compareCommandName();
      setState(1917);
      dynamic_cast<CompareAWithIYOffsetContext *>(_localctx)->source = iyPointerWithOffset();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1919);
      compareCommandName();
      setState(1920);
      aRegister();
      setState(1921);
      match(Z80Parser::T__73);
      setState(1922);
      dynamic_cast<CompareAWithIYOffsetContext *>(_localctx)->source = iyPointerWithOffset();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CompareAWithIXHContext ------------------------------------------------------------------

Z80Parser::CompareAWithIXHContext::CompareAWithIXHContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::CompareCommandNameContext* Z80Parser::CompareAWithIXHContext::compareCommandName() {
  return getRuleContext<Z80Parser::CompareCommandNameContext>(0);
}

Z80Parser::IxHighRegisterContext* Z80Parser::CompareAWithIXHContext::ixHighRegister() {
  return getRuleContext<Z80Parser::IxHighRegisterContext>(0);
}

Z80Parser::ARegisterContext* Z80Parser::CompareAWithIXHContext::aRegister() {
  return getRuleContext<Z80Parser::ARegisterContext>(0);
}


size_t Z80Parser::CompareAWithIXHContext::getRuleIndex() const {
  return Z80Parser::RuleCompareAWithIXH;
}

void Z80Parser::CompareAWithIXHContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCompareAWithIXH(this);
}

void Z80Parser::CompareAWithIXHContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCompareAWithIXH(this);
}

Z80Parser::CompareAWithIXHContext* Z80Parser::compareAWithIXH() {
  CompareAWithIXHContext *_localctx = _tracker.createInstance<CompareAWithIXHContext>(_ctx, getState());
  enterRule(_localctx, 392, Z80Parser::RuleCompareAWithIXH);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1934);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 94, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1926);
      compareCommandName();
      setState(1927);
      dynamic_cast<CompareAWithIXHContext *>(_localctx)->source = ixHighRegister();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1929);
      compareCommandName();
      setState(1930);
      aRegister();
      setState(1931);
      match(Z80Parser::T__73);
      setState(1932);
      dynamic_cast<CompareAWithIXHContext *>(_localctx)->source = ixHighRegister();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CompareAWithIXLContext ------------------------------------------------------------------

Z80Parser::CompareAWithIXLContext::CompareAWithIXLContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::CompareCommandNameContext* Z80Parser::CompareAWithIXLContext::compareCommandName() {
  return getRuleContext<Z80Parser::CompareCommandNameContext>(0);
}

Z80Parser::IxLowRegisterContext* Z80Parser::CompareAWithIXLContext::ixLowRegister() {
  return getRuleContext<Z80Parser::IxLowRegisterContext>(0);
}

Z80Parser::ARegisterContext* Z80Parser::CompareAWithIXLContext::aRegister() {
  return getRuleContext<Z80Parser::ARegisterContext>(0);
}


size_t Z80Parser::CompareAWithIXLContext::getRuleIndex() const {
  return Z80Parser::RuleCompareAWithIXL;
}

void Z80Parser::CompareAWithIXLContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCompareAWithIXL(this);
}

void Z80Parser::CompareAWithIXLContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCompareAWithIXL(this);
}

Z80Parser::CompareAWithIXLContext* Z80Parser::compareAWithIXL() {
  CompareAWithIXLContext *_localctx = _tracker.createInstance<CompareAWithIXLContext>(_ctx, getState());
  enterRule(_localctx, 394, Z80Parser::RuleCompareAWithIXL);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1944);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 95, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1936);
      compareCommandName();
      setState(1937);
      dynamic_cast<CompareAWithIXLContext *>(_localctx)->source = ixLowRegister();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1939);
      compareCommandName();
      setState(1940);
      aRegister();
      setState(1941);
      match(Z80Parser::T__73);
      setState(1942);
      dynamic_cast<CompareAWithIXLContext *>(_localctx)->source = ixLowRegister();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CompareAWithIYHContext ------------------------------------------------------------------

Z80Parser::CompareAWithIYHContext::CompareAWithIYHContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::CompareCommandNameContext* Z80Parser::CompareAWithIYHContext::compareCommandName() {
  return getRuleContext<Z80Parser::CompareCommandNameContext>(0);
}

Z80Parser::IyHighRegisterContext* Z80Parser::CompareAWithIYHContext::iyHighRegister() {
  return getRuleContext<Z80Parser::IyHighRegisterContext>(0);
}

Z80Parser::ARegisterContext* Z80Parser::CompareAWithIYHContext::aRegister() {
  return getRuleContext<Z80Parser::ARegisterContext>(0);
}


size_t Z80Parser::CompareAWithIYHContext::getRuleIndex() const {
  return Z80Parser::RuleCompareAWithIYH;
}

void Z80Parser::CompareAWithIYHContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCompareAWithIYH(this);
}

void Z80Parser::CompareAWithIYHContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCompareAWithIYH(this);
}

Z80Parser::CompareAWithIYHContext* Z80Parser::compareAWithIYH() {
  CompareAWithIYHContext *_localctx = _tracker.createInstance<CompareAWithIYHContext>(_ctx, getState());
  enterRule(_localctx, 396, Z80Parser::RuleCompareAWithIYH);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1954);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 96, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1946);
      compareCommandName();
      setState(1947);
      dynamic_cast<CompareAWithIYHContext *>(_localctx)->source = iyHighRegister();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1949);
      compareCommandName();
      setState(1950);
      aRegister();
      setState(1951);
      match(Z80Parser::T__73);
      setState(1952);
      dynamic_cast<CompareAWithIYHContext *>(_localctx)->source = iyHighRegister();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CompareAWithIYLContext ------------------------------------------------------------------

Z80Parser::CompareAWithIYLContext::CompareAWithIYLContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::CompareCommandNameContext* Z80Parser::CompareAWithIYLContext::compareCommandName() {
  return getRuleContext<Z80Parser::CompareCommandNameContext>(0);
}

Z80Parser::IyLowRegisterContext* Z80Parser::CompareAWithIYLContext::iyLowRegister() {
  return getRuleContext<Z80Parser::IyLowRegisterContext>(0);
}

Z80Parser::ARegisterContext* Z80Parser::CompareAWithIYLContext::aRegister() {
  return getRuleContext<Z80Parser::ARegisterContext>(0);
}


size_t Z80Parser::CompareAWithIYLContext::getRuleIndex() const {
  return Z80Parser::RuleCompareAWithIYL;
}

void Z80Parser::CompareAWithIYLContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCompareAWithIYL(this);
}

void Z80Parser::CompareAWithIYLContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCompareAWithIYL(this);
}

Z80Parser::CompareAWithIYLContext* Z80Parser::compareAWithIYL() {
  CompareAWithIYLContext *_localctx = _tracker.createInstance<CompareAWithIYLContext>(_ctx, getState());
  enterRule(_localctx, 398, Z80Parser::RuleCompareAWithIYL);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1964);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 97, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1956);
      compareCommandName();
      setState(1957);
      dynamic_cast<CompareAWithIYLContext *>(_localctx)->source = iyLowRegister();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1959);
      compareCommandName();
      setState(1960);
      aRegister();
      setState(1961);
      match(Z80Parser::T__73);
      setState(1962);
      dynamic_cast<CompareAWithIYLContext *>(_localctx)->source = iyLowRegister();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IncrementRegisterContext ------------------------------------------------------------------

Z80Parser::IncrementRegisterContext::IncrementRegisterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::IncrementCommandNameContext* Z80Parser::IncrementRegisterContext::incrementCommandName() {
  return getRuleContext<Z80Parser::IncrementCommandNameContext>(0);
}

Z80Parser::SimpleByteRegisterContext* Z80Parser::IncrementRegisterContext::simpleByteRegister() {
  return getRuleContext<Z80Parser::SimpleByteRegisterContext>(0);
}


size_t Z80Parser::IncrementRegisterContext::getRuleIndex() const {
  return Z80Parser::RuleIncrementRegister;
}

void Z80Parser::IncrementRegisterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIncrementRegister(this);
}

void Z80Parser::IncrementRegisterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIncrementRegister(this);
}

Z80Parser::IncrementRegisterContext* Z80Parser::incrementRegister() {
  IncrementRegisterContext *_localctx = _tracker.createInstance<IncrementRegisterContext>(_ctx, getState());
  enterRule(_localctx, 400, Z80Parser::RuleIncrementRegister);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1966);
    incrementCommandName();
    setState(1967);
    dynamic_cast<IncrementRegisterContext *>(_localctx)->source = simpleByteRegister();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IncrementIXHContext ------------------------------------------------------------------

Z80Parser::IncrementIXHContext::IncrementIXHContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::IncrementCommandNameContext* Z80Parser::IncrementIXHContext::incrementCommandName() {
  return getRuleContext<Z80Parser::IncrementCommandNameContext>(0);
}

Z80Parser::IxHighRegisterContext* Z80Parser::IncrementIXHContext::ixHighRegister() {
  return getRuleContext<Z80Parser::IxHighRegisterContext>(0);
}


size_t Z80Parser::IncrementIXHContext::getRuleIndex() const {
  return Z80Parser::RuleIncrementIXH;
}

void Z80Parser::IncrementIXHContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIncrementIXH(this);
}

void Z80Parser::IncrementIXHContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIncrementIXH(this);
}

Z80Parser::IncrementIXHContext* Z80Parser::incrementIXH() {
  IncrementIXHContext *_localctx = _tracker.createInstance<IncrementIXHContext>(_ctx, getState());
  enterRule(_localctx, 402, Z80Parser::RuleIncrementIXH);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1969);
    incrementCommandName();
    setState(1970);
    dynamic_cast<IncrementIXHContext *>(_localctx)->source = ixHighRegister();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IncrementIXLContext ------------------------------------------------------------------

Z80Parser::IncrementIXLContext::IncrementIXLContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::IncrementCommandNameContext* Z80Parser::IncrementIXLContext::incrementCommandName() {
  return getRuleContext<Z80Parser::IncrementCommandNameContext>(0);
}

Z80Parser::IxLowRegisterContext* Z80Parser::IncrementIXLContext::ixLowRegister() {
  return getRuleContext<Z80Parser::IxLowRegisterContext>(0);
}


size_t Z80Parser::IncrementIXLContext::getRuleIndex() const {
  return Z80Parser::RuleIncrementIXL;
}

void Z80Parser::IncrementIXLContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIncrementIXL(this);
}

void Z80Parser::IncrementIXLContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIncrementIXL(this);
}

Z80Parser::IncrementIXLContext* Z80Parser::incrementIXL() {
  IncrementIXLContext *_localctx = _tracker.createInstance<IncrementIXLContext>(_ctx, getState());
  enterRule(_localctx, 404, Z80Parser::RuleIncrementIXL);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1972);
    incrementCommandName();
    setState(1973);
    dynamic_cast<IncrementIXLContext *>(_localctx)->source = ixLowRegister();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IncrementIYHContext ------------------------------------------------------------------

Z80Parser::IncrementIYHContext::IncrementIYHContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::IncrementCommandNameContext* Z80Parser::IncrementIYHContext::incrementCommandName() {
  return getRuleContext<Z80Parser::IncrementCommandNameContext>(0);
}

Z80Parser::IyHighRegisterContext* Z80Parser::IncrementIYHContext::iyHighRegister() {
  return getRuleContext<Z80Parser::IyHighRegisterContext>(0);
}


size_t Z80Parser::IncrementIYHContext::getRuleIndex() const {
  return Z80Parser::RuleIncrementIYH;
}

void Z80Parser::IncrementIYHContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIncrementIYH(this);
}

void Z80Parser::IncrementIYHContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIncrementIYH(this);
}

Z80Parser::IncrementIYHContext* Z80Parser::incrementIYH() {
  IncrementIYHContext *_localctx = _tracker.createInstance<IncrementIYHContext>(_ctx, getState());
  enterRule(_localctx, 406, Z80Parser::RuleIncrementIYH);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1975);
    incrementCommandName();
    setState(1976);
    dynamic_cast<IncrementIYHContext *>(_localctx)->source = iyHighRegister();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IncrementIYLContext ------------------------------------------------------------------

Z80Parser::IncrementIYLContext::IncrementIYLContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::IncrementCommandNameContext* Z80Parser::IncrementIYLContext::incrementCommandName() {
  return getRuleContext<Z80Parser::IncrementCommandNameContext>(0);
}

Z80Parser::IyLowRegisterContext* Z80Parser::IncrementIYLContext::iyLowRegister() {
  return getRuleContext<Z80Parser::IyLowRegisterContext>(0);
}


size_t Z80Parser::IncrementIYLContext::getRuleIndex() const {
  return Z80Parser::RuleIncrementIYL;
}

void Z80Parser::IncrementIYLContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIncrementIYL(this);
}

void Z80Parser::IncrementIYLContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIncrementIYL(this);
}

Z80Parser::IncrementIYLContext* Z80Parser::incrementIYL() {
  IncrementIYLContext *_localctx = _tracker.createInstance<IncrementIYLContext>(_ctx, getState());
  enterRule(_localctx, 408, Z80Parser::RuleIncrementIYL);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1978);
    incrementCommandName();
    setState(1979);
    dynamic_cast<IncrementIYLContext *>(_localctx)->source = iyLowRegister();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IncrementHLPointerContext ------------------------------------------------------------------

Z80Parser::IncrementHLPointerContext::IncrementHLPointerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::IncrementCommandNameContext* Z80Parser::IncrementHLPointerContext::incrementCommandName() {
  return getRuleContext<Z80Parser::IncrementCommandNameContext>(0);
}

Z80Parser::HlPointerContext* Z80Parser::IncrementHLPointerContext::hlPointer() {
  return getRuleContext<Z80Parser::HlPointerContext>(0);
}


size_t Z80Parser::IncrementHLPointerContext::getRuleIndex() const {
  return Z80Parser::RuleIncrementHLPointer;
}

void Z80Parser::IncrementHLPointerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIncrementHLPointer(this);
}

void Z80Parser::IncrementHLPointerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIncrementHLPointer(this);
}

Z80Parser::IncrementHLPointerContext* Z80Parser::incrementHLPointer() {
  IncrementHLPointerContext *_localctx = _tracker.createInstance<IncrementHLPointerContext>(_ctx, getState());
  enterRule(_localctx, 410, Z80Parser::RuleIncrementHLPointer);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1981);
    incrementCommandName();
    setState(1982);
    dynamic_cast<IncrementHLPointerContext *>(_localctx)->source = hlPointer();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IncrementIXOffsetContext ------------------------------------------------------------------

Z80Parser::IncrementIXOffsetContext::IncrementIXOffsetContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::IncrementCommandNameContext* Z80Parser::IncrementIXOffsetContext::incrementCommandName() {
  return getRuleContext<Z80Parser::IncrementCommandNameContext>(0);
}

Z80Parser::IxPointerWithOffsetContext* Z80Parser::IncrementIXOffsetContext::ixPointerWithOffset() {
  return getRuleContext<Z80Parser::IxPointerWithOffsetContext>(0);
}


size_t Z80Parser::IncrementIXOffsetContext::getRuleIndex() const {
  return Z80Parser::RuleIncrementIXOffset;
}

void Z80Parser::IncrementIXOffsetContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIncrementIXOffset(this);
}

void Z80Parser::IncrementIXOffsetContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIncrementIXOffset(this);
}

Z80Parser::IncrementIXOffsetContext* Z80Parser::incrementIXOffset() {
  IncrementIXOffsetContext *_localctx = _tracker.createInstance<IncrementIXOffsetContext>(_ctx, getState());
  enterRule(_localctx, 412, Z80Parser::RuleIncrementIXOffset);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1984);
    incrementCommandName();
    setState(1985);
    dynamic_cast<IncrementIXOffsetContext *>(_localctx)->source = ixPointerWithOffset();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IncrementIYOffsetContext ------------------------------------------------------------------

Z80Parser::IncrementIYOffsetContext::IncrementIYOffsetContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::IncrementCommandNameContext* Z80Parser::IncrementIYOffsetContext::incrementCommandName() {
  return getRuleContext<Z80Parser::IncrementCommandNameContext>(0);
}

Z80Parser::IyPointerWithOffsetContext* Z80Parser::IncrementIYOffsetContext::iyPointerWithOffset() {
  return getRuleContext<Z80Parser::IyPointerWithOffsetContext>(0);
}


size_t Z80Parser::IncrementIYOffsetContext::getRuleIndex() const {
  return Z80Parser::RuleIncrementIYOffset;
}

void Z80Parser::IncrementIYOffsetContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIncrementIYOffset(this);
}

void Z80Parser::IncrementIYOffsetContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIncrementIYOffset(this);
}

Z80Parser::IncrementIYOffsetContext* Z80Parser::incrementIYOffset() {
  IncrementIYOffsetContext *_localctx = _tracker.createInstance<IncrementIYOffsetContext>(_ctx, getState());
  enterRule(_localctx, 414, Z80Parser::RuleIncrementIYOffset);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1987);
    incrementCommandName();
    setState(1988);
    dynamic_cast<IncrementIYOffsetContext *>(_localctx)->source = iyPointerWithOffset();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DecrementRegisterContext ------------------------------------------------------------------

Z80Parser::DecrementRegisterContext::DecrementRegisterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::DecrementCommandNameContext* Z80Parser::DecrementRegisterContext::decrementCommandName() {
  return getRuleContext<Z80Parser::DecrementCommandNameContext>(0);
}

Z80Parser::SimpleByteRegisterContext* Z80Parser::DecrementRegisterContext::simpleByteRegister() {
  return getRuleContext<Z80Parser::SimpleByteRegisterContext>(0);
}


size_t Z80Parser::DecrementRegisterContext::getRuleIndex() const {
  return Z80Parser::RuleDecrementRegister;
}

void Z80Parser::DecrementRegisterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDecrementRegister(this);
}

void Z80Parser::DecrementRegisterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDecrementRegister(this);
}

Z80Parser::DecrementRegisterContext* Z80Parser::decrementRegister() {
  DecrementRegisterContext *_localctx = _tracker.createInstance<DecrementRegisterContext>(_ctx, getState());
  enterRule(_localctx, 416, Z80Parser::RuleDecrementRegister);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1990);
    decrementCommandName();
    setState(1991);
    dynamic_cast<DecrementRegisterContext *>(_localctx)->source = simpleByteRegister();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DecrementIXHContext ------------------------------------------------------------------

Z80Parser::DecrementIXHContext::DecrementIXHContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::DecrementCommandNameContext* Z80Parser::DecrementIXHContext::decrementCommandName() {
  return getRuleContext<Z80Parser::DecrementCommandNameContext>(0);
}

Z80Parser::IxHighRegisterContext* Z80Parser::DecrementIXHContext::ixHighRegister() {
  return getRuleContext<Z80Parser::IxHighRegisterContext>(0);
}


size_t Z80Parser::DecrementIXHContext::getRuleIndex() const {
  return Z80Parser::RuleDecrementIXH;
}

void Z80Parser::DecrementIXHContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDecrementIXH(this);
}

void Z80Parser::DecrementIXHContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDecrementIXH(this);
}

Z80Parser::DecrementIXHContext* Z80Parser::decrementIXH() {
  DecrementIXHContext *_localctx = _tracker.createInstance<DecrementIXHContext>(_ctx, getState());
  enterRule(_localctx, 418, Z80Parser::RuleDecrementIXH);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1993);
    decrementCommandName();
    setState(1994);
    dynamic_cast<DecrementIXHContext *>(_localctx)->source = ixHighRegister();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DecrementIXLContext ------------------------------------------------------------------

Z80Parser::DecrementIXLContext::DecrementIXLContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::DecrementCommandNameContext* Z80Parser::DecrementIXLContext::decrementCommandName() {
  return getRuleContext<Z80Parser::DecrementCommandNameContext>(0);
}

Z80Parser::IxLowRegisterContext* Z80Parser::DecrementIXLContext::ixLowRegister() {
  return getRuleContext<Z80Parser::IxLowRegisterContext>(0);
}


size_t Z80Parser::DecrementIXLContext::getRuleIndex() const {
  return Z80Parser::RuleDecrementIXL;
}

void Z80Parser::DecrementIXLContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDecrementIXL(this);
}

void Z80Parser::DecrementIXLContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDecrementIXL(this);
}

Z80Parser::DecrementIXLContext* Z80Parser::decrementIXL() {
  DecrementIXLContext *_localctx = _tracker.createInstance<DecrementIXLContext>(_ctx, getState());
  enterRule(_localctx, 420, Z80Parser::RuleDecrementIXL);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1996);
    decrementCommandName();
    setState(1997);
    dynamic_cast<DecrementIXLContext *>(_localctx)->source = ixLowRegister();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DecrementIYHContext ------------------------------------------------------------------

Z80Parser::DecrementIYHContext::DecrementIYHContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::DecrementCommandNameContext* Z80Parser::DecrementIYHContext::decrementCommandName() {
  return getRuleContext<Z80Parser::DecrementCommandNameContext>(0);
}

Z80Parser::IyHighRegisterContext* Z80Parser::DecrementIYHContext::iyHighRegister() {
  return getRuleContext<Z80Parser::IyHighRegisterContext>(0);
}


size_t Z80Parser::DecrementIYHContext::getRuleIndex() const {
  return Z80Parser::RuleDecrementIYH;
}

void Z80Parser::DecrementIYHContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDecrementIYH(this);
}

void Z80Parser::DecrementIYHContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDecrementIYH(this);
}

Z80Parser::DecrementIYHContext* Z80Parser::decrementIYH() {
  DecrementIYHContext *_localctx = _tracker.createInstance<DecrementIYHContext>(_ctx, getState());
  enterRule(_localctx, 422, Z80Parser::RuleDecrementIYH);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1999);
    decrementCommandName();
    setState(2000);
    dynamic_cast<DecrementIYHContext *>(_localctx)->source = iyHighRegister();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DecrementIYLContext ------------------------------------------------------------------

Z80Parser::DecrementIYLContext::DecrementIYLContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::DecrementCommandNameContext* Z80Parser::DecrementIYLContext::decrementCommandName() {
  return getRuleContext<Z80Parser::DecrementCommandNameContext>(0);
}

Z80Parser::IyLowRegisterContext* Z80Parser::DecrementIYLContext::iyLowRegister() {
  return getRuleContext<Z80Parser::IyLowRegisterContext>(0);
}


size_t Z80Parser::DecrementIYLContext::getRuleIndex() const {
  return Z80Parser::RuleDecrementIYL;
}

void Z80Parser::DecrementIYLContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDecrementIYL(this);
}

void Z80Parser::DecrementIYLContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDecrementIYL(this);
}

Z80Parser::DecrementIYLContext* Z80Parser::decrementIYL() {
  DecrementIYLContext *_localctx = _tracker.createInstance<DecrementIYLContext>(_ctx, getState());
  enterRule(_localctx, 424, Z80Parser::RuleDecrementIYL);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2002);
    decrementCommandName();
    setState(2003);
    dynamic_cast<DecrementIYLContext *>(_localctx)->source = iyLowRegister();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DecrementHLPointerContext ------------------------------------------------------------------

Z80Parser::DecrementHLPointerContext::DecrementHLPointerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::DecrementCommandNameContext* Z80Parser::DecrementHLPointerContext::decrementCommandName() {
  return getRuleContext<Z80Parser::DecrementCommandNameContext>(0);
}

Z80Parser::HlPointerContext* Z80Parser::DecrementHLPointerContext::hlPointer() {
  return getRuleContext<Z80Parser::HlPointerContext>(0);
}


size_t Z80Parser::DecrementHLPointerContext::getRuleIndex() const {
  return Z80Parser::RuleDecrementHLPointer;
}

void Z80Parser::DecrementHLPointerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDecrementHLPointer(this);
}

void Z80Parser::DecrementHLPointerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDecrementHLPointer(this);
}

Z80Parser::DecrementHLPointerContext* Z80Parser::decrementHLPointer() {
  DecrementHLPointerContext *_localctx = _tracker.createInstance<DecrementHLPointerContext>(_ctx, getState());
  enterRule(_localctx, 426, Z80Parser::RuleDecrementHLPointer);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2005);
    decrementCommandName();
    setState(2006);
    dynamic_cast<DecrementHLPointerContext *>(_localctx)->source = hlPointer();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DecrementIXOffsetContext ------------------------------------------------------------------

Z80Parser::DecrementIXOffsetContext::DecrementIXOffsetContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::DecrementCommandNameContext* Z80Parser::DecrementIXOffsetContext::decrementCommandName() {
  return getRuleContext<Z80Parser::DecrementCommandNameContext>(0);
}

Z80Parser::IxPointerWithOffsetContext* Z80Parser::DecrementIXOffsetContext::ixPointerWithOffset() {
  return getRuleContext<Z80Parser::IxPointerWithOffsetContext>(0);
}


size_t Z80Parser::DecrementIXOffsetContext::getRuleIndex() const {
  return Z80Parser::RuleDecrementIXOffset;
}

void Z80Parser::DecrementIXOffsetContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDecrementIXOffset(this);
}

void Z80Parser::DecrementIXOffsetContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDecrementIXOffset(this);
}

Z80Parser::DecrementIXOffsetContext* Z80Parser::decrementIXOffset() {
  DecrementIXOffsetContext *_localctx = _tracker.createInstance<DecrementIXOffsetContext>(_ctx, getState());
  enterRule(_localctx, 428, Z80Parser::RuleDecrementIXOffset);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2008);
    decrementCommandName();
    setState(2009);
    dynamic_cast<DecrementIXOffsetContext *>(_localctx)->source = ixPointerWithOffset();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DecrementIYOffsetContext ------------------------------------------------------------------

Z80Parser::DecrementIYOffsetContext::DecrementIYOffsetContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::DecrementCommandNameContext* Z80Parser::DecrementIYOffsetContext::decrementCommandName() {
  return getRuleContext<Z80Parser::DecrementCommandNameContext>(0);
}

Z80Parser::IyPointerWithOffsetContext* Z80Parser::DecrementIYOffsetContext::iyPointerWithOffset() {
  return getRuleContext<Z80Parser::IyPointerWithOffsetContext>(0);
}


size_t Z80Parser::DecrementIYOffsetContext::getRuleIndex() const {
  return Z80Parser::RuleDecrementIYOffset;
}

void Z80Parser::DecrementIYOffsetContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDecrementIYOffset(this);
}

void Z80Parser::DecrementIYOffsetContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDecrementIYOffset(this);
}

Z80Parser::DecrementIYOffsetContext* Z80Parser::decrementIYOffset() {
  DecrementIYOffsetContext *_localctx = _tracker.createInstance<DecrementIYOffsetContext>(_ctx, getState());
  enterRule(_localctx, 430, Z80Parser::RuleDecrementIYOffset);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2011);
    decrementCommandName();
    setState(2012);
    dynamic_cast<DecrementIYOffsetContext *>(_localctx)->source = iyPointerWithOffset();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArithmeticCommandContext ------------------------------------------------------------------

Z80Parser::ArithmeticCommandContext::ArithmeticCommandContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::AddAAndRegisterContext* Z80Parser::ArithmeticCommandContext::addAAndRegister() {
  return getRuleContext<Z80Parser::AddAAndRegisterContext>(0);
}

Z80Parser::AddAAndImmediateByteContext* Z80Parser::ArithmeticCommandContext::addAAndImmediateByte() {
  return getRuleContext<Z80Parser::AddAAndImmediateByteContext>(0);
}

Z80Parser::AddAAndIXHContext* Z80Parser::ArithmeticCommandContext::addAAndIXH() {
  return getRuleContext<Z80Parser::AddAAndIXHContext>(0);
}

Z80Parser::AddAAndIXLContext* Z80Parser::ArithmeticCommandContext::addAAndIXL() {
  return getRuleContext<Z80Parser::AddAAndIXLContext>(0);
}

Z80Parser::AddAAndIYHContext* Z80Parser::ArithmeticCommandContext::addAAndIYH() {
  return getRuleContext<Z80Parser::AddAAndIYHContext>(0);
}

Z80Parser::AddAAndIYLContext* Z80Parser::ArithmeticCommandContext::addAAndIYL() {
  return getRuleContext<Z80Parser::AddAAndIYLContext>(0);
}

Z80Parser::AddAAndHLPointerContext* Z80Parser::ArithmeticCommandContext::addAAndHLPointer() {
  return getRuleContext<Z80Parser::AddAAndHLPointerContext>(0);
}

Z80Parser::AddAAndIXOffsetContext* Z80Parser::ArithmeticCommandContext::addAAndIXOffset() {
  return getRuleContext<Z80Parser::AddAAndIXOffsetContext>(0);
}

Z80Parser::AddAAndIYOffsetContext* Z80Parser::ArithmeticCommandContext::addAAndIYOffset() {
  return getRuleContext<Z80Parser::AddAAndIYOffsetContext>(0);
}

Z80Parser::AddWithCarryAAndRegisterContext* Z80Parser::ArithmeticCommandContext::addWithCarryAAndRegister() {
  return getRuleContext<Z80Parser::AddWithCarryAAndRegisterContext>(0);
}

Z80Parser::AddWithCarryAAndHLPointerContext* Z80Parser::ArithmeticCommandContext::addWithCarryAAndHLPointer() {
  return getRuleContext<Z80Parser::AddWithCarryAAndHLPointerContext>(0);
}

Z80Parser::AddWithCarryAAndImmediateContext* Z80Parser::ArithmeticCommandContext::addWithCarryAAndImmediate() {
  return getRuleContext<Z80Parser::AddWithCarryAAndImmediateContext>(0);
}

Z80Parser::AddWithCarryAAndIXOffsetContext* Z80Parser::ArithmeticCommandContext::addWithCarryAAndIXOffset() {
  return getRuleContext<Z80Parser::AddWithCarryAAndIXOffsetContext>(0);
}

Z80Parser::AddWithCarryAAndIYOffsetContext* Z80Parser::ArithmeticCommandContext::addWithCarryAAndIYOffset() {
  return getRuleContext<Z80Parser::AddWithCarryAAndIYOffsetContext>(0);
}

Z80Parser::AddWithCarryAAndIXHContext* Z80Parser::ArithmeticCommandContext::addWithCarryAAndIXH() {
  return getRuleContext<Z80Parser::AddWithCarryAAndIXHContext>(0);
}

Z80Parser::AddWithCarryAAndIXLContext* Z80Parser::ArithmeticCommandContext::addWithCarryAAndIXL() {
  return getRuleContext<Z80Parser::AddWithCarryAAndIXLContext>(0);
}

Z80Parser::AddWithCarryAAndIYHContext* Z80Parser::ArithmeticCommandContext::addWithCarryAAndIYH() {
  return getRuleContext<Z80Parser::AddWithCarryAAndIYHContext>(0);
}

Z80Parser::AddWithCarryAAndIYLContext* Z80Parser::ArithmeticCommandContext::addWithCarryAAndIYL() {
  return getRuleContext<Z80Parser::AddWithCarryAAndIYLContext>(0);
}

Z80Parser::SubtractRegisterFromAContext* Z80Parser::ArithmeticCommandContext::subtractRegisterFromA() {
  return getRuleContext<Z80Parser::SubtractRegisterFromAContext>(0);
}

Z80Parser::SubtractHLPointerFromAContext* Z80Parser::ArithmeticCommandContext::subtractHLPointerFromA() {
  return getRuleContext<Z80Parser::SubtractHLPointerFromAContext>(0);
}

Z80Parser::SubtractImmediateFromAContext* Z80Parser::ArithmeticCommandContext::subtractImmediateFromA() {
  return getRuleContext<Z80Parser::SubtractImmediateFromAContext>(0);
}

Z80Parser::SubtractIXOffsetFromAContext* Z80Parser::ArithmeticCommandContext::subtractIXOffsetFromA() {
  return getRuleContext<Z80Parser::SubtractIXOffsetFromAContext>(0);
}

Z80Parser::SubtractIYOffsetFromAContext* Z80Parser::ArithmeticCommandContext::subtractIYOffsetFromA() {
  return getRuleContext<Z80Parser::SubtractIYOffsetFromAContext>(0);
}

Z80Parser::SubtractWithBorrowRegisterFromAContext* Z80Parser::ArithmeticCommandContext::subtractWithBorrowRegisterFromA() {
  return getRuleContext<Z80Parser::SubtractWithBorrowRegisterFromAContext>(0);
}

Z80Parser::SubtractWithBorrowHLPointerFromAContext* Z80Parser::ArithmeticCommandContext::subtractWithBorrowHLPointerFromA() {
  return getRuleContext<Z80Parser::SubtractWithBorrowHLPointerFromAContext>(0);
}

Z80Parser::SubtractWithBorrowIXOffsetFromAContext* Z80Parser::ArithmeticCommandContext::subtractWithBorrowIXOffsetFromA() {
  return getRuleContext<Z80Parser::SubtractWithBorrowIXOffsetFromAContext>(0);
}

Z80Parser::SubtractWithBorrowIYOffsetFromAContext* Z80Parser::ArithmeticCommandContext::subtractWithBorrowIYOffsetFromA() {
  return getRuleContext<Z80Parser::SubtractWithBorrowIYOffsetFromAContext>(0);
}

Z80Parser::SubtractWithBorrowImmediateFromAContext* Z80Parser::ArithmeticCommandContext::subtractWithBorrowImmediateFromA() {
  return getRuleContext<Z80Parser::SubtractWithBorrowImmediateFromAContext>(0);
}

Z80Parser::SubtractWithBorrowIXHFromAContext* Z80Parser::ArithmeticCommandContext::subtractWithBorrowIXHFromA() {
  return getRuleContext<Z80Parser::SubtractWithBorrowIXHFromAContext>(0);
}

Z80Parser::SubtractWithBorrowIXLFromAContext* Z80Parser::ArithmeticCommandContext::subtractWithBorrowIXLFromA() {
  return getRuleContext<Z80Parser::SubtractWithBorrowIXLFromAContext>(0);
}

Z80Parser::SubtractWithBorrowIYHFromAContext* Z80Parser::ArithmeticCommandContext::subtractWithBorrowIYHFromA() {
  return getRuleContext<Z80Parser::SubtractWithBorrowIYHFromAContext>(0);
}

Z80Parser::SubtractWithBorrowIYLFromAContext* Z80Parser::ArithmeticCommandContext::subtractWithBorrowIYLFromA() {
  return getRuleContext<Z80Parser::SubtractWithBorrowIYLFromAContext>(0);
}

Z80Parser::SubtractIXHighOrLowFromAContext* Z80Parser::ArithmeticCommandContext::subtractIXHighOrLowFromA() {
  return getRuleContext<Z80Parser::SubtractIXHighOrLowFromAContext>(0);
}

Z80Parser::SubtractIYHighOrLowFromAContext* Z80Parser::ArithmeticCommandContext::subtractIYHighOrLowFromA() {
  return getRuleContext<Z80Parser::SubtractIYHighOrLowFromAContext>(0);
}

Z80Parser::AndAWithRegisterContext* Z80Parser::ArithmeticCommandContext::andAWithRegister() {
  return getRuleContext<Z80Parser::AndAWithRegisterContext>(0);
}

Z80Parser::AndAWithImmediateContext* Z80Parser::ArithmeticCommandContext::andAWithImmediate() {
  return getRuleContext<Z80Parser::AndAWithImmediateContext>(0);
}

Z80Parser::AndAWithHLPointerContext* Z80Parser::ArithmeticCommandContext::andAWithHLPointer() {
  return getRuleContext<Z80Parser::AndAWithHLPointerContext>(0);
}

Z80Parser::AndAWithIXOffsetContext* Z80Parser::ArithmeticCommandContext::andAWithIXOffset() {
  return getRuleContext<Z80Parser::AndAWithIXOffsetContext>(0);
}

Z80Parser::AndAWithIYOffsetContext* Z80Parser::ArithmeticCommandContext::andAWithIYOffset() {
  return getRuleContext<Z80Parser::AndAWithIYOffsetContext>(0);
}

Z80Parser::AndAWithIXHContext* Z80Parser::ArithmeticCommandContext::andAWithIXH() {
  return getRuleContext<Z80Parser::AndAWithIXHContext>(0);
}

Z80Parser::AndAWithIXLContext* Z80Parser::ArithmeticCommandContext::andAWithIXL() {
  return getRuleContext<Z80Parser::AndAWithIXLContext>(0);
}

Z80Parser::AndAWithIYHContext* Z80Parser::ArithmeticCommandContext::andAWithIYH() {
  return getRuleContext<Z80Parser::AndAWithIYHContext>(0);
}

Z80Parser::AndAWithIYLContext* Z80Parser::ArithmeticCommandContext::andAWithIYL() {
  return getRuleContext<Z80Parser::AndAWithIYLContext>(0);
}

Z80Parser::OrAWithRegisterContext* Z80Parser::ArithmeticCommandContext::orAWithRegister() {
  return getRuleContext<Z80Parser::OrAWithRegisterContext>(0);
}

Z80Parser::OrAWithImmediateContext* Z80Parser::ArithmeticCommandContext::orAWithImmediate() {
  return getRuleContext<Z80Parser::OrAWithImmediateContext>(0);
}

Z80Parser::OrAWithHLPointerContext* Z80Parser::ArithmeticCommandContext::orAWithHLPointer() {
  return getRuleContext<Z80Parser::OrAWithHLPointerContext>(0);
}

Z80Parser::OrAWithIXOffsetContext* Z80Parser::ArithmeticCommandContext::orAWithIXOffset() {
  return getRuleContext<Z80Parser::OrAWithIXOffsetContext>(0);
}

Z80Parser::OrAWithIYOffsetContext* Z80Parser::ArithmeticCommandContext::orAWithIYOffset() {
  return getRuleContext<Z80Parser::OrAWithIYOffsetContext>(0);
}

Z80Parser::OrAWithIXHContext* Z80Parser::ArithmeticCommandContext::orAWithIXH() {
  return getRuleContext<Z80Parser::OrAWithIXHContext>(0);
}

Z80Parser::OrAWithIXLContext* Z80Parser::ArithmeticCommandContext::orAWithIXL() {
  return getRuleContext<Z80Parser::OrAWithIXLContext>(0);
}

Z80Parser::OrAWithIYHContext* Z80Parser::ArithmeticCommandContext::orAWithIYH() {
  return getRuleContext<Z80Parser::OrAWithIYHContext>(0);
}

Z80Parser::OrAWithIYLContext* Z80Parser::ArithmeticCommandContext::orAWithIYL() {
  return getRuleContext<Z80Parser::OrAWithIYLContext>(0);
}

Z80Parser::XorAWithRegisterContext* Z80Parser::ArithmeticCommandContext::xorAWithRegister() {
  return getRuleContext<Z80Parser::XorAWithRegisterContext>(0);
}

Z80Parser::XorAWithImmediateContext* Z80Parser::ArithmeticCommandContext::xorAWithImmediate() {
  return getRuleContext<Z80Parser::XorAWithImmediateContext>(0);
}

Z80Parser::XorAWithHLPointerContext* Z80Parser::ArithmeticCommandContext::xorAWithHLPointer() {
  return getRuleContext<Z80Parser::XorAWithHLPointerContext>(0);
}

Z80Parser::XorAWithIXOffsetContext* Z80Parser::ArithmeticCommandContext::xorAWithIXOffset() {
  return getRuleContext<Z80Parser::XorAWithIXOffsetContext>(0);
}

Z80Parser::XorAWithIYOffsetContext* Z80Parser::ArithmeticCommandContext::xorAWithIYOffset() {
  return getRuleContext<Z80Parser::XorAWithIYOffsetContext>(0);
}

Z80Parser::XorAWithIXHContext* Z80Parser::ArithmeticCommandContext::xorAWithIXH() {
  return getRuleContext<Z80Parser::XorAWithIXHContext>(0);
}

Z80Parser::XorAWithIXLContext* Z80Parser::ArithmeticCommandContext::xorAWithIXL() {
  return getRuleContext<Z80Parser::XorAWithIXLContext>(0);
}

Z80Parser::XorAWithIYHContext* Z80Parser::ArithmeticCommandContext::xorAWithIYH() {
  return getRuleContext<Z80Parser::XorAWithIYHContext>(0);
}

Z80Parser::XorAWithIYLContext* Z80Parser::ArithmeticCommandContext::xorAWithIYL() {
  return getRuleContext<Z80Parser::XorAWithIYLContext>(0);
}

Z80Parser::CompareAWithRegisterContext* Z80Parser::ArithmeticCommandContext::compareAWithRegister() {
  return getRuleContext<Z80Parser::CompareAWithRegisterContext>(0);
}

Z80Parser::CompareAWithHLPointerContext* Z80Parser::ArithmeticCommandContext::compareAWithHLPointer() {
  return getRuleContext<Z80Parser::CompareAWithHLPointerContext>(0);
}

Z80Parser::CompareAWithImmediateContext* Z80Parser::ArithmeticCommandContext::compareAWithImmediate() {
  return getRuleContext<Z80Parser::CompareAWithImmediateContext>(0);
}

Z80Parser::CompareAWithIXOffsetContext* Z80Parser::ArithmeticCommandContext::compareAWithIXOffset() {
  return getRuleContext<Z80Parser::CompareAWithIXOffsetContext>(0);
}

Z80Parser::CompareAWithIYOffsetContext* Z80Parser::ArithmeticCommandContext::compareAWithIYOffset() {
  return getRuleContext<Z80Parser::CompareAWithIYOffsetContext>(0);
}

Z80Parser::CompareAWithIXHContext* Z80Parser::ArithmeticCommandContext::compareAWithIXH() {
  return getRuleContext<Z80Parser::CompareAWithIXHContext>(0);
}

Z80Parser::CompareAWithIXLContext* Z80Parser::ArithmeticCommandContext::compareAWithIXL() {
  return getRuleContext<Z80Parser::CompareAWithIXLContext>(0);
}

Z80Parser::CompareAWithIYHContext* Z80Parser::ArithmeticCommandContext::compareAWithIYH() {
  return getRuleContext<Z80Parser::CompareAWithIYHContext>(0);
}

Z80Parser::CompareAWithIYLContext* Z80Parser::ArithmeticCommandContext::compareAWithIYL() {
  return getRuleContext<Z80Parser::CompareAWithIYLContext>(0);
}

Z80Parser::IncrementRegisterContext* Z80Parser::ArithmeticCommandContext::incrementRegister() {
  return getRuleContext<Z80Parser::IncrementRegisterContext>(0);
}

Z80Parser::IncrementIXHContext* Z80Parser::ArithmeticCommandContext::incrementIXH() {
  return getRuleContext<Z80Parser::IncrementIXHContext>(0);
}

Z80Parser::IncrementIXLContext* Z80Parser::ArithmeticCommandContext::incrementIXL() {
  return getRuleContext<Z80Parser::IncrementIXLContext>(0);
}

Z80Parser::IncrementIYHContext* Z80Parser::ArithmeticCommandContext::incrementIYH() {
  return getRuleContext<Z80Parser::IncrementIYHContext>(0);
}

Z80Parser::IncrementIYLContext* Z80Parser::ArithmeticCommandContext::incrementIYL() {
  return getRuleContext<Z80Parser::IncrementIYLContext>(0);
}

Z80Parser::IncrementHLPointerContext* Z80Parser::ArithmeticCommandContext::incrementHLPointer() {
  return getRuleContext<Z80Parser::IncrementHLPointerContext>(0);
}

Z80Parser::IncrementIXOffsetContext* Z80Parser::ArithmeticCommandContext::incrementIXOffset() {
  return getRuleContext<Z80Parser::IncrementIXOffsetContext>(0);
}

Z80Parser::IncrementIYOffsetContext* Z80Parser::ArithmeticCommandContext::incrementIYOffset() {
  return getRuleContext<Z80Parser::IncrementIYOffsetContext>(0);
}

Z80Parser::DecrementRegisterContext* Z80Parser::ArithmeticCommandContext::decrementRegister() {
  return getRuleContext<Z80Parser::DecrementRegisterContext>(0);
}

Z80Parser::DecrementIXHContext* Z80Parser::ArithmeticCommandContext::decrementIXH() {
  return getRuleContext<Z80Parser::DecrementIXHContext>(0);
}

Z80Parser::DecrementIXLContext* Z80Parser::ArithmeticCommandContext::decrementIXL() {
  return getRuleContext<Z80Parser::DecrementIXLContext>(0);
}

Z80Parser::DecrementIYHContext* Z80Parser::ArithmeticCommandContext::decrementIYH() {
  return getRuleContext<Z80Parser::DecrementIYHContext>(0);
}

Z80Parser::DecrementIYLContext* Z80Parser::ArithmeticCommandContext::decrementIYL() {
  return getRuleContext<Z80Parser::DecrementIYLContext>(0);
}

Z80Parser::DecrementHLPointerContext* Z80Parser::ArithmeticCommandContext::decrementHLPointer() {
  return getRuleContext<Z80Parser::DecrementHLPointerContext>(0);
}

Z80Parser::DecrementIXOffsetContext* Z80Parser::ArithmeticCommandContext::decrementIXOffset() {
  return getRuleContext<Z80Parser::DecrementIXOffsetContext>(0);
}

Z80Parser::DecrementIYOffsetContext* Z80Parser::ArithmeticCommandContext::decrementIYOffset() {
  return getRuleContext<Z80Parser::DecrementIYOffsetContext>(0);
}


size_t Z80Parser::ArithmeticCommandContext::getRuleIndex() const {
  return Z80Parser::RuleArithmeticCommand;
}

void Z80Parser::ArithmeticCommandContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArithmeticCommand(this);
}

void Z80Parser::ArithmeticCommandContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArithmeticCommand(this);
}

Z80Parser::ArithmeticCommandContext* Z80Parser::arithmeticCommand() {
  ArithmeticCommandContext *_localctx = _tracker.createInstance<ArithmeticCommandContext>(_ctx, getState());
  enterRule(_localctx, 432, Z80Parser::RuleArithmeticCommand);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2100);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 98, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2014);
      addAAndRegister();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2015);
      addAAndImmediateByte();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(2016);
      addAAndIXH();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(2017);
      addAAndIXL();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(2018);
      addAAndIYH();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(2019);
      addAAndIYL();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(2020);
      addAAndHLPointer();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(2021);
      addAAndIXOffset();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(2022);
      addAAndIYOffset();
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(2023);
      addWithCarryAAndRegister();
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(2024);
      addWithCarryAAndHLPointer();
      break;
    }

    case 12: {
      enterOuterAlt(_localctx, 12);
      setState(2025);
      addWithCarryAAndImmediate();
      break;
    }

    case 13: {
      enterOuterAlt(_localctx, 13);
      setState(2026);
      addWithCarryAAndIXOffset();
      break;
    }

    case 14: {
      enterOuterAlt(_localctx, 14);
      setState(2027);
      addWithCarryAAndIYOffset();
      break;
    }

    case 15: {
      enterOuterAlt(_localctx, 15);
      setState(2028);
      addWithCarryAAndIXH();
      break;
    }

    case 16: {
      enterOuterAlt(_localctx, 16);
      setState(2029);
      addWithCarryAAndIXL();
      break;
    }

    case 17: {
      enterOuterAlt(_localctx, 17);
      setState(2030);
      addWithCarryAAndIYH();
      break;
    }

    case 18: {
      enterOuterAlt(_localctx, 18);
      setState(2031);
      addWithCarryAAndIYL();
      break;
    }

    case 19: {
      enterOuterAlt(_localctx, 19);
      setState(2032);
      subtractRegisterFromA();
      break;
    }

    case 20: {
      enterOuterAlt(_localctx, 20);
      setState(2033);
      subtractHLPointerFromA();
      break;
    }

    case 21: {
      enterOuterAlt(_localctx, 21);
      setState(2034);
      subtractImmediateFromA();
      break;
    }

    case 22: {
      enterOuterAlt(_localctx, 22);
      setState(2035);
      subtractIXOffsetFromA();
      break;
    }

    case 23: {
      enterOuterAlt(_localctx, 23);
      setState(2036);
      subtractIYOffsetFromA();
      break;
    }

    case 24: {
      enterOuterAlt(_localctx, 24);
      setState(2037);
      subtractWithBorrowRegisterFromA();
      break;
    }

    case 25: {
      enterOuterAlt(_localctx, 25);
      setState(2038);
      subtractWithBorrowHLPointerFromA();
      break;
    }

    case 26: {
      enterOuterAlt(_localctx, 26);
      setState(2039);
      subtractWithBorrowIXOffsetFromA();
      break;
    }

    case 27: {
      enterOuterAlt(_localctx, 27);
      setState(2040);
      subtractWithBorrowIYOffsetFromA();
      break;
    }

    case 28: {
      enterOuterAlt(_localctx, 28);
      setState(2041);
      subtractWithBorrowImmediateFromA();
      break;
    }

    case 29: {
      enterOuterAlt(_localctx, 29);
      setState(2042);
      subtractWithBorrowIXHFromA();
      break;
    }

    case 30: {
      enterOuterAlt(_localctx, 30);
      setState(2043);
      subtractWithBorrowIXLFromA();
      break;
    }

    case 31: {
      enterOuterAlt(_localctx, 31);
      setState(2044);
      subtractWithBorrowIYHFromA();
      break;
    }

    case 32: {
      enterOuterAlt(_localctx, 32);
      setState(2045);
      subtractWithBorrowIYLFromA();
      break;
    }

    case 33: {
      enterOuterAlt(_localctx, 33);
      setState(2046);
      subtractIXHighOrLowFromA();
      break;
    }

    case 34: {
      enterOuterAlt(_localctx, 34);
      setState(2047);
      subtractIYHighOrLowFromA();
      break;
    }

    case 35: {
      enterOuterAlt(_localctx, 35);
      setState(2048);
      andAWithRegister();
      break;
    }

    case 36: {
      enterOuterAlt(_localctx, 36);
      setState(2049);
      andAWithImmediate();
      break;
    }

    case 37: {
      enterOuterAlt(_localctx, 37);
      setState(2050);
      andAWithHLPointer();
      break;
    }

    case 38: {
      enterOuterAlt(_localctx, 38);
      setState(2051);
      andAWithIXOffset();
      break;
    }

    case 39: {
      enterOuterAlt(_localctx, 39);
      setState(2052);
      andAWithIYOffset();
      break;
    }

    case 40: {
      enterOuterAlt(_localctx, 40);
      setState(2053);
      andAWithIXH();
      break;
    }

    case 41: {
      enterOuterAlt(_localctx, 41);
      setState(2054);
      andAWithIXL();
      break;
    }

    case 42: {
      enterOuterAlt(_localctx, 42);
      setState(2055);
      andAWithIYH();
      break;
    }

    case 43: {
      enterOuterAlt(_localctx, 43);
      setState(2056);
      andAWithIYL();
      break;
    }

    case 44: {
      enterOuterAlt(_localctx, 44);
      setState(2057);
      orAWithRegister();
      break;
    }

    case 45: {
      enterOuterAlt(_localctx, 45);
      setState(2058);
      orAWithImmediate();
      break;
    }

    case 46: {
      enterOuterAlt(_localctx, 46);
      setState(2059);
      orAWithHLPointer();
      break;
    }

    case 47: {
      enterOuterAlt(_localctx, 47);
      setState(2060);
      orAWithIXOffset();
      break;
    }

    case 48: {
      enterOuterAlt(_localctx, 48);
      setState(2061);
      orAWithIYOffset();
      break;
    }

    case 49: {
      enterOuterAlt(_localctx, 49);
      setState(2062);
      orAWithIXH();
      break;
    }

    case 50: {
      enterOuterAlt(_localctx, 50);
      setState(2063);
      orAWithIXL();
      break;
    }

    case 51: {
      enterOuterAlt(_localctx, 51);
      setState(2064);
      orAWithIYH();
      break;
    }

    case 52: {
      enterOuterAlt(_localctx, 52);
      setState(2065);
      orAWithIYL();
      break;
    }

    case 53: {
      enterOuterAlt(_localctx, 53);
      setState(2066);
      xorAWithRegister();
      break;
    }

    case 54: {
      enterOuterAlt(_localctx, 54);
      setState(2067);
      xorAWithImmediate();
      break;
    }

    case 55: {
      enterOuterAlt(_localctx, 55);
      setState(2068);
      xorAWithHLPointer();
      break;
    }

    case 56: {
      enterOuterAlt(_localctx, 56);
      setState(2069);
      xorAWithIXOffset();
      break;
    }

    case 57: {
      enterOuterAlt(_localctx, 57);
      setState(2070);
      xorAWithIYOffset();
      break;
    }

    case 58: {
      enterOuterAlt(_localctx, 58);
      setState(2071);
      xorAWithIXH();
      break;
    }

    case 59: {
      enterOuterAlt(_localctx, 59);
      setState(2072);
      xorAWithIXL();
      break;
    }

    case 60: {
      enterOuterAlt(_localctx, 60);
      setState(2073);
      xorAWithIYH();
      break;
    }

    case 61: {
      enterOuterAlt(_localctx, 61);
      setState(2074);
      xorAWithIYL();
      break;
    }

    case 62: {
      enterOuterAlt(_localctx, 62);
      setState(2075);
      compareAWithRegister();
      break;
    }

    case 63: {
      enterOuterAlt(_localctx, 63);
      setState(2076);
      compareAWithHLPointer();
      break;
    }

    case 64: {
      enterOuterAlt(_localctx, 64);
      setState(2077);
      compareAWithImmediate();
      break;
    }

    case 65: {
      enterOuterAlt(_localctx, 65);
      setState(2078);
      compareAWithIXOffset();
      break;
    }

    case 66: {
      enterOuterAlt(_localctx, 66);
      setState(2079);
      compareAWithIYOffset();
      break;
    }

    case 67: {
      enterOuterAlt(_localctx, 67);
      setState(2080);
      compareAWithIXH();
      break;
    }

    case 68: {
      enterOuterAlt(_localctx, 68);
      setState(2081);
      compareAWithIXL();
      break;
    }

    case 69: {
      enterOuterAlt(_localctx, 69);
      setState(2082);
      compareAWithIYH();
      break;
    }

    case 70: {
      enterOuterAlt(_localctx, 70);
      setState(2083);
      compareAWithIYL();
      break;
    }

    case 71: {
      enterOuterAlt(_localctx, 71);
      setState(2084);
      incrementRegister();
      break;
    }

    case 72: {
      enterOuterAlt(_localctx, 72);
      setState(2085);
      incrementIXH();
      break;
    }

    case 73: {
      enterOuterAlt(_localctx, 73);
      setState(2086);
      incrementIXL();
      break;
    }

    case 74: {
      enterOuterAlt(_localctx, 74);
      setState(2087);
      incrementIYH();
      break;
    }

    case 75: {
      enterOuterAlt(_localctx, 75);
      setState(2088);
      incrementIYL();
      break;
    }

    case 76: {
      enterOuterAlt(_localctx, 76);
      setState(2089);
      incrementHLPointer();
      break;
    }

    case 77: {
      enterOuterAlt(_localctx, 77);
      setState(2090);
      incrementIXOffset();
      break;
    }

    case 78: {
      enterOuterAlt(_localctx, 78);
      setState(2091);
      incrementIYOffset();
      break;
    }

    case 79: {
      enterOuterAlt(_localctx, 79);
      setState(2092);
      decrementRegister();
      break;
    }

    case 80: {
      enterOuterAlt(_localctx, 80);
      setState(2093);
      decrementIXH();
      break;
    }

    case 81: {
      enterOuterAlt(_localctx, 81);
      setState(2094);
      decrementIXL();
      break;
    }

    case 82: {
      enterOuterAlt(_localctx, 82);
      setState(2095);
      decrementIYH();
      break;
    }

    case 83: {
      enterOuterAlt(_localctx, 83);
      setState(2096);
      decrementIYL();
      break;
    }

    case 84: {
      enterOuterAlt(_localctx, 84);
      setState(2097);
      decrementHLPointer();
      break;
    }

    case 85: {
      enterOuterAlt(_localctx, 85);
      setState(2098);
      decrementIXOffset();
      break;
    }

    case 86: {
      enterOuterAlt(_localctx, 86);
      setState(2099);
      decrementIYOffset();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DecimalAdjustAContext ------------------------------------------------------------------

Z80Parser::DecimalAdjustAContext::DecimalAdjustAContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t Z80Parser::DecimalAdjustAContext::getRuleIndex() const {
  return Z80Parser::RuleDecimalAdjustA;
}

void Z80Parser::DecimalAdjustAContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDecimalAdjustA(this);
}

void Z80Parser::DecimalAdjustAContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDecimalAdjustA(this);
}

Z80Parser::DecimalAdjustAContext* Z80Parser::decimalAdjustA() {
  DecimalAdjustAContext *_localctx = _tracker.createInstance<DecimalAdjustAContext>(_ctx, getState());
  enterRule(_localctx, 434, Z80Parser::RuleDecimalAdjustA);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2102);
    _la = _input->LA(1);
    if (!(_la == Z80Parser::T__118

    || _la == Z80Parser::T__119)) {
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

//----------------- ComplementAContext ------------------------------------------------------------------

Z80Parser::ComplementAContext::ComplementAContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t Z80Parser::ComplementAContext::getRuleIndex() const {
  return Z80Parser::RuleComplementA;
}

void Z80Parser::ComplementAContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterComplementA(this);
}

void Z80Parser::ComplementAContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitComplementA(this);
}

Z80Parser::ComplementAContext* Z80Parser::complementA() {
  ComplementAContext *_localctx = _tracker.createInstance<ComplementAContext>(_ctx, getState());
  enterRule(_localctx, 436, Z80Parser::RuleComplementA);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2104);
    _la = _input->LA(1);
    if (!(_la == Z80Parser::T__120

    || _la == Z80Parser::T__121)) {
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

//----------------- NegateAContext ------------------------------------------------------------------

Z80Parser::NegateAContext::NegateAContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t Z80Parser::NegateAContext::getRuleIndex() const {
  return Z80Parser::RuleNegateA;
}

void Z80Parser::NegateAContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNegateA(this);
}

void Z80Parser::NegateAContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNegateA(this);
}

Z80Parser::NegateAContext* Z80Parser::negateA() {
  NegateAContext *_localctx = _tracker.createInstance<NegateAContext>(_ctx, getState());
  enterRule(_localctx, 438, Z80Parser::RuleNegateA);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2106);
    _la = _input->LA(1);
    if (!(_la == Z80Parser::T__122

    || _la == Z80Parser::T__123)) {
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

//----------------- ComplementCarryFlagContext ------------------------------------------------------------------

Z80Parser::ComplementCarryFlagContext::ComplementCarryFlagContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t Z80Parser::ComplementCarryFlagContext::getRuleIndex() const {
  return Z80Parser::RuleComplementCarryFlag;
}

void Z80Parser::ComplementCarryFlagContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterComplementCarryFlag(this);
}

void Z80Parser::ComplementCarryFlagContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitComplementCarryFlag(this);
}

Z80Parser::ComplementCarryFlagContext* Z80Parser::complementCarryFlag() {
  ComplementCarryFlagContext *_localctx = _tracker.createInstance<ComplementCarryFlagContext>(_ctx, getState());
  enterRule(_localctx, 440, Z80Parser::RuleComplementCarryFlag);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2108);
    _la = _input->LA(1);
    if (!(_la == Z80Parser::T__124

    || _la == Z80Parser::T__125)) {
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

//----------------- SetCarryFlagContext ------------------------------------------------------------------

Z80Parser::SetCarryFlagContext::SetCarryFlagContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t Z80Parser::SetCarryFlagContext::getRuleIndex() const {
  return Z80Parser::RuleSetCarryFlag;
}

void Z80Parser::SetCarryFlagContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSetCarryFlag(this);
}

void Z80Parser::SetCarryFlagContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSetCarryFlag(this);
}

Z80Parser::SetCarryFlagContext* Z80Parser::setCarryFlag() {
  SetCarryFlagContext *_localctx = _tracker.createInstance<SetCarryFlagContext>(_ctx, getState());
  enterRule(_localctx, 442, Z80Parser::RuleSetCarryFlag);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2110);
    _la = _input->LA(1);
    if (!(_la == Z80Parser::T__126

    || _la == Z80Parser::T__127)) {
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

//----------------- NopContext ------------------------------------------------------------------

Z80Parser::NopContext::NopContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t Z80Parser::NopContext::getRuleIndex() const {
  return Z80Parser::RuleNop;
}

void Z80Parser::NopContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNop(this);
}

void Z80Parser::NopContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNop(this);
}

Z80Parser::NopContext* Z80Parser::nop() {
  NopContext *_localctx = _tracker.createInstance<NopContext>(_ctx, getState());
  enterRule(_localctx, 444, Z80Parser::RuleNop);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2112);
    _la = _input->LA(1);
    if (!(_la == Z80Parser::T__128

    || _la == Z80Parser::T__129)) {
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

//----------------- HaltContext ------------------------------------------------------------------

Z80Parser::HaltContext::HaltContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t Z80Parser::HaltContext::getRuleIndex() const {
  return Z80Parser::RuleHalt;
}

void Z80Parser::HaltContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterHalt(this);
}

void Z80Parser::HaltContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitHalt(this);
}

Z80Parser::HaltContext* Z80Parser::halt() {
  HaltContext *_localctx = _tracker.createInstance<HaltContext>(_ctx, getState());
  enterRule(_localctx, 446, Z80Parser::RuleHalt);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2114);
    _la = _input->LA(1);
    if (!(_la == Z80Parser::T__130

    || _la == Z80Parser::T__131)) {
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

//----------------- DisableInterruptsContext ------------------------------------------------------------------

Z80Parser::DisableInterruptsContext::DisableInterruptsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t Z80Parser::DisableInterruptsContext::getRuleIndex() const {
  return Z80Parser::RuleDisableInterrupts;
}

void Z80Parser::DisableInterruptsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDisableInterrupts(this);
}

void Z80Parser::DisableInterruptsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDisableInterrupts(this);
}

Z80Parser::DisableInterruptsContext* Z80Parser::disableInterrupts() {
  DisableInterruptsContext *_localctx = _tracker.createInstance<DisableInterruptsContext>(_ctx, getState());
  enterRule(_localctx, 448, Z80Parser::RuleDisableInterrupts);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2116);
    _la = _input->LA(1);
    if (!(_la == Z80Parser::T__132

    || _la == Z80Parser::T__133)) {
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

//----------------- EnableInterruptsContext ------------------------------------------------------------------

Z80Parser::EnableInterruptsContext::EnableInterruptsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t Z80Parser::EnableInterruptsContext::getRuleIndex() const {
  return Z80Parser::RuleEnableInterrupts;
}

void Z80Parser::EnableInterruptsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEnableInterrupts(this);
}

void Z80Parser::EnableInterruptsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEnableInterrupts(this);
}

Z80Parser::EnableInterruptsContext* Z80Parser::enableInterrupts() {
  EnableInterruptsContext *_localctx = _tracker.createInstance<EnableInterruptsContext>(_ctx, getState());
  enterRule(_localctx, 450, Z80Parser::RuleEnableInterrupts);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2118);
    _la = _input->LA(1);
    if (!(_la == Z80Parser::T__134

    || _la == Z80Parser::T__135)) {
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

//----------------- SetInterruptModeContext ------------------------------------------------------------------

Z80Parser::SetInterruptModeContext::SetInterruptModeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::NumberContext* Z80Parser::SetInterruptModeContext::number() {
  return getRuleContext<Z80Parser::NumberContext>(0);
}


size_t Z80Parser::SetInterruptModeContext::getRuleIndex() const {
  return Z80Parser::RuleSetInterruptMode;
}

void Z80Parser::SetInterruptModeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSetInterruptMode(this);
}

void Z80Parser::SetInterruptModeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSetInterruptMode(this);
}

Z80Parser::SetInterruptModeContext* Z80Parser::setInterruptMode() {
  SetInterruptModeContext *_localctx = _tracker.createInstance<SetInterruptModeContext>(_ctx, getState());
  enterRule(_localctx, 452, Z80Parser::RuleSetInterruptMode);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2120);
    _la = _input->LA(1);
    if (!(_la == Z80Parser::T__136

    || _la == Z80Parser::T__137)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(2121);
    dynamic_cast<SetInterruptModeContext *>(_localctx)->source = number();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArithmeticControlCommandContext ------------------------------------------------------------------

Z80Parser::ArithmeticControlCommandContext::ArithmeticControlCommandContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::DecimalAdjustAContext* Z80Parser::ArithmeticControlCommandContext::decimalAdjustA() {
  return getRuleContext<Z80Parser::DecimalAdjustAContext>(0);
}

Z80Parser::ComplementAContext* Z80Parser::ArithmeticControlCommandContext::complementA() {
  return getRuleContext<Z80Parser::ComplementAContext>(0);
}

Z80Parser::NegateAContext* Z80Parser::ArithmeticControlCommandContext::negateA() {
  return getRuleContext<Z80Parser::NegateAContext>(0);
}

Z80Parser::ComplementCarryFlagContext* Z80Parser::ArithmeticControlCommandContext::complementCarryFlag() {
  return getRuleContext<Z80Parser::ComplementCarryFlagContext>(0);
}

Z80Parser::SetCarryFlagContext* Z80Parser::ArithmeticControlCommandContext::setCarryFlag() {
  return getRuleContext<Z80Parser::SetCarryFlagContext>(0);
}

Z80Parser::NopContext* Z80Parser::ArithmeticControlCommandContext::nop() {
  return getRuleContext<Z80Parser::NopContext>(0);
}

Z80Parser::HaltContext* Z80Parser::ArithmeticControlCommandContext::halt() {
  return getRuleContext<Z80Parser::HaltContext>(0);
}

Z80Parser::DisableInterruptsContext* Z80Parser::ArithmeticControlCommandContext::disableInterrupts() {
  return getRuleContext<Z80Parser::DisableInterruptsContext>(0);
}

Z80Parser::EnableInterruptsContext* Z80Parser::ArithmeticControlCommandContext::enableInterrupts() {
  return getRuleContext<Z80Parser::EnableInterruptsContext>(0);
}

Z80Parser::SetInterruptModeContext* Z80Parser::ArithmeticControlCommandContext::setInterruptMode() {
  return getRuleContext<Z80Parser::SetInterruptModeContext>(0);
}


size_t Z80Parser::ArithmeticControlCommandContext::getRuleIndex() const {
  return Z80Parser::RuleArithmeticControlCommand;
}

void Z80Parser::ArithmeticControlCommandContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArithmeticControlCommand(this);
}

void Z80Parser::ArithmeticControlCommandContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArithmeticControlCommand(this);
}

Z80Parser::ArithmeticControlCommandContext* Z80Parser::arithmeticControlCommand() {
  ArithmeticControlCommandContext *_localctx = _tracker.createInstance<ArithmeticControlCommandContext>(_ctx, getState());
  enterRule(_localctx, 454, Z80Parser::RuleArithmeticControlCommand);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2133);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Z80Parser::T__118:
      case Z80Parser::T__119: {
        enterOuterAlt(_localctx, 1);
        setState(2123);
        decimalAdjustA();
        break;
      }

      case Z80Parser::T__120:
      case Z80Parser::T__121: {
        enterOuterAlt(_localctx, 2);
        setState(2124);
        complementA();
        break;
      }

      case Z80Parser::T__122:
      case Z80Parser::T__123: {
        enterOuterAlt(_localctx, 3);
        setState(2125);
        negateA();
        break;
      }

      case Z80Parser::T__124:
      case Z80Parser::T__125: {
        enterOuterAlt(_localctx, 4);
        setState(2126);
        complementCarryFlag();
        break;
      }

      case Z80Parser::T__126:
      case Z80Parser::T__127: {
        enterOuterAlt(_localctx, 5);
        setState(2127);
        setCarryFlag();
        break;
      }

      case Z80Parser::T__128:
      case Z80Parser::T__129: {
        enterOuterAlt(_localctx, 6);
        setState(2128);
        nop();
        break;
      }

      case Z80Parser::T__130:
      case Z80Parser::T__131: {
        enterOuterAlt(_localctx, 7);
        setState(2129);
        halt();
        break;
      }

      case Z80Parser::T__132:
      case Z80Parser::T__133: {
        enterOuterAlt(_localctx, 8);
        setState(2130);
        disableInterrupts();
        break;
      }

      case Z80Parser::T__134:
      case Z80Parser::T__135: {
        enterOuterAlt(_localctx, 9);
        setState(2131);
        enableInterrupts();
        break;
      }

      case Z80Parser::T__136:
      case Z80Parser::T__137: {
        enterOuterAlt(_localctx, 10);
        setState(2132);
        setInterruptMode();
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

//----------------- AddHLAndWordRegisterContext ------------------------------------------------------------------

Z80Parser::AddHLAndWordRegisterContext::AddHLAndWordRegisterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::AddCommandNameContext* Z80Parser::AddHLAndWordRegisterContext::addCommandName() {
  return getRuleContext<Z80Parser::AddCommandNameContext>(0);
}

Z80Parser::HlRegisterContext* Z80Parser::AddHLAndWordRegisterContext::hlRegister() {
  return getRuleContext<Z80Parser::HlRegisterContext>(0);
}

Z80Parser::SimpleWordRegisterContext* Z80Parser::AddHLAndWordRegisterContext::simpleWordRegister() {
  return getRuleContext<Z80Parser::SimpleWordRegisterContext>(0);
}


size_t Z80Parser::AddHLAndWordRegisterContext::getRuleIndex() const {
  return Z80Parser::RuleAddHLAndWordRegister;
}

void Z80Parser::AddHLAndWordRegisterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAddHLAndWordRegister(this);
}

void Z80Parser::AddHLAndWordRegisterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAddHLAndWordRegister(this);
}

Z80Parser::AddHLAndWordRegisterContext* Z80Parser::addHLAndWordRegister() {
  AddHLAndWordRegisterContext *_localctx = _tracker.createInstance<AddHLAndWordRegisterContext>(_ctx, getState());
  enterRule(_localctx, 456, Z80Parser::RuleAddHLAndWordRegister);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2135);
    addCommandName();
    setState(2136);
    dynamic_cast<AddHLAndWordRegisterContext *>(_localctx)->dest = hlRegister();
    setState(2137);
    match(Z80Parser::T__73);
    setState(2138);
    dynamic_cast<AddHLAndWordRegisterContext *>(_localctx)->source = simpleWordRegister();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AddWithCarryHLAndWordRegisterContext ------------------------------------------------------------------

Z80Parser::AddWithCarryHLAndWordRegisterContext::AddWithCarryHLAndWordRegisterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::AddWithCarryCommandNameContext* Z80Parser::AddWithCarryHLAndWordRegisterContext::addWithCarryCommandName() {
  return getRuleContext<Z80Parser::AddWithCarryCommandNameContext>(0);
}

Z80Parser::HlRegisterContext* Z80Parser::AddWithCarryHLAndWordRegisterContext::hlRegister() {
  return getRuleContext<Z80Parser::HlRegisterContext>(0);
}

Z80Parser::SimpleWordRegisterContext* Z80Parser::AddWithCarryHLAndWordRegisterContext::simpleWordRegister() {
  return getRuleContext<Z80Parser::SimpleWordRegisterContext>(0);
}


size_t Z80Parser::AddWithCarryHLAndWordRegisterContext::getRuleIndex() const {
  return Z80Parser::RuleAddWithCarryHLAndWordRegister;
}

void Z80Parser::AddWithCarryHLAndWordRegisterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAddWithCarryHLAndWordRegister(this);
}

void Z80Parser::AddWithCarryHLAndWordRegisterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAddWithCarryHLAndWordRegister(this);
}

Z80Parser::AddWithCarryHLAndWordRegisterContext* Z80Parser::addWithCarryHLAndWordRegister() {
  AddWithCarryHLAndWordRegisterContext *_localctx = _tracker.createInstance<AddWithCarryHLAndWordRegisterContext>(_ctx, getState());
  enterRule(_localctx, 458, Z80Parser::RuleAddWithCarryHLAndWordRegister);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2140);
    addWithCarryCommandName();
    setState(2141);
    dynamic_cast<AddWithCarryHLAndWordRegisterContext *>(_localctx)->dest = hlRegister();
    setState(2142);
    match(Z80Parser::T__73);
    setState(2143);
    dynamic_cast<AddWithCarryHLAndWordRegisterContext *>(_localctx)->source = simpleWordRegister();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SubtractWithCarryWordRegisterFromHLContext ------------------------------------------------------------------

Z80Parser::SubtractWithCarryWordRegisterFromHLContext::SubtractWithCarryWordRegisterFromHLContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::SubtractWithBorrowCommandNameContext* Z80Parser::SubtractWithCarryWordRegisterFromHLContext::subtractWithBorrowCommandName() {
  return getRuleContext<Z80Parser::SubtractWithBorrowCommandNameContext>(0);
}

Z80Parser::HlRegisterContext* Z80Parser::SubtractWithCarryWordRegisterFromHLContext::hlRegister() {
  return getRuleContext<Z80Parser::HlRegisterContext>(0);
}

Z80Parser::SimpleWordRegisterContext* Z80Parser::SubtractWithCarryWordRegisterFromHLContext::simpleWordRegister() {
  return getRuleContext<Z80Parser::SimpleWordRegisterContext>(0);
}


size_t Z80Parser::SubtractWithCarryWordRegisterFromHLContext::getRuleIndex() const {
  return Z80Parser::RuleSubtractWithCarryWordRegisterFromHL;
}

void Z80Parser::SubtractWithCarryWordRegisterFromHLContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSubtractWithCarryWordRegisterFromHL(this);
}

void Z80Parser::SubtractWithCarryWordRegisterFromHLContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSubtractWithCarryWordRegisterFromHL(this);
}

Z80Parser::SubtractWithCarryWordRegisterFromHLContext* Z80Parser::subtractWithCarryWordRegisterFromHL() {
  SubtractWithCarryWordRegisterFromHLContext *_localctx = _tracker.createInstance<SubtractWithCarryWordRegisterFromHLContext>(_ctx, getState());
  enterRule(_localctx, 460, Z80Parser::RuleSubtractWithCarryWordRegisterFromHL);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2145);
    subtractWithBorrowCommandName();
    setState(2146);
    dynamic_cast<SubtractWithCarryWordRegisterFromHLContext *>(_localctx)->dest = hlRegister();
    setState(2147);
    match(Z80Parser::T__73);
    setState(2148);
    dynamic_cast<SubtractWithCarryWordRegisterFromHLContext *>(_localctx)->source = simpleWordRegister();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SimpleIXAdditionRegisterContext ------------------------------------------------------------------

Z80Parser::SimpleIXAdditionRegisterContext::SimpleIXAdditionRegisterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::BcRegisterContext* Z80Parser::SimpleIXAdditionRegisterContext::bcRegister() {
  return getRuleContext<Z80Parser::BcRegisterContext>(0);
}

Z80Parser::DeRegisterContext* Z80Parser::SimpleIXAdditionRegisterContext::deRegister() {
  return getRuleContext<Z80Parser::DeRegisterContext>(0);
}

Z80Parser::IxRegisterContext* Z80Parser::SimpleIXAdditionRegisterContext::ixRegister() {
  return getRuleContext<Z80Parser::IxRegisterContext>(0);
}

Z80Parser::SpRegisterContext* Z80Parser::SimpleIXAdditionRegisterContext::spRegister() {
  return getRuleContext<Z80Parser::SpRegisterContext>(0);
}


size_t Z80Parser::SimpleIXAdditionRegisterContext::getRuleIndex() const {
  return Z80Parser::RuleSimpleIXAdditionRegister;
}

void Z80Parser::SimpleIXAdditionRegisterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSimpleIXAdditionRegister(this);
}

void Z80Parser::SimpleIXAdditionRegisterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSimpleIXAdditionRegister(this);
}

Z80Parser::SimpleIXAdditionRegisterContext* Z80Parser::simpleIXAdditionRegister() {
  SimpleIXAdditionRegisterContext *_localctx = _tracker.createInstance<SimpleIXAdditionRegisterContext>(_ctx, getState());
  enterRule(_localctx, 462, Z80Parser::RuleSimpleIXAdditionRegister);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2155);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Z80Parser::T__24:
      case Z80Parser::T__25:
      case Z80Parser::T__34:
      case Z80Parser::T__35: {
        enterOuterAlt(_localctx, 1);
        setState(2150);
        bcRegister();
        break;
      }

      case Z80Parser::T__26:
      case Z80Parser::T__27:
      case Z80Parser::T__40:
      case Z80Parser::T__41: {
        enterOuterAlt(_localctx, 2);
        setState(2151);
        deRegister();
        break;
      }

      case Z80Parser::T__52:
      case Z80Parser::T__53: {
        enterOuterAlt(_localctx, 3);
        setState(2152);
        ixRegister();
        break;
      }

      case Z80Parser::T__64:
      case Z80Parser::T__65: {
        enterOuterAlt(_localctx, 4);
        setState(2153);
        spRegister();
        break;
      }

      case Z80Parser::COMMENT:
      case Z80Parser::EOL: {
        enterOuterAlt(_localctx, 5);

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

//----------------- SimpleIYAdditionRegisterContext ------------------------------------------------------------------

Z80Parser::SimpleIYAdditionRegisterContext::SimpleIYAdditionRegisterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::BcRegisterContext* Z80Parser::SimpleIYAdditionRegisterContext::bcRegister() {
  return getRuleContext<Z80Parser::BcRegisterContext>(0);
}

Z80Parser::DeRegisterContext* Z80Parser::SimpleIYAdditionRegisterContext::deRegister() {
  return getRuleContext<Z80Parser::DeRegisterContext>(0);
}

Z80Parser::IyRegisterContext* Z80Parser::SimpleIYAdditionRegisterContext::iyRegister() {
  return getRuleContext<Z80Parser::IyRegisterContext>(0);
}

Z80Parser::SpRegisterContext* Z80Parser::SimpleIYAdditionRegisterContext::spRegister() {
  return getRuleContext<Z80Parser::SpRegisterContext>(0);
}


size_t Z80Parser::SimpleIYAdditionRegisterContext::getRuleIndex() const {
  return Z80Parser::RuleSimpleIYAdditionRegister;
}

void Z80Parser::SimpleIYAdditionRegisterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSimpleIYAdditionRegister(this);
}

void Z80Parser::SimpleIYAdditionRegisterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSimpleIYAdditionRegister(this);
}

Z80Parser::SimpleIYAdditionRegisterContext* Z80Parser::simpleIYAdditionRegister() {
  SimpleIYAdditionRegisterContext *_localctx = _tracker.createInstance<SimpleIYAdditionRegisterContext>(_ctx, getState());
  enterRule(_localctx, 464, Z80Parser::RuleSimpleIYAdditionRegister);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2162);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Z80Parser::T__24:
      case Z80Parser::T__25:
      case Z80Parser::T__34:
      case Z80Parser::T__35: {
        enterOuterAlt(_localctx, 1);
        setState(2157);
        bcRegister();
        break;
      }

      case Z80Parser::T__26:
      case Z80Parser::T__27:
      case Z80Parser::T__40:
      case Z80Parser::T__41: {
        enterOuterAlt(_localctx, 2);
        setState(2158);
        deRegister();
        break;
      }

      case Z80Parser::T__54:
      case Z80Parser::T__55: {
        enterOuterAlt(_localctx, 3);
        setState(2159);
        iyRegister();
        break;
      }

      case Z80Parser::T__64:
      case Z80Parser::T__65: {
        enterOuterAlt(_localctx, 4);
        setState(2160);
        spRegister();
        break;
      }

      case Z80Parser::COMMENT:
      case Z80Parser::EOL: {
        enterOuterAlt(_localctx, 5);

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

//----------------- AddIXWithRegisterContext ------------------------------------------------------------------

Z80Parser::AddIXWithRegisterContext::AddIXWithRegisterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::AddCommandNameContext* Z80Parser::AddIXWithRegisterContext::addCommandName() {
  return getRuleContext<Z80Parser::AddCommandNameContext>(0);
}

Z80Parser::IxRegisterContext* Z80Parser::AddIXWithRegisterContext::ixRegister() {
  return getRuleContext<Z80Parser::IxRegisterContext>(0);
}

Z80Parser::SimpleIXAdditionRegisterContext* Z80Parser::AddIXWithRegisterContext::simpleIXAdditionRegister() {
  return getRuleContext<Z80Parser::SimpleIXAdditionRegisterContext>(0);
}


size_t Z80Parser::AddIXWithRegisterContext::getRuleIndex() const {
  return Z80Parser::RuleAddIXWithRegister;
}

void Z80Parser::AddIXWithRegisterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAddIXWithRegister(this);
}

void Z80Parser::AddIXWithRegisterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAddIXWithRegister(this);
}

Z80Parser::AddIXWithRegisterContext* Z80Parser::addIXWithRegister() {
  AddIXWithRegisterContext *_localctx = _tracker.createInstance<AddIXWithRegisterContext>(_ctx, getState());
  enterRule(_localctx, 466, Z80Parser::RuleAddIXWithRegister);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2164);
    addCommandName();
    setState(2165);
    dynamic_cast<AddIXWithRegisterContext *>(_localctx)->dest = ixRegister();
    setState(2166);
    match(Z80Parser::T__73);
    setState(2167);
    dynamic_cast<AddIXWithRegisterContext *>(_localctx)->source = simpleIXAdditionRegister();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AddIYWithRegisterContext ------------------------------------------------------------------

Z80Parser::AddIYWithRegisterContext::AddIYWithRegisterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::AddCommandNameContext* Z80Parser::AddIYWithRegisterContext::addCommandName() {
  return getRuleContext<Z80Parser::AddCommandNameContext>(0);
}

Z80Parser::IyRegisterContext* Z80Parser::AddIYWithRegisterContext::iyRegister() {
  return getRuleContext<Z80Parser::IyRegisterContext>(0);
}

Z80Parser::SimpleIYAdditionRegisterContext* Z80Parser::AddIYWithRegisterContext::simpleIYAdditionRegister() {
  return getRuleContext<Z80Parser::SimpleIYAdditionRegisterContext>(0);
}


size_t Z80Parser::AddIYWithRegisterContext::getRuleIndex() const {
  return Z80Parser::RuleAddIYWithRegister;
}

void Z80Parser::AddIYWithRegisterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAddIYWithRegister(this);
}

void Z80Parser::AddIYWithRegisterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAddIYWithRegister(this);
}

Z80Parser::AddIYWithRegisterContext* Z80Parser::addIYWithRegister() {
  AddIYWithRegisterContext *_localctx = _tracker.createInstance<AddIYWithRegisterContext>(_ctx, getState());
  enterRule(_localctx, 468, Z80Parser::RuleAddIYWithRegister);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2169);
    addCommandName();
    setState(2170);
    dynamic_cast<AddIYWithRegisterContext *>(_localctx)->dest = iyRegister();
    setState(2171);
    match(Z80Parser::T__73);
    setState(2172);
    dynamic_cast<AddIYWithRegisterContext *>(_localctx)->source = simpleIYAdditionRegister();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IncrementWordRegisterContext ------------------------------------------------------------------

Z80Parser::IncrementWordRegisterContext::IncrementWordRegisterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::IncrementCommandNameContext* Z80Parser::IncrementWordRegisterContext::incrementCommandName() {
  return getRuleContext<Z80Parser::IncrementCommandNameContext>(0);
}

Z80Parser::SimpleWordRegisterContext* Z80Parser::IncrementWordRegisterContext::simpleWordRegister() {
  return getRuleContext<Z80Parser::SimpleWordRegisterContext>(0);
}


size_t Z80Parser::IncrementWordRegisterContext::getRuleIndex() const {
  return Z80Parser::RuleIncrementWordRegister;
}

void Z80Parser::IncrementWordRegisterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIncrementWordRegister(this);
}

void Z80Parser::IncrementWordRegisterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIncrementWordRegister(this);
}

Z80Parser::IncrementWordRegisterContext* Z80Parser::incrementWordRegister() {
  IncrementWordRegisterContext *_localctx = _tracker.createInstance<IncrementWordRegisterContext>(_ctx, getState());
  enterRule(_localctx, 470, Z80Parser::RuleIncrementWordRegister);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2174);
    incrementCommandName();
    setState(2175);
    dynamic_cast<IncrementWordRegisterContext *>(_localctx)->source = simpleWordRegister();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IncrementIXContext ------------------------------------------------------------------

Z80Parser::IncrementIXContext::IncrementIXContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::IncrementCommandNameContext* Z80Parser::IncrementIXContext::incrementCommandName() {
  return getRuleContext<Z80Parser::IncrementCommandNameContext>(0);
}

Z80Parser::IxRegisterContext* Z80Parser::IncrementIXContext::ixRegister() {
  return getRuleContext<Z80Parser::IxRegisterContext>(0);
}


size_t Z80Parser::IncrementIXContext::getRuleIndex() const {
  return Z80Parser::RuleIncrementIX;
}

void Z80Parser::IncrementIXContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIncrementIX(this);
}

void Z80Parser::IncrementIXContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIncrementIX(this);
}

Z80Parser::IncrementIXContext* Z80Parser::incrementIX() {
  IncrementIXContext *_localctx = _tracker.createInstance<IncrementIXContext>(_ctx, getState());
  enterRule(_localctx, 472, Z80Parser::RuleIncrementIX);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2177);
    incrementCommandName();
    setState(2178);
    dynamic_cast<IncrementIXContext *>(_localctx)->source = ixRegister();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IncrementIYContext ------------------------------------------------------------------

Z80Parser::IncrementIYContext::IncrementIYContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::IncrementCommandNameContext* Z80Parser::IncrementIYContext::incrementCommandName() {
  return getRuleContext<Z80Parser::IncrementCommandNameContext>(0);
}

Z80Parser::IyRegisterContext* Z80Parser::IncrementIYContext::iyRegister() {
  return getRuleContext<Z80Parser::IyRegisterContext>(0);
}


size_t Z80Parser::IncrementIYContext::getRuleIndex() const {
  return Z80Parser::RuleIncrementIY;
}

void Z80Parser::IncrementIYContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIncrementIY(this);
}

void Z80Parser::IncrementIYContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIncrementIY(this);
}

Z80Parser::IncrementIYContext* Z80Parser::incrementIY() {
  IncrementIYContext *_localctx = _tracker.createInstance<IncrementIYContext>(_ctx, getState());
  enterRule(_localctx, 474, Z80Parser::RuleIncrementIY);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2180);
    incrementCommandName();
    setState(2181);
    dynamic_cast<IncrementIYContext *>(_localctx)->source = iyRegister();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DecrementWordRegisterContext ------------------------------------------------------------------

Z80Parser::DecrementWordRegisterContext::DecrementWordRegisterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::DecrementCommandNameContext* Z80Parser::DecrementWordRegisterContext::decrementCommandName() {
  return getRuleContext<Z80Parser::DecrementCommandNameContext>(0);
}

Z80Parser::SimpleWordRegisterContext* Z80Parser::DecrementWordRegisterContext::simpleWordRegister() {
  return getRuleContext<Z80Parser::SimpleWordRegisterContext>(0);
}


size_t Z80Parser::DecrementWordRegisterContext::getRuleIndex() const {
  return Z80Parser::RuleDecrementWordRegister;
}

void Z80Parser::DecrementWordRegisterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDecrementWordRegister(this);
}

void Z80Parser::DecrementWordRegisterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDecrementWordRegister(this);
}

Z80Parser::DecrementWordRegisterContext* Z80Parser::decrementWordRegister() {
  DecrementWordRegisterContext *_localctx = _tracker.createInstance<DecrementWordRegisterContext>(_ctx, getState());
  enterRule(_localctx, 476, Z80Parser::RuleDecrementWordRegister);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2183);
    decrementCommandName();
    setState(2184);
    dynamic_cast<DecrementWordRegisterContext *>(_localctx)->source = simpleWordRegister();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DecrementIXContext ------------------------------------------------------------------

Z80Parser::DecrementIXContext::DecrementIXContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::DecrementCommandNameContext* Z80Parser::DecrementIXContext::decrementCommandName() {
  return getRuleContext<Z80Parser::DecrementCommandNameContext>(0);
}

Z80Parser::IxRegisterContext* Z80Parser::DecrementIXContext::ixRegister() {
  return getRuleContext<Z80Parser::IxRegisterContext>(0);
}


size_t Z80Parser::DecrementIXContext::getRuleIndex() const {
  return Z80Parser::RuleDecrementIX;
}

void Z80Parser::DecrementIXContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDecrementIX(this);
}

void Z80Parser::DecrementIXContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDecrementIX(this);
}

Z80Parser::DecrementIXContext* Z80Parser::decrementIX() {
  DecrementIXContext *_localctx = _tracker.createInstance<DecrementIXContext>(_ctx, getState());
  enterRule(_localctx, 478, Z80Parser::RuleDecrementIX);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2186);
    decrementCommandName();
    setState(2187);
    dynamic_cast<DecrementIXContext *>(_localctx)->source = ixRegister();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DecrementIYContext ------------------------------------------------------------------

Z80Parser::DecrementIYContext::DecrementIYContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::DecrementCommandNameContext* Z80Parser::DecrementIYContext::decrementCommandName() {
  return getRuleContext<Z80Parser::DecrementCommandNameContext>(0);
}

Z80Parser::IyRegisterContext* Z80Parser::DecrementIYContext::iyRegister() {
  return getRuleContext<Z80Parser::IyRegisterContext>(0);
}


size_t Z80Parser::DecrementIYContext::getRuleIndex() const {
  return Z80Parser::RuleDecrementIY;
}

void Z80Parser::DecrementIYContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDecrementIY(this);
}

void Z80Parser::DecrementIYContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDecrementIY(this);
}

Z80Parser::DecrementIYContext* Z80Parser::decrementIY() {
  DecrementIYContext *_localctx = _tracker.createInstance<DecrementIYContext>(_ctx, getState());
  enterRule(_localctx, 480, Z80Parser::RuleDecrementIY);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2189);
    decrementCommandName();
    setState(2190);
    dynamic_cast<DecrementIYContext *>(_localctx)->source = iyRegister();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- WordArithemeticCommandContext ------------------------------------------------------------------

Z80Parser::WordArithemeticCommandContext::WordArithemeticCommandContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::AddHLAndWordRegisterContext* Z80Parser::WordArithemeticCommandContext::addHLAndWordRegister() {
  return getRuleContext<Z80Parser::AddHLAndWordRegisterContext>(0);
}

Z80Parser::AddWithCarryHLAndWordRegisterContext* Z80Parser::WordArithemeticCommandContext::addWithCarryHLAndWordRegister() {
  return getRuleContext<Z80Parser::AddWithCarryHLAndWordRegisterContext>(0);
}

Z80Parser::SubtractWithCarryWordRegisterFromHLContext* Z80Parser::WordArithemeticCommandContext::subtractWithCarryWordRegisterFromHL() {
  return getRuleContext<Z80Parser::SubtractWithCarryWordRegisterFromHLContext>(0);
}

Z80Parser::AddIXWithRegisterContext* Z80Parser::WordArithemeticCommandContext::addIXWithRegister() {
  return getRuleContext<Z80Parser::AddIXWithRegisterContext>(0);
}

Z80Parser::AddIYWithRegisterContext* Z80Parser::WordArithemeticCommandContext::addIYWithRegister() {
  return getRuleContext<Z80Parser::AddIYWithRegisterContext>(0);
}

Z80Parser::IncrementWordRegisterContext* Z80Parser::WordArithemeticCommandContext::incrementWordRegister() {
  return getRuleContext<Z80Parser::IncrementWordRegisterContext>(0);
}

Z80Parser::IncrementIXContext* Z80Parser::WordArithemeticCommandContext::incrementIX() {
  return getRuleContext<Z80Parser::IncrementIXContext>(0);
}

Z80Parser::IncrementIYContext* Z80Parser::WordArithemeticCommandContext::incrementIY() {
  return getRuleContext<Z80Parser::IncrementIYContext>(0);
}

Z80Parser::DecrementWordRegisterContext* Z80Parser::WordArithemeticCommandContext::decrementWordRegister() {
  return getRuleContext<Z80Parser::DecrementWordRegisterContext>(0);
}

Z80Parser::DecrementIXContext* Z80Parser::WordArithemeticCommandContext::decrementIX() {
  return getRuleContext<Z80Parser::DecrementIXContext>(0);
}

Z80Parser::DecrementIYContext* Z80Parser::WordArithemeticCommandContext::decrementIY() {
  return getRuleContext<Z80Parser::DecrementIYContext>(0);
}


size_t Z80Parser::WordArithemeticCommandContext::getRuleIndex() const {
  return Z80Parser::RuleWordArithemeticCommand;
}

void Z80Parser::WordArithemeticCommandContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWordArithemeticCommand(this);
}

void Z80Parser::WordArithemeticCommandContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWordArithemeticCommand(this);
}

Z80Parser::WordArithemeticCommandContext* Z80Parser::wordArithemeticCommand() {
  WordArithemeticCommandContext *_localctx = _tracker.createInstance<WordArithemeticCommandContext>(_ctx, getState());
  enterRule(_localctx, 482, Z80Parser::RuleWordArithemeticCommand);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2204);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 102, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2192);
      addHLAndWordRegister();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2193);
      addWithCarryHLAndWordRegister();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(2194);
      subtractWithCarryWordRegisterFromHL();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(2195);
      addIXWithRegister();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(2196);
      addIYWithRegister();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(2197);
      addIYWithRegister();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(2198);
      incrementWordRegister();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(2199);
      incrementIX();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(2200);
      incrementIY();
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(2201);
      decrementWordRegister();
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(2202);
      decrementIX();
      break;
    }

    case 12: {
      enterOuterAlt(_localctx, 12);
      setState(2203);
      decrementIY();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RotateLeftCircularAContext ------------------------------------------------------------------

Z80Parser::RotateLeftCircularAContext::RotateLeftCircularAContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t Z80Parser::RotateLeftCircularAContext::getRuleIndex() const {
  return Z80Parser::RuleRotateLeftCircularA;
}

void Z80Parser::RotateLeftCircularAContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRotateLeftCircularA(this);
}

void Z80Parser::RotateLeftCircularAContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRotateLeftCircularA(this);
}

Z80Parser::RotateLeftCircularAContext* Z80Parser::rotateLeftCircularA() {
  RotateLeftCircularAContext *_localctx = _tracker.createInstance<RotateLeftCircularAContext>(_ctx, getState());
  enterRule(_localctx, 484, Z80Parser::RuleRotateLeftCircularA);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2206);
    _la = _input->LA(1);
    if (!(_la == Z80Parser::T__138

    || _la == Z80Parser::T__139)) {
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

//----------------- RotateLeftThroughCarryAContext ------------------------------------------------------------------

Z80Parser::RotateLeftThroughCarryAContext::RotateLeftThroughCarryAContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t Z80Parser::RotateLeftThroughCarryAContext::getRuleIndex() const {
  return Z80Parser::RuleRotateLeftThroughCarryA;
}

void Z80Parser::RotateLeftThroughCarryAContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRotateLeftThroughCarryA(this);
}

void Z80Parser::RotateLeftThroughCarryAContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRotateLeftThroughCarryA(this);
}

Z80Parser::RotateLeftThroughCarryAContext* Z80Parser::rotateLeftThroughCarryA() {
  RotateLeftThroughCarryAContext *_localctx = _tracker.createInstance<RotateLeftThroughCarryAContext>(_ctx, getState());
  enterRule(_localctx, 486, Z80Parser::RuleRotateLeftThroughCarryA);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2208);
    _la = _input->LA(1);
    if (!(_la == Z80Parser::T__140

    || _la == Z80Parser::T__141)) {
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

//----------------- RotateRightCircularAContext ------------------------------------------------------------------

Z80Parser::RotateRightCircularAContext::RotateRightCircularAContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t Z80Parser::RotateRightCircularAContext::getRuleIndex() const {
  return Z80Parser::RuleRotateRightCircularA;
}

void Z80Parser::RotateRightCircularAContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRotateRightCircularA(this);
}

void Z80Parser::RotateRightCircularAContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRotateRightCircularA(this);
}

Z80Parser::RotateRightCircularAContext* Z80Parser::rotateRightCircularA() {
  RotateRightCircularAContext *_localctx = _tracker.createInstance<RotateRightCircularAContext>(_ctx, getState());
  enterRule(_localctx, 488, Z80Parser::RuleRotateRightCircularA);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2210);
    _la = _input->LA(1);
    if (!(_la == Z80Parser::T__142

    || _la == Z80Parser::T__143)) {
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

//----------------- RotateRightThroughCarryAContext ------------------------------------------------------------------

Z80Parser::RotateRightThroughCarryAContext::RotateRightThroughCarryAContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t Z80Parser::RotateRightThroughCarryAContext::getRuleIndex() const {
  return Z80Parser::RuleRotateRightThroughCarryA;
}

void Z80Parser::RotateRightThroughCarryAContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRotateRightThroughCarryA(this);
}

void Z80Parser::RotateRightThroughCarryAContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRotateRightThroughCarryA(this);
}

Z80Parser::RotateRightThroughCarryAContext* Z80Parser::rotateRightThroughCarryA() {
  RotateRightThroughCarryAContext *_localctx = _tracker.createInstance<RotateRightThroughCarryAContext>(_ctx, getState());
  enterRule(_localctx, 490, Z80Parser::RuleRotateRightThroughCarryA);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2212);
    _la = _input->LA(1);
    if (!(_la == Z80Parser::T__144

    || _la == Z80Parser::T__145)) {
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

//----------------- RotateLeftCircularCommandNameContext ------------------------------------------------------------------

Z80Parser::RotateLeftCircularCommandNameContext::RotateLeftCircularCommandNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t Z80Parser::RotateLeftCircularCommandNameContext::getRuleIndex() const {
  return Z80Parser::RuleRotateLeftCircularCommandName;
}

void Z80Parser::RotateLeftCircularCommandNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRotateLeftCircularCommandName(this);
}

void Z80Parser::RotateLeftCircularCommandNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRotateLeftCircularCommandName(this);
}

Z80Parser::RotateLeftCircularCommandNameContext* Z80Parser::rotateLeftCircularCommandName() {
  RotateLeftCircularCommandNameContext *_localctx = _tracker.createInstance<RotateLeftCircularCommandNameContext>(_ctx, getState());
  enterRule(_localctx, 492, Z80Parser::RuleRotateLeftCircularCommandName);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2214);
    _la = _input->LA(1);
    if (!(_la == Z80Parser::T__146

    || _la == Z80Parser::T__147)) {
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

//----------------- RotateLeftThroughCarryCommandNameContext ------------------------------------------------------------------

Z80Parser::RotateLeftThroughCarryCommandNameContext::RotateLeftThroughCarryCommandNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t Z80Parser::RotateLeftThroughCarryCommandNameContext::getRuleIndex() const {
  return Z80Parser::RuleRotateLeftThroughCarryCommandName;
}

void Z80Parser::RotateLeftThroughCarryCommandNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRotateLeftThroughCarryCommandName(this);
}

void Z80Parser::RotateLeftThroughCarryCommandNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRotateLeftThroughCarryCommandName(this);
}

Z80Parser::RotateLeftThroughCarryCommandNameContext* Z80Parser::rotateLeftThroughCarryCommandName() {
  RotateLeftThroughCarryCommandNameContext *_localctx = _tracker.createInstance<RotateLeftThroughCarryCommandNameContext>(_ctx, getState());
  enterRule(_localctx, 494, Z80Parser::RuleRotateLeftThroughCarryCommandName);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2216);
    _la = _input->LA(1);
    if (!(_la == Z80Parser::T__148

    || _la == Z80Parser::T__149)) {
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

//----------------- RotateRightCircularCommandNameContext ------------------------------------------------------------------

Z80Parser::RotateRightCircularCommandNameContext::RotateRightCircularCommandNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t Z80Parser::RotateRightCircularCommandNameContext::getRuleIndex() const {
  return Z80Parser::RuleRotateRightCircularCommandName;
}

void Z80Parser::RotateRightCircularCommandNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRotateRightCircularCommandName(this);
}

void Z80Parser::RotateRightCircularCommandNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRotateRightCircularCommandName(this);
}

Z80Parser::RotateRightCircularCommandNameContext* Z80Parser::rotateRightCircularCommandName() {
  RotateRightCircularCommandNameContext *_localctx = _tracker.createInstance<RotateRightCircularCommandNameContext>(_ctx, getState());
  enterRule(_localctx, 496, Z80Parser::RuleRotateRightCircularCommandName);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2218);
    _la = _input->LA(1);
    if (!(_la == Z80Parser::T__150

    || _la == Z80Parser::T__151)) {
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

//----------------- RotateRightThroughCarryCommandNameContext ------------------------------------------------------------------

Z80Parser::RotateRightThroughCarryCommandNameContext::RotateRightThroughCarryCommandNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t Z80Parser::RotateRightThroughCarryCommandNameContext::getRuleIndex() const {
  return Z80Parser::RuleRotateRightThroughCarryCommandName;
}

void Z80Parser::RotateRightThroughCarryCommandNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRotateRightThroughCarryCommandName(this);
}

void Z80Parser::RotateRightThroughCarryCommandNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRotateRightThroughCarryCommandName(this);
}

Z80Parser::RotateRightThroughCarryCommandNameContext* Z80Parser::rotateRightThroughCarryCommandName() {
  RotateRightThroughCarryCommandNameContext *_localctx = _tracker.createInstance<RotateRightThroughCarryCommandNameContext>(_ctx, getState());
  enterRule(_localctx, 498, Z80Parser::RuleRotateRightThroughCarryCommandName);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2220);
    _la = _input->LA(1);
    if (!(_la == Z80Parser::T__152

    || _la == Z80Parser::T__153)) {
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

//----------------- ShiftLeftArithmeticCommandNameContext ------------------------------------------------------------------

Z80Parser::ShiftLeftArithmeticCommandNameContext::ShiftLeftArithmeticCommandNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t Z80Parser::ShiftLeftArithmeticCommandNameContext::getRuleIndex() const {
  return Z80Parser::RuleShiftLeftArithmeticCommandName;
}

void Z80Parser::ShiftLeftArithmeticCommandNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterShiftLeftArithmeticCommandName(this);
}

void Z80Parser::ShiftLeftArithmeticCommandNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitShiftLeftArithmeticCommandName(this);
}

Z80Parser::ShiftLeftArithmeticCommandNameContext* Z80Parser::shiftLeftArithmeticCommandName() {
  ShiftLeftArithmeticCommandNameContext *_localctx = _tracker.createInstance<ShiftLeftArithmeticCommandNameContext>(_ctx, getState());
  enterRule(_localctx, 500, Z80Parser::RuleShiftLeftArithmeticCommandName);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2222);
    _la = _input->LA(1);
    if (!(_la == Z80Parser::T__154

    || _la == Z80Parser::T__155)) {
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

//----------------- ShiftLeftLogicalCommandNameContext ------------------------------------------------------------------

Z80Parser::ShiftLeftLogicalCommandNameContext::ShiftLeftLogicalCommandNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t Z80Parser::ShiftLeftLogicalCommandNameContext::getRuleIndex() const {
  return Z80Parser::RuleShiftLeftLogicalCommandName;
}

void Z80Parser::ShiftLeftLogicalCommandNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterShiftLeftLogicalCommandName(this);
}

void Z80Parser::ShiftLeftLogicalCommandNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitShiftLeftLogicalCommandName(this);
}

Z80Parser::ShiftLeftLogicalCommandNameContext* Z80Parser::shiftLeftLogicalCommandName() {
  ShiftLeftLogicalCommandNameContext *_localctx = _tracker.createInstance<ShiftLeftLogicalCommandNameContext>(_ctx, getState());
  enterRule(_localctx, 502, Z80Parser::RuleShiftLeftLogicalCommandName);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2224);
    _la = _input->LA(1);
    if (!(_la == Z80Parser::T__156

    || _la == Z80Parser::T__157)) {
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

//----------------- ShiftRightArithmeticCommandNameContext ------------------------------------------------------------------

Z80Parser::ShiftRightArithmeticCommandNameContext::ShiftRightArithmeticCommandNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t Z80Parser::ShiftRightArithmeticCommandNameContext::getRuleIndex() const {
  return Z80Parser::RuleShiftRightArithmeticCommandName;
}

void Z80Parser::ShiftRightArithmeticCommandNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterShiftRightArithmeticCommandName(this);
}

void Z80Parser::ShiftRightArithmeticCommandNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitShiftRightArithmeticCommandName(this);
}

Z80Parser::ShiftRightArithmeticCommandNameContext* Z80Parser::shiftRightArithmeticCommandName() {
  ShiftRightArithmeticCommandNameContext *_localctx = _tracker.createInstance<ShiftRightArithmeticCommandNameContext>(_ctx, getState());
  enterRule(_localctx, 504, Z80Parser::RuleShiftRightArithmeticCommandName);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2226);
    _la = _input->LA(1);
    if (!(_la == Z80Parser::T__158

    || _la == Z80Parser::T__159)) {
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

//----------------- ShiftRightLogicalCommandNameContext ------------------------------------------------------------------

Z80Parser::ShiftRightLogicalCommandNameContext::ShiftRightLogicalCommandNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t Z80Parser::ShiftRightLogicalCommandNameContext::getRuleIndex() const {
  return Z80Parser::RuleShiftRightLogicalCommandName;
}

void Z80Parser::ShiftRightLogicalCommandNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterShiftRightLogicalCommandName(this);
}

void Z80Parser::ShiftRightLogicalCommandNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitShiftRightLogicalCommandName(this);
}

Z80Parser::ShiftRightLogicalCommandNameContext* Z80Parser::shiftRightLogicalCommandName() {
  ShiftRightLogicalCommandNameContext *_localctx = _tracker.createInstance<ShiftRightLogicalCommandNameContext>(_ctx, getState());
  enterRule(_localctx, 506, Z80Parser::RuleShiftRightLogicalCommandName);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2228);
    _la = _input->LA(1);
    if (!(_la == Z80Parser::T__160

    || _la == Z80Parser::T__161)) {
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

//----------------- RotateDigitLeftCommandNameContext ------------------------------------------------------------------

Z80Parser::RotateDigitLeftCommandNameContext::RotateDigitLeftCommandNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t Z80Parser::RotateDigitLeftCommandNameContext::getRuleIndex() const {
  return Z80Parser::RuleRotateDigitLeftCommandName;
}

void Z80Parser::RotateDigitLeftCommandNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRotateDigitLeftCommandName(this);
}

void Z80Parser::RotateDigitLeftCommandNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRotateDigitLeftCommandName(this);
}

Z80Parser::RotateDigitLeftCommandNameContext* Z80Parser::rotateDigitLeftCommandName() {
  RotateDigitLeftCommandNameContext *_localctx = _tracker.createInstance<RotateDigitLeftCommandNameContext>(_ctx, getState());
  enterRule(_localctx, 508, Z80Parser::RuleRotateDigitLeftCommandName);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2230);
    _la = _input->LA(1);
    if (!(_la == Z80Parser::T__162

    || _la == Z80Parser::T__163)) {
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

//----------------- RotateDigitRightCommandNameContext ------------------------------------------------------------------

Z80Parser::RotateDigitRightCommandNameContext::RotateDigitRightCommandNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t Z80Parser::RotateDigitRightCommandNameContext::getRuleIndex() const {
  return Z80Parser::RuleRotateDigitRightCommandName;
}

void Z80Parser::RotateDigitRightCommandNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRotateDigitRightCommandName(this);
}

void Z80Parser::RotateDigitRightCommandNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRotateDigitRightCommandName(this);
}

Z80Parser::RotateDigitRightCommandNameContext* Z80Parser::rotateDigitRightCommandName() {
  RotateDigitRightCommandNameContext *_localctx = _tracker.createInstance<RotateDigitRightCommandNameContext>(_ctx, getState());
  enterRule(_localctx, 510, Z80Parser::RuleRotateDigitRightCommandName);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2232);
    _la = _input->LA(1);
    if (!(_la == Z80Parser::T__164

    || _la == Z80Parser::T__165)) {
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

//----------------- RotateLeftCircularRegisterContext ------------------------------------------------------------------

Z80Parser::RotateLeftCircularRegisterContext::RotateLeftCircularRegisterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::RotateLeftCircularCommandNameContext* Z80Parser::RotateLeftCircularRegisterContext::rotateLeftCircularCommandName() {
  return getRuleContext<Z80Parser::RotateLeftCircularCommandNameContext>(0);
}

Z80Parser::SimpleByteRegisterContext* Z80Parser::RotateLeftCircularRegisterContext::simpleByteRegister() {
  return getRuleContext<Z80Parser::SimpleByteRegisterContext>(0);
}


size_t Z80Parser::RotateLeftCircularRegisterContext::getRuleIndex() const {
  return Z80Parser::RuleRotateLeftCircularRegister;
}

void Z80Parser::RotateLeftCircularRegisterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRotateLeftCircularRegister(this);
}

void Z80Parser::RotateLeftCircularRegisterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRotateLeftCircularRegister(this);
}

Z80Parser::RotateLeftCircularRegisterContext* Z80Parser::rotateLeftCircularRegister() {
  RotateLeftCircularRegisterContext *_localctx = _tracker.createInstance<RotateLeftCircularRegisterContext>(_ctx, getState());
  enterRule(_localctx, 512, Z80Parser::RuleRotateLeftCircularRegister);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2234);
    rotateLeftCircularCommandName();
    setState(2235);
    dynamic_cast<RotateLeftCircularRegisterContext *>(_localctx)->source = simpleByteRegister();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RotateLeftCircularHLPointerContext ------------------------------------------------------------------

Z80Parser::RotateLeftCircularHLPointerContext::RotateLeftCircularHLPointerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::RotateLeftCircularCommandNameContext* Z80Parser::RotateLeftCircularHLPointerContext::rotateLeftCircularCommandName() {
  return getRuleContext<Z80Parser::RotateLeftCircularCommandNameContext>(0);
}

Z80Parser::HlPointerContext* Z80Parser::RotateLeftCircularHLPointerContext::hlPointer() {
  return getRuleContext<Z80Parser::HlPointerContext>(0);
}


size_t Z80Parser::RotateLeftCircularHLPointerContext::getRuleIndex() const {
  return Z80Parser::RuleRotateLeftCircularHLPointer;
}

void Z80Parser::RotateLeftCircularHLPointerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRotateLeftCircularHLPointer(this);
}

void Z80Parser::RotateLeftCircularHLPointerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRotateLeftCircularHLPointer(this);
}

Z80Parser::RotateLeftCircularHLPointerContext* Z80Parser::rotateLeftCircularHLPointer() {
  RotateLeftCircularHLPointerContext *_localctx = _tracker.createInstance<RotateLeftCircularHLPointerContext>(_ctx, getState());
  enterRule(_localctx, 514, Z80Parser::RuleRotateLeftCircularHLPointer);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2237);
    rotateLeftCircularCommandName();
    setState(2238);
    dynamic_cast<RotateLeftCircularHLPointerContext *>(_localctx)->source = hlPointer();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RotateLeftCircularIXOffsetContext ------------------------------------------------------------------

Z80Parser::RotateLeftCircularIXOffsetContext::RotateLeftCircularIXOffsetContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::RotateLeftCircularCommandNameContext* Z80Parser::RotateLeftCircularIXOffsetContext::rotateLeftCircularCommandName() {
  return getRuleContext<Z80Parser::RotateLeftCircularCommandNameContext>(0);
}

Z80Parser::IxPointerWithOffsetContext* Z80Parser::RotateLeftCircularIXOffsetContext::ixPointerWithOffset() {
  return getRuleContext<Z80Parser::IxPointerWithOffsetContext>(0);
}


size_t Z80Parser::RotateLeftCircularIXOffsetContext::getRuleIndex() const {
  return Z80Parser::RuleRotateLeftCircularIXOffset;
}

void Z80Parser::RotateLeftCircularIXOffsetContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRotateLeftCircularIXOffset(this);
}

void Z80Parser::RotateLeftCircularIXOffsetContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRotateLeftCircularIXOffset(this);
}

Z80Parser::RotateLeftCircularIXOffsetContext* Z80Parser::rotateLeftCircularIXOffset() {
  RotateLeftCircularIXOffsetContext *_localctx = _tracker.createInstance<RotateLeftCircularIXOffsetContext>(_ctx, getState());
  enterRule(_localctx, 516, Z80Parser::RuleRotateLeftCircularIXOffset);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2240);
    rotateLeftCircularCommandName();
    setState(2241);
    dynamic_cast<RotateLeftCircularIXOffsetContext *>(_localctx)->source = ixPointerWithOffset();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RotateLeftCircularIYOffsetContext ------------------------------------------------------------------

Z80Parser::RotateLeftCircularIYOffsetContext::RotateLeftCircularIYOffsetContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::RotateLeftCircularCommandNameContext* Z80Parser::RotateLeftCircularIYOffsetContext::rotateLeftCircularCommandName() {
  return getRuleContext<Z80Parser::RotateLeftCircularCommandNameContext>(0);
}

Z80Parser::IyPointerWithOffsetContext* Z80Parser::RotateLeftCircularIYOffsetContext::iyPointerWithOffset() {
  return getRuleContext<Z80Parser::IyPointerWithOffsetContext>(0);
}


size_t Z80Parser::RotateLeftCircularIYOffsetContext::getRuleIndex() const {
  return Z80Parser::RuleRotateLeftCircularIYOffset;
}

void Z80Parser::RotateLeftCircularIYOffsetContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRotateLeftCircularIYOffset(this);
}

void Z80Parser::RotateLeftCircularIYOffsetContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRotateLeftCircularIYOffset(this);
}

Z80Parser::RotateLeftCircularIYOffsetContext* Z80Parser::rotateLeftCircularIYOffset() {
  RotateLeftCircularIYOffsetContext *_localctx = _tracker.createInstance<RotateLeftCircularIYOffsetContext>(_ctx, getState());
  enterRule(_localctx, 518, Z80Parser::RuleRotateLeftCircularIYOffset);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2243);
    rotateLeftCircularCommandName();
    setState(2244);
    dynamic_cast<RotateLeftCircularIYOffsetContext *>(_localctx)->source = iyPointerWithOffset();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RotateLeftThroughCarryRegisterContext ------------------------------------------------------------------

Z80Parser::RotateLeftThroughCarryRegisterContext::RotateLeftThroughCarryRegisterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::RotateLeftThroughCarryCommandNameContext* Z80Parser::RotateLeftThroughCarryRegisterContext::rotateLeftThroughCarryCommandName() {
  return getRuleContext<Z80Parser::RotateLeftThroughCarryCommandNameContext>(0);
}

Z80Parser::SimpleByteRegisterContext* Z80Parser::RotateLeftThroughCarryRegisterContext::simpleByteRegister() {
  return getRuleContext<Z80Parser::SimpleByteRegisterContext>(0);
}


size_t Z80Parser::RotateLeftThroughCarryRegisterContext::getRuleIndex() const {
  return Z80Parser::RuleRotateLeftThroughCarryRegister;
}

void Z80Parser::RotateLeftThroughCarryRegisterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRotateLeftThroughCarryRegister(this);
}

void Z80Parser::RotateLeftThroughCarryRegisterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRotateLeftThroughCarryRegister(this);
}

Z80Parser::RotateLeftThroughCarryRegisterContext* Z80Parser::rotateLeftThroughCarryRegister() {
  RotateLeftThroughCarryRegisterContext *_localctx = _tracker.createInstance<RotateLeftThroughCarryRegisterContext>(_ctx, getState());
  enterRule(_localctx, 520, Z80Parser::RuleRotateLeftThroughCarryRegister);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2246);
    rotateLeftThroughCarryCommandName();
    setState(2247);
    dynamic_cast<RotateLeftThroughCarryRegisterContext *>(_localctx)->source = simpleByteRegister();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RotateLeftThroughCarryHLPointerContext ------------------------------------------------------------------

Z80Parser::RotateLeftThroughCarryHLPointerContext::RotateLeftThroughCarryHLPointerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::RotateLeftThroughCarryCommandNameContext* Z80Parser::RotateLeftThroughCarryHLPointerContext::rotateLeftThroughCarryCommandName() {
  return getRuleContext<Z80Parser::RotateLeftThroughCarryCommandNameContext>(0);
}

Z80Parser::HlPointerContext* Z80Parser::RotateLeftThroughCarryHLPointerContext::hlPointer() {
  return getRuleContext<Z80Parser::HlPointerContext>(0);
}


size_t Z80Parser::RotateLeftThroughCarryHLPointerContext::getRuleIndex() const {
  return Z80Parser::RuleRotateLeftThroughCarryHLPointer;
}

void Z80Parser::RotateLeftThroughCarryHLPointerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRotateLeftThroughCarryHLPointer(this);
}

void Z80Parser::RotateLeftThroughCarryHLPointerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRotateLeftThroughCarryHLPointer(this);
}

Z80Parser::RotateLeftThroughCarryHLPointerContext* Z80Parser::rotateLeftThroughCarryHLPointer() {
  RotateLeftThroughCarryHLPointerContext *_localctx = _tracker.createInstance<RotateLeftThroughCarryHLPointerContext>(_ctx, getState());
  enterRule(_localctx, 522, Z80Parser::RuleRotateLeftThroughCarryHLPointer);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2249);
    rotateLeftThroughCarryCommandName();
    setState(2250);
    dynamic_cast<RotateLeftThroughCarryHLPointerContext *>(_localctx)->source = hlPointer();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RotateLeftThroughCarryIXOffsetContext ------------------------------------------------------------------

Z80Parser::RotateLeftThroughCarryIXOffsetContext::RotateLeftThroughCarryIXOffsetContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::RotateLeftThroughCarryCommandNameContext* Z80Parser::RotateLeftThroughCarryIXOffsetContext::rotateLeftThroughCarryCommandName() {
  return getRuleContext<Z80Parser::RotateLeftThroughCarryCommandNameContext>(0);
}

Z80Parser::IxPointerWithOffsetContext* Z80Parser::RotateLeftThroughCarryIXOffsetContext::ixPointerWithOffset() {
  return getRuleContext<Z80Parser::IxPointerWithOffsetContext>(0);
}


size_t Z80Parser::RotateLeftThroughCarryIXOffsetContext::getRuleIndex() const {
  return Z80Parser::RuleRotateLeftThroughCarryIXOffset;
}

void Z80Parser::RotateLeftThroughCarryIXOffsetContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRotateLeftThroughCarryIXOffset(this);
}

void Z80Parser::RotateLeftThroughCarryIXOffsetContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRotateLeftThroughCarryIXOffset(this);
}

Z80Parser::RotateLeftThroughCarryIXOffsetContext* Z80Parser::rotateLeftThroughCarryIXOffset() {
  RotateLeftThroughCarryIXOffsetContext *_localctx = _tracker.createInstance<RotateLeftThroughCarryIXOffsetContext>(_ctx, getState());
  enterRule(_localctx, 524, Z80Parser::RuleRotateLeftThroughCarryIXOffset);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2252);
    rotateLeftThroughCarryCommandName();
    setState(2253);
    dynamic_cast<RotateLeftThroughCarryIXOffsetContext *>(_localctx)->source = ixPointerWithOffset();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RotateLeftThroughCarryIYOffsetContext ------------------------------------------------------------------

Z80Parser::RotateLeftThroughCarryIYOffsetContext::RotateLeftThroughCarryIYOffsetContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::RotateLeftThroughCarryCommandNameContext* Z80Parser::RotateLeftThroughCarryIYOffsetContext::rotateLeftThroughCarryCommandName() {
  return getRuleContext<Z80Parser::RotateLeftThroughCarryCommandNameContext>(0);
}

Z80Parser::IyPointerWithOffsetContext* Z80Parser::RotateLeftThroughCarryIYOffsetContext::iyPointerWithOffset() {
  return getRuleContext<Z80Parser::IyPointerWithOffsetContext>(0);
}


size_t Z80Parser::RotateLeftThroughCarryIYOffsetContext::getRuleIndex() const {
  return Z80Parser::RuleRotateLeftThroughCarryIYOffset;
}

void Z80Parser::RotateLeftThroughCarryIYOffsetContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRotateLeftThroughCarryIYOffset(this);
}

void Z80Parser::RotateLeftThroughCarryIYOffsetContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRotateLeftThroughCarryIYOffset(this);
}

Z80Parser::RotateLeftThroughCarryIYOffsetContext* Z80Parser::rotateLeftThroughCarryIYOffset() {
  RotateLeftThroughCarryIYOffsetContext *_localctx = _tracker.createInstance<RotateLeftThroughCarryIYOffsetContext>(_ctx, getState());
  enterRule(_localctx, 526, Z80Parser::RuleRotateLeftThroughCarryIYOffset);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2255);
    rotateLeftThroughCarryCommandName();
    setState(2256);
    dynamic_cast<RotateLeftThroughCarryIYOffsetContext *>(_localctx)->source = iyPointerWithOffset();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RotateRightCircularRegisterContext ------------------------------------------------------------------

Z80Parser::RotateRightCircularRegisterContext::RotateRightCircularRegisterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::RotateRightCircularCommandNameContext* Z80Parser::RotateRightCircularRegisterContext::rotateRightCircularCommandName() {
  return getRuleContext<Z80Parser::RotateRightCircularCommandNameContext>(0);
}

Z80Parser::SimpleByteRegisterContext* Z80Parser::RotateRightCircularRegisterContext::simpleByteRegister() {
  return getRuleContext<Z80Parser::SimpleByteRegisterContext>(0);
}


size_t Z80Parser::RotateRightCircularRegisterContext::getRuleIndex() const {
  return Z80Parser::RuleRotateRightCircularRegister;
}

void Z80Parser::RotateRightCircularRegisterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRotateRightCircularRegister(this);
}

void Z80Parser::RotateRightCircularRegisterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRotateRightCircularRegister(this);
}

Z80Parser::RotateRightCircularRegisterContext* Z80Parser::rotateRightCircularRegister() {
  RotateRightCircularRegisterContext *_localctx = _tracker.createInstance<RotateRightCircularRegisterContext>(_ctx, getState());
  enterRule(_localctx, 528, Z80Parser::RuleRotateRightCircularRegister);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2258);
    rotateRightCircularCommandName();
    setState(2259);
    dynamic_cast<RotateRightCircularRegisterContext *>(_localctx)->source = simpleByteRegister();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RotateRightCircularHLPointerContext ------------------------------------------------------------------

Z80Parser::RotateRightCircularHLPointerContext::RotateRightCircularHLPointerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::RotateRightCircularCommandNameContext* Z80Parser::RotateRightCircularHLPointerContext::rotateRightCircularCommandName() {
  return getRuleContext<Z80Parser::RotateRightCircularCommandNameContext>(0);
}

Z80Parser::HlPointerContext* Z80Parser::RotateRightCircularHLPointerContext::hlPointer() {
  return getRuleContext<Z80Parser::HlPointerContext>(0);
}


size_t Z80Parser::RotateRightCircularHLPointerContext::getRuleIndex() const {
  return Z80Parser::RuleRotateRightCircularHLPointer;
}

void Z80Parser::RotateRightCircularHLPointerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRotateRightCircularHLPointer(this);
}

void Z80Parser::RotateRightCircularHLPointerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRotateRightCircularHLPointer(this);
}

Z80Parser::RotateRightCircularHLPointerContext* Z80Parser::rotateRightCircularHLPointer() {
  RotateRightCircularHLPointerContext *_localctx = _tracker.createInstance<RotateRightCircularHLPointerContext>(_ctx, getState());
  enterRule(_localctx, 530, Z80Parser::RuleRotateRightCircularHLPointer);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2261);
    rotateRightCircularCommandName();
    setState(2262);
    dynamic_cast<RotateRightCircularHLPointerContext *>(_localctx)->source = hlPointer();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RotateRightCircularIXOffsetContext ------------------------------------------------------------------

Z80Parser::RotateRightCircularIXOffsetContext::RotateRightCircularIXOffsetContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::RotateRightCircularCommandNameContext* Z80Parser::RotateRightCircularIXOffsetContext::rotateRightCircularCommandName() {
  return getRuleContext<Z80Parser::RotateRightCircularCommandNameContext>(0);
}

Z80Parser::IxPointerWithOffsetContext* Z80Parser::RotateRightCircularIXOffsetContext::ixPointerWithOffset() {
  return getRuleContext<Z80Parser::IxPointerWithOffsetContext>(0);
}


size_t Z80Parser::RotateRightCircularIXOffsetContext::getRuleIndex() const {
  return Z80Parser::RuleRotateRightCircularIXOffset;
}

void Z80Parser::RotateRightCircularIXOffsetContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRotateRightCircularIXOffset(this);
}

void Z80Parser::RotateRightCircularIXOffsetContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRotateRightCircularIXOffset(this);
}

Z80Parser::RotateRightCircularIXOffsetContext* Z80Parser::rotateRightCircularIXOffset() {
  RotateRightCircularIXOffsetContext *_localctx = _tracker.createInstance<RotateRightCircularIXOffsetContext>(_ctx, getState());
  enterRule(_localctx, 532, Z80Parser::RuleRotateRightCircularIXOffset);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2264);
    rotateRightCircularCommandName();
    setState(2265);
    dynamic_cast<RotateRightCircularIXOffsetContext *>(_localctx)->source = ixPointerWithOffset();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RotateRightCircularIYOffsetContext ------------------------------------------------------------------

Z80Parser::RotateRightCircularIYOffsetContext::RotateRightCircularIYOffsetContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::RotateRightCircularCommandNameContext* Z80Parser::RotateRightCircularIYOffsetContext::rotateRightCircularCommandName() {
  return getRuleContext<Z80Parser::RotateRightCircularCommandNameContext>(0);
}

Z80Parser::IyPointerWithOffsetContext* Z80Parser::RotateRightCircularIYOffsetContext::iyPointerWithOffset() {
  return getRuleContext<Z80Parser::IyPointerWithOffsetContext>(0);
}


size_t Z80Parser::RotateRightCircularIYOffsetContext::getRuleIndex() const {
  return Z80Parser::RuleRotateRightCircularIYOffset;
}

void Z80Parser::RotateRightCircularIYOffsetContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRotateRightCircularIYOffset(this);
}

void Z80Parser::RotateRightCircularIYOffsetContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRotateRightCircularIYOffset(this);
}

Z80Parser::RotateRightCircularIYOffsetContext* Z80Parser::rotateRightCircularIYOffset() {
  RotateRightCircularIYOffsetContext *_localctx = _tracker.createInstance<RotateRightCircularIYOffsetContext>(_ctx, getState());
  enterRule(_localctx, 534, Z80Parser::RuleRotateRightCircularIYOffset);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2267);
    rotateRightCircularCommandName();
    setState(2268);
    dynamic_cast<RotateRightCircularIYOffsetContext *>(_localctx)->source = iyPointerWithOffset();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RotateRightThroughCarryRegisterContext ------------------------------------------------------------------

Z80Parser::RotateRightThroughCarryRegisterContext::RotateRightThroughCarryRegisterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::RotateRightThroughCarryCommandNameContext* Z80Parser::RotateRightThroughCarryRegisterContext::rotateRightThroughCarryCommandName() {
  return getRuleContext<Z80Parser::RotateRightThroughCarryCommandNameContext>(0);
}

Z80Parser::SimpleByteRegisterContext* Z80Parser::RotateRightThroughCarryRegisterContext::simpleByteRegister() {
  return getRuleContext<Z80Parser::SimpleByteRegisterContext>(0);
}


size_t Z80Parser::RotateRightThroughCarryRegisterContext::getRuleIndex() const {
  return Z80Parser::RuleRotateRightThroughCarryRegister;
}

void Z80Parser::RotateRightThroughCarryRegisterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRotateRightThroughCarryRegister(this);
}

void Z80Parser::RotateRightThroughCarryRegisterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRotateRightThroughCarryRegister(this);
}

Z80Parser::RotateRightThroughCarryRegisterContext* Z80Parser::rotateRightThroughCarryRegister() {
  RotateRightThroughCarryRegisterContext *_localctx = _tracker.createInstance<RotateRightThroughCarryRegisterContext>(_ctx, getState());
  enterRule(_localctx, 536, Z80Parser::RuleRotateRightThroughCarryRegister);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2270);
    rotateRightThroughCarryCommandName();
    setState(2271);
    dynamic_cast<RotateRightThroughCarryRegisterContext *>(_localctx)->source = simpleByteRegister();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RotateRightThroughCarryHLPointerContext ------------------------------------------------------------------

Z80Parser::RotateRightThroughCarryHLPointerContext::RotateRightThroughCarryHLPointerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::RotateRightThroughCarryCommandNameContext* Z80Parser::RotateRightThroughCarryHLPointerContext::rotateRightThroughCarryCommandName() {
  return getRuleContext<Z80Parser::RotateRightThroughCarryCommandNameContext>(0);
}

Z80Parser::HlPointerContext* Z80Parser::RotateRightThroughCarryHLPointerContext::hlPointer() {
  return getRuleContext<Z80Parser::HlPointerContext>(0);
}


size_t Z80Parser::RotateRightThroughCarryHLPointerContext::getRuleIndex() const {
  return Z80Parser::RuleRotateRightThroughCarryHLPointer;
}

void Z80Parser::RotateRightThroughCarryHLPointerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRotateRightThroughCarryHLPointer(this);
}

void Z80Parser::RotateRightThroughCarryHLPointerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRotateRightThroughCarryHLPointer(this);
}

Z80Parser::RotateRightThroughCarryHLPointerContext* Z80Parser::rotateRightThroughCarryHLPointer() {
  RotateRightThroughCarryHLPointerContext *_localctx = _tracker.createInstance<RotateRightThroughCarryHLPointerContext>(_ctx, getState());
  enterRule(_localctx, 538, Z80Parser::RuleRotateRightThroughCarryHLPointer);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2273);
    rotateRightThroughCarryCommandName();
    setState(2274);
    dynamic_cast<RotateRightThroughCarryHLPointerContext *>(_localctx)->source = hlPointer();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RotateRightThroughCarryIXOffsetContext ------------------------------------------------------------------

Z80Parser::RotateRightThroughCarryIXOffsetContext::RotateRightThroughCarryIXOffsetContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::RotateRightThroughCarryCommandNameContext* Z80Parser::RotateRightThroughCarryIXOffsetContext::rotateRightThroughCarryCommandName() {
  return getRuleContext<Z80Parser::RotateRightThroughCarryCommandNameContext>(0);
}

Z80Parser::IxPointerWithOffsetContext* Z80Parser::RotateRightThroughCarryIXOffsetContext::ixPointerWithOffset() {
  return getRuleContext<Z80Parser::IxPointerWithOffsetContext>(0);
}


size_t Z80Parser::RotateRightThroughCarryIXOffsetContext::getRuleIndex() const {
  return Z80Parser::RuleRotateRightThroughCarryIXOffset;
}

void Z80Parser::RotateRightThroughCarryIXOffsetContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRotateRightThroughCarryIXOffset(this);
}

void Z80Parser::RotateRightThroughCarryIXOffsetContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRotateRightThroughCarryIXOffset(this);
}

Z80Parser::RotateRightThroughCarryIXOffsetContext* Z80Parser::rotateRightThroughCarryIXOffset() {
  RotateRightThroughCarryIXOffsetContext *_localctx = _tracker.createInstance<RotateRightThroughCarryIXOffsetContext>(_ctx, getState());
  enterRule(_localctx, 540, Z80Parser::RuleRotateRightThroughCarryIXOffset);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2276);
    rotateRightThroughCarryCommandName();
    setState(2277);
    dynamic_cast<RotateRightThroughCarryIXOffsetContext *>(_localctx)->source = ixPointerWithOffset();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RotateRightThroughCarryIYOffsetContext ------------------------------------------------------------------

Z80Parser::RotateRightThroughCarryIYOffsetContext::RotateRightThroughCarryIYOffsetContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::RotateRightThroughCarryCommandNameContext* Z80Parser::RotateRightThroughCarryIYOffsetContext::rotateRightThroughCarryCommandName() {
  return getRuleContext<Z80Parser::RotateRightThroughCarryCommandNameContext>(0);
}

Z80Parser::IyPointerWithOffsetContext* Z80Parser::RotateRightThroughCarryIYOffsetContext::iyPointerWithOffset() {
  return getRuleContext<Z80Parser::IyPointerWithOffsetContext>(0);
}


size_t Z80Parser::RotateRightThroughCarryIYOffsetContext::getRuleIndex() const {
  return Z80Parser::RuleRotateRightThroughCarryIYOffset;
}

void Z80Parser::RotateRightThroughCarryIYOffsetContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRotateRightThroughCarryIYOffset(this);
}

void Z80Parser::RotateRightThroughCarryIYOffsetContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRotateRightThroughCarryIYOffset(this);
}

Z80Parser::RotateRightThroughCarryIYOffsetContext* Z80Parser::rotateRightThroughCarryIYOffset() {
  RotateRightThroughCarryIYOffsetContext *_localctx = _tracker.createInstance<RotateRightThroughCarryIYOffsetContext>(_ctx, getState());
  enterRule(_localctx, 542, Z80Parser::RuleRotateRightThroughCarryIYOffset);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2279);
    rotateRightThroughCarryCommandName();
    setState(2280);
    dynamic_cast<RotateRightThroughCarryIYOffsetContext *>(_localctx)->source = iyPointerWithOffset();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ShiftLeftArithmeticContext ------------------------------------------------------------------

Z80Parser::ShiftLeftArithmeticContext::ShiftLeftArithmeticContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::ShiftLeftArithmeticCommandNameContext* Z80Parser::ShiftLeftArithmeticContext::shiftLeftArithmeticCommandName() {
  return getRuleContext<Z80Parser::ShiftLeftArithmeticCommandNameContext>(0);
}

Z80Parser::SimpleByteRegisterContext* Z80Parser::ShiftLeftArithmeticContext::simpleByteRegister() {
  return getRuleContext<Z80Parser::SimpleByteRegisterContext>(0);
}


size_t Z80Parser::ShiftLeftArithmeticContext::getRuleIndex() const {
  return Z80Parser::RuleShiftLeftArithmetic;
}

void Z80Parser::ShiftLeftArithmeticContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterShiftLeftArithmetic(this);
}

void Z80Parser::ShiftLeftArithmeticContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitShiftLeftArithmetic(this);
}

Z80Parser::ShiftLeftArithmeticContext* Z80Parser::shiftLeftArithmetic() {
  ShiftLeftArithmeticContext *_localctx = _tracker.createInstance<ShiftLeftArithmeticContext>(_ctx, getState());
  enterRule(_localctx, 544, Z80Parser::RuleShiftLeftArithmetic);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2282);
    shiftLeftArithmeticCommandName();
    setState(2283);
    dynamic_cast<ShiftLeftArithmeticContext *>(_localctx)->source = simpleByteRegister();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ShiftLeftLogicalContext ------------------------------------------------------------------

Z80Parser::ShiftLeftLogicalContext::ShiftLeftLogicalContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::ShiftLeftLogicalCommandNameContext* Z80Parser::ShiftLeftLogicalContext::shiftLeftLogicalCommandName() {
  return getRuleContext<Z80Parser::ShiftLeftLogicalCommandNameContext>(0);
}

Z80Parser::SimpleByteRegisterContext* Z80Parser::ShiftLeftLogicalContext::simpleByteRegister() {
  return getRuleContext<Z80Parser::SimpleByteRegisterContext>(0);
}


size_t Z80Parser::ShiftLeftLogicalContext::getRuleIndex() const {
  return Z80Parser::RuleShiftLeftLogical;
}

void Z80Parser::ShiftLeftLogicalContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterShiftLeftLogical(this);
}

void Z80Parser::ShiftLeftLogicalContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitShiftLeftLogical(this);
}

Z80Parser::ShiftLeftLogicalContext* Z80Parser::shiftLeftLogical() {
  ShiftLeftLogicalContext *_localctx = _tracker.createInstance<ShiftLeftLogicalContext>(_ctx, getState());
  enterRule(_localctx, 546, Z80Parser::RuleShiftLeftLogical);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2285);
    shiftLeftLogicalCommandName();
    setState(2286);
    dynamic_cast<ShiftLeftLogicalContext *>(_localctx)->source = simpleByteRegister();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ShiftRightArithmeticContext ------------------------------------------------------------------

Z80Parser::ShiftRightArithmeticContext::ShiftRightArithmeticContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::ShiftRightArithmeticCommandNameContext* Z80Parser::ShiftRightArithmeticContext::shiftRightArithmeticCommandName() {
  return getRuleContext<Z80Parser::ShiftRightArithmeticCommandNameContext>(0);
}

Z80Parser::SimpleByteRegisterContext* Z80Parser::ShiftRightArithmeticContext::simpleByteRegister() {
  return getRuleContext<Z80Parser::SimpleByteRegisterContext>(0);
}


size_t Z80Parser::ShiftRightArithmeticContext::getRuleIndex() const {
  return Z80Parser::RuleShiftRightArithmetic;
}

void Z80Parser::ShiftRightArithmeticContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterShiftRightArithmetic(this);
}

void Z80Parser::ShiftRightArithmeticContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitShiftRightArithmetic(this);
}

Z80Parser::ShiftRightArithmeticContext* Z80Parser::shiftRightArithmetic() {
  ShiftRightArithmeticContext *_localctx = _tracker.createInstance<ShiftRightArithmeticContext>(_ctx, getState());
  enterRule(_localctx, 548, Z80Parser::RuleShiftRightArithmetic);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2288);
    shiftRightArithmeticCommandName();
    setState(2289);
    dynamic_cast<ShiftRightArithmeticContext *>(_localctx)->source = simpleByteRegister();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ShiftRightLogicalContext ------------------------------------------------------------------

Z80Parser::ShiftRightLogicalContext::ShiftRightLogicalContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::ShiftRightLogicalCommandNameContext* Z80Parser::ShiftRightLogicalContext::shiftRightLogicalCommandName() {
  return getRuleContext<Z80Parser::ShiftRightLogicalCommandNameContext>(0);
}

Z80Parser::SimpleByteRegisterContext* Z80Parser::ShiftRightLogicalContext::simpleByteRegister() {
  return getRuleContext<Z80Parser::SimpleByteRegisterContext>(0);
}


size_t Z80Parser::ShiftRightLogicalContext::getRuleIndex() const {
  return Z80Parser::RuleShiftRightLogical;
}

void Z80Parser::ShiftRightLogicalContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterShiftRightLogical(this);
}

void Z80Parser::ShiftRightLogicalContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitShiftRightLogical(this);
}

Z80Parser::ShiftRightLogicalContext* Z80Parser::shiftRightLogical() {
  ShiftRightLogicalContext *_localctx = _tracker.createInstance<ShiftRightLogicalContext>(_ctx, getState());
  enterRule(_localctx, 550, Z80Parser::RuleShiftRightLogical);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2291);
    shiftRightLogicalCommandName();
    setState(2292);
    dynamic_cast<ShiftRightLogicalContext *>(_localctx)->source = simpleByteRegister();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RotateDigitLeftContext ------------------------------------------------------------------

Z80Parser::RotateDigitLeftContext::RotateDigitLeftContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::RotateDigitLeftCommandNameContext* Z80Parser::RotateDigitLeftContext::rotateDigitLeftCommandName() {
  return getRuleContext<Z80Parser::RotateDigitLeftCommandNameContext>(0);
}


size_t Z80Parser::RotateDigitLeftContext::getRuleIndex() const {
  return Z80Parser::RuleRotateDigitLeft;
}

void Z80Parser::RotateDigitLeftContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRotateDigitLeft(this);
}

void Z80Parser::RotateDigitLeftContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRotateDigitLeft(this);
}

Z80Parser::RotateDigitLeftContext* Z80Parser::rotateDigitLeft() {
  RotateDigitLeftContext *_localctx = _tracker.createInstance<RotateDigitLeftContext>(_ctx, getState());
  enterRule(_localctx, 552, Z80Parser::RuleRotateDigitLeft);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2294);
    rotateDigitLeftCommandName();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RotateDigitRightContext ------------------------------------------------------------------

Z80Parser::RotateDigitRightContext::RotateDigitRightContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::RotateDigitRightCommandNameContext* Z80Parser::RotateDigitRightContext::rotateDigitRightCommandName() {
  return getRuleContext<Z80Parser::RotateDigitRightCommandNameContext>(0);
}


size_t Z80Parser::RotateDigitRightContext::getRuleIndex() const {
  return Z80Parser::RuleRotateDigitRight;
}

void Z80Parser::RotateDigitRightContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRotateDigitRight(this);
}

void Z80Parser::RotateDigitRightContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRotateDigitRight(this);
}

Z80Parser::RotateDigitRightContext* Z80Parser::rotateDigitRight() {
  RotateDigitRightContext *_localctx = _tracker.createInstance<RotateDigitRightContext>(_ctx, getState());
  enterRule(_localctx, 554, Z80Parser::RuleRotateDigitRight);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2296);
    rotateDigitRightCommandName();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RotateCommandContext ------------------------------------------------------------------

Z80Parser::RotateCommandContext::RotateCommandContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::RotateLeftCircularAContext* Z80Parser::RotateCommandContext::rotateLeftCircularA() {
  return getRuleContext<Z80Parser::RotateLeftCircularAContext>(0);
}

Z80Parser::RotateLeftThroughCarryAContext* Z80Parser::RotateCommandContext::rotateLeftThroughCarryA() {
  return getRuleContext<Z80Parser::RotateLeftThroughCarryAContext>(0);
}

Z80Parser::RotateRightCircularAContext* Z80Parser::RotateCommandContext::rotateRightCircularA() {
  return getRuleContext<Z80Parser::RotateRightCircularAContext>(0);
}

Z80Parser::RotateRightThroughCarryAContext* Z80Parser::RotateCommandContext::rotateRightThroughCarryA() {
  return getRuleContext<Z80Parser::RotateRightThroughCarryAContext>(0);
}

Z80Parser::RotateLeftCircularRegisterContext* Z80Parser::RotateCommandContext::rotateLeftCircularRegister() {
  return getRuleContext<Z80Parser::RotateLeftCircularRegisterContext>(0);
}

Z80Parser::RotateLeftCircularHLPointerContext* Z80Parser::RotateCommandContext::rotateLeftCircularHLPointer() {
  return getRuleContext<Z80Parser::RotateLeftCircularHLPointerContext>(0);
}

Z80Parser::RotateLeftCircularIXOffsetContext* Z80Parser::RotateCommandContext::rotateLeftCircularIXOffset() {
  return getRuleContext<Z80Parser::RotateLeftCircularIXOffsetContext>(0);
}

Z80Parser::RotateLeftCircularIYOffsetContext* Z80Parser::RotateCommandContext::rotateLeftCircularIYOffset() {
  return getRuleContext<Z80Parser::RotateLeftCircularIYOffsetContext>(0);
}

Z80Parser::RotateLeftThroughCarryRegisterContext* Z80Parser::RotateCommandContext::rotateLeftThroughCarryRegister() {
  return getRuleContext<Z80Parser::RotateLeftThroughCarryRegisterContext>(0);
}

Z80Parser::RotateLeftThroughCarryHLPointerContext* Z80Parser::RotateCommandContext::rotateLeftThroughCarryHLPointer() {
  return getRuleContext<Z80Parser::RotateLeftThroughCarryHLPointerContext>(0);
}

Z80Parser::RotateLeftThroughCarryIXOffsetContext* Z80Parser::RotateCommandContext::rotateLeftThroughCarryIXOffset() {
  return getRuleContext<Z80Parser::RotateLeftThroughCarryIXOffsetContext>(0);
}

Z80Parser::RotateLeftThroughCarryIYOffsetContext* Z80Parser::RotateCommandContext::rotateLeftThroughCarryIYOffset() {
  return getRuleContext<Z80Parser::RotateLeftThroughCarryIYOffsetContext>(0);
}

Z80Parser::RotateRightCircularRegisterContext* Z80Parser::RotateCommandContext::rotateRightCircularRegister() {
  return getRuleContext<Z80Parser::RotateRightCircularRegisterContext>(0);
}

Z80Parser::RotateRightCircularHLPointerContext* Z80Parser::RotateCommandContext::rotateRightCircularHLPointer() {
  return getRuleContext<Z80Parser::RotateRightCircularHLPointerContext>(0);
}

Z80Parser::RotateRightCircularIXOffsetContext* Z80Parser::RotateCommandContext::rotateRightCircularIXOffset() {
  return getRuleContext<Z80Parser::RotateRightCircularIXOffsetContext>(0);
}

Z80Parser::RotateRightCircularIYOffsetContext* Z80Parser::RotateCommandContext::rotateRightCircularIYOffset() {
  return getRuleContext<Z80Parser::RotateRightCircularIYOffsetContext>(0);
}

Z80Parser::RotateRightThroughCarryRegisterContext* Z80Parser::RotateCommandContext::rotateRightThroughCarryRegister() {
  return getRuleContext<Z80Parser::RotateRightThroughCarryRegisterContext>(0);
}

Z80Parser::RotateRightThroughCarryHLPointerContext* Z80Parser::RotateCommandContext::rotateRightThroughCarryHLPointer() {
  return getRuleContext<Z80Parser::RotateRightThroughCarryHLPointerContext>(0);
}

Z80Parser::RotateRightThroughCarryIXOffsetContext* Z80Parser::RotateCommandContext::rotateRightThroughCarryIXOffset() {
  return getRuleContext<Z80Parser::RotateRightThroughCarryIXOffsetContext>(0);
}

Z80Parser::RotateRightThroughCarryIYOffsetContext* Z80Parser::RotateCommandContext::rotateRightThroughCarryIYOffset() {
  return getRuleContext<Z80Parser::RotateRightThroughCarryIYOffsetContext>(0);
}

Z80Parser::ShiftLeftArithmeticContext* Z80Parser::RotateCommandContext::shiftLeftArithmetic() {
  return getRuleContext<Z80Parser::ShiftLeftArithmeticContext>(0);
}

Z80Parser::ShiftLeftLogicalContext* Z80Parser::RotateCommandContext::shiftLeftLogical() {
  return getRuleContext<Z80Parser::ShiftLeftLogicalContext>(0);
}

Z80Parser::ShiftRightArithmeticContext* Z80Parser::RotateCommandContext::shiftRightArithmetic() {
  return getRuleContext<Z80Parser::ShiftRightArithmeticContext>(0);
}

Z80Parser::ShiftRightLogicalContext* Z80Parser::RotateCommandContext::shiftRightLogical() {
  return getRuleContext<Z80Parser::ShiftRightLogicalContext>(0);
}

Z80Parser::RotateDigitLeftContext* Z80Parser::RotateCommandContext::rotateDigitLeft() {
  return getRuleContext<Z80Parser::RotateDigitLeftContext>(0);
}

Z80Parser::RotateDigitRightContext* Z80Parser::RotateCommandContext::rotateDigitRight() {
  return getRuleContext<Z80Parser::RotateDigitRightContext>(0);
}


size_t Z80Parser::RotateCommandContext::getRuleIndex() const {
  return Z80Parser::RuleRotateCommand;
}

void Z80Parser::RotateCommandContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRotateCommand(this);
}

void Z80Parser::RotateCommandContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRotateCommand(this);
}

Z80Parser::RotateCommandContext* Z80Parser::rotateCommand() {
  RotateCommandContext *_localctx = _tracker.createInstance<RotateCommandContext>(_ctx, getState());
  enterRule(_localctx, 556, Z80Parser::RuleRotateCommand);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2324);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 103, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2298);
      rotateLeftCircularA();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2299);
      rotateLeftThroughCarryA();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(2300);
      rotateRightCircularA();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(2301);
      rotateRightThroughCarryA();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(2302);
      rotateLeftCircularRegister();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(2303);
      rotateLeftCircularHLPointer();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(2304);
      rotateLeftCircularIXOffset();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(2305);
      rotateLeftCircularIYOffset();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(2306);
      rotateLeftThroughCarryRegister();
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(2307);
      rotateLeftThroughCarryHLPointer();
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(2308);
      rotateLeftThroughCarryIXOffset();
      break;
    }

    case 12: {
      enterOuterAlt(_localctx, 12);
      setState(2309);
      rotateLeftThroughCarryIYOffset();
      break;
    }

    case 13: {
      enterOuterAlt(_localctx, 13);
      setState(2310);
      rotateRightCircularRegister();
      break;
    }

    case 14: {
      enterOuterAlt(_localctx, 14);
      setState(2311);
      rotateRightCircularHLPointer();
      break;
    }

    case 15: {
      enterOuterAlt(_localctx, 15);
      setState(2312);
      rotateRightCircularIXOffset();
      break;
    }

    case 16: {
      enterOuterAlt(_localctx, 16);
      setState(2313);
      rotateRightCircularIYOffset();
      break;
    }

    case 17: {
      enterOuterAlt(_localctx, 17);
      setState(2314);
      rotateRightThroughCarryRegister();
      break;
    }

    case 18: {
      enterOuterAlt(_localctx, 18);
      setState(2315);
      rotateRightThroughCarryHLPointer();
      break;
    }

    case 19: {
      enterOuterAlt(_localctx, 19);
      setState(2316);
      rotateRightThroughCarryIXOffset();
      break;
    }

    case 20: {
      enterOuterAlt(_localctx, 20);
      setState(2317);
      rotateRightThroughCarryIYOffset();
      break;
    }

    case 21: {
      enterOuterAlt(_localctx, 21);
      setState(2318);
      shiftLeftArithmetic();
      break;
    }

    case 22: {
      enterOuterAlt(_localctx, 22);
      setState(2319);
      shiftLeftLogical();
      break;
    }

    case 23: {
      enterOuterAlt(_localctx, 23);
      setState(2320);
      shiftRightArithmetic();
      break;
    }

    case 24: {
      enterOuterAlt(_localctx, 24);
      setState(2321);
      shiftRightLogical();
      break;
    }

    case 25: {
      enterOuterAlt(_localctx, 25);
      setState(2322);
      rotateDigitLeft();
      break;
    }

    case 26: {
      enterOuterAlt(_localctx, 26);
      setState(2323);
      rotateDigitRight();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BitCommandNameContext ------------------------------------------------------------------

Z80Parser::BitCommandNameContext::BitCommandNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t Z80Parser::BitCommandNameContext::getRuleIndex() const {
  return Z80Parser::RuleBitCommandName;
}

void Z80Parser::BitCommandNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBitCommandName(this);
}

void Z80Parser::BitCommandNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBitCommandName(this);
}

Z80Parser::BitCommandNameContext* Z80Parser::bitCommandName() {
  BitCommandNameContext *_localctx = _tracker.createInstance<BitCommandNameContext>(_ctx, getState());
  enterRule(_localctx, 558, Z80Parser::RuleBitCommandName);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2326);
    _la = _input->LA(1);
    if (!(_la == Z80Parser::T__166

    || _la == Z80Parser::T__167)) {
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

//----------------- SetCommandNameContext ------------------------------------------------------------------

Z80Parser::SetCommandNameContext::SetCommandNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t Z80Parser::SetCommandNameContext::getRuleIndex() const {
  return Z80Parser::RuleSetCommandName;
}

void Z80Parser::SetCommandNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSetCommandName(this);
}

void Z80Parser::SetCommandNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSetCommandName(this);
}

Z80Parser::SetCommandNameContext* Z80Parser::setCommandName() {
  SetCommandNameContext *_localctx = _tracker.createInstance<SetCommandNameContext>(_ctx, getState());
  enterRule(_localctx, 560, Z80Parser::RuleSetCommandName);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2328);
    _la = _input->LA(1);
    if (!(_la == Z80Parser::T__168

    || _la == Z80Parser::T__169)) {
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

//----------------- ResetBitCommandNameContext ------------------------------------------------------------------

Z80Parser::ResetBitCommandNameContext::ResetBitCommandNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t Z80Parser::ResetBitCommandNameContext::getRuleIndex() const {
  return Z80Parser::RuleResetBitCommandName;
}

void Z80Parser::ResetBitCommandNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterResetBitCommandName(this);
}

void Z80Parser::ResetBitCommandNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitResetBitCommandName(this);
}

Z80Parser::ResetBitCommandNameContext* Z80Parser::resetBitCommandName() {
  ResetBitCommandNameContext *_localctx = _tracker.createInstance<ResetBitCommandNameContext>(_ctx, getState());
  enterRule(_localctx, 562, Z80Parser::RuleResetBitCommandName);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2330);
    _la = _input->LA(1);
    if (!(_la == Z80Parser::T__170

    || _la == Z80Parser::T__171)) {
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

//----------------- TestBitInRegisterContext ------------------------------------------------------------------

Z80Parser::TestBitInRegisterContext::TestBitInRegisterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::BitCommandNameContext* Z80Parser::TestBitInRegisterContext::bitCommandName() {
  return getRuleContext<Z80Parser::BitCommandNameContext>(0);
}

Z80Parser::NumberContext* Z80Parser::TestBitInRegisterContext::number() {
  return getRuleContext<Z80Parser::NumberContext>(0);
}

Z80Parser::SimpleByteRegisterContext* Z80Parser::TestBitInRegisterContext::simpleByteRegister() {
  return getRuleContext<Z80Parser::SimpleByteRegisterContext>(0);
}


size_t Z80Parser::TestBitInRegisterContext::getRuleIndex() const {
  return Z80Parser::RuleTestBitInRegister;
}

void Z80Parser::TestBitInRegisterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTestBitInRegister(this);
}

void Z80Parser::TestBitInRegisterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTestBitInRegister(this);
}

Z80Parser::TestBitInRegisterContext* Z80Parser::testBitInRegister() {
  TestBitInRegisterContext *_localctx = _tracker.createInstance<TestBitInRegisterContext>(_ctx, getState());
  enterRule(_localctx, 564, Z80Parser::RuleTestBitInRegister);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2332);
    bitCommandName();
    setState(2333);
    dynamic_cast<TestBitInRegisterContext *>(_localctx)->bit = number();
    setState(2334);
    match(Z80Parser::T__73);
    setState(2335);
    dynamic_cast<TestBitInRegisterContext *>(_localctx)->source = simpleByteRegister();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TestBitInHLPointerContext ------------------------------------------------------------------

Z80Parser::TestBitInHLPointerContext::TestBitInHLPointerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::BitCommandNameContext* Z80Parser::TestBitInHLPointerContext::bitCommandName() {
  return getRuleContext<Z80Parser::BitCommandNameContext>(0);
}

Z80Parser::NumberContext* Z80Parser::TestBitInHLPointerContext::number() {
  return getRuleContext<Z80Parser::NumberContext>(0);
}

Z80Parser::HlPointerContext* Z80Parser::TestBitInHLPointerContext::hlPointer() {
  return getRuleContext<Z80Parser::HlPointerContext>(0);
}


size_t Z80Parser::TestBitInHLPointerContext::getRuleIndex() const {
  return Z80Parser::RuleTestBitInHLPointer;
}

void Z80Parser::TestBitInHLPointerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTestBitInHLPointer(this);
}

void Z80Parser::TestBitInHLPointerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTestBitInHLPointer(this);
}

Z80Parser::TestBitInHLPointerContext* Z80Parser::testBitInHLPointer() {
  TestBitInHLPointerContext *_localctx = _tracker.createInstance<TestBitInHLPointerContext>(_ctx, getState());
  enterRule(_localctx, 566, Z80Parser::RuleTestBitInHLPointer);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2337);
    bitCommandName();
    setState(2338);
    dynamic_cast<TestBitInHLPointerContext *>(_localctx)->bit = number();
    setState(2339);
    match(Z80Parser::T__73);
    setState(2340);
    dynamic_cast<TestBitInHLPointerContext *>(_localctx)->source = hlPointer();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TestBitInIXOffsetContext ------------------------------------------------------------------

Z80Parser::TestBitInIXOffsetContext::TestBitInIXOffsetContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::BitCommandNameContext* Z80Parser::TestBitInIXOffsetContext::bitCommandName() {
  return getRuleContext<Z80Parser::BitCommandNameContext>(0);
}

Z80Parser::NumberContext* Z80Parser::TestBitInIXOffsetContext::number() {
  return getRuleContext<Z80Parser::NumberContext>(0);
}

Z80Parser::IxPointerWithOffsetContext* Z80Parser::TestBitInIXOffsetContext::ixPointerWithOffset() {
  return getRuleContext<Z80Parser::IxPointerWithOffsetContext>(0);
}


size_t Z80Parser::TestBitInIXOffsetContext::getRuleIndex() const {
  return Z80Parser::RuleTestBitInIXOffset;
}

void Z80Parser::TestBitInIXOffsetContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTestBitInIXOffset(this);
}

void Z80Parser::TestBitInIXOffsetContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTestBitInIXOffset(this);
}

Z80Parser::TestBitInIXOffsetContext* Z80Parser::testBitInIXOffset() {
  TestBitInIXOffsetContext *_localctx = _tracker.createInstance<TestBitInIXOffsetContext>(_ctx, getState());
  enterRule(_localctx, 568, Z80Parser::RuleTestBitInIXOffset);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2342);
    bitCommandName();
    setState(2343);
    dynamic_cast<TestBitInIXOffsetContext *>(_localctx)->bit = number();
    setState(2344);
    match(Z80Parser::T__73);
    setState(2345);
    dynamic_cast<TestBitInIXOffsetContext *>(_localctx)->source = ixPointerWithOffset();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TestBitInIYOffsetContext ------------------------------------------------------------------

Z80Parser::TestBitInIYOffsetContext::TestBitInIYOffsetContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::BitCommandNameContext* Z80Parser::TestBitInIYOffsetContext::bitCommandName() {
  return getRuleContext<Z80Parser::BitCommandNameContext>(0);
}

Z80Parser::NumberContext* Z80Parser::TestBitInIYOffsetContext::number() {
  return getRuleContext<Z80Parser::NumberContext>(0);
}

Z80Parser::IyPointerWithOffsetContext* Z80Parser::TestBitInIYOffsetContext::iyPointerWithOffset() {
  return getRuleContext<Z80Parser::IyPointerWithOffsetContext>(0);
}


size_t Z80Parser::TestBitInIYOffsetContext::getRuleIndex() const {
  return Z80Parser::RuleTestBitInIYOffset;
}

void Z80Parser::TestBitInIYOffsetContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTestBitInIYOffset(this);
}

void Z80Parser::TestBitInIYOffsetContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTestBitInIYOffset(this);
}

Z80Parser::TestBitInIYOffsetContext* Z80Parser::testBitInIYOffset() {
  TestBitInIYOffsetContext *_localctx = _tracker.createInstance<TestBitInIYOffsetContext>(_ctx, getState());
  enterRule(_localctx, 570, Z80Parser::RuleTestBitInIYOffset);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2347);
    bitCommandName();
    setState(2348);
    dynamic_cast<TestBitInIYOffsetContext *>(_localctx)->bit = number();
    setState(2349);
    match(Z80Parser::T__73);
    setState(2350);
    dynamic_cast<TestBitInIYOffsetContext *>(_localctx)->source = iyPointerWithOffset();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SetBitInRegisterContext ------------------------------------------------------------------

Z80Parser::SetBitInRegisterContext::SetBitInRegisterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::SetCommandNameContext* Z80Parser::SetBitInRegisterContext::setCommandName() {
  return getRuleContext<Z80Parser::SetCommandNameContext>(0);
}

Z80Parser::NumberContext* Z80Parser::SetBitInRegisterContext::number() {
  return getRuleContext<Z80Parser::NumberContext>(0);
}

Z80Parser::SimpleByteRegisterContext* Z80Parser::SetBitInRegisterContext::simpleByteRegister() {
  return getRuleContext<Z80Parser::SimpleByteRegisterContext>(0);
}


size_t Z80Parser::SetBitInRegisterContext::getRuleIndex() const {
  return Z80Parser::RuleSetBitInRegister;
}

void Z80Parser::SetBitInRegisterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSetBitInRegister(this);
}

void Z80Parser::SetBitInRegisterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSetBitInRegister(this);
}

Z80Parser::SetBitInRegisterContext* Z80Parser::setBitInRegister() {
  SetBitInRegisterContext *_localctx = _tracker.createInstance<SetBitInRegisterContext>(_ctx, getState());
  enterRule(_localctx, 572, Z80Parser::RuleSetBitInRegister);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2352);
    setCommandName();
    setState(2353);
    dynamic_cast<SetBitInRegisterContext *>(_localctx)->bit = number();
    setState(2354);
    match(Z80Parser::T__73);
    setState(2355);
    dynamic_cast<SetBitInRegisterContext *>(_localctx)->source = simpleByteRegister();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SetBitInHLPointerContext ------------------------------------------------------------------

Z80Parser::SetBitInHLPointerContext::SetBitInHLPointerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::SetCommandNameContext* Z80Parser::SetBitInHLPointerContext::setCommandName() {
  return getRuleContext<Z80Parser::SetCommandNameContext>(0);
}

Z80Parser::NumberContext* Z80Parser::SetBitInHLPointerContext::number() {
  return getRuleContext<Z80Parser::NumberContext>(0);
}

Z80Parser::HlPointerContext* Z80Parser::SetBitInHLPointerContext::hlPointer() {
  return getRuleContext<Z80Parser::HlPointerContext>(0);
}


size_t Z80Parser::SetBitInHLPointerContext::getRuleIndex() const {
  return Z80Parser::RuleSetBitInHLPointer;
}

void Z80Parser::SetBitInHLPointerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSetBitInHLPointer(this);
}

void Z80Parser::SetBitInHLPointerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSetBitInHLPointer(this);
}

Z80Parser::SetBitInHLPointerContext* Z80Parser::setBitInHLPointer() {
  SetBitInHLPointerContext *_localctx = _tracker.createInstance<SetBitInHLPointerContext>(_ctx, getState());
  enterRule(_localctx, 574, Z80Parser::RuleSetBitInHLPointer);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2357);
    setCommandName();
    setState(2358);
    dynamic_cast<SetBitInHLPointerContext *>(_localctx)->bit = number();
    setState(2359);
    match(Z80Parser::T__73);
    setState(2360);
    dynamic_cast<SetBitInHLPointerContext *>(_localctx)->source = hlPointer();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SetBitInIXOffsetContext ------------------------------------------------------------------

Z80Parser::SetBitInIXOffsetContext::SetBitInIXOffsetContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::SetCommandNameContext* Z80Parser::SetBitInIXOffsetContext::setCommandName() {
  return getRuleContext<Z80Parser::SetCommandNameContext>(0);
}

Z80Parser::NumberContext* Z80Parser::SetBitInIXOffsetContext::number() {
  return getRuleContext<Z80Parser::NumberContext>(0);
}

Z80Parser::IxPointerWithOffsetContext* Z80Parser::SetBitInIXOffsetContext::ixPointerWithOffset() {
  return getRuleContext<Z80Parser::IxPointerWithOffsetContext>(0);
}


size_t Z80Parser::SetBitInIXOffsetContext::getRuleIndex() const {
  return Z80Parser::RuleSetBitInIXOffset;
}

void Z80Parser::SetBitInIXOffsetContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSetBitInIXOffset(this);
}

void Z80Parser::SetBitInIXOffsetContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSetBitInIXOffset(this);
}

Z80Parser::SetBitInIXOffsetContext* Z80Parser::setBitInIXOffset() {
  SetBitInIXOffsetContext *_localctx = _tracker.createInstance<SetBitInIXOffsetContext>(_ctx, getState());
  enterRule(_localctx, 576, Z80Parser::RuleSetBitInIXOffset);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2362);
    setCommandName();
    setState(2363);
    dynamic_cast<SetBitInIXOffsetContext *>(_localctx)->bit = number();
    setState(2364);
    match(Z80Parser::T__73);
    setState(2365);
    dynamic_cast<SetBitInIXOffsetContext *>(_localctx)->source = ixPointerWithOffset();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SetBitInIYOffsetContext ------------------------------------------------------------------

Z80Parser::SetBitInIYOffsetContext::SetBitInIYOffsetContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::SetCommandNameContext* Z80Parser::SetBitInIYOffsetContext::setCommandName() {
  return getRuleContext<Z80Parser::SetCommandNameContext>(0);
}

Z80Parser::NumberContext* Z80Parser::SetBitInIYOffsetContext::number() {
  return getRuleContext<Z80Parser::NumberContext>(0);
}

Z80Parser::IyPointerWithOffsetContext* Z80Parser::SetBitInIYOffsetContext::iyPointerWithOffset() {
  return getRuleContext<Z80Parser::IyPointerWithOffsetContext>(0);
}


size_t Z80Parser::SetBitInIYOffsetContext::getRuleIndex() const {
  return Z80Parser::RuleSetBitInIYOffset;
}

void Z80Parser::SetBitInIYOffsetContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSetBitInIYOffset(this);
}

void Z80Parser::SetBitInIYOffsetContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSetBitInIYOffset(this);
}

Z80Parser::SetBitInIYOffsetContext* Z80Parser::setBitInIYOffset() {
  SetBitInIYOffsetContext *_localctx = _tracker.createInstance<SetBitInIYOffsetContext>(_ctx, getState());
  enterRule(_localctx, 578, Z80Parser::RuleSetBitInIYOffset);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2367);
    setCommandName();
    setState(2368);
    dynamic_cast<SetBitInIYOffsetContext *>(_localctx)->bit = number();
    setState(2369);
    match(Z80Parser::T__73);
    setState(2370);
    dynamic_cast<SetBitInIYOffsetContext *>(_localctx)->source = iyPointerWithOffset();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ResetBitInRegisterContext ------------------------------------------------------------------

Z80Parser::ResetBitInRegisterContext::ResetBitInRegisterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::ResetBitCommandNameContext* Z80Parser::ResetBitInRegisterContext::resetBitCommandName() {
  return getRuleContext<Z80Parser::ResetBitCommandNameContext>(0);
}

Z80Parser::NumberContext* Z80Parser::ResetBitInRegisterContext::number() {
  return getRuleContext<Z80Parser::NumberContext>(0);
}

Z80Parser::SimpleByteRegisterContext* Z80Parser::ResetBitInRegisterContext::simpleByteRegister() {
  return getRuleContext<Z80Parser::SimpleByteRegisterContext>(0);
}


size_t Z80Parser::ResetBitInRegisterContext::getRuleIndex() const {
  return Z80Parser::RuleResetBitInRegister;
}

void Z80Parser::ResetBitInRegisterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterResetBitInRegister(this);
}

void Z80Parser::ResetBitInRegisterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitResetBitInRegister(this);
}

Z80Parser::ResetBitInRegisterContext* Z80Parser::resetBitInRegister() {
  ResetBitInRegisterContext *_localctx = _tracker.createInstance<ResetBitInRegisterContext>(_ctx, getState());
  enterRule(_localctx, 580, Z80Parser::RuleResetBitInRegister);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2372);
    resetBitCommandName();
    setState(2373);
    dynamic_cast<ResetBitInRegisterContext *>(_localctx)->bit = number();
    setState(2374);
    match(Z80Parser::T__73);
    setState(2375);
    dynamic_cast<ResetBitInRegisterContext *>(_localctx)->source = simpleByteRegister();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ResetBitHLPointerContext ------------------------------------------------------------------

Z80Parser::ResetBitHLPointerContext::ResetBitHLPointerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::ResetBitCommandNameContext* Z80Parser::ResetBitHLPointerContext::resetBitCommandName() {
  return getRuleContext<Z80Parser::ResetBitCommandNameContext>(0);
}

Z80Parser::NumberContext* Z80Parser::ResetBitHLPointerContext::number() {
  return getRuleContext<Z80Parser::NumberContext>(0);
}

Z80Parser::HlPointerContext* Z80Parser::ResetBitHLPointerContext::hlPointer() {
  return getRuleContext<Z80Parser::HlPointerContext>(0);
}


size_t Z80Parser::ResetBitHLPointerContext::getRuleIndex() const {
  return Z80Parser::RuleResetBitHLPointer;
}

void Z80Parser::ResetBitHLPointerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterResetBitHLPointer(this);
}

void Z80Parser::ResetBitHLPointerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitResetBitHLPointer(this);
}

Z80Parser::ResetBitHLPointerContext* Z80Parser::resetBitHLPointer() {
  ResetBitHLPointerContext *_localctx = _tracker.createInstance<ResetBitHLPointerContext>(_ctx, getState());
  enterRule(_localctx, 582, Z80Parser::RuleResetBitHLPointer);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2377);
    resetBitCommandName();
    setState(2378);
    dynamic_cast<ResetBitHLPointerContext *>(_localctx)->bit = number();
    setState(2379);
    match(Z80Parser::T__73);
    setState(2380);
    dynamic_cast<ResetBitHLPointerContext *>(_localctx)->source = hlPointer();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ResetBitIXOffsetContext ------------------------------------------------------------------

Z80Parser::ResetBitIXOffsetContext::ResetBitIXOffsetContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::ResetBitCommandNameContext* Z80Parser::ResetBitIXOffsetContext::resetBitCommandName() {
  return getRuleContext<Z80Parser::ResetBitCommandNameContext>(0);
}

Z80Parser::NumberContext* Z80Parser::ResetBitIXOffsetContext::number() {
  return getRuleContext<Z80Parser::NumberContext>(0);
}

Z80Parser::IxPointerWithOffsetContext* Z80Parser::ResetBitIXOffsetContext::ixPointerWithOffset() {
  return getRuleContext<Z80Parser::IxPointerWithOffsetContext>(0);
}


size_t Z80Parser::ResetBitIXOffsetContext::getRuleIndex() const {
  return Z80Parser::RuleResetBitIXOffset;
}

void Z80Parser::ResetBitIXOffsetContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterResetBitIXOffset(this);
}

void Z80Parser::ResetBitIXOffsetContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitResetBitIXOffset(this);
}

Z80Parser::ResetBitIXOffsetContext* Z80Parser::resetBitIXOffset() {
  ResetBitIXOffsetContext *_localctx = _tracker.createInstance<ResetBitIXOffsetContext>(_ctx, getState());
  enterRule(_localctx, 584, Z80Parser::RuleResetBitIXOffset);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2382);
    resetBitCommandName();
    setState(2383);
    dynamic_cast<ResetBitIXOffsetContext *>(_localctx)->bit = number();
    setState(2384);
    match(Z80Parser::T__73);
    setState(2385);
    dynamic_cast<ResetBitIXOffsetContext *>(_localctx)->source = ixPointerWithOffset();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ResetBitIYOffsetContext ------------------------------------------------------------------

Z80Parser::ResetBitIYOffsetContext::ResetBitIYOffsetContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::ResetBitCommandNameContext* Z80Parser::ResetBitIYOffsetContext::resetBitCommandName() {
  return getRuleContext<Z80Parser::ResetBitCommandNameContext>(0);
}

Z80Parser::NumberContext* Z80Parser::ResetBitIYOffsetContext::number() {
  return getRuleContext<Z80Parser::NumberContext>(0);
}

Z80Parser::IyPointerWithOffsetContext* Z80Parser::ResetBitIYOffsetContext::iyPointerWithOffset() {
  return getRuleContext<Z80Parser::IyPointerWithOffsetContext>(0);
}


size_t Z80Parser::ResetBitIYOffsetContext::getRuleIndex() const {
  return Z80Parser::RuleResetBitIYOffset;
}

void Z80Parser::ResetBitIYOffsetContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterResetBitIYOffset(this);
}

void Z80Parser::ResetBitIYOffsetContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitResetBitIYOffset(this);
}

Z80Parser::ResetBitIYOffsetContext* Z80Parser::resetBitIYOffset() {
  ResetBitIYOffsetContext *_localctx = _tracker.createInstance<ResetBitIYOffsetContext>(_ctx, getState());
  enterRule(_localctx, 586, Z80Parser::RuleResetBitIYOffset);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2387);
    resetBitCommandName();
    setState(2388);
    dynamic_cast<ResetBitIYOffsetContext *>(_localctx)->bit = number();
    setState(2389);
    match(Z80Parser::T__73);
    setState(2390);
    dynamic_cast<ResetBitIYOffsetContext *>(_localctx)->source = iyPointerWithOffset();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BitManipulationCommandContext ------------------------------------------------------------------

Z80Parser::BitManipulationCommandContext::BitManipulationCommandContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::TestBitInRegisterContext* Z80Parser::BitManipulationCommandContext::testBitInRegister() {
  return getRuleContext<Z80Parser::TestBitInRegisterContext>(0);
}

Z80Parser::TestBitInHLPointerContext* Z80Parser::BitManipulationCommandContext::testBitInHLPointer() {
  return getRuleContext<Z80Parser::TestBitInHLPointerContext>(0);
}

Z80Parser::TestBitInIXOffsetContext* Z80Parser::BitManipulationCommandContext::testBitInIXOffset() {
  return getRuleContext<Z80Parser::TestBitInIXOffsetContext>(0);
}

Z80Parser::TestBitInIYOffsetContext* Z80Parser::BitManipulationCommandContext::testBitInIYOffset() {
  return getRuleContext<Z80Parser::TestBitInIYOffsetContext>(0);
}

Z80Parser::SetBitInRegisterContext* Z80Parser::BitManipulationCommandContext::setBitInRegister() {
  return getRuleContext<Z80Parser::SetBitInRegisterContext>(0);
}

Z80Parser::SetBitInHLPointerContext* Z80Parser::BitManipulationCommandContext::setBitInHLPointer() {
  return getRuleContext<Z80Parser::SetBitInHLPointerContext>(0);
}

Z80Parser::SetBitInIXOffsetContext* Z80Parser::BitManipulationCommandContext::setBitInIXOffset() {
  return getRuleContext<Z80Parser::SetBitInIXOffsetContext>(0);
}

Z80Parser::SetBitInIYOffsetContext* Z80Parser::BitManipulationCommandContext::setBitInIYOffset() {
  return getRuleContext<Z80Parser::SetBitInIYOffsetContext>(0);
}

Z80Parser::ResetBitInRegisterContext* Z80Parser::BitManipulationCommandContext::resetBitInRegister() {
  return getRuleContext<Z80Parser::ResetBitInRegisterContext>(0);
}

Z80Parser::ResetBitHLPointerContext* Z80Parser::BitManipulationCommandContext::resetBitHLPointer() {
  return getRuleContext<Z80Parser::ResetBitHLPointerContext>(0);
}

Z80Parser::ResetBitIXOffsetContext* Z80Parser::BitManipulationCommandContext::resetBitIXOffset() {
  return getRuleContext<Z80Parser::ResetBitIXOffsetContext>(0);
}

Z80Parser::ResetBitIYOffsetContext* Z80Parser::BitManipulationCommandContext::resetBitIYOffset() {
  return getRuleContext<Z80Parser::ResetBitIYOffsetContext>(0);
}


size_t Z80Parser::BitManipulationCommandContext::getRuleIndex() const {
  return Z80Parser::RuleBitManipulationCommand;
}

void Z80Parser::BitManipulationCommandContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBitManipulationCommand(this);
}

void Z80Parser::BitManipulationCommandContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBitManipulationCommand(this);
}

Z80Parser::BitManipulationCommandContext* Z80Parser::bitManipulationCommand() {
  BitManipulationCommandContext *_localctx = _tracker.createInstance<BitManipulationCommandContext>(_ctx, getState());
  enterRule(_localctx, 588, Z80Parser::RuleBitManipulationCommand);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2404);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 104, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2392);
      testBitInRegister();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2393);
      testBitInHLPointer();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(2394);
      testBitInIXOffset();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(2395);
      testBitInIYOffset();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(2396);
      setBitInRegister();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(2397);
      setBitInHLPointer();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(2398);
      setBitInIXOffset();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(2399);
      setBitInIYOffset();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(2400);
      resetBitInRegister();
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(2401);
      resetBitHLPointer();
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(2402);
      resetBitIXOffset();
      break;
    }

    case 12: {
      enterOuterAlt(_localctx, 12);
      setState(2403);
      resetBitIYOffset();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- JumpConditionContext ------------------------------------------------------------------

Z80Parser::JumpConditionContext::JumpConditionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t Z80Parser::JumpConditionContext::getRuleIndex() const {
  return Z80Parser::RuleJumpCondition;
}

void Z80Parser::JumpConditionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterJumpCondition(this);
}

void Z80Parser::JumpConditionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitJumpCondition(this);
}

Z80Parser::JumpConditionContext* Z80Parser::jumpCondition() {
  JumpConditionContext *_localctx = _tracker.createInstance<JumpConditionContext>(_ctx, getState());
  enterRule(_localctx, 590, Z80Parser::RuleJumpCondition);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2414);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Z80Parser::T__172:
      case Z80Parser::T__173: {
        enterOuterAlt(_localctx, 1);
        setState(2406);
        dynamic_cast<JumpConditionContext *>(_localctx)->zero = _input->LT(1);
        _la = _input->LA(1);
        if (!(_la == Z80Parser::T__172

        || _la == Z80Parser::T__173)) {
          dynamic_cast<JumpConditionContext *>(_localctx)->zero = _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        break;
      }

      case Z80Parser::T__174:
      case Z80Parser::T__175: {
        enterOuterAlt(_localctx, 2);
        setState(2407);
        dynamic_cast<JumpConditionContext *>(_localctx)->notZero = _input->LT(1);
        _la = _input->LA(1);
        if (!(_la == Z80Parser::T__174

        || _la == Z80Parser::T__175)) {
          dynamic_cast<JumpConditionContext *>(_localctx)->notZero = _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        break;
      }

      case Z80Parser::T__32:
      case Z80Parser::T__33: {
        enterOuterAlt(_localctx, 3);
        setState(2408);
        dynamic_cast<JumpConditionContext *>(_localctx)->carry = _input->LT(1);
        _la = _input->LA(1);
        if (!(_la == Z80Parser::T__32

        || _la == Z80Parser::T__33)) {
          dynamic_cast<JumpConditionContext *>(_localctx)->carry = _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        break;
      }

      case Z80Parser::T__176:
      case Z80Parser::T__177: {
        enterOuterAlt(_localctx, 4);
        setState(2409);
        dynamic_cast<JumpConditionContext *>(_localctx)->notCarry = _input->LT(1);
        _la = _input->LA(1);
        if (!(_la == Z80Parser::T__176

        || _la == Z80Parser::T__177)) {
          dynamic_cast<JumpConditionContext *>(_localctx)->notCarry = _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        break;
      }

      case Z80Parser::T__178:
      case Z80Parser::T__179: {
        enterOuterAlt(_localctx, 5);
        setState(2410);
        dynamic_cast<JumpConditionContext *>(_localctx)->parityOdd = _input->LT(1);
        _la = _input->LA(1);
        if (!(_la == Z80Parser::T__178

        || _la == Z80Parser::T__179)) {
          dynamic_cast<JumpConditionContext *>(_localctx)->parityOdd = _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        break;
      }

      case Z80Parser::T__180:
      case Z80Parser::T__181: {
        enterOuterAlt(_localctx, 6);
        setState(2411);
        dynamic_cast<JumpConditionContext *>(_localctx)->parityEven = _input->LT(1);
        _la = _input->LA(1);
        if (!(_la == Z80Parser::T__180

        || _la == Z80Parser::T__181)) {
          dynamic_cast<JumpConditionContext *>(_localctx)->parityEven = _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        break;
      }

      case Z80Parser::T__182:
      case Z80Parser::T__183: {
        enterOuterAlt(_localctx, 7);
        setState(2412);
        dynamic_cast<JumpConditionContext *>(_localctx)->positive = _input->LT(1);
        _la = _input->LA(1);
        if (!(_la == Z80Parser::T__182

        || _la == Z80Parser::T__183)) {
          dynamic_cast<JumpConditionContext *>(_localctx)->positive = _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        break;
      }

      case Z80Parser::T__184:
      case Z80Parser::T__185: {
        enterOuterAlt(_localctx, 8);
        setState(2413);
        dynamic_cast<JumpConditionContext *>(_localctx)->negative = _input->LT(1);
        _la = _input->LA(1);
        if (!(_la == Z80Parser::T__184

        || _la == Z80Parser::T__185)) {
          dynamic_cast<JumpConditionContext *>(_localctx)->negative = _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
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

//----------------- JumpCommandNameContext ------------------------------------------------------------------

Z80Parser::JumpCommandNameContext::JumpCommandNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t Z80Parser::JumpCommandNameContext::getRuleIndex() const {
  return Z80Parser::RuleJumpCommandName;
}

void Z80Parser::JumpCommandNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterJumpCommandName(this);
}

void Z80Parser::JumpCommandNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitJumpCommandName(this);
}

Z80Parser::JumpCommandNameContext* Z80Parser::jumpCommandName() {
  JumpCommandNameContext *_localctx = _tracker.createInstance<JumpCommandNameContext>(_ctx, getState());
  enterRule(_localctx, 592, Z80Parser::RuleJumpCommandName);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2416);
    _la = _input->LA(1);
    if (!(_la == Z80Parser::T__186

    || _la == Z80Parser::T__187)) {
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

//----------------- JumpRelativeCommandNameContext ------------------------------------------------------------------

Z80Parser::JumpRelativeCommandNameContext::JumpRelativeCommandNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t Z80Parser::JumpRelativeCommandNameContext::getRuleIndex() const {
  return Z80Parser::RuleJumpRelativeCommandName;
}

void Z80Parser::JumpRelativeCommandNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterJumpRelativeCommandName(this);
}

void Z80Parser::JumpRelativeCommandNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitJumpRelativeCommandName(this);
}

Z80Parser::JumpRelativeCommandNameContext* Z80Parser::jumpRelativeCommandName() {
  JumpRelativeCommandNameContext *_localctx = _tracker.createInstance<JumpRelativeCommandNameContext>(_ctx, getState());
  enterRule(_localctx, 594, Z80Parser::RuleJumpRelativeCommandName);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2418);
    _la = _input->LA(1);
    if (!(_la == Z80Parser::T__188

    || _la == Z80Parser::T__189)) {
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

//----------------- JumpRelativeAndDecrementCommandNameContext ------------------------------------------------------------------

Z80Parser::JumpRelativeAndDecrementCommandNameContext::JumpRelativeAndDecrementCommandNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t Z80Parser::JumpRelativeAndDecrementCommandNameContext::getRuleIndex() const {
  return Z80Parser::RuleJumpRelativeAndDecrementCommandName;
}

void Z80Parser::JumpRelativeAndDecrementCommandNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterJumpRelativeAndDecrementCommandName(this);
}

void Z80Parser::JumpRelativeAndDecrementCommandNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitJumpRelativeAndDecrementCommandName(this);
}

Z80Parser::JumpRelativeAndDecrementCommandNameContext* Z80Parser::jumpRelativeAndDecrementCommandName() {
  JumpRelativeAndDecrementCommandNameContext *_localctx = _tracker.createInstance<JumpRelativeAndDecrementCommandNameContext>(_ctx, getState());
  enterRule(_localctx, 596, Z80Parser::RuleJumpRelativeAndDecrementCommandName);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2420);
    _la = _input->LA(1);
    if (!(_la == Z80Parser::T__190

    || _la == Z80Parser::T__191)) {
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

//----------------- CallCommandNameContext ------------------------------------------------------------------

Z80Parser::CallCommandNameContext::CallCommandNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t Z80Parser::CallCommandNameContext::getRuleIndex() const {
  return Z80Parser::RuleCallCommandName;
}

void Z80Parser::CallCommandNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCallCommandName(this);
}

void Z80Parser::CallCommandNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCallCommandName(this);
}

Z80Parser::CallCommandNameContext* Z80Parser::callCommandName() {
  CallCommandNameContext *_localctx = _tracker.createInstance<CallCommandNameContext>(_ctx, getState());
  enterRule(_localctx, 598, Z80Parser::RuleCallCommandName);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2422);
    _la = _input->LA(1);
    if (!(_la == Z80Parser::T__192

    || _la == Z80Parser::T__193)) {
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

//----------------- ReturnCommandNameContext ------------------------------------------------------------------

Z80Parser::ReturnCommandNameContext::ReturnCommandNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t Z80Parser::ReturnCommandNameContext::getRuleIndex() const {
  return Z80Parser::RuleReturnCommandName;
}

void Z80Parser::ReturnCommandNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReturnCommandName(this);
}

void Z80Parser::ReturnCommandNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReturnCommandName(this);
}

Z80Parser::ReturnCommandNameContext* Z80Parser::returnCommandName() {
  ReturnCommandNameContext *_localctx = _tracker.createInstance<ReturnCommandNameContext>(_ctx, getState());
  enterRule(_localctx, 600, Z80Parser::RuleReturnCommandName);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2424);
    _la = _input->LA(1);
    if (!(_la == Z80Parser::T__194

    || _la == Z80Parser::T__195)) {
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

//----------------- ReturnAndEnableInterruptCommandNameContext ------------------------------------------------------------------

Z80Parser::ReturnAndEnableInterruptCommandNameContext::ReturnAndEnableInterruptCommandNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t Z80Parser::ReturnAndEnableInterruptCommandNameContext::getRuleIndex() const {
  return Z80Parser::RuleReturnAndEnableInterruptCommandName;
}

void Z80Parser::ReturnAndEnableInterruptCommandNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReturnAndEnableInterruptCommandName(this);
}

void Z80Parser::ReturnAndEnableInterruptCommandNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReturnAndEnableInterruptCommandName(this);
}

Z80Parser::ReturnAndEnableInterruptCommandNameContext* Z80Parser::returnAndEnableInterruptCommandName() {
  ReturnAndEnableInterruptCommandNameContext *_localctx = _tracker.createInstance<ReturnAndEnableInterruptCommandNameContext>(_ctx, getState());
  enterRule(_localctx, 602, Z80Parser::RuleReturnAndEnableInterruptCommandName);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2426);
    _la = _input->LA(1);
    if (!(_la == Z80Parser::T__196

    || _la == Z80Parser::T__197)) {
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

//----------------- ReturnFromNonMaskableInterruptCommandNameContext ------------------------------------------------------------------

Z80Parser::ReturnFromNonMaskableInterruptCommandNameContext::ReturnFromNonMaskableInterruptCommandNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t Z80Parser::ReturnFromNonMaskableInterruptCommandNameContext::getRuleIndex() const {
  return Z80Parser::RuleReturnFromNonMaskableInterruptCommandName;
}

void Z80Parser::ReturnFromNonMaskableInterruptCommandNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReturnFromNonMaskableInterruptCommandName(this);
}

void Z80Parser::ReturnFromNonMaskableInterruptCommandNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReturnFromNonMaskableInterruptCommandName(this);
}

Z80Parser::ReturnFromNonMaskableInterruptCommandNameContext* Z80Parser::returnFromNonMaskableInterruptCommandName() {
  ReturnFromNonMaskableInterruptCommandNameContext *_localctx = _tracker.createInstance<ReturnFromNonMaskableInterruptCommandNameContext>(_ctx, getState());
  enterRule(_localctx, 604, Z80Parser::RuleReturnFromNonMaskableInterruptCommandName);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2428);
    _la = _input->LA(1);
    if (!(_la == Z80Parser::T__198

    || _la == Z80Parser::T__199)) {
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

//----------------- RestartCommandNameContext ------------------------------------------------------------------

Z80Parser::RestartCommandNameContext::RestartCommandNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t Z80Parser::RestartCommandNameContext::getRuleIndex() const {
  return Z80Parser::RuleRestartCommandName;
}

void Z80Parser::RestartCommandNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRestartCommandName(this);
}

void Z80Parser::RestartCommandNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRestartCommandName(this);
}

Z80Parser::RestartCommandNameContext* Z80Parser::restartCommandName() {
  RestartCommandNameContext *_localctx = _tracker.createInstance<RestartCommandNameContext>(_ctx, getState());
  enterRule(_localctx, 606, Z80Parser::RuleRestartCommandName);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2430);
    _la = _input->LA(1);
    if (!(_la == Z80Parser::T__200

    || _la == Z80Parser::T__201)) {
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

//----------------- JumpToAbsoluteAddressContext ------------------------------------------------------------------

Z80Parser::JumpToAbsoluteAddressContext::JumpToAbsoluteAddressContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::JumpCommandNameContext* Z80Parser::JumpToAbsoluteAddressContext::jumpCommandName() {
  return getRuleContext<Z80Parser::JumpCommandNameContext>(0);
}

Z80Parser::NumberContext* Z80Parser::JumpToAbsoluteAddressContext::number() {
  return getRuleContext<Z80Parser::NumberContext>(0);
}


size_t Z80Parser::JumpToAbsoluteAddressContext::getRuleIndex() const {
  return Z80Parser::RuleJumpToAbsoluteAddress;
}

void Z80Parser::JumpToAbsoluteAddressContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterJumpToAbsoluteAddress(this);
}

void Z80Parser::JumpToAbsoluteAddressContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitJumpToAbsoluteAddress(this);
}

Z80Parser::JumpToAbsoluteAddressContext* Z80Parser::jumpToAbsoluteAddress() {
  JumpToAbsoluteAddressContext *_localctx = _tracker.createInstance<JumpToAbsoluteAddressContext>(_ctx, getState());
  enterRule(_localctx, 608, Z80Parser::RuleJumpToAbsoluteAddress);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2432);
    jumpCommandName();
    setState(2433);
    dynamic_cast<JumpToAbsoluteAddressContext *>(_localctx)->address = number();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- JumpToAbsoluteAddressGivenConditionContext ------------------------------------------------------------------

Z80Parser::JumpToAbsoluteAddressGivenConditionContext::JumpToAbsoluteAddressGivenConditionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::JumpCommandNameContext* Z80Parser::JumpToAbsoluteAddressGivenConditionContext::jumpCommandName() {
  return getRuleContext<Z80Parser::JumpCommandNameContext>(0);
}

Z80Parser::JumpConditionContext* Z80Parser::JumpToAbsoluteAddressGivenConditionContext::jumpCondition() {
  return getRuleContext<Z80Parser::JumpConditionContext>(0);
}

Z80Parser::NumberContext* Z80Parser::JumpToAbsoluteAddressGivenConditionContext::number() {
  return getRuleContext<Z80Parser::NumberContext>(0);
}


size_t Z80Parser::JumpToAbsoluteAddressGivenConditionContext::getRuleIndex() const {
  return Z80Parser::RuleJumpToAbsoluteAddressGivenCondition;
}

void Z80Parser::JumpToAbsoluteAddressGivenConditionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterJumpToAbsoluteAddressGivenCondition(this);
}

void Z80Parser::JumpToAbsoluteAddressGivenConditionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitJumpToAbsoluteAddressGivenCondition(this);
}

Z80Parser::JumpToAbsoluteAddressGivenConditionContext* Z80Parser::jumpToAbsoluteAddressGivenCondition() {
  JumpToAbsoluteAddressGivenConditionContext *_localctx = _tracker.createInstance<JumpToAbsoluteAddressGivenConditionContext>(_ctx, getState());
  enterRule(_localctx, 610, Z80Parser::RuleJumpToAbsoluteAddressGivenCondition);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2435);
    jumpCommandName();
    setState(2436);
    dynamic_cast<JumpToAbsoluteAddressGivenConditionContext *>(_localctx)->condition = jumpCondition();
    setState(2437);
    dynamic_cast<JumpToAbsoluteAddressGivenConditionContext *>(_localctx)->address = number();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- JumpToRelativeAddressContext ------------------------------------------------------------------

Z80Parser::JumpToRelativeAddressContext::JumpToRelativeAddressContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::JumpRelativeCommandNameContext* Z80Parser::JumpToRelativeAddressContext::jumpRelativeCommandName() {
  return getRuleContext<Z80Parser::JumpRelativeCommandNameContext>(0);
}

Z80Parser::NumberContext* Z80Parser::JumpToRelativeAddressContext::number() {
  return getRuleContext<Z80Parser::NumberContext>(0);
}


size_t Z80Parser::JumpToRelativeAddressContext::getRuleIndex() const {
  return Z80Parser::RuleJumpToRelativeAddress;
}

void Z80Parser::JumpToRelativeAddressContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterJumpToRelativeAddress(this);
}

void Z80Parser::JumpToRelativeAddressContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitJumpToRelativeAddress(this);
}

Z80Parser::JumpToRelativeAddressContext* Z80Parser::jumpToRelativeAddress() {
  JumpToRelativeAddressContext *_localctx = _tracker.createInstance<JumpToRelativeAddressContext>(_ctx, getState());
  enterRule(_localctx, 612, Z80Parser::RuleJumpToRelativeAddress);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2439);
    jumpRelativeCommandName();
    setState(2440);
    dynamic_cast<JumpToRelativeAddressContext *>(_localctx)->address = number();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- JumpToRelativeAddressGivenConditionContext ------------------------------------------------------------------

Z80Parser::JumpToRelativeAddressGivenConditionContext::JumpToRelativeAddressGivenConditionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::JumpRelativeCommandNameContext* Z80Parser::JumpToRelativeAddressGivenConditionContext::jumpRelativeCommandName() {
  return getRuleContext<Z80Parser::JumpRelativeCommandNameContext>(0);
}

Z80Parser::JumpConditionContext* Z80Parser::JumpToRelativeAddressGivenConditionContext::jumpCondition() {
  return getRuleContext<Z80Parser::JumpConditionContext>(0);
}

Z80Parser::NumberContext* Z80Parser::JumpToRelativeAddressGivenConditionContext::number() {
  return getRuleContext<Z80Parser::NumberContext>(0);
}


size_t Z80Parser::JumpToRelativeAddressGivenConditionContext::getRuleIndex() const {
  return Z80Parser::RuleJumpToRelativeAddressGivenCondition;
}

void Z80Parser::JumpToRelativeAddressGivenConditionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterJumpToRelativeAddressGivenCondition(this);
}

void Z80Parser::JumpToRelativeAddressGivenConditionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitJumpToRelativeAddressGivenCondition(this);
}

Z80Parser::JumpToRelativeAddressGivenConditionContext* Z80Parser::jumpToRelativeAddressGivenCondition() {
  JumpToRelativeAddressGivenConditionContext *_localctx = _tracker.createInstance<JumpToRelativeAddressGivenConditionContext>(_ctx, getState());
  enterRule(_localctx, 614, Z80Parser::RuleJumpToRelativeAddressGivenCondition);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2442);
    jumpRelativeCommandName();
    setState(2443);
    dynamic_cast<JumpToRelativeAddressGivenConditionContext *>(_localctx)->condition = jumpCondition();
    setState(2444);
    dynamic_cast<JumpToRelativeAddressGivenConditionContext *>(_localctx)->address = number();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- JumpToHLContext ------------------------------------------------------------------

Z80Parser::JumpToHLContext::JumpToHLContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::JumpCommandNameContext* Z80Parser::JumpToHLContext::jumpCommandName() {
  return getRuleContext<Z80Parser::JumpCommandNameContext>(0);
}

Z80Parser::HlRegisterContext* Z80Parser::JumpToHLContext::hlRegister() {
  return getRuleContext<Z80Parser::HlRegisterContext>(0);
}

Z80Parser::HlPointerContext* Z80Parser::JumpToHLContext::hlPointer() {
  return getRuleContext<Z80Parser::HlPointerContext>(0);
}


size_t Z80Parser::JumpToHLContext::getRuleIndex() const {
  return Z80Parser::RuleJumpToHL;
}

void Z80Parser::JumpToHLContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterJumpToHL(this);
}

void Z80Parser::JumpToHLContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitJumpToHL(this);
}

Z80Parser::JumpToHLContext* Z80Parser::jumpToHL() {
  JumpToHLContext *_localctx = _tracker.createInstance<JumpToHLContext>(_ctx, getState());
  enterRule(_localctx, 616, Z80Parser::RuleJumpToHL);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2452);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 106, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2446);
      jumpCommandName();
      setState(2447);
      hlRegister();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2449);
      jumpCommandName();
      setState(2450);
      hlPointer();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- JumpToIXContext ------------------------------------------------------------------

Z80Parser::JumpToIXContext::JumpToIXContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::JumpCommandNameContext* Z80Parser::JumpToIXContext::jumpCommandName() {
  return getRuleContext<Z80Parser::JumpCommandNameContext>(0);
}

Z80Parser::IxRegisterContext* Z80Parser::JumpToIXContext::ixRegister() {
  return getRuleContext<Z80Parser::IxRegisterContext>(0);
}


size_t Z80Parser::JumpToIXContext::getRuleIndex() const {
  return Z80Parser::RuleJumpToIX;
}

void Z80Parser::JumpToIXContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterJumpToIX(this);
}

void Z80Parser::JumpToIXContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitJumpToIX(this);
}

Z80Parser::JumpToIXContext* Z80Parser::jumpToIX() {
  JumpToIXContext *_localctx = _tracker.createInstance<JumpToIXContext>(_ctx, getState());
  enterRule(_localctx, 618, Z80Parser::RuleJumpToIX);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2462);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 107, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2454);
      jumpCommandName();
      setState(2455);
      match(Z80Parser::T__68);
      setState(2456);
      ixRegister();
      setState(2457);
      match(Z80Parser::T__69);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2459);
      jumpCommandName();
      setState(2460);
      ixRegister();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- JumpToIYContext ------------------------------------------------------------------

Z80Parser::JumpToIYContext::JumpToIYContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::JumpCommandNameContext* Z80Parser::JumpToIYContext::jumpCommandName() {
  return getRuleContext<Z80Parser::JumpCommandNameContext>(0);
}

Z80Parser::IyRegisterContext* Z80Parser::JumpToIYContext::iyRegister() {
  return getRuleContext<Z80Parser::IyRegisterContext>(0);
}


size_t Z80Parser::JumpToIYContext::getRuleIndex() const {
  return Z80Parser::RuleJumpToIY;
}

void Z80Parser::JumpToIYContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterJumpToIY(this);
}

void Z80Parser::JumpToIYContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitJumpToIY(this);
}

Z80Parser::JumpToIYContext* Z80Parser::jumpToIY() {
  JumpToIYContext *_localctx = _tracker.createInstance<JumpToIYContext>(_ctx, getState());
  enterRule(_localctx, 620, Z80Parser::RuleJumpToIY);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2472);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 108, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2464);
      jumpCommandName();
      setState(2465);
      match(Z80Parser::T__68);
      setState(2466);
      iyRegister();
      setState(2467);
      match(Z80Parser::T__69);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2469);
      jumpCommandName();
      setState(2470);
      iyRegister();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- JumpRelativeAndDecrementContext ------------------------------------------------------------------

Z80Parser::JumpRelativeAndDecrementContext::JumpRelativeAndDecrementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::JumpRelativeAndDecrementCommandNameContext* Z80Parser::JumpRelativeAndDecrementContext::jumpRelativeAndDecrementCommandName() {
  return getRuleContext<Z80Parser::JumpRelativeAndDecrementCommandNameContext>(0);
}

Z80Parser::NumberContext* Z80Parser::JumpRelativeAndDecrementContext::number() {
  return getRuleContext<Z80Parser::NumberContext>(0);
}


size_t Z80Parser::JumpRelativeAndDecrementContext::getRuleIndex() const {
  return Z80Parser::RuleJumpRelativeAndDecrement;
}

void Z80Parser::JumpRelativeAndDecrementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterJumpRelativeAndDecrement(this);
}

void Z80Parser::JumpRelativeAndDecrementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitJumpRelativeAndDecrement(this);
}

Z80Parser::JumpRelativeAndDecrementContext* Z80Parser::jumpRelativeAndDecrement() {
  JumpRelativeAndDecrementContext *_localctx = _tracker.createInstance<JumpRelativeAndDecrementContext>(_ctx, getState());
  enterRule(_localctx, 622, Z80Parser::RuleJumpRelativeAndDecrement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2474);
    jumpRelativeAndDecrementCommandName();
    setState(2475);
    dynamic_cast<JumpRelativeAndDecrementContext *>(_localctx)->address = number();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CallSubroutineContext ------------------------------------------------------------------

Z80Parser::CallSubroutineContext::CallSubroutineContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::CallCommandNameContext* Z80Parser::CallSubroutineContext::callCommandName() {
  return getRuleContext<Z80Parser::CallCommandNameContext>(0);
}

Z80Parser::NumberContext* Z80Parser::CallSubroutineContext::number() {
  return getRuleContext<Z80Parser::NumberContext>(0);
}


size_t Z80Parser::CallSubroutineContext::getRuleIndex() const {
  return Z80Parser::RuleCallSubroutine;
}

void Z80Parser::CallSubroutineContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCallSubroutine(this);
}

void Z80Parser::CallSubroutineContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCallSubroutine(this);
}

Z80Parser::CallSubroutineContext* Z80Parser::callSubroutine() {
  CallSubroutineContext *_localctx = _tracker.createInstance<CallSubroutineContext>(_ctx, getState());
  enterRule(_localctx, 624, Z80Parser::RuleCallSubroutine);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2477);
    callCommandName();
    setState(2478);
    dynamic_cast<CallSubroutineContext *>(_localctx)->address = number();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CallSubroutineWithConditionContext ------------------------------------------------------------------

Z80Parser::CallSubroutineWithConditionContext::CallSubroutineWithConditionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::CallCommandNameContext* Z80Parser::CallSubroutineWithConditionContext::callCommandName() {
  return getRuleContext<Z80Parser::CallCommandNameContext>(0);
}

Z80Parser::JumpConditionContext* Z80Parser::CallSubroutineWithConditionContext::jumpCondition() {
  return getRuleContext<Z80Parser::JumpConditionContext>(0);
}

Z80Parser::NumberContext* Z80Parser::CallSubroutineWithConditionContext::number() {
  return getRuleContext<Z80Parser::NumberContext>(0);
}


size_t Z80Parser::CallSubroutineWithConditionContext::getRuleIndex() const {
  return Z80Parser::RuleCallSubroutineWithCondition;
}

void Z80Parser::CallSubroutineWithConditionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCallSubroutineWithCondition(this);
}

void Z80Parser::CallSubroutineWithConditionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCallSubroutineWithCondition(this);
}

Z80Parser::CallSubroutineWithConditionContext* Z80Parser::callSubroutineWithCondition() {
  CallSubroutineWithConditionContext *_localctx = _tracker.createInstance<CallSubroutineWithConditionContext>(_ctx, getState());
  enterRule(_localctx, 626, Z80Parser::RuleCallSubroutineWithCondition);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2480);
    callCommandName();
    setState(2481);
    dynamic_cast<CallSubroutineWithConditionContext *>(_localctx)->condition = jumpCondition();
    setState(2482);
    dynamic_cast<CallSubroutineWithConditionContext *>(_localctx)->address = number();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ReturnFromSubroutineContext ------------------------------------------------------------------

Z80Parser::ReturnFromSubroutineContext::ReturnFromSubroutineContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::ReturnCommandNameContext* Z80Parser::ReturnFromSubroutineContext::returnCommandName() {
  return getRuleContext<Z80Parser::ReturnCommandNameContext>(0);
}


size_t Z80Parser::ReturnFromSubroutineContext::getRuleIndex() const {
  return Z80Parser::RuleReturnFromSubroutine;
}

void Z80Parser::ReturnFromSubroutineContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReturnFromSubroutine(this);
}

void Z80Parser::ReturnFromSubroutineContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReturnFromSubroutine(this);
}

Z80Parser::ReturnFromSubroutineContext* Z80Parser::returnFromSubroutine() {
  ReturnFromSubroutineContext *_localctx = _tracker.createInstance<ReturnFromSubroutineContext>(_ctx, getState());
  enterRule(_localctx, 628, Z80Parser::RuleReturnFromSubroutine);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2484);
    returnCommandName();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ReturnFromSubroutineGivenConditionContext ------------------------------------------------------------------

Z80Parser::ReturnFromSubroutineGivenConditionContext::ReturnFromSubroutineGivenConditionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::ReturnCommandNameContext* Z80Parser::ReturnFromSubroutineGivenConditionContext::returnCommandName() {
  return getRuleContext<Z80Parser::ReturnCommandNameContext>(0);
}

Z80Parser::JumpConditionContext* Z80Parser::ReturnFromSubroutineGivenConditionContext::jumpCondition() {
  return getRuleContext<Z80Parser::JumpConditionContext>(0);
}


size_t Z80Parser::ReturnFromSubroutineGivenConditionContext::getRuleIndex() const {
  return Z80Parser::RuleReturnFromSubroutineGivenCondition;
}

void Z80Parser::ReturnFromSubroutineGivenConditionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReturnFromSubroutineGivenCondition(this);
}

void Z80Parser::ReturnFromSubroutineGivenConditionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReturnFromSubroutineGivenCondition(this);
}

Z80Parser::ReturnFromSubroutineGivenConditionContext* Z80Parser::returnFromSubroutineGivenCondition() {
  ReturnFromSubroutineGivenConditionContext *_localctx = _tracker.createInstance<ReturnFromSubroutineGivenConditionContext>(_ctx, getState());
  enterRule(_localctx, 630, Z80Parser::RuleReturnFromSubroutineGivenCondition);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2486);
    returnCommandName();
    setState(2487);
    dynamic_cast<ReturnFromSubroutineGivenConditionContext *>(_localctx)->condition = jumpCondition();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ReturnAndEnableInterruptContext ------------------------------------------------------------------

Z80Parser::ReturnAndEnableInterruptContext::ReturnAndEnableInterruptContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::ReturnAndEnableInterruptCommandNameContext* Z80Parser::ReturnAndEnableInterruptContext::returnAndEnableInterruptCommandName() {
  return getRuleContext<Z80Parser::ReturnAndEnableInterruptCommandNameContext>(0);
}


size_t Z80Parser::ReturnAndEnableInterruptContext::getRuleIndex() const {
  return Z80Parser::RuleReturnAndEnableInterrupt;
}

void Z80Parser::ReturnAndEnableInterruptContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReturnAndEnableInterrupt(this);
}

void Z80Parser::ReturnAndEnableInterruptContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReturnAndEnableInterrupt(this);
}

Z80Parser::ReturnAndEnableInterruptContext* Z80Parser::returnAndEnableInterrupt() {
  ReturnAndEnableInterruptContext *_localctx = _tracker.createInstance<ReturnAndEnableInterruptContext>(_ctx, getState());
  enterRule(_localctx, 632, Z80Parser::RuleReturnAndEnableInterrupt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2489);
    returnAndEnableInterruptCommandName();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ReturnFromNonMaskableInterruptContext ------------------------------------------------------------------

Z80Parser::ReturnFromNonMaskableInterruptContext::ReturnFromNonMaskableInterruptContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::ReturnFromNonMaskableInterruptCommandNameContext* Z80Parser::ReturnFromNonMaskableInterruptContext::returnFromNonMaskableInterruptCommandName() {
  return getRuleContext<Z80Parser::ReturnFromNonMaskableInterruptCommandNameContext>(0);
}


size_t Z80Parser::ReturnFromNonMaskableInterruptContext::getRuleIndex() const {
  return Z80Parser::RuleReturnFromNonMaskableInterrupt;
}

void Z80Parser::ReturnFromNonMaskableInterruptContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReturnFromNonMaskableInterrupt(this);
}

void Z80Parser::ReturnFromNonMaskableInterruptContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReturnFromNonMaskableInterrupt(this);
}

Z80Parser::ReturnFromNonMaskableInterruptContext* Z80Parser::returnFromNonMaskableInterrupt() {
  ReturnFromNonMaskableInterruptContext *_localctx = _tracker.createInstance<ReturnFromNonMaskableInterruptContext>(_ctx, getState());
  enterRule(_localctx, 634, Z80Parser::RuleReturnFromNonMaskableInterrupt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2491);
    returnFromNonMaskableInterruptCommandName();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RestartCommandContext ------------------------------------------------------------------

Z80Parser::RestartCommandContext::RestartCommandContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::RestartCommandNameContext* Z80Parser::RestartCommandContext::restartCommandName() {
  return getRuleContext<Z80Parser::RestartCommandNameContext>(0);
}

Z80Parser::NumberContext* Z80Parser::RestartCommandContext::number() {
  return getRuleContext<Z80Parser::NumberContext>(0);
}


size_t Z80Parser::RestartCommandContext::getRuleIndex() const {
  return Z80Parser::RuleRestartCommand;
}

void Z80Parser::RestartCommandContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRestartCommand(this);
}

void Z80Parser::RestartCommandContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRestartCommand(this);
}

Z80Parser::RestartCommandContext* Z80Parser::restartCommand() {
  RestartCommandContext *_localctx = _tracker.createInstance<RestartCommandContext>(_ctx, getState());
  enterRule(_localctx, 636, Z80Parser::RuleRestartCommand);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2493);
    restartCommandName();
    setState(2494);
    number();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BranchCommandContext ------------------------------------------------------------------

Z80Parser::BranchCommandContext::BranchCommandContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::JumpToAbsoluteAddressContext* Z80Parser::BranchCommandContext::jumpToAbsoluteAddress() {
  return getRuleContext<Z80Parser::JumpToAbsoluteAddressContext>(0);
}

Z80Parser::JumpToAbsoluteAddressGivenConditionContext* Z80Parser::BranchCommandContext::jumpToAbsoluteAddressGivenCondition() {
  return getRuleContext<Z80Parser::JumpToAbsoluteAddressGivenConditionContext>(0);
}

Z80Parser::JumpToRelativeAddressContext* Z80Parser::BranchCommandContext::jumpToRelativeAddress() {
  return getRuleContext<Z80Parser::JumpToRelativeAddressContext>(0);
}

Z80Parser::JumpToRelativeAddressGivenConditionContext* Z80Parser::BranchCommandContext::jumpToRelativeAddressGivenCondition() {
  return getRuleContext<Z80Parser::JumpToRelativeAddressGivenConditionContext>(0);
}

Z80Parser::JumpToHLContext* Z80Parser::BranchCommandContext::jumpToHL() {
  return getRuleContext<Z80Parser::JumpToHLContext>(0);
}

Z80Parser::JumpToIXContext* Z80Parser::BranchCommandContext::jumpToIX() {
  return getRuleContext<Z80Parser::JumpToIXContext>(0);
}

Z80Parser::JumpToIYContext* Z80Parser::BranchCommandContext::jumpToIY() {
  return getRuleContext<Z80Parser::JumpToIYContext>(0);
}

Z80Parser::JumpRelativeAndDecrementContext* Z80Parser::BranchCommandContext::jumpRelativeAndDecrement() {
  return getRuleContext<Z80Parser::JumpRelativeAndDecrementContext>(0);
}

Z80Parser::CallSubroutineContext* Z80Parser::BranchCommandContext::callSubroutine() {
  return getRuleContext<Z80Parser::CallSubroutineContext>(0);
}

Z80Parser::CallSubroutineWithConditionContext* Z80Parser::BranchCommandContext::callSubroutineWithCondition() {
  return getRuleContext<Z80Parser::CallSubroutineWithConditionContext>(0);
}

Z80Parser::ReturnFromSubroutineContext* Z80Parser::BranchCommandContext::returnFromSubroutine() {
  return getRuleContext<Z80Parser::ReturnFromSubroutineContext>(0);
}

Z80Parser::ReturnFromSubroutineGivenConditionContext* Z80Parser::BranchCommandContext::returnFromSubroutineGivenCondition() {
  return getRuleContext<Z80Parser::ReturnFromSubroutineGivenConditionContext>(0);
}

Z80Parser::ReturnAndEnableInterruptContext* Z80Parser::BranchCommandContext::returnAndEnableInterrupt() {
  return getRuleContext<Z80Parser::ReturnAndEnableInterruptContext>(0);
}

Z80Parser::ReturnFromNonMaskableInterruptContext* Z80Parser::BranchCommandContext::returnFromNonMaskableInterrupt() {
  return getRuleContext<Z80Parser::ReturnFromNonMaskableInterruptContext>(0);
}

Z80Parser::RestartCommandContext* Z80Parser::BranchCommandContext::restartCommand() {
  return getRuleContext<Z80Parser::RestartCommandContext>(0);
}


size_t Z80Parser::BranchCommandContext::getRuleIndex() const {
  return Z80Parser::RuleBranchCommand;
}

void Z80Parser::BranchCommandContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBranchCommand(this);
}

void Z80Parser::BranchCommandContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBranchCommand(this);
}

Z80Parser::BranchCommandContext* Z80Parser::branchCommand() {
  BranchCommandContext *_localctx = _tracker.createInstance<BranchCommandContext>(_ctx, getState());
  enterRule(_localctx, 638, Z80Parser::RuleBranchCommand);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2511);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 109, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2496);
      jumpToAbsoluteAddress();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2497);
      jumpToAbsoluteAddressGivenCondition();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(2498);
      jumpToRelativeAddress();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(2499);
      jumpToRelativeAddressGivenCondition();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(2500);
      jumpToHL();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(2501);
      jumpToIX();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(2502);
      jumpToIY();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(2503);
      jumpRelativeAndDecrement();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(2504);
      callSubroutine();
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(2505);
      callSubroutineWithCondition();
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(2506);
      returnFromSubroutine();
      break;
    }

    case 12: {
      enterOuterAlt(_localctx, 12);
      setState(2507);
      returnFromSubroutineGivenCondition();
      break;
    }

    case 13: {
      enterOuterAlt(_localctx, 13);
      setState(2508);
      returnAndEnableInterrupt();
      break;
    }

    case 14: {
      enterOuterAlt(_localctx, 14);
      setState(2509);
      returnFromNonMaskableInterrupt();
      break;
    }

    case 15: {
      enterOuterAlt(_localctx, 15);
      setState(2510);
      restartCommand();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InputCommandNameContext ------------------------------------------------------------------

Z80Parser::InputCommandNameContext::InputCommandNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t Z80Parser::InputCommandNameContext::getRuleIndex() const {
  return Z80Parser::RuleInputCommandName;
}

void Z80Parser::InputCommandNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInputCommandName(this);
}

void Z80Parser::InputCommandNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInputCommandName(this);
}

Z80Parser::InputCommandNameContext* Z80Parser::inputCommandName() {
  InputCommandNameContext *_localctx = _tracker.createInstance<InputCommandNameContext>(_ctx, getState());
  enterRule(_localctx, 640, Z80Parser::RuleInputCommandName);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2513);
    _la = _input->LA(1);
    if (!(_la == Z80Parser::T__202

    || _la == Z80Parser::T__203)) {
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

//----------------- OutCommandNameContext ------------------------------------------------------------------

Z80Parser::OutCommandNameContext::OutCommandNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t Z80Parser::OutCommandNameContext::getRuleIndex() const {
  return Z80Parser::RuleOutCommandName;
}

void Z80Parser::OutCommandNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOutCommandName(this);
}

void Z80Parser::OutCommandNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOutCommandName(this);
}

Z80Parser::OutCommandNameContext* Z80Parser::outCommandName() {
  OutCommandNameContext *_localctx = _tracker.createInstance<OutCommandNameContext>(_ctx, getState());
  enterRule(_localctx, 642, Z80Parser::RuleOutCommandName);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2515);
    _la = _input->LA(1);
    if (!(_la == Z80Parser::T__204

    || _la == Z80Parser::T__205)) {
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

//----------------- InputDataIntoAContext ------------------------------------------------------------------

Z80Parser::InputDataIntoAContext::InputDataIntoAContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::InputCommandNameContext* Z80Parser::InputDataIntoAContext::inputCommandName() {
  return getRuleContext<Z80Parser::InputCommandNameContext>(0);
}

Z80Parser::ARegisterContext* Z80Parser::InputDataIntoAContext::aRegister() {
  return getRuleContext<Z80Parser::ARegisterContext>(0);
}

Z80Parser::NumberPointerContext* Z80Parser::InputDataIntoAContext::numberPointer() {
  return getRuleContext<Z80Parser::NumberPointerContext>(0);
}


size_t Z80Parser::InputDataIntoAContext::getRuleIndex() const {
  return Z80Parser::RuleInputDataIntoA;
}

void Z80Parser::InputDataIntoAContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInputDataIntoA(this);
}

void Z80Parser::InputDataIntoAContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInputDataIntoA(this);
}

Z80Parser::InputDataIntoAContext* Z80Parser::inputDataIntoA() {
  InputDataIntoAContext *_localctx = _tracker.createInstance<InputDataIntoAContext>(_ctx, getState());
  enterRule(_localctx, 644, Z80Parser::RuleInputDataIntoA);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2517);
    inputCommandName();
    setState(2518);
    dynamic_cast<InputDataIntoAContext *>(_localctx)->dest = aRegister();
    setState(2519);
    match(Z80Parser::T__73);
    setState(2520);
    dynamic_cast<InputDataIntoAContext *>(_localctx)->source = numberPointer();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InputDataIntoRegisterContext ------------------------------------------------------------------

Z80Parser::InputDataIntoRegisterContext::InputDataIntoRegisterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::InputCommandNameContext* Z80Parser::InputDataIntoRegisterContext::inputCommandName() {
  return getRuleContext<Z80Parser::InputCommandNameContext>(0);
}

Z80Parser::SimpleByteRegisterContext* Z80Parser::InputDataIntoRegisterContext::simpleByteRegister() {
  return getRuleContext<Z80Parser::SimpleByteRegisterContext>(0);
}

Z80Parser::CPointerContext* Z80Parser::InputDataIntoRegisterContext::cPointer() {
  return getRuleContext<Z80Parser::CPointerContext>(0);
}


size_t Z80Parser::InputDataIntoRegisterContext::getRuleIndex() const {
  return Z80Parser::RuleInputDataIntoRegister;
}

void Z80Parser::InputDataIntoRegisterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInputDataIntoRegister(this);
}

void Z80Parser::InputDataIntoRegisterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInputDataIntoRegister(this);
}

Z80Parser::InputDataIntoRegisterContext* Z80Parser::inputDataIntoRegister() {
  InputDataIntoRegisterContext *_localctx = _tracker.createInstance<InputDataIntoRegisterContext>(_ctx, getState());
  enterRule(_localctx, 646, Z80Parser::RuleInputDataIntoRegister);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2522);
    inputCommandName();
    setState(2523);
    dynamic_cast<InputDataIntoRegisterContext *>(_localctx)->dest = simpleByteRegister();
    setState(2524);
    match(Z80Parser::T__73);
    setState(2525);
    dynamic_cast<InputDataIntoRegisterContext *>(_localctx)->source = cPointer();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IniContext ------------------------------------------------------------------

Z80Parser::IniContext::IniContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t Z80Parser::IniContext::getRuleIndex() const {
  return Z80Parser::RuleIni;
}

void Z80Parser::IniContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIni(this);
}

void Z80Parser::IniContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIni(this);
}

Z80Parser::IniContext* Z80Parser::ini() {
  IniContext *_localctx = _tracker.createInstance<IniContext>(_ctx, getState());
  enterRule(_localctx, 648, Z80Parser::RuleIni);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2527);
    _la = _input->LA(1);
    if (!(_la == Z80Parser::T__206

    || _la == Z80Parser::T__207)) {
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

//----------------- InirContext ------------------------------------------------------------------

Z80Parser::InirContext::InirContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t Z80Parser::InirContext::getRuleIndex() const {
  return Z80Parser::RuleInir;
}

void Z80Parser::InirContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInir(this);
}

void Z80Parser::InirContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInir(this);
}

Z80Parser::InirContext* Z80Parser::inir() {
  InirContext *_localctx = _tracker.createInstance<InirContext>(_ctx, getState());
  enterRule(_localctx, 650, Z80Parser::RuleInir);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2529);
    _la = _input->LA(1);
    if (!(_la == Z80Parser::T__208

    || _la == Z80Parser::T__209)) {
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

//----------------- IndContext ------------------------------------------------------------------

Z80Parser::IndContext::IndContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t Z80Parser::IndContext::getRuleIndex() const {
  return Z80Parser::RuleInd;
}

void Z80Parser::IndContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInd(this);
}

void Z80Parser::IndContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInd(this);
}

Z80Parser::IndContext* Z80Parser::ind() {
  IndContext *_localctx = _tracker.createInstance<IndContext>(_ctx, getState());
  enterRule(_localctx, 652, Z80Parser::RuleInd);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2531);
    _la = _input->LA(1);
    if (!(_la == Z80Parser::T__210

    || _la == Z80Parser::T__211)) {
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

//----------------- IndrContext ------------------------------------------------------------------

Z80Parser::IndrContext::IndrContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t Z80Parser::IndrContext::getRuleIndex() const {
  return Z80Parser::RuleIndr;
}

void Z80Parser::IndrContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIndr(this);
}

void Z80Parser::IndrContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIndr(this);
}

Z80Parser::IndrContext* Z80Parser::indr() {
  IndrContext *_localctx = _tracker.createInstance<IndrContext>(_ctx, getState());
  enterRule(_localctx, 654, Z80Parser::RuleIndr);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2533);
    _la = _input->LA(1);
    if (!(_la == Z80Parser::T__212

    || _la == Z80Parser::T__213)) {
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

//----------------- OutputAIntoDataPointerContext ------------------------------------------------------------------

Z80Parser::OutputAIntoDataPointerContext::OutputAIntoDataPointerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::OutCommandNameContext* Z80Parser::OutputAIntoDataPointerContext::outCommandName() {
  return getRuleContext<Z80Parser::OutCommandNameContext>(0);
}

Z80Parser::NumberPointerContext* Z80Parser::OutputAIntoDataPointerContext::numberPointer() {
  return getRuleContext<Z80Parser::NumberPointerContext>(0);
}

Z80Parser::ARegisterContext* Z80Parser::OutputAIntoDataPointerContext::aRegister() {
  return getRuleContext<Z80Parser::ARegisterContext>(0);
}


size_t Z80Parser::OutputAIntoDataPointerContext::getRuleIndex() const {
  return Z80Parser::RuleOutputAIntoDataPointer;
}

void Z80Parser::OutputAIntoDataPointerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOutputAIntoDataPointer(this);
}

void Z80Parser::OutputAIntoDataPointerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOutputAIntoDataPointer(this);
}

Z80Parser::OutputAIntoDataPointerContext* Z80Parser::outputAIntoDataPointer() {
  OutputAIntoDataPointerContext *_localctx = _tracker.createInstance<OutputAIntoDataPointerContext>(_ctx, getState());
  enterRule(_localctx, 656, Z80Parser::RuleOutputAIntoDataPointer);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2535);
    outCommandName();
    setState(2536);
    dynamic_cast<OutputAIntoDataPointerContext *>(_localctx)->dest = numberPointer();
    setState(2537);
    match(Z80Parser::T__73);
    setState(2538);
    dynamic_cast<OutputAIntoDataPointerContext *>(_localctx)->source = aRegister();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OutputRegisterIntoCPointerContext ------------------------------------------------------------------

Z80Parser::OutputRegisterIntoCPointerContext::OutputRegisterIntoCPointerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::OutCommandNameContext* Z80Parser::OutputRegisterIntoCPointerContext::outCommandName() {
  return getRuleContext<Z80Parser::OutCommandNameContext>(0);
}

Z80Parser::CPointerContext* Z80Parser::OutputRegisterIntoCPointerContext::cPointer() {
  return getRuleContext<Z80Parser::CPointerContext>(0);
}

Z80Parser::SimpleByteRegisterContext* Z80Parser::OutputRegisterIntoCPointerContext::simpleByteRegister() {
  return getRuleContext<Z80Parser::SimpleByteRegisterContext>(0);
}


size_t Z80Parser::OutputRegisterIntoCPointerContext::getRuleIndex() const {
  return Z80Parser::RuleOutputRegisterIntoCPointer;
}

void Z80Parser::OutputRegisterIntoCPointerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOutputRegisterIntoCPointer(this);
}

void Z80Parser::OutputRegisterIntoCPointerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOutputRegisterIntoCPointer(this);
}

Z80Parser::OutputRegisterIntoCPointerContext* Z80Parser::outputRegisterIntoCPointer() {
  OutputRegisterIntoCPointerContext *_localctx = _tracker.createInstance<OutputRegisterIntoCPointerContext>(_ctx, getState());
  enterRule(_localctx, 658, Z80Parser::RuleOutputRegisterIntoCPointer);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2540);
    outCommandName();
    setState(2541);
    dynamic_cast<OutputRegisterIntoCPointerContext *>(_localctx)->dest = cPointer();
    setState(2542);
    match(Z80Parser::T__73);
    setState(2543);
    dynamic_cast<OutputRegisterIntoCPointerContext *>(_localctx)->source = simpleByteRegister();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OutiContext ------------------------------------------------------------------

Z80Parser::OutiContext::OutiContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t Z80Parser::OutiContext::getRuleIndex() const {
  return Z80Parser::RuleOuti;
}

void Z80Parser::OutiContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOuti(this);
}

void Z80Parser::OutiContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOuti(this);
}

Z80Parser::OutiContext* Z80Parser::outi() {
  OutiContext *_localctx = _tracker.createInstance<OutiContext>(_ctx, getState());
  enterRule(_localctx, 660, Z80Parser::RuleOuti);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2545);
    _la = _input->LA(1);
    if (!(_la == Z80Parser::T__214

    || _la == Z80Parser::T__215)) {
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

//----------------- OtirContext ------------------------------------------------------------------

Z80Parser::OtirContext::OtirContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t Z80Parser::OtirContext::getRuleIndex() const {
  return Z80Parser::RuleOtir;
}

void Z80Parser::OtirContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOtir(this);
}

void Z80Parser::OtirContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOtir(this);
}

Z80Parser::OtirContext* Z80Parser::otir() {
  OtirContext *_localctx = _tracker.createInstance<OtirContext>(_ctx, getState());
  enterRule(_localctx, 662, Z80Parser::RuleOtir);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2547);
    _la = _input->LA(1);
    if (!(_la == Z80Parser::T__216

    || _la == Z80Parser::T__217)) {
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

//----------------- OutdContext ------------------------------------------------------------------

Z80Parser::OutdContext::OutdContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t Z80Parser::OutdContext::getRuleIndex() const {
  return Z80Parser::RuleOutd;
}

void Z80Parser::OutdContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOutd(this);
}

void Z80Parser::OutdContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOutd(this);
}

Z80Parser::OutdContext* Z80Parser::outd() {
  OutdContext *_localctx = _tracker.createInstance<OutdContext>(_ctx, getState());
  enterRule(_localctx, 664, Z80Parser::RuleOutd);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2549);
    _la = _input->LA(1);
    if (!(_la == Z80Parser::T__218

    || _la == Z80Parser::T__219)) {
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

//----------------- OtdrContext ------------------------------------------------------------------

Z80Parser::OtdrContext::OtdrContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t Z80Parser::OtdrContext::getRuleIndex() const {
  return Z80Parser::RuleOtdr;
}

void Z80Parser::OtdrContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOtdr(this);
}

void Z80Parser::OtdrContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOtdr(this);
}

Z80Parser::OtdrContext* Z80Parser::otdr() {
  OtdrContext *_localctx = _tracker.createInstance<OtdrContext>(_ctx, getState());
  enterRule(_localctx, 666, Z80Parser::RuleOtdr);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2551);
    _la = _input->LA(1);
    if (!(_la == Z80Parser::T__220

    || _la == Z80Parser::T__221)) {
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

//----------------- InputAndOutpuCommandContext ------------------------------------------------------------------

Z80Parser::InputAndOutpuCommandContext::InputAndOutpuCommandContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::InputDataIntoAContext* Z80Parser::InputAndOutpuCommandContext::inputDataIntoA() {
  return getRuleContext<Z80Parser::InputDataIntoAContext>(0);
}

Z80Parser::InputDataIntoRegisterContext* Z80Parser::InputAndOutpuCommandContext::inputDataIntoRegister() {
  return getRuleContext<Z80Parser::InputDataIntoRegisterContext>(0);
}

Z80Parser::IniContext* Z80Parser::InputAndOutpuCommandContext::ini() {
  return getRuleContext<Z80Parser::IniContext>(0);
}

Z80Parser::InirContext* Z80Parser::InputAndOutpuCommandContext::inir() {
  return getRuleContext<Z80Parser::InirContext>(0);
}

Z80Parser::IndContext* Z80Parser::InputAndOutpuCommandContext::ind() {
  return getRuleContext<Z80Parser::IndContext>(0);
}

Z80Parser::IndrContext* Z80Parser::InputAndOutpuCommandContext::indr() {
  return getRuleContext<Z80Parser::IndrContext>(0);
}

Z80Parser::OutputAIntoDataPointerContext* Z80Parser::InputAndOutpuCommandContext::outputAIntoDataPointer() {
  return getRuleContext<Z80Parser::OutputAIntoDataPointerContext>(0);
}

Z80Parser::OutputRegisterIntoCPointerContext* Z80Parser::InputAndOutpuCommandContext::outputRegisterIntoCPointer() {
  return getRuleContext<Z80Parser::OutputRegisterIntoCPointerContext>(0);
}

Z80Parser::OutiContext* Z80Parser::InputAndOutpuCommandContext::outi() {
  return getRuleContext<Z80Parser::OutiContext>(0);
}

Z80Parser::OtirContext* Z80Parser::InputAndOutpuCommandContext::otir() {
  return getRuleContext<Z80Parser::OtirContext>(0);
}

Z80Parser::OutdContext* Z80Parser::InputAndOutpuCommandContext::outd() {
  return getRuleContext<Z80Parser::OutdContext>(0);
}

Z80Parser::OtdrContext* Z80Parser::InputAndOutpuCommandContext::otdr() {
  return getRuleContext<Z80Parser::OtdrContext>(0);
}


size_t Z80Parser::InputAndOutpuCommandContext::getRuleIndex() const {
  return Z80Parser::RuleInputAndOutpuCommand;
}

void Z80Parser::InputAndOutpuCommandContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInputAndOutpuCommand(this);
}

void Z80Parser::InputAndOutpuCommandContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInputAndOutpuCommand(this);
}

Z80Parser::InputAndOutpuCommandContext* Z80Parser::inputAndOutpuCommand() {
  InputAndOutpuCommandContext *_localctx = _tracker.createInstance<InputAndOutpuCommandContext>(_ctx, getState());
  enterRule(_localctx, 668, Z80Parser::RuleInputAndOutpuCommand);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2565);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 110, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2553);
      inputDataIntoA();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2554);
      inputDataIntoRegister();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(2555);
      ini();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(2556);
      inir();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(2557);
      ind();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(2558);
      indr();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(2559);
      outputAIntoDataPointer();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(2560);
      outputRegisterIntoCPointer();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(2561);
      outi();
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(2562);
      otir();
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(2563);
      outd();
      break;
    }

    case 12: {
      enterOuterAlt(_localctx, 12);
      setState(2564);
      otdr();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LabelContext ------------------------------------------------------------------

Z80Parser::LabelContext::LabelContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::NameContext* Z80Parser::LabelContext::name() {
  return getRuleContext<Z80Parser::NameContext>(0);
}


size_t Z80Parser::LabelContext::getRuleIndex() const {
  return Z80Parser::RuleLabel;
}

void Z80Parser::LabelContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLabel(this);
}

void Z80Parser::LabelContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLabel(this);
}

Z80Parser::LabelContext* Z80Parser::label() {
  LabelContext *_localctx = _tracker.createInstance<LabelContext>(_ctx, getState());
  enterRule(_localctx, 670, Z80Parser::RuleLabel);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2567);
    name();
    setState(2569);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Z80Parser::T__222) {
      setState(2568);
      match(Z80Parser::T__222);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OrgDirectiveContext ------------------------------------------------------------------

Z80Parser::OrgDirectiveContext::OrgDirectiveContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::NumberContext* Z80Parser::OrgDirectiveContext::number() {
  return getRuleContext<Z80Parser::NumberContext>(0);
}


size_t Z80Parser::OrgDirectiveContext::getRuleIndex() const {
  return Z80Parser::RuleOrgDirective;
}

void Z80Parser::OrgDirectiveContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOrgDirective(this);
}

void Z80Parser::OrgDirectiveContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOrgDirective(this);
}

Z80Parser::OrgDirectiveContext* Z80Parser::orgDirective() {
  OrgDirectiveContext *_localctx = _tracker.createInstance<OrgDirectiveContext>(_ctx, getState());
  enterRule(_localctx, 672, Z80Parser::RuleOrgDirective);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2571);
    _la = _input->LA(1);
    if (!(_la == Z80Parser::T__223

    || _la == Z80Parser::T__224)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(2572);
    number();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CharNumberContext ------------------------------------------------------------------

Z80Parser::CharNumberContext::CharNumberContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Z80Parser::CharNumberContext::CHAR() {
  return getToken(Z80Parser::CHAR, 0);
}


size_t Z80Parser::CharNumberContext::getRuleIndex() const {
  return Z80Parser::RuleCharNumber;
}

void Z80Parser::CharNumberContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCharNumber(this);
}

void Z80Parser::CharNumberContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCharNumber(this);
}

Z80Parser::CharNumberContext* Z80Parser::charNumber() {
  CharNumberContext *_localctx = _tracker.createInstance<CharNumberContext>(_ctx, getState());
  enterRule(_localctx, 674, Z80Parser::RuleCharNumber);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2574);
    match(Z80Parser::CHAR);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NameContext ------------------------------------------------------------------

Z80Parser::NameContext::NameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Z80Parser::NameContext::NAME() {
  return getToken(Z80Parser::NAME, 0);
}


size_t Z80Parser::NameContext::getRuleIndex() const {
  return Z80Parser::RuleName;
}

void Z80Parser::NameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterName(this);
}

void Z80Parser::NameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitName(this);
}

Z80Parser::NameContext* Z80Parser::name() {
  NameContext *_localctx = _tracker.createInstance<NameContext>(_ctx, getState());
  enterRule(_localctx, 676, Z80Parser::RuleName);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2576);
    match(Z80Parser::NAME);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NumberContext ------------------------------------------------------------------

Z80Parser::NumberContext::NumberContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Z80Parser::HexNumberContext* Z80Parser::NumberContext::hexNumber() {
  return getRuleContext<Z80Parser::HexNumberContext>(0);
}

Z80Parser::DecimalNumberContext* Z80Parser::NumberContext::decimalNumber() {
  return getRuleContext<Z80Parser::DecimalNumberContext>(0);
}

Z80Parser::CharNumberContext* Z80Parser::NumberContext::charNumber() {
  return getRuleContext<Z80Parser::CharNumberContext>(0);
}

Z80Parser::NameContext* Z80Parser::NumberContext::name() {
  return getRuleContext<Z80Parser::NameContext>(0);
}


size_t Z80Parser::NumberContext::getRuleIndex() const {
  return Z80Parser::RuleNumber;
}

void Z80Parser::NumberContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNumber(this);
}

void Z80Parser::NumberContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNumber(this);
}

Z80Parser::NumberContext* Z80Parser::number() {
  NumberContext *_localctx = _tracker.createInstance<NumberContext>(_ctx, getState());
  enterRule(_localctx, 678, Z80Parser::RuleNumber);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2582);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Z80Parser::HEX_DIGITS_1:
      case Z80Parser::HEX_DIGITS_2:
      case Z80Parser::HEX_DIGITS_3: {
        enterOuterAlt(_localctx, 1);
        setState(2578);
        hexNumber();
        break;
      }

      case Z80Parser::DECIMAL: {
        enterOuterAlt(_localctx, 2);
        setState(2579);
        decimalNumber();
        break;
      }

      case Z80Parser::CHAR: {
        enterOuterAlt(_localctx, 3);
        setState(2580);
        charNumber();
        break;
      }

      case Z80Parser::NAME: {
        enterOuterAlt(_localctx, 4);
        setState(2581);
        name();
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

//----------------- DecimalNumberContext ------------------------------------------------------------------

Z80Parser::DecimalNumberContext::DecimalNumberContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Z80Parser::DecimalNumberContext::DECIMAL() {
  return getToken(Z80Parser::DECIMAL, 0);
}


size_t Z80Parser::DecimalNumberContext::getRuleIndex() const {
  return Z80Parser::RuleDecimalNumber;
}

void Z80Parser::DecimalNumberContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDecimalNumber(this);
}

void Z80Parser::DecimalNumberContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDecimalNumber(this);
}

Z80Parser::DecimalNumberContext* Z80Parser::decimalNumber() {
  DecimalNumberContext *_localctx = _tracker.createInstance<DecimalNumberContext>(_ctx, getState());
  enterRule(_localctx, 680, Z80Parser::RuleDecimalNumber);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2584);
    match(Z80Parser::DECIMAL);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- HexNumberContext ------------------------------------------------------------------

Z80Parser::HexNumberContext::HexNumberContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Z80Parser::HexNumberContext::HEX_DIGITS_1() {
  return getToken(Z80Parser::HEX_DIGITS_1, 0);
}

tree::TerminalNode* Z80Parser::HexNumberContext::HEX_DIGITS_2() {
  return getToken(Z80Parser::HEX_DIGITS_2, 0);
}

tree::TerminalNode* Z80Parser::HexNumberContext::HEX_DIGITS_3() {
  return getToken(Z80Parser::HEX_DIGITS_3, 0);
}


size_t Z80Parser::HexNumberContext::getRuleIndex() const {
  return Z80Parser::RuleHexNumber;
}

void Z80Parser::HexNumberContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterHexNumber(this);
}

void Z80Parser::HexNumberContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitHexNumber(this);
}

Z80Parser::HexNumberContext* Z80Parser::hexNumber() {
  HexNumberContext *_localctx = _tracker.createInstance<HexNumberContext>(_ctx, getState());
  enterRule(_localctx, 682, Z80Parser::RuleHexNumber);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2586);
    _la = _input->LA(1);
    if (!(((((_la - 227) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 227)) & ((1ULL << (Z80Parser::HEX_DIGITS_1 - 227))
      | (1ULL << (Z80Parser::HEX_DIGITS_2 - 227))
      | (1ULL << (Z80Parser::HEX_DIGITS_3 - 227)))) != 0))) {
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

//----------------- CommentContext ------------------------------------------------------------------

Z80Parser::CommentContext::CommentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Z80Parser::CommentContext::COMMENT() {
  return getToken(Z80Parser::COMMENT, 0);
}


size_t Z80Parser::CommentContext::getRuleIndex() const {
  return Z80Parser::RuleComment;
}

void Z80Parser::CommentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterComment(this);
}

void Z80Parser::CommentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Z80Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitComment(this);
}

Z80Parser::CommentContext* Z80Parser::comment() {
  CommentContext *_localctx = _tracker.createInstance<CommentContext>(_ctx, getState());
  enterRule(_localctx, 684, Z80Parser::RuleComment);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2588);
    match(Z80Parser::COMMENT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

// Static vars and initialization.
std::vector<dfa::DFA> Z80Parser::_decisionToDFA;
atn::PredictionContextCache Z80Parser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN Z80Parser::_atn;
std::vector<uint16_t> Z80Parser::_serializedATN;

std::vector<std::string> Z80Parser::_ruleNames = {
  "program", "statement", "instruction", "aShadowRegister", "fShadowRegister", 
  "bShadowRegister", "cShadowRegister", "dShadowRegister", "eShadowRegister", 
  "hShadowRegister", "lShadowRegister", "aRegister", "fRegister", "afRegister", 
  "afShadowRegister", "bcShadowRegister", "deShadowRegister", "hlShadowRegister", 
  "bRegister", "cRegister", "bcRegister", "dRegister", "eRegister", "deRegister", 
  "hRegister", "lRegister", "hlRegister", "iRegister", "rRegister", "ixRegister", 
  "iyRegister", "ixHighRegister", "ixLowRegister", "iyHighRegister", "iyLowRegister", 
  "spRegister", "pcRegister", "hlPointer", "bcPointer", "dePointer", "spPointer", 
  "cPointer", "ixPointerWithOffset", "iyPointerWithOffset", "numberPointer", 
  "simpleByteRegister", "loadCommandName", "loadByteRegisterWithByteRegister", 
  "loadByteRegisterWithImmediateByte", "loadByteRegisterWithHLPointer", 
  "loadByteRegisterWithIXOffset", "loadByteRegisterWithIYOffset", "loadHLPointerWithRegister", 
  "loadIXOffsetWithRegister", "loadIYOffsetWithRegister", "loadHLPointerWithImmediateByte", 
  "loadIXOffsetWithImmediateByte", "loadIYOffsetWithImmediateByte", "loadAWithBCPointer", 
  "loadAWithDEPointer", "loadAWithNNPointer", "loadBCPointerWithA", "loadDEPointerWithA", 
  "loadNNPointerWithA", "loadAWithI", "loadAWithR", "loadIWithA", "loadRWithA", 
  "loadRegisterWithIXHigh", "loadRegisterWithIXLow", "loadRegisterWithIYHigh", 
  "loadRegisterWithIYLow", "loadIXHighWithRegister", "ixHighOrLowRegister", 
  "iyHighOrLowRegister", "loadIXNibbles", "loadIYNibbles", "loadIXLowWithRegister", 
  "loadIYHighWithRegister", "loadIYLowWithRegister", "byteLoadCommand", 
  "simpleWordRegister", "loadWordWithImmediateWord", "loadIXWithImmediateWord", 
  "loadIYWithImmediateWord", "loadWordRegisterWithNNPointer", "loadIXWithNNPointer", 
  "loadIYWithNNPointer", "loadNNPointerWithWordRegister", "loadNNPointerWithIX", 
  "loadNNPointerWithIY", "loadSPWithHL", "loadSPWithIX", "loadSPWithIY", 
  "pushCommandName", "popCommandName", "pushAndPopRegister", "pushWordRegister", 
  "pushIX", "pushIY", "popWordRegister", "popIX", "popIY", "wordLoadCommand", 
  "exchangeCommandName", "exchangeDEWithHL", "exchangeAFWithShadowAF", "exchangeMultipleWordRegisters", 
  "exchangeSPPointerWithHL", "exchangeSPPointerWithIX", "exchangeSPPointerWithIY", 
  "loadHLPointerIntoDEThenDecrementBCAndIncrementHL", "loadDEPointerWithHLPointerThenDecrementBCAndIncrementHLRepeat", 
  "loadDEPointerWithHLPointerThenDecrementBCAndHL", "loadDEPointerWithHLPointerThenDecrementBCAndHLRepeat", 
  "compareAToHLPointerThenIncrementHLAndDecrementBC", "compareAToHLPointerThenIncrementHLAndDecrementBCRepeat", 
  "compareAToHLPointerThenDecrementHLAndBC", "compareAToHLPointerThenDecrementHLAndBCRepeat", 
  "exchagneAndBlockTransfrerCommand", "addCommandName", "addWithCarryCommandName", 
  "subtractCommandName", "subtractWithBorrowCommandName", "andCommandName", 
  "orCommandName", "xorCommandName", "compareCommandName", "incrementCommandName", 
  "decrementCommandName", "addAAndRegister", "addAAndImmediateByte", "addAAndIXH", 
  "addAAndIXL", "addAAndIYH", "addAAndIYL", "addAAndHLPointer", "addAAndIXOffset", 
  "addAAndIYOffset", "addWithCarryAAndRegister", "addWithCarryAAndHLPointer", 
  "addWithCarryAAndImmediate", "addWithCarryAAndIXOffset", "addWithCarryAAndIYOffset", 
  "addWithCarryAAndIXH", "addWithCarryAAndIXL", "addWithCarryAAndIYH", "addWithCarryAAndIYL", 
  "subtractRegisterFromA", "subtractHLPointerFromA", "subtractImmediateFromA", 
  "subtractIXOffsetFromA", "subtractIYOffsetFromA", "subtractIXHighOrLowFromA", 
  "subtractIYHighOrLowFromA", "subtractWithBorrowRegisterFromA", "subtractWithBorrowHLPointerFromA", 
  "subtractWithBorrowIXOffsetFromA", "subtractWithBorrowIYOffsetFromA", 
  "subtractWithBorrowImmediateFromA", "subtractWithBorrowIXHFromA", "subtractWithBorrowIXLFromA", 
  "subtractWithBorrowIYHFromA", "subtractWithBorrowIYLFromA", "andAWithRegister", 
  "andAWithImmediate", "andAWithHLPointer", "andAWithIXOffset", "andAWithIYOffset", 
  "andAWithIXH", "andAWithIXL", "andAWithIYH", "andAWithIYL", "orAWithRegister", 
  "orAWithImmediate", "orAWithHLPointer", "orAWithIXOffset", "orAWithIYOffset", 
  "orAWithIXH", "orAWithIXL", "orAWithIYH", "orAWithIYL", "xorAWithRegister", 
  "xorAWithImmediate", "xorAWithHLPointer", "xorAWithIXOffset", "xorAWithIYOffset", 
  "xorAWithIXH", "xorAWithIXL", "xorAWithIYH", "xorAWithIYL", "compareAWithRegister", 
  "compareAWithHLPointer", "compareAWithImmediate", "compareAWithIXOffset", 
  "compareAWithIYOffset", "compareAWithIXH", "compareAWithIXL", "compareAWithIYH", 
  "compareAWithIYL", "incrementRegister", "incrementIXH", "incrementIXL", 
  "incrementIYH", "incrementIYL", "incrementHLPointer", "incrementIXOffset", 
  "incrementIYOffset", "decrementRegister", "decrementIXH", "decrementIXL", 
  "decrementIYH", "decrementIYL", "decrementHLPointer", "decrementIXOffset", 
  "decrementIYOffset", "arithmeticCommand", "decimalAdjustA", "complementA", 
  "negateA", "complementCarryFlag", "setCarryFlag", "nop", "halt", "disableInterrupts", 
  "enableInterrupts", "setInterruptMode", "arithmeticControlCommand", "addHLAndWordRegister", 
  "addWithCarryHLAndWordRegister", "subtractWithCarryWordRegisterFromHL", 
  "simpleIXAdditionRegister", "simpleIYAdditionRegister", "addIXWithRegister", 
  "addIYWithRegister", "incrementWordRegister", "incrementIX", "incrementIY", 
  "decrementWordRegister", "decrementIX", "decrementIY", "wordArithemeticCommand", 
  "rotateLeftCircularA", "rotateLeftThroughCarryA", "rotateRightCircularA", 
  "rotateRightThroughCarryA", "rotateLeftCircularCommandName", "rotateLeftThroughCarryCommandName", 
  "rotateRightCircularCommandName", "rotateRightThroughCarryCommandName", 
  "shiftLeftArithmeticCommandName", "shiftLeftLogicalCommandName", "shiftRightArithmeticCommandName", 
  "shiftRightLogicalCommandName", "rotateDigitLeftCommandName", "rotateDigitRightCommandName", 
  "rotateLeftCircularRegister", "rotateLeftCircularHLPointer", "rotateLeftCircularIXOffset", 
  "rotateLeftCircularIYOffset", "rotateLeftThroughCarryRegister", "rotateLeftThroughCarryHLPointer", 
  "rotateLeftThroughCarryIXOffset", "rotateLeftThroughCarryIYOffset", "rotateRightCircularRegister", 
  "rotateRightCircularHLPointer", "rotateRightCircularIXOffset", "rotateRightCircularIYOffset", 
  "rotateRightThroughCarryRegister", "rotateRightThroughCarryHLPointer", 
  "rotateRightThroughCarryIXOffset", "rotateRightThroughCarryIYOffset", 
  "shiftLeftArithmetic", "shiftLeftLogical", "shiftRightArithmetic", "shiftRightLogical", 
  "rotateDigitLeft", "rotateDigitRight", "rotateCommand", "bitCommandName", 
  "setCommandName", "resetBitCommandName", "testBitInRegister", "testBitInHLPointer", 
  "testBitInIXOffset", "testBitInIYOffset", "setBitInRegister", "setBitInHLPointer", 
  "setBitInIXOffset", "setBitInIYOffset", "resetBitInRegister", "resetBitHLPointer", 
  "resetBitIXOffset", "resetBitIYOffset", "bitManipulationCommand", "jumpCondition", 
  "jumpCommandName", "jumpRelativeCommandName", "jumpRelativeAndDecrementCommandName", 
  "callCommandName", "returnCommandName", "returnAndEnableInterruptCommandName", 
  "returnFromNonMaskableInterruptCommandName", "restartCommandName", "jumpToAbsoluteAddress", 
  "jumpToAbsoluteAddressGivenCondition", "jumpToRelativeAddress", "jumpToRelativeAddressGivenCondition", 
  "jumpToHL", "jumpToIX", "jumpToIY", "jumpRelativeAndDecrement", "callSubroutine", 
  "callSubroutineWithCondition", "returnFromSubroutine", "returnFromSubroutineGivenCondition", 
  "returnAndEnableInterrupt", "returnFromNonMaskableInterrupt", "restartCommand", 
  "branchCommand", "inputCommandName", "outCommandName", "inputDataIntoA", 
  "inputDataIntoRegister", "ini", "inir", "ind", "indr", "outputAIntoDataPointer", 
  "outputRegisterIntoCPointer", "outi", "otir", "outd", "otdr", "inputAndOutpuCommand", 
  "label", "orgDirective", "charNumber", "name", "number", "decimalNumber", 
  "hexNumber", "comment"
};

std::vector<std::string> Z80Parser::_literalNames = {
  "", "'A''", "'a''", "'f''", "'F''", "'b''", "'B''", "'c''", "'C''", "'d''", 
  "'D''", "'e''", "'E''", "'h''", "'H''", "'l''", "'L''", "'A'", "'a'", 
  "'F'", "'f'", "'AF'", "'af'", "'AF''", "'af''", "'BC''", "'bc''", "'DE''", 
  "'de''", "'HL''", "'hl''", "'B'", "'b'", "'c'", "'C'", "'BC'", "'bc'", 
  "'D'", "'d'", "'E'", "'e'", "'de'", "'DE'", "'h'", "'H'", "'L'", "'l'", 
  "'hl'", "'HL'", "'i'", "'I'", "'r'", "'R'", "'ix'", "'IX'", "'iy'", "'IY'", 
  "'ixh'", "'IXH'", "'ixl'", "'IXL'", "'iyh'", "'IYH'", "'iyl'", "'IYL'", 
  "'sp'", "'SP'", "'PC'", "'pc'", "'('", "')'", "'+'", "'LD'", "'ld'", "','", 
  "'push'", "'PUSH'", "'POP'", "'pop'", "'ex'", "'EX'", "'exx'", "'EXX'", 
  "'LDI'", "'ldi'", "'LDIR'", "'ldir'", "'LDD'", "'ldd'", "'LDDR'", "'lddr'", 
  "'cpi'", "'CPI'", "'cpir'", "'CPIR'", "'cpd'", "'CPD'", "'cpdr'", "'CPDR'", 
  "'add'", "'ADD'", "'adc'", "'ADC'", "'sub'", "'SUB'", "'sbc'", "'SBC'", 
  "'and'", "'AND'", "'or'", "'OR'", "'xor'", "'XOR'", "'cp'", "'CP'", "'INC'", 
  "'inc'", "'DEC'", "'dec'", "'daa'", "'DAA'", "'CPL'", "'cpl'", "'NEG'", 
  "'neg'", "'CCF'", "'ccf'", "'SCF'", "'scf'", "'NOP'", "'nop'", "'halt'", 
  "'HALT'", "'DI'", "'di'", "'ei'", "'EI'", "'IM'", "'im'", "'RLCA'", "'rlca'", 
  "'RLA'", "'rla'", "'RRCA'", "'rrca'", "'RRA'", "'rra'", "'RLC'", "'rlc'", 
  "'RL'", "'rl'", "'RRC'", "'rrc'", "'RR'", "'rr'", "'sla'", "'SLA'", "'sll'", 
  "'SLL'", "'sra'", "'SRA'", "'srl'", "'SRL'", "'RLD'", "'rld'", "'RRD'", 
  "'rrd'", "'BIT'", "'bit'", "'SET'", "'set'", "'RES'", "'res'", "'Z'", 
  "'z'", "'NZ'", "'nz'", "'NC'", "'nc'", "'PO'", "'po'", "'PE'", "'pe'", 
  "'P'", "'p'", "'M'", "'m'", "'JP'", "'jp'", "'JR'", "'jr'", "'DJNZ'", 
  "'djnz'", "'CALL'", "'call'", "'RET'", "'ret'", "'RETI'", "'reti'", "'RETN'", 
  "'retn'", "'RST'", "'rst'", "'in'", "'IN'", "'out'", "'OUT'", "'INI'", 
  "'ini'", "'INIR'", "'inir'", "'IND'", "'ind'", "'INDR'", "'indr'", "'OUTI'", 
  "'outi'", "'otir'", "'OTIR'", "'outd'", "'OUTD'", "'otdr'", "'OTDR'", 
  "':'", "'.org'", "'.ORG'"
};

std::vector<std::string> Z80Parser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "DECIMAL", "HEX_DIGITS_1", "HEX_DIGITS_2", 
  "HEX_DIGITS_3", "NAME", "CHAR", "STRING", "COMMENT", "EOL", "WS"
};

dfa::Vocabulary Z80Parser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> Z80Parser::_tokenNames;

Z80Parser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  static uint16_t serializedATNSegment0[] = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
       0x3, 0xed, 0xa21, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
       0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 
       0x7, 0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 
       0x4, 0xb, 0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 
       0xe, 0x9, 0xe, 0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 
       0x9, 0x11, 0x4, 0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 
       0x9, 0x14, 0x4, 0x15, 0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 
       0x9, 0x17, 0x4, 0x18, 0x9, 0x18, 0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 
       0x9, 0x1a, 0x4, 0x1b, 0x9, 0x1b, 0x4, 0x1c, 0x9, 0x1c, 0x4, 0x1d, 
       0x9, 0x1d, 0x4, 0x1e, 0x9, 0x1e, 0x4, 0x1f, 0x9, 0x1f, 0x4, 0x20, 
       0x9, 0x20, 0x4, 0x21, 0x9, 0x21, 0x4, 0x22, 0x9, 0x22, 0x4, 0x23, 
       0x9, 0x23, 0x4, 0x24, 0x9, 0x24, 0x4, 0x25, 0x9, 0x25, 0x4, 0x26, 
       0x9, 0x26, 0x4, 0x27, 0x9, 0x27, 0x4, 0x28, 0x9, 0x28, 0x4, 0x29, 
       0x9, 0x29, 0x4, 0x2a, 0x9, 0x2a, 0x4, 0x2b, 0x9, 0x2b, 0x4, 0x2c, 
       0x9, 0x2c, 0x4, 0x2d, 0x9, 0x2d, 0x4, 0x2e, 0x9, 0x2e, 0x4, 0x2f, 
       0x9, 0x2f, 0x4, 0x30, 0x9, 0x30, 0x4, 0x31, 0x9, 0x31, 0x4, 0x32, 
       0x9, 0x32, 0x4, 0x33, 0x9, 0x33, 0x4, 0x34, 0x9, 0x34, 0x4, 0x35, 
       0x9, 0x35, 0x4, 0x36, 0x9, 0x36, 0x4, 0x37, 0x9, 0x37, 0x4, 0x38, 
       0x9, 0x38, 0x4, 0x39, 0x9, 0x39, 0x4, 0x3a, 0x9, 0x3a, 0x4, 0x3b, 
       0x9, 0x3b, 0x4, 0x3c, 0x9, 0x3c, 0x4, 0x3d, 0x9, 0x3d, 0x4, 0x3e, 
       0x9, 0x3e, 0x4, 0x3f, 0x9, 0x3f, 0x4, 0x40, 0x9, 0x40, 0x4, 0x41, 
       0x9, 0x41, 0x4, 0x42, 0x9, 0x42, 0x4, 0x43, 0x9, 0x43, 0x4, 0x44, 
       0x9, 0x44, 0x4, 0x45, 0x9, 0x45, 0x4, 0x46, 0x9, 0x46, 0x4, 0x47, 
       0x9, 0x47, 0x4, 0x48, 0x9, 0x48, 0x4, 0x49, 0x9, 0x49, 0x4, 0x4a, 
       0x9, 0x4a, 0x4, 0x4b, 0x9, 0x4b, 0x4, 0x4c, 0x9, 0x4c, 0x4, 0x4d, 
       0x9, 0x4d, 0x4, 0x4e, 0x9, 0x4e, 0x4, 0x4f, 0x9, 0x4f, 0x4, 0x50, 
       0x9, 0x50, 0x4, 0x51, 0x9, 0x51, 0x4, 0x52, 0x9, 0x52, 0x4, 0x53, 
       0x9, 0x53, 0x4, 0x54, 0x9, 0x54, 0x4, 0x55, 0x9, 0x55, 0x4, 0x56, 
       0x9, 0x56, 0x4, 0x57, 0x9, 0x57, 0x4, 0x58, 0x9, 0x58, 0x4, 0x59, 
       0x9, 0x59, 0x4, 0x5a, 0x9, 0x5a, 0x4, 0x5b, 0x9, 0x5b, 0x4, 0x5c, 
       0x9, 0x5c, 0x4, 0x5d, 0x9, 0x5d, 0x4, 0x5e, 0x9, 0x5e, 0x4, 0x5f, 
       0x9, 0x5f, 0x4, 0x60, 0x9, 0x60, 0x4, 0x61, 0x9, 0x61, 0x4, 0x62, 
       0x9, 0x62, 0x4, 0x63, 0x9, 0x63, 0x4, 0x64, 0x9, 0x64, 0x4, 0x65, 
       0x9, 0x65, 0x4, 0x66, 0x9, 0x66, 0x4, 0x67, 0x9, 0x67, 0x4, 0x68, 
       0x9, 0x68, 0x4, 0x69, 0x9, 0x69, 0x4, 0x6a, 0x9, 0x6a, 0x4, 0x6b, 
       0x9, 0x6b, 0x4, 0x6c, 0x9, 0x6c, 0x4, 0x6d, 0x9, 0x6d, 0x4, 0x6e, 
       0x9, 0x6e, 0x4, 0x6f, 0x9, 0x6f, 0x4, 0x70, 0x9, 0x70, 0x4, 0x71, 
       0x9, 0x71, 0x4, 0x72, 0x9, 0x72, 0x4, 0x73, 0x9, 0x73, 0x4, 0x74, 
       0x9, 0x74, 0x4, 0x75, 0x9, 0x75, 0x4, 0x76, 0x9, 0x76, 0x4, 0x77, 
       0x9, 0x77, 0x4, 0x78, 0x9, 0x78, 0x4, 0x79, 0x9, 0x79, 0x4, 0x7a, 
       0x9, 0x7a, 0x4, 0x7b, 0x9, 0x7b, 0x4, 0x7c, 0x9, 0x7c, 0x4, 0x7d, 
       0x9, 0x7d, 0x4, 0x7e, 0x9, 0x7e, 0x4, 0x7f, 0x9, 0x7f, 0x4, 0x80, 
       0x9, 0x80, 0x4, 0x81, 0x9, 0x81, 0x4, 0x82, 0x9, 0x82, 0x4, 0x83, 
       0x9, 0x83, 0x4, 0x84, 0x9, 0x84, 0x4, 0x85, 0x9, 0x85, 0x4, 0x86, 
       0x9, 0x86, 0x4, 0x87, 0x9, 0x87, 0x4, 0x88, 0x9, 0x88, 0x4, 0x89, 
       0x9, 0x89, 0x4, 0x8a, 0x9, 0x8a, 0x4, 0x8b, 0x9, 0x8b, 0x4, 0x8c, 
       0x9, 0x8c, 0x4, 0x8d, 0x9, 0x8d, 0x4, 0x8e, 0x9, 0x8e, 0x4, 0x8f, 
       0x9, 0x8f, 0x4, 0x90, 0x9, 0x90, 0x4, 0x91, 0x9, 0x91, 0x4, 0x92, 
       0x9, 0x92, 0x4, 0x93, 0x9, 0x93, 0x4, 0x94, 0x9, 0x94, 0x4, 0x95, 
       0x9, 0x95, 0x4, 0x96, 0x9, 0x96, 0x4, 0x97, 0x9, 0x97, 0x4, 0x98, 
       0x9, 0x98, 0x4, 0x99, 0x9, 0x99, 0x4, 0x9a, 0x9, 0x9a, 0x4, 0x9b, 
       0x9, 0x9b, 0x4, 0x9c, 0x9, 0x9c, 0x4, 0x9d, 0x9, 0x9d, 0x4, 0x9e, 
       0x9, 0x9e, 0x4, 0x9f, 0x9, 0x9f, 0x4, 0xa0, 0x9, 0xa0, 0x4, 0xa1, 
       0x9, 0xa1, 0x4, 0xa2, 0x9, 0xa2, 0x4, 0xa3, 0x9, 0xa3, 0x4, 0xa4, 
       0x9, 0xa4, 0x4, 0xa5, 0x9, 0xa5, 0x4, 0xa6, 0x9, 0xa6, 0x4, 0xa7, 
       0x9, 0xa7, 0x4, 0xa8, 0x9, 0xa8, 0x4, 0xa9, 0x9, 0xa9, 0x4, 0xaa, 
       0x9, 0xaa, 0x4, 0xab, 0x9, 0xab, 0x4, 0xac, 0x9, 0xac, 0x4, 0xad, 
       0x9, 0xad, 0x4, 0xae, 0x9, 0xae, 0x4, 0xaf, 0x9, 0xaf, 0x4, 0xb0, 
       0x9, 0xb0, 0x4, 0xb1, 0x9, 0xb1, 0x4, 0xb2, 0x9, 0xb2, 0x4, 0xb3, 
       0x9, 0xb3, 0x4, 0xb4, 0x9, 0xb4, 0x4, 0xb5, 0x9, 0xb5, 0x4, 0xb6, 
       0x9, 0xb6, 0x4, 0xb7, 0x9, 0xb7, 0x4, 0xb8, 0x9, 0xb8, 0x4, 0xb9, 
       0x9, 0xb9, 0x4, 0xba, 0x9, 0xba, 0x4, 0xbb, 0x9, 0xbb, 0x4, 0xbc, 
       0x9, 0xbc, 0x4, 0xbd, 0x9, 0xbd, 0x4, 0xbe, 0x9, 0xbe, 0x4, 0xbf, 
       0x9, 0xbf, 0x4, 0xc0, 0x9, 0xc0, 0x4, 0xc1, 0x9, 0xc1, 0x4, 0xc2, 
       0x9, 0xc2, 0x4, 0xc3, 0x9, 0xc3, 0x4, 0xc4, 0x9, 0xc4, 0x4, 0xc5, 
       0x9, 0xc5, 0x4, 0xc6, 0x9, 0xc6, 0x4, 0xc7, 0x9, 0xc7, 0x4, 0xc8, 
       0x9, 0xc8, 0x4, 0xc9, 0x9, 0xc9, 0x4, 0xca, 0x9, 0xca, 0x4, 0xcb, 
       0x9, 0xcb, 0x4, 0xcc, 0x9, 0xcc, 0x4, 0xcd, 0x9, 0xcd, 0x4, 0xce, 
       0x9, 0xce, 0x4, 0xcf, 0x9, 0xcf, 0x4, 0xd0, 0x9, 0xd0, 0x4, 0xd1, 
       0x9, 0xd1, 0x4, 0xd2, 0x9, 0xd2, 0x4, 0xd3, 0x9, 0xd3, 0x4, 0xd4, 
       0x9, 0xd4, 0x4, 0xd5, 0x9, 0xd5, 0x4, 0xd6, 0x9, 0xd6, 0x4, 0xd7, 
       0x9, 0xd7, 0x4, 0xd8, 0x9, 0xd8, 0x4, 0xd9, 0x9, 0xd9, 0x4, 0xda, 
       0x9, 0xda, 0x4, 0xdb, 0x9, 0xdb, 0x4, 0xdc, 0x9, 0xdc, 0x4, 0xdd, 
       0x9, 0xdd, 0x4, 0xde, 0x9, 0xde, 0x4, 0xdf, 0x9, 0xdf, 0x4, 0xe0, 
       0x9, 0xe0, 0x4, 0xe1, 0x9, 0xe1, 0x4, 0xe2, 0x9, 0xe2, 0x4, 0xe3, 
       0x9, 0xe3, 0x4, 0xe4, 0x9, 0xe4, 0x4, 0xe5, 0x9, 0xe5, 0x4, 0xe6, 
       0x9, 0xe6, 0x4, 0xe7, 0x9, 0xe7, 0x4, 0xe8, 0x9, 0xe8, 0x4, 0xe9, 
       0x9, 0xe9, 0x4, 0xea, 0x9, 0xea, 0x4, 0xeb, 0x9, 0xeb, 0x4, 0xec, 
       0x9, 0xec, 0x4, 0xed, 0x9, 0xed, 0x4, 0xee, 0x9, 0xee, 0x4, 0xef, 
       0x9, 0xef, 0x4, 0xf0, 0x9, 0xf0, 0x4, 0xf1, 0x9, 0xf1, 0x4, 0xf2, 
       0x9, 0xf2, 0x4, 0xf3, 0x9, 0xf3, 0x4, 0xf4, 0x9, 0xf4, 0x4, 0xf5, 
       0x9, 0xf5, 0x4, 0xf6, 0x9, 0xf6, 0x4, 0xf7, 0x9, 0xf7, 0x4, 0xf8, 
       0x9, 0xf8, 0x4, 0xf9, 0x9, 0xf9, 0x4, 0xfa, 0x9, 0xfa, 0x4, 0xfb, 
       0x9, 0xfb, 0x4, 0xfc, 0x9, 0xfc, 0x4, 0xfd, 0x9, 0xfd, 0x4, 0xfe, 
       0x9, 0xfe, 0x4, 0xff, 0x9, 0xff, 0x4, 0x100, 0x9, 0x100, 0x4, 0x101, 
       0x9, 0x101, 0x4, 0x102, 0x9, 0x102, 0x4, 0x103, 0x9, 0x103, 0x4, 
       0x104, 0x9, 0x104, 0x4, 0x105, 0x9, 0x105, 0x4, 0x106, 0x9, 0x106, 
       0x4, 0x107, 0x9, 0x107, 0x4, 0x108, 0x9, 0x108, 0x4, 0x109, 0x9, 
       0x109, 0x4, 0x10a, 0x9, 0x10a, 0x4, 0x10b, 0x9, 0x10b, 0x4, 0x10c, 
       0x9, 0x10c, 0x4, 0x10d, 0x9, 0x10d, 0x4, 0x10e, 0x9, 0x10e, 0x4, 
       0x10f, 0x9, 0x10f, 0x4, 0x110, 0x9, 0x110, 0x4, 0x111, 0x9, 0x111, 
       0x4, 0x112, 0x9, 0x112, 0x4, 0x113, 0x9, 0x113, 0x4, 0x114, 0x9, 
       0x114, 0x4, 0x115, 0x9, 0x115, 0x4, 0x116, 0x9, 0x116, 0x4, 0x117, 
       0x9, 0x117, 0x4, 0x118, 0x9, 0x118, 0x4, 0x119, 0x9, 0x119, 0x4, 
       0x11a, 0x9, 0x11a, 0x4, 0x11b, 0x9, 0x11b, 0x4, 0x11c, 0x9, 0x11c, 
       0x4, 0x11d, 0x9, 0x11d, 0x4, 0x11e, 0x9, 0x11e, 0x4, 0x11f, 0x9, 
       0x11f, 0x4, 0x120, 0x9, 0x120, 0x4, 0x121, 0x9, 0x121, 0x4, 0x122, 
       0x9, 0x122, 0x4, 0x123, 0x9, 0x123, 0x4, 0x124, 0x9, 0x124, 0x4, 
       0x125, 0x9, 0x125, 0x4, 0x126, 0x9, 0x126, 0x4, 0x127, 0x9, 0x127, 
       0x4, 0x128, 0x9, 0x128, 0x4, 0x129, 0x9, 0x129, 0x4, 0x12a, 0x9, 
       0x12a, 0x4, 0x12b, 0x9, 0x12b, 0x4, 0x12c, 0x9, 0x12c, 0x4, 0x12d, 
       0x9, 0x12d, 0x4, 0x12e, 0x9, 0x12e, 0x4, 0x12f, 0x9, 0x12f, 0x4, 
       0x130, 0x9, 0x130, 0x4, 0x131, 0x9, 0x131, 0x4, 0x132, 0x9, 0x132, 
       0x4, 0x133, 0x9, 0x133, 0x4, 0x134, 0x9, 0x134, 0x4, 0x135, 0x9, 
       0x135, 0x4, 0x136, 0x9, 0x136, 0x4, 0x137, 0x9, 0x137, 0x4, 0x138, 
       0x9, 0x138, 0x4, 0x139, 0x9, 0x139, 0x4, 0x13a, 0x9, 0x13a, 0x4, 
       0x13b, 0x9, 0x13b, 0x4, 0x13c, 0x9, 0x13c, 0x4, 0x13d, 0x9, 0x13d, 
       0x4, 0x13e, 0x9, 0x13e, 0x4, 0x13f, 0x9, 0x13f, 0x4, 0x140, 0x9, 
       0x140, 0x4, 0x141, 0x9, 0x141, 0x4, 0x142, 0x9, 0x142, 0x4, 0x143, 
       0x9, 0x143, 0x4, 0x144, 0x9, 0x144, 0x4, 0x145, 0x9, 0x145, 0x4, 
       0x146, 0x9, 0x146, 0x4, 0x147, 0x9, 0x147, 0x4, 0x148, 0x9, 0x148, 
       0x4, 0x149, 0x9, 0x149, 0x4, 0x14a, 0x9, 0x14a, 0x4, 0x14b, 0x9, 
       0x14b, 0x4, 0x14c, 0x9, 0x14c, 0x4, 0x14d, 0x9, 0x14d, 0x4, 0x14e, 
       0x9, 0x14e, 0x4, 0x14f, 0x9, 0x14f, 0x4, 0x150, 0x9, 0x150, 0x4, 
       0x151, 0x9, 0x151, 0x4, 0x152, 0x9, 0x152, 0x4, 0x153, 0x9, 0x153, 
       0x4, 0x154, 0x9, 0x154, 0x4, 0x155, 0x9, 0x155, 0x4, 0x156, 0x9, 
       0x156, 0x4, 0x157, 0x9, 0x157, 0x4, 0x158, 0x9, 0x158, 0x3, 0x2, 
       0x3, 0x2, 0x3, 0x2, 0x6, 0x2, 0x2b4, 0xa, 0x2, 0xd, 0x2, 0xe, 0x2, 
       0x2b5, 0x3, 0x3, 0x5, 0x3, 0x2b9, 0xa, 0x3, 0x3, 0x3, 0x5, 0x3, 0x2bc, 
       0xa, 0x3, 0x3, 0x3, 0x5, 0x3, 0x2bf, 0xa, 0x3, 0x3, 0x4, 0x3, 0x4, 
       0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 
       0x4, 0x3, 0x4, 0x5, 0x4, 0x2cb, 0xa, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 
       0x6, 0x3, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x9, 
       0x3, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 0xc, 0x3, 
       0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x5, 0xd, 0x2e0, 0xa, 0xd, 0x3, 
       0xe, 0x3, 0xe, 0x3, 0xe, 0x5, 0xe, 0x2e5, 0xa, 0xe, 0x3, 0xf, 0x3, 
       0xf, 0x3, 0xf, 0x5, 0xf, 0x2ea, 0xa, 0xf, 0x3, 0x10, 0x3, 0x10, 0x3, 
       0x11, 0x3, 0x11, 0x3, 0x12, 0x3, 0x12, 0x3, 0x13, 0x3, 0x13, 0x3, 
       0x14, 0x3, 0x14, 0x3, 0x14, 0x5, 0x14, 0x2f7, 0xa, 0x14, 0x3, 0x15, 
       0x3, 0x15, 0x3, 0x15, 0x5, 0x15, 0x2fc, 0xa, 0x15, 0x3, 0x16, 0x3, 
       0x16, 0x3, 0x16, 0x5, 0x16, 0x301, 0xa, 0x16, 0x3, 0x17, 0x3, 0x17, 
       0x3, 0x17, 0x5, 0x17, 0x306, 0xa, 0x17, 0x3, 0x18, 0x3, 0x18, 0x3, 
       0x18, 0x5, 0x18, 0x30b, 0xa, 0x18, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 
       0x5, 0x19, 0x310, 0xa, 0x19, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x5, 
       0x1a, 0x315, 0xa, 0x1a, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x5, 0x1b, 
       0x31a, 0xa, 0x1b, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x5, 0x1c, 0x31f, 
       0xa, 0x1c, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1f, 
       0x3, 0x1f, 0x3, 0x20, 0x3, 0x20, 0x3, 0x21, 0x3, 0x21, 0x3, 0x22, 
       0x3, 0x22, 0x3, 0x23, 0x3, 0x23, 0x3, 0x24, 0x3, 0x24, 0x3, 0x25, 
       0x3, 0x25, 0x3, 0x26, 0x3, 0x26, 0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 
       0x3, 0x27, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x29, 
       0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 
       0x3, 0x2a, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2c, 
       0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2d, 
       0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2e, 
       0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 
       0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x5, 0x2f, 0x360, 0xa, 
       0x2f, 0x3, 0x30, 0x3, 0x30, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 
       0x31, 0x3, 0x31, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 
       0x32, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 
       0x34, 0x3, 0x34, 0x3, 0x34, 0x3, 0x34, 0x3, 0x34, 0x3, 0x35, 0x3, 
       0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x36, 0x3, 0x36, 0x3, 
       0x36, 0x3, 0x36, 0x3, 0x36, 0x3, 0x37, 0x3, 0x37, 0x3, 0x37, 0x3, 
       0x37, 0x3, 0x37, 0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 0x3, 
       0x38, 0x3, 0x39, 0x3, 0x39, 0x3, 0x39, 0x3, 0x39, 0x3, 0x39, 0x3, 
       0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3b, 0x3, 
       0x3b, 0x3, 0x3b, 0x3, 0x3b, 0x3, 0x3b, 0x3, 0x3c, 0x3, 0x3c, 0x3, 
       0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x3, 
       0x3d, 0x3, 0x3d, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 
       0x3e, 0x3, 0x3f, 0x3, 0x3f, 0x3, 0x3f, 0x3, 0x3f, 0x3, 0x3f, 0x3, 
       0x40, 0x3, 0x40, 0x3, 0x40, 0x3, 0x40, 0x3, 0x40, 0x3, 0x41, 0x3, 
       0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x42, 0x3, 0x42, 0x3, 
       0x42, 0x3, 0x42, 0x3, 0x42, 0x3, 0x43, 0x3, 0x43, 0x3, 0x43, 0x3, 
       0x43, 0x3, 0x43, 0x3, 0x44, 0x3, 0x44, 0x3, 0x44, 0x3, 0x44, 0x3, 
       0x44, 0x3, 0x45, 0x3, 0x45, 0x3, 0x45, 0x3, 0x45, 0x3, 0x45, 0x3, 
       0x46, 0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 0x3, 0x47, 0x3, 
       0x47, 0x3, 0x47, 0x3, 0x47, 0x3, 0x47, 0x3, 0x48, 0x3, 0x48, 0x3, 
       0x48, 0x3, 0x48, 0x3, 0x48, 0x3, 0x49, 0x3, 0x49, 0x3, 0x49, 0x3, 
       0x49, 0x3, 0x49, 0x3, 0x4a, 0x3, 0x4a, 0x3, 0x4a, 0x3, 0x4a, 0x3, 
       0x4a, 0x3, 0x4b, 0x3, 0x4b, 0x5, 0x4b, 0x3e8, 0xa, 0x4b, 0x3, 0x4c, 
       0x3, 0x4c, 0x5, 0x4c, 0x3ec, 0xa, 0x4c, 0x3, 0x4d, 0x3, 0x4d, 0x3, 
       0x4d, 0x3, 0x4d, 0x3, 0x4d, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 
       0x4e, 0x3, 0x4e, 0x3, 0x4f, 0x3, 0x4f, 0x3, 0x4f, 0x3, 0x4f, 0x3, 
       0x4f, 0x3, 0x50, 0x3, 0x50, 0x3, 0x50, 0x3, 0x50, 0x3, 0x50, 0x3, 
       0x51, 0x3, 0x51, 0x3, 0x51, 0x3, 0x51, 0x3, 0x51, 0x3, 0x52, 0x3, 
       0x52, 0x3, 0x52, 0x3, 0x52, 0x3, 0x52, 0x3, 0x52, 0x3, 0x52, 0x3, 
       0x52, 0x3, 0x52, 0x3, 0x52, 0x3, 0x52, 0x3, 0x52, 0x3, 0x52, 0x3, 
       0x52, 0x3, 0x52, 0x3, 0x52, 0x3, 0x52, 0x3, 0x52, 0x3, 0x52, 0x3, 
       0x52, 0x3, 0x52, 0x3, 0x52, 0x3, 0x52, 0x3, 0x52, 0x3, 0x52, 0x3, 
       0x52, 0x3, 0x52, 0x3, 0x52, 0x3, 0x52, 0x3, 0x52, 0x3, 0x52, 0x5, 
       0x52, 0x426, 0xa, 0x52, 0x3, 0x53, 0x3, 0x53, 0x3, 0x53, 0x3, 0x53, 
       0x5, 0x53, 0x42c, 0xa, 0x53, 0x3, 0x54, 0x3, 0x54, 0x3, 0x54, 0x3, 
       0x54, 0x3, 0x54, 0x3, 0x55, 0x3, 0x55, 0x3, 0x55, 0x3, 0x55, 0x3, 
       0x55, 0x3, 0x56, 0x3, 0x56, 0x3, 0x56, 0x3, 0x56, 0x3, 0x56, 0x3, 
       0x57, 0x3, 0x57, 0x3, 0x57, 0x3, 0x57, 0x3, 0x57, 0x3, 0x58, 0x3, 
       0x58, 0x3, 0x58, 0x3, 0x58, 0x3, 0x58, 0x3, 0x59, 0x3, 0x59, 0x3, 
       0x59, 0x3, 0x59, 0x3, 0x59, 0x3, 0x5a, 0x3, 0x5a, 0x3, 0x5a, 0x3, 
       0x5a, 0x3, 0x5a, 0x3, 0x5b, 0x3, 0x5b, 0x3, 0x5b, 0x3, 0x5b, 0x3, 
       0x5b, 0x3, 0x5c, 0x3, 0x5c, 0x3, 0x5c, 0x3, 0x5c, 0x3, 0x5c, 0x3, 
       0x5d, 0x3, 0x5d, 0x3, 0x5d, 0x3, 0x5d, 0x3, 0x5d, 0x3, 0x5e, 0x3, 
       0x5e, 0x3, 0x5e, 0x3, 0x5e, 0x3, 0x5e, 0x3, 0x5f, 0x3, 0x5f, 0x3, 
       0x5f, 0x3, 0x5f, 0x3, 0x5f, 0x3, 0x60, 0x3, 0x60, 0x3, 0x61, 0x3, 
       0x61, 0x3, 0x62, 0x3, 0x62, 0x3, 0x62, 0x3, 0x62, 0x3, 0x62, 0x5, 
       0x62, 0x473, 0xa, 0x62, 0x3, 0x63, 0x3, 0x63, 0x3, 0x63, 0x3, 0x64, 
       0x3, 0x64, 0x3, 0x64, 0x3, 0x65, 0x3, 0x65, 0x3, 0x65, 0x3, 0x66, 
       0x3, 0x66, 0x3, 0x66, 0x3, 0x67, 0x3, 0x67, 0x3, 0x67, 0x3, 0x68, 
       0x3, 0x68, 0x3, 0x68, 0x3, 0x69, 0x3, 0x69, 0x3, 0x69, 0x3, 0x69, 
       0x3, 0x69, 0x3, 0x69, 0x3, 0x69, 0x3, 0x69, 0x3, 0x69, 0x3, 0x69, 
       0x3, 0x69, 0x3, 0x69, 0x3, 0x69, 0x3, 0x69, 0x3, 0x69, 0x3, 0x69, 
       0x3, 0x69, 0x3, 0x69, 0x5, 0x69, 0x499, 0xa, 0x69, 0x3, 0x6a, 0x3, 
       0x6a, 0x3, 0x6b, 0x3, 0x6b, 0x3, 0x6b, 0x3, 0x6b, 0x3, 0x6b, 0x3, 
       0x6c, 0x3, 0x6c, 0x3, 0x6c, 0x3, 0x6c, 0x3, 0x6c, 0x3, 0x6d, 0x3, 
       0x6d, 0x3, 0x6e, 0x3, 0x6e, 0x3, 0x6e, 0x3, 0x6e, 0x3, 0x6e, 0x3, 
       0x6f, 0x3, 0x6f, 0x3, 0x6f, 0x3, 0x6f, 0x3, 0x6f, 0x3, 0x70, 0x3, 
       0x70, 0x3, 0x70, 0x3, 0x70, 0x3, 0x70, 0x3, 0x71, 0x3, 0x71, 0x3, 
       0x72, 0x3, 0x72, 0x3, 0x72, 0x5, 0x72, 0x4bd, 0xa, 0x72, 0x3, 0x73, 
       0x3, 0x73, 0x3, 0x73, 0x5, 0x73, 0x4c2, 0xa, 0x73, 0x3, 0x74, 0x3, 
       0x74, 0x3, 0x74, 0x5, 0x74, 0x4c7, 0xa, 0x74, 0x3, 0x75, 0x3, 0x75, 
       0x3, 0x76, 0x3, 0x76, 0x3, 0x77, 0x3, 0x77, 0x3, 0x78, 0x3, 0x78, 
       0x3, 0x79, 0x3, 0x79, 0x3, 0x79, 0x3, 0x79, 0x3, 0x79, 0x3, 0x79, 
       0x3, 0x79, 0x3, 0x79, 0x3, 0x79, 0x3, 0x79, 0x3, 0x79, 0x3, 0x79, 
       0x3, 0x79, 0x3, 0x79, 0x5, 0x79, 0x4df, 0xa, 0x79, 0x3, 0x7a, 0x3, 
       0x7a, 0x3, 0x7b, 0x3, 0x7b, 0x3, 0x7c, 0x3, 0x7c, 0x3, 0x7d, 0x3, 
       0x7d, 0x3, 0x7e, 0x3, 0x7e, 0x3, 0x7f, 0x3, 0x7f, 0x3, 0x80, 0x3, 
       0x80, 0x3, 0x81, 0x3, 0x81, 0x3, 0x82, 0x3, 0x82, 0x3, 0x83, 0x3, 
       0x83, 0x3, 0x84, 0x3, 0x84, 0x3, 0x84, 0x3, 0x84, 0x3, 0x84, 0x3, 
       0x84, 0x3, 0x84, 0x3, 0x84, 0x5, 0x84, 0x4fd, 0xa, 0x84, 0x3, 0x85, 
       0x3, 0x85, 0x3, 0x85, 0x3, 0x85, 0x3, 0x85, 0x3, 0x85, 0x3, 0x85, 
       0x3, 0x85, 0x5, 0x85, 0x507, 0xa, 0x85, 0x3, 0x86, 0x3, 0x86, 0x3, 
       0x86, 0x3, 0x86, 0x3, 0x86, 0x3, 0x86, 0x3, 0x86, 0x3, 0x86, 0x5, 
       0x86, 0x511, 0xa, 0x86, 0x3, 0x87, 0x3, 0x87, 0x3, 0x87, 0x3, 0x87, 
       0x3, 0x87, 0x3, 0x87, 0x3, 0x87, 0x3, 0x87, 0x5, 0x87, 0x51b, 0xa, 
       0x87, 0x3, 0x88, 0x3, 0x88, 0x3, 0x88, 0x3, 0x88, 0x3, 0x88, 0x3, 
       0x88, 0x3, 0x88, 0x3, 0x88, 0x5, 0x88, 0x525, 0xa, 0x88, 0x3, 0x89, 
       0x3, 0x89, 0x3, 0x89, 0x3, 0x89, 0x3, 0x89, 0x3, 0x89, 0x3, 0x89, 
       0x3, 0x89, 0x5, 0x89, 0x52f, 0xa, 0x89, 0x3, 0x8a, 0x3, 0x8a, 0x3, 
       0x8a, 0x3, 0x8a, 0x3, 0x8a, 0x3, 0x8a, 0x3, 0x8a, 0x3, 0x8a, 0x5, 
       0x8a, 0x539, 0xa, 0x8a, 0x3, 0x8b, 0x3, 0x8b, 0x3, 0x8b, 0x3, 0x8b, 
       0x3, 0x8b, 0x3, 0x8b, 0x3, 0x8b, 0x3, 0x8b, 0x5, 0x8b, 0x543, 0xa, 
       0x8b, 0x3, 0x8c, 0x3, 0x8c, 0x3, 0x8c, 0x3, 0x8c, 0x3, 0x8c, 0x3, 
       0x8c, 0x3, 0x8c, 0x3, 0x8c, 0x5, 0x8c, 0x54d, 0xa, 0x8c, 0x3, 0x8d, 
       0x3, 0x8d, 0x3, 0x8d, 0x3, 0x8d, 0x3, 0x8d, 0x3, 0x8d, 0x3, 0x8d, 
       0x3, 0x8d, 0x5, 0x8d, 0x557, 0xa, 0x8d, 0x3, 0x8e, 0x3, 0x8e, 0x3, 
       0x8e, 0x3, 0x8e, 0x3, 0x8e, 0x3, 0x8e, 0x3, 0x8e, 0x3, 0x8e, 0x5, 
       0x8e, 0x561, 0xa, 0x8e, 0x3, 0x8f, 0x3, 0x8f, 0x3, 0x8f, 0x3, 0x8f, 
       0x3, 0x8f, 0x3, 0x8f, 0x3, 0x8f, 0x3, 0x8f, 0x5, 0x8f, 0x56b, 0xa, 
       0x8f, 0x3, 0x90, 0x3, 0x90, 0x3, 0x90, 0x3, 0x90, 0x3, 0x90, 0x3, 
       0x90, 0x3, 0x90, 0x3, 0x90, 0x5, 0x90, 0x575, 0xa, 0x90, 0x3, 0x91, 
       0x3, 0x91, 0x3, 0x91, 0x3, 0x91, 0x3, 0x91, 0x3, 0x91, 0x3, 0x91, 
       0x3, 0x91, 0x5, 0x91, 0x57f, 0xa, 0x91, 0x3, 0x92, 0x3, 0x92, 0x3, 
       0x92, 0x3, 0x92, 0x3, 0x92, 0x3, 0x92, 0x3, 0x92, 0x3, 0x92, 0x5, 
       0x92, 0x589, 0xa, 0x92, 0x3, 0x93, 0x3, 0x93, 0x3, 0x93, 0x3, 0x93, 
       0x3, 0x93, 0x3, 0x93, 0x3, 0x93, 0x3, 0x93, 0x5, 0x93, 0x593, 0xa, 
       0x93, 0x3, 0x94, 0x3, 0x94, 0x3, 0x94, 0x3, 0x94, 0x3, 0x94, 0x3, 
       0x94, 0x3, 0x94, 0x3, 0x94, 0x5, 0x94, 0x59d, 0xa, 0x94, 0x3, 0x95, 
       0x3, 0x95, 0x3, 0x95, 0x3, 0x95, 0x3, 0x95, 0x3, 0x95, 0x3, 0x95, 
       0x3, 0x95, 0x5, 0x95, 0x5a7, 0xa, 0x95, 0x3, 0x96, 0x3, 0x96, 0x3, 
       0x96, 0x3, 0x96, 0x3, 0x96, 0x3, 0x96, 0x3, 0x96, 0x3, 0x96, 0x5, 
       0x96, 0x5b1, 0xa, 0x96, 0x3, 0x97, 0x3, 0x97, 0x3, 0x97, 0x3, 0x97, 
       0x3, 0x97, 0x3, 0x97, 0x3, 0x97, 0x3, 0x97, 0x5, 0x97, 0x5bb, 0xa, 
       0x97, 0x3, 0x98, 0x3, 0x98, 0x3, 0x98, 0x3, 0x98, 0x3, 0x98, 0x3, 
       0x98, 0x3, 0x98, 0x3, 0x98, 0x5, 0x98, 0x5c5, 0xa, 0x98, 0x3, 0x99, 
       0x3, 0x99, 0x3, 0x99, 0x3, 0x99, 0x3, 0x99, 0x3, 0x99, 0x3, 0x99, 
       0x3, 0x99, 0x5, 0x99, 0x5cf, 0xa, 0x99, 0x3, 0x9a, 0x3, 0x9a, 0x3, 
       0x9a, 0x3, 0x9a, 0x3, 0x9a, 0x3, 0x9a, 0x3, 0x9a, 0x3, 0x9a, 0x5, 
       0x9a, 0x5d9, 0xa, 0x9a, 0x3, 0x9b, 0x3, 0x9b, 0x3, 0x9b, 0x3, 0x9b, 
       0x3, 0x9b, 0x3, 0x9b, 0x3, 0x9b, 0x3, 0x9b, 0x5, 0x9b, 0x5e3, 0xa, 
       0x9b, 0x3, 0x9c, 0x3, 0x9c, 0x3, 0x9c, 0x3, 0x9c, 0x3, 0x9c, 0x3, 
       0x9c, 0x3, 0x9c, 0x3, 0x9c, 0x5, 0x9c, 0x5ed, 0xa, 0x9c, 0x3, 0x9d, 
       0x3, 0x9d, 0x3, 0x9d, 0x3, 0x9d, 0x3, 0x9d, 0x3, 0x9d, 0x3, 0x9d, 
       0x3, 0x9d, 0x5, 0x9d, 0x5f7, 0xa, 0x9d, 0x3, 0x9e, 0x3, 0x9e, 0x3, 
       0x9e, 0x3, 0x9e, 0x3, 0x9e, 0x3, 0x9e, 0x3, 0x9e, 0x3, 0x9e, 0x5, 
       0x9e, 0x601, 0xa, 0x9e, 0x3, 0x9f, 0x3, 0x9f, 0x3, 0x9f, 0x3, 0x9f, 
       0x3, 0x9f, 0x3, 0x9f, 0x3, 0x9f, 0x3, 0x9f, 0x5, 0x9f, 0x60b, 0xa, 
       0x9f, 0x3, 0xa0, 0x3, 0xa0, 0x3, 0xa0, 0x3, 0xa0, 0x3, 0xa0, 0x3, 
       0xa0, 0x3, 0xa0, 0x3, 0xa0, 0x5, 0xa0, 0x615, 0xa, 0xa0, 0x3, 0xa1, 
       0x3, 0xa1, 0x3, 0xa1, 0x3, 0xa1, 0x3, 0xa1, 0x3, 0xa1, 0x3, 0xa1, 
       0x3, 0xa1, 0x5, 0xa1, 0x61f, 0xa, 0xa1, 0x3, 0xa2, 0x3, 0xa2, 0x3, 
       0xa2, 0x3, 0xa2, 0x3, 0xa2, 0x3, 0xa2, 0x3, 0xa2, 0x3, 0xa2, 0x5, 
       0xa2, 0x629, 0xa, 0xa2, 0x3, 0xa3, 0x3, 0xa3, 0x3, 0xa3, 0x3, 0xa3, 
       0x3, 0xa3, 0x3, 0xa3, 0x3, 0xa3, 0x3, 0xa3, 0x5, 0xa3, 0x633, 0xa, 
       0xa3, 0x3, 0xa4, 0x3, 0xa4, 0x3, 0xa4, 0x3, 0xa4, 0x3, 0xa4, 0x3, 
       0xa4, 0x3, 0xa4, 0x3, 0xa4, 0x5, 0xa4, 0x63d, 0xa, 0xa4, 0x3, 0xa5, 
       0x3, 0xa5, 0x3, 0xa5, 0x3, 0xa5, 0x3, 0xa5, 0x3, 0xa5, 0x3, 0xa5, 
       0x3, 0xa5, 0x5, 0xa5, 0x647, 0xa, 0xa5, 0x3, 0xa6, 0x3, 0xa6, 0x3, 
       0xa6, 0x3, 0xa6, 0x3, 0xa6, 0x3, 0xa6, 0x3, 0xa6, 0x3, 0xa6, 0x5, 
       0xa6, 0x651, 0xa, 0xa6, 0x3, 0xa7, 0x3, 0xa7, 0x3, 0xa7, 0x3, 0xa7, 
       0x3, 0xa7, 0x3, 0xa7, 0x3, 0xa7, 0x3, 0xa7, 0x5, 0xa7, 0x65b, 0xa, 
       0xa7, 0x3, 0xa8, 0x3, 0xa8, 0x3, 0xa8, 0x3, 0xa8, 0x3, 0xa8, 0x3, 
       0xa8, 0x3, 0xa8, 0x3, 0xa8, 0x5, 0xa8, 0x665, 0xa, 0xa8, 0x3, 0xa9, 
       0x3, 0xa9, 0x3, 0xa9, 0x3, 0xa9, 0x3, 0xa9, 0x3, 0xa9, 0x3, 0xa9, 
       0x3, 0xa9, 0x5, 0xa9, 0x66f, 0xa, 0xa9, 0x3, 0xaa, 0x3, 0xaa, 0x3, 
       0xaa, 0x3, 0xaa, 0x3, 0xaa, 0x3, 0xaa, 0x3, 0xaa, 0x3, 0xaa, 0x5, 
       0xaa, 0x679, 0xa, 0xaa, 0x3, 0xab, 0x3, 0xab, 0x3, 0xab, 0x3, 0xab, 
       0x3, 0xab, 0x3, 0xab, 0x3, 0xab, 0x3, 0xab, 0x5, 0xab, 0x683, 0xa, 
       0xab, 0x3, 0xac, 0x3, 0xac, 0x3, 0xac, 0x3, 0xac, 0x3, 0xac, 0x3, 
       0xac, 0x3, 0xac, 0x3, 0xac, 0x5, 0xac, 0x68d, 0xa, 0xac, 0x3, 0xad, 
       0x3, 0xad, 0x3, 0xad, 0x3, 0xad, 0x3, 0xad, 0x3, 0xad, 0x3, 0xad, 
       0x3, 0xad, 0x5, 0xad, 0x697, 0xa, 0xad, 0x3, 0xae, 0x3, 0xae, 0x3, 
       0xae, 0x3, 0xae, 0x3, 0xae, 0x3, 0xae, 0x3, 0xae, 0x3, 0xae, 0x5, 
       0xae, 0x6a1, 0xa, 0xae, 0x3, 0xaf, 0x3, 0xaf, 0x3, 0xaf, 0x3, 0xaf, 
       0x3, 0xaf, 0x3, 0xaf, 0x3, 0xaf, 0x3, 0xaf, 0x5, 0xaf, 0x6ab, 0xa, 
       0xaf, 0x3, 0xb0, 0x3, 0xb0, 0x3, 0xb0, 0x3, 0xb0, 0x3, 0xb0, 0x3, 
       0xb0, 0x3, 0xb0, 0x3, 0xb0, 0x5, 0xb0, 0x6b5, 0xa, 0xb0, 0x3, 0xb1, 
       0x3, 0xb1, 0x3, 0xb1, 0x3, 0xb1, 0x3, 0xb1, 0x3, 0xb1, 0x3, 0xb1, 
       0x3, 0xb1, 0x5, 0xb1, 0x6bf, 0xa, 0xb1, 0x3, 0xb2, 0x3, 0xb2, 0x3, 
       0xb2, 0x3, 0xb2, 0x3, 0xb2, 0x3, 0xb2, 0x3, 0xb2, 0x3, 0xb2, 0x5, 
       0xb2, 0x6c9, 0xa, 0xb2, 0x3, 0xb3, 0x3, 0xb3, 0x3, 0xb3, 0x3, 0xb3, 
       0x3, 0xb3, 0x3, 0xb3, 0x3, 0xb3, 0x3, 0xb3, 0x5, 0xb3, 0x6d3, 0xa, 
       0xb3, 0x3, 0xb4, 0x3, 0xb4, 0x3, 0xb4, 0x3, 0xb4, 0x3, 0xb4, 0x3, 
       0xb4, 0x3, 0xb4, 0x3, 0xb4, 0x5, 0xb4, 0x6dd, 0xa, 0xb4, 0x3, 0xb5, 
       0x3, 0xb5, 0x3, 0xb5, 0x3, 0xb5, 0x3, 0xb5, 0x3, 0xb5, 0x3, 0xb5, 
       0x3, 0xb5, 0x5, 0xb5, 0x6e7, 0xa, 0xb5, 0x3, 0xb6, 0x3, 0xb6, 0x3, 
       0xb6, 0x3, 0xb6, 0x3, 0xb6, 0x3, 0xb6, 0x3, 0xb6, 0x3, 0xb6, 0x5, 
       0xb6, 0x6f1, 0xa, 0xb6, 0x3, 0xb7, 0x3, 0xb7, 0x3, 0xb7, 0x3, 0xb7, 
       0x3, 0xb7, 0x3, 0xb7, 0x3, 0xb7, 0x3, 0xb7, 0x5, 0xb7, 0x6fb, 0xa, 
       0xb7, 0x3, 0xb8, 0x3, 0xb8, 0x3, 0xb8, 0x3, 0xb8, 0x3, 0xb8, 0x3, 
       0xb8, 0x3, 0xb8, 0x3, 0xb8, 0x5, 0xb8, 0x705, 0xa, 0xb8, 0x3, 0xb9, 
       0x3, 0xb9, 0x3, 0xb9, 0x3, 0xb9, 0x3, 0xb9, 0x3, 0xb9, 0x3, 0xb9, 
       0x3, 0xb9, 0x5, 0xb9, 0x70f, 0xa, 0xb9, 0x3, 0xba, 0x3, 0xba, 0x3, 
       0xba, 0x3, 0xba, 0x3, 0xba, 0x3, 0xba, 0x3, 0xba, 0x3, 0xba, 0x5, 
       0xba, 0x719, 0xa, 0xba, 0x3, 0xbb, 0x3, 0xbb, 0x3, 0xbb, 0x3, 0xbb, 
       0x3, 0xbb, 0x3, 0xbb, 0x3, 0xbb, 0x3, 0xbb, 0x5, 0xbb, 0x723, 0xa, 
       0xbb, 0x3, 0xbc, 0x3, 0xbc, 0x3, 0xbc, 0x3, 0xbc, 0x3, 0xbc, 0x3, 
       0xbc, 0x3, 0xbc, 0x3, 0xbc, 0x5, 0xbc, 0x72d, 0xa, 0xbc, 0x3, 0xbd, 
       0x3, 0xbd, 0x3, 0xbd, 0x3, 0xbd, 0x3, 0xbd, 0x3, 0xbd, 0x3, 0xbd, 
       0x3, 0xbd, 0x5, 0xbd, 0x737, 0xa, 0xbd, 0x3, 0xbe, 0x3, 0xbe, 0x3, 
       0xbe, 0x3, 0xbe, 0x3, 0xbe, 0x3, 0xbe, 0x3, 0xbe, 0x3, 0xbe, 0x5, 
       0xbe, 0x741, 0xa, 0xbe, 0x3, 0xbf, 0x3, 0xbf, 0x3, 0xbf, 0x3, 0xbf, 
       0x3, 0xbf, 0x3, 0xbf, 0x3, 0xbf, 0x3, 0xbf, 0x5, 0xbf, 0x74b, 0xa, 
       0xbf, 0x3, 0xc0, 0x3, 0xc0, 0x3, 0xc0, 0x3, 0xc0, 0x3, 0xc0, 0x3, 
       0xc0, 0x3, 0xc0, 0x3, 0xc0, 0x5, 0xc0, 0x755, 0xa, 0xc0, 0x3, 0xc1, 
       0x3, 0xc1, 0x3, 0xc1, 0x3, 0xc1, 0x3, 0xc1, 0x3, 0xc1, 0x3, 0xc1, 
       0x3, 0xc1, 0x5, 0xc1, 0x75f, 0xa, 0xc1, 0x3, 0xc2, 0x3, 0xc2, 0x3, 
       0xc2, 0x3, 0xc2, 0x3, 0xc2, 0x3, 0xc2, 0x3, 0xc2, 0x3, 0xc2, 0x5, 
       0xc2, 0x769, 0xa, 0xc2, 0x3, 0xc3, 0x3, 0xc3, 0x3, 0xc3, 0x3, 0xc3, 
       0x3, 0xc3, 0x3, 0xc3, 0x3, 0xc3, 0x3, 0xc3, 0x5, 0xc3, 0x773, 0xa, 
       0xc3, 0x3, 0xc4, 0x3, 0xc4, 0x3, 0xc4, 0x3, 0xc4, 0x3, 0xc4, 0x3, 
       0xc4, 0x3, 0xc4, 0x3, 0xc4, 0x5, 0xc4, 0x77d, 0xa, 0xc4, 0x3, 0xc5, 
       0x3, 0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x3, 0xc5, 
       0x3, 0xc5, 0x5, 0xc5, 0x787, 0xa, 0xc5, 0x3, 0xc6, 0x3, 0xc6, 0x3, 
       0xc6, 0x3, 0xc6, 0x3, 0xc6, 0x3, 0xc6, 0x3, 0xc6, 0x3, 0xc6, 0x5, 
       0xc6, 0x791, 0xa, 0xc6, 0x3, 0xc7, 0x3, 0xc7, 0x3, 0xc7, 0x3, 0xc7, 
       0x3, 0xc7, 0x3, 0xc7, 0x3, 0xc7, 0x3, 0xc7, 0x5, 0xc7, 0x79b, 0xa, 
       0xc7, 0x3, 0xc8, 0x3, 0xc8, 0x3, 0xc8, 0x3, 0xc8, 0x3, 0xc8, 0x3, 
       0xc8, 0x3, 0xc8, 0x3, 0xc8, 0x5, 0xc8, 0x7a5, 0xa, 0xc8, 0x3, 0xc9, 
       0x3, 0xc9, 0x3, 0xc9, 0x3, 0xc9, 0x3, 0xc9, 0x3, 0xc9, 0x3, 0xc9, 
       0x3, 0xc9, 0x5, 0xc9, 0x7af, 0xa, 0xc9, 0x3, 0xca, 0x3, 0xca, 0x3, 
       0xca, 0x3, 0xcb, 0x3, 0xcb, 0x3, 0xcb, 0x3, 0xcc, 0x3, 0xcc, 0x3, 
       0xcc, 0x3, 0xcd, 0x3, 0xcd, 0x3, 0xcd, 0x3, 0xce, 0x3, 0xce, 0x3, 
       0xce, 0x3, 0xcf, 0x3, 0xcf, 0x3, 0xcf, 0x3, 0xd0, 0x3, 0xd0, 0x3, 
       0xd0, 0x3, 0xd1, 0x3, 0xd1, 0x3, 0xd1, 0x3, 0xd2, 0x3, 0xd2, 0x3, 
       0xd2, 0x3, 0xd3, 0x3, 0xd3, 0x3, 0xd3, 0x3, 0xd4, 0x3, 0xd4, 0x3, 
       0xd4, 0x3, 0xd5, 0x3, 0xd5, 0x3, 0xd5, 0x3, 0xd6, 0x3, 0xd6, 0x3, 
       0xd6, 0x3, 0xd7, 0x3, 0xd7, 0x3, 0xd7, 0x3, 0xd8, 0x3, 0xd8, 0x3, 
       0xd8, 0x3, 0xd9, 0x3, 0xd9, 0x3, 0xd9, 0x3, 0xda, 0x3, 0xda, 0x3, 
       0xda, 0x3, 0xda, 0x3, 0xda, 0x3, 0xda, 0x3, 0xda, 0x3, 0xda, 0x3, 
       0xda, 0x3, 0xda, 0x3, 0xda, 0x3, 0xda, 0x3, 0xda, 0x3, 0xda, 0x3, 
       0xda, 0x3, 0xda, 0x3, 0xda, 0x3, 0xda, 0x3, 0xda, 0x3, 0xda, 0x3, 
       0xda, 0x3, 0xda, 0x3, 0xda, 0x3, 0xda, 0x3, 0xda, 0x3, 0xda, 0x3, 
       0xda, 0x3, 0xda, 0x3, 0xda, 0x3, 0xda, 0x3, 0xda, 0x3, 0xda, 0x3, 
       0xda, 0x3, 0xda, 0x3, 0xda, 0x3, 0xda, 0x3, 0xda, 0x3, 0xda, 0x3, 
       0xda, 0x3, 0xda, 0x3, 0xda, 0x3, 0xda, 0x3, 0xda, 0x3, 0xda, 0x3, 
       0xda, 0x3, 0xda, 0x3, 0xda, 0x3, 0xda, 0x3, 0xda, 0x3, 0xda, 0x3, 
       0xda, 0x3, 0xda, 0x3, 0xda, 0x3, 0xda, 0x3, 0xda, 0x3, 0xda, 0x3, 
       0xda, 0x3, 0xda, 0x3, 0xda, 0x3, 0xda, 0x3, 0xda, 0x3, 0xda, 0x3, 
       0xda, 0x3, 0xda, 0x3, 0xda, 0x3, 0xda, 0x3, 0xda, 0x3, 0xda, 0x3, 
       0xda, 0x3, 0xda, 0x3, 0xda, 0x3, 0xda, 0x3, 0xda, 0x3, 0xda, 0x3, 
       0xda, 0x3, 0xda, 0x3, 0xda, 0x3, 0xda, 0x3, 0xda, 0x3, 0xda, 0x3, 
       0xda, 0x3, 0xda, 0x3, 0xda, 0x3, 0xda, 0x3, 0xda, 0x3, 0xda, 0x5, 
       0xda, 0x837, 0xa, 0xda, 0x3, 0xdb, 0x3, 0xdb, 0x3, 0xdc, 0x3, 0xdc, 
       0x3, 0xdd, 0x3, 0xdd, 0x3, 0xde, 0x3, 0xde, 0x3, 0xdf, 0x3, 0xdf, 
       0x3, 0xe0, 0x3, 0xe0, 0x3, 0xe1, 0x3, 0xe1, 0x3, 0xe2, 0x3, 0xe2, 
       0x3, 0xe3, 0x3, 0xe3, 0x3, 0xe4, 0x3, 0xe4, 0x3, 0xe4, 0x3, 0xe5, 
       0x3, 0xe5, 0x3, 0xe5, 0x3, 0xe5, 0x3, 0xe5, 0x3, 0xe5, 0x3, 0xe5, 
       0x3, 0xe5, 0x3, 0xe5, 0x3, 0xe5, 0x5, 0xe5, 0x858, 0xa, 0xe5, 0x3, 
       0xe6, 0x3, 0xe6, 0x3, 0xe6, 0x3, 0xe6, 0x3, 0xe6, 0x3, 0xe7, 0x3, 
       0xe7, 0x3, 0xe7, 0x3, 0xe7, 0x3, 0xe7, 0x3, 0xe8, 0x3, 0xe8, 0x3, 
       0xe8, 0x3, 0xe8, 0x3, 0xe8, 0x3, 0xe9, 0x3, 0xe9, 0x3, 0xe9, 0x3, 
       0xe9, 0x3, 0xe9, 0x5, 0xe9, 0x86e, 0xa, 0xe9, 0x3, 0xea, 0x3, 0xea, 
       0x3, 0xea, 0x3, 0xea, 0x3, 0xea, 0x5, 0xea, 0x875, 0xa, 0xea, 0x3, 
       0xeb, 0x3, 0xeb, 0x3, 0xeb, 0x3, 0xeb, 0x3, 0xeb, 0x3, 0xec, 0x3, 
       0xec, 0x3, 0xec, 0x3, 0xec, 0x3, 0xec, 0x3, 0xed, 0x3, 0xed, 0x3, 
       0xed, 0x3, 0xee, 0x3, 0xee, 0x3, 0xee, 0x3, 0xef, 0x3, 0xef, 0x3, 
       0xef, 0x3, 0xf0, 0x3, 0xf0, 0x3, 0xf0, 0x3, 0xf1, 0x3, 0xf1, 0x3, 
       0xf1, 0x3, 0xf2, 0x3, 0xf2, 0x3, 0xf2, 0x3, 0xf3, 0x3, 0xf3, 0x3, 
       0xf3, 0x3, 0xf3, 0x3, 0xf3, 0x3, 0xf3, 0x3, 0xf3, 0x3, 0xf3, 0x3, 
       0xf3, 0x3, 0xf3, 0x3, 0xf3, 0x3, 0xf3, 0x5, 0xf3, 0x89f, 0xa, 0xf3, 
       0x3, 0xf4, 0x3, 0xf4, 0x3, 0xf5, 0x3, 0xf5, 0x3, 0xf6, 0x3, 0xf6, 
       0x3, 0xf7, 0x3, 0xf7, 0x3, 0xf8, 0x3, 0xf8, 0x3, 0xf9, 0x3, 0xf9, 
       0x3, 0xfa, 0x3, 0xfa, 0x3, 0xfb, 0x3, 0xfb, 0x3, 0xfc, 0x3, 0xfc, 
       0x3, 0xfd, 0x3, 0xfd, 0x3, 0xfe, 0x3, 0xfe, 0x3, 0xff, 0x3, 0xff, 
       0x3, 0x100, 0x3, 0x100, 0x3, 0x101, 0x3, 0x101, 0x3, 0x102, 0x3, 
       0x102, 0x3, 0x102, 0x3, 0x103, 0x3, 0x103, 0x3, 0x103, 0x3, 0x104, 
       0x3, 0x104, 0x3, 0x104, 0x3, 0x105, 0x3, 0x105, 0x3, 0x105, 0x3, 
       0x106, 0x3, 0x106, 0x3, 0x106, 0x3, 0x107, 0x3, 0x107, 0x3, 0x107, 
       0x3, 0x108, 0x3, 0x108, 0x3, 0x108, 0x3, 0x109, 0x3, 0x109, 0x3, 
       0x109, 0x3, 0x10a, 0x3, 0x10a, 0x3, 0x10a, 0x3, 0x10b, 0x3, 0x10b, 
       0x3, 0x10b, 0x3, 0x10c, 0x3, 0x10c, 0x3, 0x10c, 0x3, 0x10d, 0x3, 
       0x10d, 0x3, 0x10d, 0x3, 0x10e, 0x3, 0x10e, 0x3, 0x10e, 0x3, 0x10f, 
       0x3, 0x10f, 0x3, 0x10f, 0x3, 0x110, 0x3, 0x110, 0x3, 0x110, 0x3, 
       0x111, 0x3, 0x111, 0x3, 0x111, 0x3, 0x112, 0x3, 0x112, 0x3, 0x112, 
       0x3, 0x113, 0x3, 0x113, 0x3, 0x113, 0x3, 0x114, 0x3, 0x114, 0x3, 
       0x114, 0x3, 0x115, 0x3, 0x115, 0x3, 0x115, 0x3, 0x116, 0x3, 0x116, 
       0x3, 0x117, 0x3, 0x117, 0x3, 0x118, 0x3, 0x118, 0x3, 0x118, 0x3, 
       0x118, 0x3, 0x118, 0x3, 0x118, 0x3, 0x118, 0x3, 0x118, 0x3, 0x118, 
       0x3, 0x118, 0x3, 0x118, 0x3, 0x118, 0x3, 0x118, 0x3, 0x118, 0x3, 
       0x118, 0x3, 0x118, 0x3, 0x118, 0x3, 0x118, 0x3, 0x118, 0x3, 0x118, 
       0x3, 0x118, 0x3, 0x118, 0x3, 0x118, 0x3, 0x118, 0x3, 0x118, 0x3, 
       0x118, 0x5, 0x118, 0x917, 0xa, 0x118, 0x3, 0x119, 0x3, 0x119, 0x3, 
       0x11a, 0x3, 0x11a, 0x3, 0x11b, 0x3, 0x11b, 0x3, 0x11c, 0x3, 0x11c, 
       0x3, 0x11c, 0x3, 0x11c, 0x3, 0x11c, 0x3, 0x11d, 0x3, 0x11d, 0x3, 
       0x11d, 0x3, 0x11d, 0x3, 0x11d, 0x3, 0x11e, 0x3, 0x11e, 0x3, 0x11e, 
       0x3, 0x11e, 0x3, 0x11e, 0x3, 0x11f, 0x3, 0x11f, 0x3, 0x11f, 0x3, 
       0x11f, 0x3, 0x11f, 0x3, 0x120, 0x3, 0x120, 0x3, 0x120, 0x3, 0x120, 
       0x3, 0x120, 0x3, 0x121, 0x3, 0x121, 0x3, 0x121, 0x3, 0x121, 0x3, 
       0x121, 0x3, 0x122, 0x3, 0x122, 0x3, 0x122, 0x3, 0x122, 0x3, 0x122, 
       0x3, 0x123, 0x3, 0x123, 0x3, 0x123, 0x3, 0x123, 0x3, 0x123, 0x3, 
       0x124, 0x3, 0x124, 0x3, 0x124, 0x3, 0x124, 0x3, 0x124, 0x3, 0x125, 
       0x3, 0x125, 0x3, 0x125, 0x3, 0x125, 0x3, 0x125, 0x3, 0x126, 0x3, 
       0x126, 0x3, 0x126, 0x3, 0x126, 0x3, 0x126, 0x3, 0x127, 0x3, 0x127, 
       0x3, 0x127, 0x3, 0x127, 0x3, 0x127, 0x3, 0x128, 0x3, 0x128, 0x3, 
       0x128, 0x3, 0x128, 0x3, 0x128, 0x3, 0x128, 0x3, 0x128, 0x3, 0x128, 
       0x3, 0x128, 0x3, 0x128, 0x3, 0x128, 0x3, 0x128, 0x5, 0x128, 0x967, 
       0xa, 0x128, 0x3, 0x129, 0x3, 0x129, 0x3, 0x129, 0x3, 0x129, 0x3, 
       0x129, 0x3, 0x129, 0x3, 0x129, 0x3, 0x129, 0x5, 0x129, 0x971, 0xa, 
       0x129, 0x3, 0x12a, 0x3, 0x12a, 0x3, 0x12b, 0x3, 0x12b, 0x3, 0x12c, 
       0x3, 0x12c, 0x3, 0x12d, 0x3, 0x12d, 0x3, 0x12e, 0x3, 0x12e, 0x3, 
       0x12f, 0x3, 0x12f, 0x3, 0x130, 0x3, 0x130, 0x3, 0x131, 0x3, 0x131, 
       0x3, 0x132, 0x3, 0x132, 0x3, 0x132, 0x3, 0x133, 0x3, 0x133, 0x3, 
       0x133, 0x3, 0x133, 0x3, 0x134, 0x3, 0x134, 0x3, 0x134, 0x3, 0x135, 
       0x3, 0x135, 0x3, 0x135, 0x3, 0x135, 0x3, 0x136, 0x3, 0x136, 0x3, 
       0x136, 0x3, 0x136, 0x3, 0x136, 0x3, 0x136, 0x5, 0x136, 0x997, 0xa, 
       0x136, 0x3, 0x137, 0x3, 0x137, 0x3, 0x137, 0x3, 0x137, 0x3, 0x137, 
       0x3, 0x137, 0x3, 0x137, 0x3, 0x137, 0x5, 0x137, 0x9a1, 0xa, 0x137, 
       0x3, 0x138, 0x3, 0x138, 0x3, 0x138, 0x3, 0x138, 0x3, 0x138, 0x3, 
       0x138, 0x3, 0x138, 0x3, 0x138, 0x5, 0x138, 0x9ab, 0xa, 0x138, 0x3, 
       0x139, 0x3, 0x139, 0x3, 0x139, 0x3, 0x13a, 0x3, 0x13a, 0x3, 0x13a, 
       0x3, 0x13b, 0x3, 0x13b, 0x3, 0x13b, 0x3, 0x13b, 0x3, 0x13c, 0x3, 
       0x13c, 0x3, 0x13d, 0x3, 0x13d, 0x3, 0x13d, 0x3, 0x13e, 0x3, 0x13e, 
       0x3, 0x13f, 0x3, 0x13f, 0x3, 0x140, 0x3, 0x140, 0x3, 0x140, 0x3, 
       0x141, 0x3, 0x141, 0x3, 0x141, 0x3, 0x141, 0x3, 0x141, 0x3, 0x141, 
       0x3, 0x141, 0x3, 0x141, 0x3, 0x141, 0x3, 0x141, 0x3, 0x141, 0x3, 
       0x141, 0x3, 0x141, 0x3, 0x141, 0x3, 0x141, 0x5, 0x141, 0x9d2, 0xa, 
       0x141, 0x3, 0x142, 0x3, 0x142, 0x3, 0x143, 0x3, 0x143, 0x3, 0x144, 
       0x3, 0x144, 0x3, 0x144, 0x3, 0x144, 0x3, 0x144, 0x3, 0x145, 0x3, 
       0x145, 0x3, 0x145, 0x3, 0x145, 0x3, 0x145, 0x3, 0x146, 0x3, 0x146, 
       0x3, 0x147, 0x3, 0x147, 0x3, 0x148, 0x3, 0x148, 0x3, 0x149, 0x3, 
       0x149, 0x3, 0x14a, 0x3, 0x14a, 0x3, 0x14a, 0x3, 0x14a, 0x3, 0x14a, 
       0x3, 0x14b, 0x3, 0x14b, 0x3, 0x14b, 0x3, 0x14b, 0x3, 0x14b, 0x3, 
       0x14c, 0x3, 0x14c, 0x3, 0x14d, 0x3, 0x14d, 0x3, 0x14e, 0x3, 0x14e, 
       0x3, 0x14f, 0x3, 0x14f, 0x3, 0x150, 0x3, 0x150, 0x3, 0x150, 0x3, 
       0x150, 0x3, 0x150, 0x3, 0x150, 0x3, 0x150, 0x3, 0x150, 0x3, 0x150, 
       0x3, 0x150, 0x3, 0x150, 0x3, 0x150, 0x5, 0x150, 0xa08, 0xa, 0x150, 
       0x3, 0x151, 0x3, 0x151, 0x5, 0x151, 0xa0c, 0xa, 0x151, 0x3, 0x152, 
       0x3, 0x152, 0x3, 0x152, 0x3, 0x153, 0x3, 0x153, 0x3, 0x154, 0x3, 
       0x154, 0x3, 0x155, 0x3, 0x155, 0x3, 0x155, 0x3, 0x155, 0x5, 0x155, 
       0xa19, 0xa, 0x155, 0x3, 0x156, 0x3, 0x156, 0x3, 0x157, 0x3, 0x157, 
       0x3, 0x158, 0x3, 0x158, 0x3, 0x158, 0x2, 0x2, 0x159, 0x2, 0x4, 0x6, 
       0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 
       0x20, 0x22, 0x24, 0x26, 0x28, 0x2a, 0x2c, 0x2e, 0x30, 0x32, 0x34, 
       0x36, 0x38, 0x3a, 0x3c, 0x3e, 0x40, 0x42, 0x44, 0x46, 0x48, 0x4a, 
       0x4c, 0x4e, 0x50, 0x52, 0x54, 0x56, 0x58, 0x5a, 0x5c, 0x5e, 0x60, 
       0x62, 0x64, 0x66, 0x68, 0x6a, 0x6c, 0x6e, 0x70, 0x72, 0x74, 0x76, 
       0x78, 0x7a, 0x7c, 0x7e, 0x80, 0x82, 0x84, 0x86, 0x88, 0x8a, 0x8c, 
       0x8e, 0x90, 0x92, 0x94, 0x96, 0x98, 0x9a, 0x9c, 0x9e, 0xa0, 0xa2, 
       0xa4, 0xa6, 0xa8, 0xaa, 0xac, 0xae, 0xb0, 0xb2, 0xb4, 0xb6, 0xb8, 
       0xba, 0xbc, 0xbe, 0xc0, 0xc2, 0xc4, 0xc6, 0xc8, 0xca, 0xcc, 0xce, 
       0xd0, 0xd2, 0xd4, 0xd6, 0xd8, 0xda, 0xdc, 0xde, 0xe0, 0xe2, 0xe4, 
       0xe6, 0xe8, 0xea, 0xec, 0xee, 0xf0, 0xf2, 0xf4, 0xf6, 0xf8, 0xfa, 
       0xfc, 0xfe, 0x100, 0x102, 0x104, 0x106, 0x108, 0x10a, 0x10c, 0x10e, 
       0x110, 0x112, 0x114, 0x116, 0x118, 0x11a, 0x11c, 0x11e, 0x120, 0x122, 
       0x124, 0x126, 0x128, 0x12a, 0x12c, 0x12e, 0x130, 0x132, 0x134, 0x136, 
       0x138, 0x13a, 0x13c, 0x13e, 0x140, 0x142, 0x144, 0x146, 0x148, 0x14a, 
       0x14c, 0x14e, 0x150, 0x152, 0x154, 0x156, 0x158, 0x15a, 0x15c, 0x15e, 
       0x160, 0x162, 0x164, 0x166, 0x168, 0x16a, 0x16c, 0x16e, 0x170, 0x172, 
       0x174, 0x176, 0x178, 0x17a, 0x17c, 0x17e, 0x180, 0x182, 0x184, 0x186, 
       0x188, 0x18a, 0x18c, 0x18e, 0x190, 0x192, 0x194, 0x196, 0x198, 0x19a, 
       0x19c, 0x19e, 0x1a0, 0x1a2, 0x1a4, 0x1a6, 0x1a8, 0x1aa, 0x1ac, 0x1ae, 
       0x1b0, 0x1b2, 0x1b4, 0x1b6, 0x1b8, 0x1ba, 0x1bc, 0x1be, 0x1c0, 0x1c2, 
       0x1c4, 0x1c6, 0x1c8, 0x1ca, 0x1cc, 0x1ce, 0x1d0, 0x1d2, 0x1d4, 0x1d6, 
       0x1d8, 0x1da, 0x1dc, 0x1de, 0x1e0, 0x1e2, 0x1e4, 0x1e6, 0x1e8, 0x1ea, 
       0x1ec, 0x1ee, 0x1f0, 0x1f2, 0x1f4, 0x1f6, 0x1f8, 0x1fa, 0x1fc, 0x1fe, 
       0x200, 0x202, 0x204, 0x206, 0x208, 0x20a, 0x20c, 0x20e, 0x210, 0x212, 
       0x214, 0x216, 0x218, 0x21a, 0x21c, 0x21e, 0x220, 0x222, 0x224, 0x226, 
       0x228, 0x22a, 0x22c, 0x22e, 0x230, 0x232, 0x234, 0x236, 0x238, 0x23a, 
       0x23c, 0x23e, 0x240, 0x242, 0x244, 0x246, 0x248, 0x24a, 0x24c, 0x24e, 
       0x250, 0x252, 0x254, 0x256, 0x258, 0x25a, 0x25c, 0x25e, 0x260, 0x262, 
       0x264, 0x266, 0x268, 0x26a, 0x26c, 0x26e, 0x270, 0x272, 0x274, 0x276, 
       0x278, 0x27a, 0x27c, 0x27e, 0x280, 0x282, 0x284, 0x286, 0x288, 0x28a, 
       0x28c, 0x28e, 0x290, 0x292, 0x294, 0x296, 0x298, 0x29a, 0x29c, 0x29e, 
       0x2a0, 0x2a2, 0x2a4, 0x2a6, 0x2a8, 0x2aa, 0x2ac, 0x2ae, 0x2, 0x63, 
       0x3, 0x2, 0x3, 0x4, 0x3, 0x2, 0x5, 0x6, 0x3, 0x2, 0x7, 0x8, 0x3, 
       0x2, 0x9, 0xa, 0x3, 0x2, 0xb, 0xc, 0x3, 0x2, 0xd, 0xe, 0x3, 0x2, 
       0xf, 0x10, 0x3, 0x2, 0x11, 0x12, 0x3, 0x2, 0x19, 0x1a, 0x3, 0x2, 
       0x1b, 0x1c, 0x3, 0x2, 0x1d, 0x1e, 0x3, 0x2, 0x1f, 0x20, 0x3, 0x2, 
       0x33, 0x34, 0x3, 0x2, 0x35, 0x36, 0x3, 0x2, 0x37, 0x38, 0x3, 0x2, 
       0x39, 0x3a, 0x3, 0x2, 0x3b, 0x3c, 0x3, 0x2, 0x3d, 0x3e, 0x3, 0x2, 
       0x3f, 0x40, 0x3, 0x2, 0x41, 0x42, 0x3, 0x2, 0x43, 0x44, 0x3, 0x2, 
       0x45, 0x46, 0x3, 0x2, 0x4a, 0x4b, 0x3, 0x2, 0x4d, 0x4e, 0x3, 0x2, 
       0x4f, 0x50, 0x3, 0x2, 0x51, 0x52, 0x3, 0x2, 0x53, 0x54, 0x3, 0x2, 
       0x55, 0x56, 0x3, 0x2, 0x5d, 0x5e, 0x3, 0x2, 0x5f, 0x60, 0x3, 0x2, 
       0x61, 0x62, 0x3, 0x2, 0x63, 0x64, 0x3, 0x2, 0x65, 0x66, 0x3, 0x2, 
       0x67, 0x68, 0x3, 0x2, 0x69, 0x6a, 0x3, 0x2, 0x6b, 0x6c, 0x3, 0x2, 
       0x6d, 0x6e, 0x3, 0x2, 0x6f, 0x70, 0x3, 0x2, 0x71, 0x72, 0x3, 0x2, 
       0x73, 0x74, 0x3, 0x2, 0x75, 0x76, 0x3, 0x2, 0x77, 0x78, 0x3, 0x2, 
       0x79, 0x7a, 0x3, 0x2, 0x7b, 0x7c, 0x3, 0x2, 0x7d, 0x7e, 0x3, 0x2, 
       0x7f, 0x80, 0x3, 0x2, 0x81, 0x82, 0x3, 0x2, 0x83, 0x84, 0x3, 0x2, 
       0x85, 0x86, 0x3, 0x2, 0x87, 0x88, 0x3, 0x2, 0x89, 0x8a, 0x3, 0x2, 
       0x8b, 0x8c, 0x3, 0x2, 0x8d, 0x8e, 0x3, 0x2, 0x8f, 0x90, 0x3, 0x2, 
       0x91, 0x92, 0x3, 0x2, 0x93, 0x94, 0x3, 0x2, 0x95, 0x96, 0x3, 0x2, 
       0x97, 0x98, 0x3, 0x2, 0x99, 0x9a, 0x3, 0x2, 0x9b, 0x9c, 0x3, 0x2, 
       0x9d, 0x9e, 0x3, 0x2, 0x9f, 0xa0, 0x3, 0x2, 0xa1, 0xa2, 0x3, 0x2, 
       0xa3, 0xa4, 0x3, 0x2, 0xa5, 0xa6, 0x3, 0x2, 0xa7, 0xa8, 0x3, 0x2, 
       0xa9, 0xaa, 0x3, 0x2, 0xab, 0xac, 0x3, 0x2, 0xad, 0xae, 0x3, 0x2, 
       0xaf, 0xb0, 0x3, 0x2, 0xb1, 0xb2, 0x3, 0x2, 0x23, 0x24, 0x3, 0x2, 
       0xb3, 0xb4, 0x3, 0x2, 0xb5, 0xb6, 0x3, 0x2, 0xb7, 0xb8, 0x3, 0x2, 
       0xb9, 0xba, 0x3, 0x2, 0xbb, 0xbc, 0x3, 0x2, 0xbd, 0xbe, 0x3, 0x2, 
       0xbf, 0xc0, 0x3, 0x2, 0xc1, 0xc2, 0x3, 0x2, 0xc3, 0xc4, 0x3, 0x2, 
       0xc5, 0xc6, 0x3, 0x2, 0xc7, 0xc8, 0x3, 0x2, 0xc9, 0xca, 0x3, 0x2, 
       0xcb, 0xcc, 0x3, 0x2, 0xcd, 0xce, 0x3, 0x2, 0xcf, 0xd0, 0x3, 0x2, 
       0xd1, 0xd2, 0x3, 0x2, 0xd3, 0xd4, 0x3, 0x2, 0xd5, 0xd6, 0x3, 0x2, 
       0xd7, 0xd8, 0x3, 0x2, 0xd9, 0xda, 0x3, 0x2, 0xdb, 0xdc, 0x3, 0x2, 
       0xdd, 0xde, 0x3, 0x2, 0xdf, 0xe0, 0x3, 0x2, 0xe2, 0xe3, 0x3, 0x2, 
       0xe5, 0xe7, 0x2, 0xa41, 0x2, 0x2b3, 0x3, 0x2, 0x2, 0x2, 0x4, 0x2b8, 
       0x3, 0x2, 0x2, 0x2, 0x6, 0x2ca, 0x3, 0x2, 0x2, 0x2, 0x8, 0x2cc, 0x3, 
       0x2, 0x2, 0x2, 0xa, 0x2ce, 0x3, 0x2, 0x2, 0x2, 0xc, 0x2d0, 0x3, 0x2, 
       0x2, 0x2, 0xe, 0x2d2, 0x3, 0x2, 0x2, 0x2, 0x10, 0x2d4, 0x3, 0x2, 
       0x2, 0x2, 0x12, 0x2d6, 0x3, 0x2, 0x2, 0x2, 0x14, 0x2d8, 0x3, 0x2, 
       0x2, 0x2, 0x16, 0x2da, 0x3, 0x2, 0x2, 0x2, 0x18, 0x2df, 0x3, 0x2, 
       0x2, 0x2, 0x1a, 0x2e4, 0x3, 0x2, 0x2, 0x2, 0x1c, 0x2e9, 0x3, 0x2, 
       0x2, 0x2, 0x1e, 0x2eb, 0x3, 0x2, 0x2, 0x2, 0x20, 0x2ed, 0x3, 0x2, 
       0x2, 0x2, 0x22, 0x2ef, 0x3, 0x2, 0x2, 0x2, 0x24, 0x2f1, 0x3, 0x2, 
       0x2, 0x2, 0x26, 0x2f6, 0x3, 0x2, 0x2, 0x2, 0x28, 0x2fb, 0x3, 0x2, 
       0x2, 0x2, 0x2a, 0x300, 0x3, 0x2, 0x2, 0x2, 0x2c, 0x305, 0x3, 0x2, 
       0x2, 0x2, 0x2e, 0x30a, 0x3, 0x2, 0x2, 0x2, 0x30, 0x30f, 0x3, 0x2, 
       0x2, 0x2, 0x32, 0x314, 0x3, 0x2, 0x2, 0x2, 0x34, 0x319, 0x3, 0x2, 
       0x2, 0x2, 0x36, 0x31e, 0x3, 0x2, 0x2, 0x2, 0x38, 0x320, 0x3, 0x2, 
       0x2, 0x2, 0x3a, 0x322, 0x3, 0x2, 0x2, 0x2, 0x3c, 0x324, 0x3, 0x2, 
       0x2, 0x2, 0x3e, 0x326, 0x3, 0x2, 0x2, 0x2, 0x40, 0x328, 0x3, 0x2, 
       0x2, 0x2, 0x42, 0x32a, 0x3, 0x2, 0x2, 0x2, 0x44, 0x32c, 0x3, 0x2, 
       0x2, 0x2, 0x46, 0x32e, 0x3, 0x2, 0x2, 0x2, 0x48, 0x330, 0x3, 0x2, 
       0x2, 0x2, 0x4a, 0x332, 0x3, 0x2, 0x2, 0x2, 0x4c, 0x334, 0x3, 0x2, 
       0x2, 0x2, 0x4e, 0x338, 0x3, 0x2, 0x2, 0x2, 0x50, 0x33c, 0x3, 0x2, 
       0x2, 0x2, 0x52, 0x340, 0x3, 0x2, 0x2, 0x2, 0x54, 0x344, 0x3, 0x2, 
       0x2, 0x2, 0x56, 0x348, 0x3, 0x2, 0x2, 0x2, 0x58, 0x34e, 0x3, 0x2, 
       0x2, 0x2, 0x5a, 0x354, 0x3, 0x2, 0x2, 0x2, 0x5c, 0x35f, 0x3, 0x2, 
       0x2, 0x2, 0x5e, 0x361, 0x3, 0x2, 0x2, 0x2, 0x60, 0x363, 0x3, 0x2, 
       0x2, 0x2, 0x62, 0x368, 0x3, 0x2, 0x2, 0x2, 0x64, 0x36d, 0x3, 0x2, 
       0x2, 0x2, 0x66, 0x372, 0x3, 0x2, 0x2, 0x2, 0x68, 0x377, 0x3, 0x2, 
       0x2, 0x2, 0x6a, 0x37c, 0x3, 0x2, 0x2, 0x2, 0x6c, 0x381, 0x3, 0x2, 
       0x2, 0x2, 0x6e, 0x386, 0x3, 0x2, 0x2, 0x2, 0x70, 0x38b, 0x3, 0x2, 
       0x2, 0x2, 0x72, 0x390, 0x3, 0x2, 0x2, 0x2, 0x74, 0x395, 0x3, 0x2, 
       0x2, 0x2, 0x76, 0x39a, 0x3, 0x2, 0x2, 0x2, 0x78, 0x39f, 0x3, 0x2, 
       0x2, 0x2, 0x7a, 0x3a4, 0x3, 0x2, 0x2, 0x2, 0x7c, 0x3a9, 0x3, 0x2, 
       0x2, 0x2, 0x7e, 0x3ae, 0x3, 0x2, 0x2, 0x2, 0x80, 0x3b3, 0x3, 0x2, 
       0x2, 0x2, 0x82, 0x3b8, 0x3, 0x2, 0x2, 0x2, 0x84, 0x3bd, 0x3, 0x2, 
       0x2, 0x2, 0x86, 0x3c2, 0x3, 0x2, 0x2, 0x2, 0x88, 0x3c7, 0x3, 0x2, 
       0x2, 0x2, 0x8a, 0x3cc, 0x3, 0x2, 0x2, 0x2, 0x8c, 0x3d1, 0x3, 0x2, 
       0x2, 0x2, 0x8e, 0x3d6, 0x3, 0x2, 0x2, 0x2, 0x90, 0x3db, 0x3, 0x2, 
       0x2, 0x2, 0x92, 0x3e0, 0x3, 0x2, 0x2, 0x2, 0x94, 0x3e7, 0x3, 0x2, 
       0x2, 0x2, 0x96, 0x3eb, 0x3, 0x2, 0x2, 0x2, 0x98, 0x3ed, 0x3, 0x2, 
       0x2, 0x2, 0x9a, 0x3f2, 0x3, 0x2, 0x2, 0x2, 0x9c, 0x3f7, 0x3, 0x2, 
       0x2, 0x2, 0x9e, 0x3fc, 0x3, 0x2, 0x2, 0x2, 0xa0, 0x401, 0x3, 0x2, 
       0x2, 0x2, 0xa2, 0x425, 0x3, 0x2, 0x2, 0x2, 0xa4, 0x42b, 0x3, 0x2, 
       0x2, 0x2, 0xa6, 0x42d, 0x3, 0x2, 0x2, 0x2, 0xa8, 0x432, 0x3, 0x2, 
       0x2, 0x2, 0xaa, 0x437, 0x3, 0x2, 0x2, 0x2, 0xac, 0x43c, 0x3, 0x2, 
       0x2, 0x2, 0xae, 0x441, 0x3, 0x2, 0x2, 0x2, 0xb0, 0x446, 0x3, 0x2, 
       0x2, 0x2, 0xb2, 0x44b, 0x3, 0x2, 0x2, 0x2, 0xb4, 0x450, 0x3, 0x2, 
       0x2, 0x2, 0xb6, 0x455, 0x3, 0x2, 0x2, 0x2, 0xb8, 0x45a, 0x3, 0x2, 
       0x2, 0x2, 0xba, 0x45f, 0x3, 0x2, 0x2, 0x2, 0xbc, 0x464, 0x3, 0x2, 
       0x2, 0x2, 0xbe, 0x469, 0x3, 0x2, 0x2, 0x2, 0xc0, 0x46b, 0x3, 0x2, 
       0x2, 0x2, 0xc2, 0x472, 0x3, 0x2, 0x2, 0x2, 0xc4, 0x474, 0x3, 0x2, 
       0x2, 0x2, 0xc6, 0x477, 0x3, 0x2, 0x2, 0x2, 0xc8, 0x47a, 0x3, 0x2, 
       0x2, 0x2, 0xca, 0x47d, 0x3, 0x2, 0x2, 0x2, 0xcc, 0x480, 0x3, 0x2, 
       0x2, 0x2, 0xce, 0x483, 0x3, 0x2, 0x2, 0x2, 0xd0, 0x498, 0x3, 0x2, 
       0x2, 0x2, 0xd2, 0x49a, 0x3, 0x2, 0x2, 0x2, 0xd4, 0x49c, 0x3, 0x2, 
       0x2, 0x2, 0xd6, 0x4a1, 0x3, 0x2, 0x2, 0x2, 0xd8, 0x4a6, 0x3, 0x2, 
       0x2, 0x2, 0xda, 0x4a8, 0x3, 0x2, 0x2, 0x2, 0xdc, 0x4ad, 0x3, 0x2, 
       0x2, 0x2, 0xde, 0x4b2, 0x3, 0x2, 0x2, 0x2, 0xe0, 0x4b7, 0x3, 0x2, 
       0x2, 0x2, 0xe2, 0x4bc, 0x3, 0x2, 0x2, 0x2, 0xe4, 0x4c1, 0x3, 0x2, 
       0x2, 0x2, 0xe6, 0x4c6, 0x3, 0x2, 0x2, 0x2, 0xe8, 0x4c8, 0x3, 0x2, 
       0x2, 0x2, 0xea, 0x4ca, 0x3, 0x2, 0x2, 0x2, 0xec, 0x4cc, 0x3, 0x2, 
       0x2, 0x2, 0xee, 0x4ce, 0x3, 0x2, 0x2, 0x2, 0xf0, 0x4de, 0x3, 0x2, 
       0x2, 0x2, 0xf2, 0x4e0, 0x3, 0x2, 0x2, 0x2, 0xf4, 0x4e2, 0x3, 0x2, 
       0x2, 0x2, 0xf6, 0x4e4, 0x3, 0x2, 0x2, 0x2, 0xf8, 0x4e6, 0x3, 0x2, 
       0x2, 0x2, 0xfa, 0x4e8, 0x3, 0x2, 0x2, 0x2, 0xfc, 0x4ea, 0x3, 0x2, 
       0x2, 0x2, 0xfe, 0x4ec, 0x3, 0x2, 0x2, 0x2, 0x100, 0x4ee, 0x3, 0x2, 
       0x2, 0x2, 0x102, 0x4f0, 0x3, 0x2, 0x2, 0x2, 0x104, 0x4f2, 0x3, 0x2, 
       0x2, 0x2, 0x106, 0x4fc, 0x3, 0x2, 0x2, 0x2, 0x108, 0x506, 0x3, 0x2, 
       0x2, 0x2, 0x10a, 0x510, 0x3, 0x2, 0x2, 0x2, 0x10c, 0x51a, 0x3, 0x2, 
       0x2, 0x2, 0x10e, 0x524, 0x3, 0x2, 0x2, 0x2, 0x110, 0x52e, 0x3, 0x2, 
       0x2, 0x2, 0x112, 0x538, 0x3, 0x2, 0x2, 0x2, 0x114, 0x542, 0x3, 0x2, 
       0x2, 0x2, 0x116, 0x54c, 0x3, 0x2, 0x2, 0x2, 0x118, 0x556, 0x3, 0x2, 
       0x2, 0x2, 0x11a, 0x560, 0x3, 0x2, 0x2, 0x2, 0x11c, 0x56a, 0x3, 0x2, 
       0x2, 0x2, 0x11e, 0x574, 0x3, 0x2, 0x2, 0x2, 0x120, 0x57e, 0x3, 0x2, 
       0x2, 0x2, 0x122, 0x588, 0x3, 0x2, 0x2, 0x2, 0x124, 0x592, 0x3, 0x2, 
       0x2, 0x2, 0x126, 0x59c, 0x3, 0x2, 0x2, 0x2, 0x128, 0x5a6, 0x3, 0x2, 
       0x2, 0x2, 0x12a, 0x5b0, 0x3, 0x2, 0x2, 0x2, 0x12c, 0x5ba, 0x3, 0x2, 
       0x2, 0x2, 0x12e, 0x5c4, 0x3, 0x2, 0x2, 0x2, 0x130, 0x5ce, 0x3, 0x2, 
       0x2, 0x2, 0x132, 0x5d8, 0x3, 0x2, 0x2, 0x2, 0x134, 0x5e2, 0x3, 0x2, 
       0x2, 0x2, 0x136, 0x5ec, 0x3, 0x2, 0x2, 0x2, 0x138, 0x5f6, 0x3, 0x2, 
       0x2, 0x2, 0x13a, 0x600, 0x3, 0x2, 0x2, 0x2, 0x13c, 0x60a, 0x3, 0x2, 
       0x2, 0x2, 0x13e, 0x614, 0x3, 0x2, 0x2, 0x2, 0x140, 0x61e, 0x3, 0x2, 
       0x2, 0x2, 0x142, 0x628, 0x3, 0x2, 0x2, 0x2, 0x144, 0x632, 0x3, 0x2, 
       0x2, 0x2, 0x146, 0x63c, 0x3, 0x2, 0x2, 0x2, 0x148, 0x646, 0x3, 0x2, 
       0x2, 0x2, 0x14a, 0x650, 0x3, 0x2, 0x2, 0x2, 0x14c, 0x65a, 0x3, 0x2, 
       0x2, 0x2, 0x14e, 0x664, 0x3, 0x2, 0x2, 0x2, 0x150, 0x66e, 0x3, 0x2, 
       0x2, 0x2, 0x152, 0x678, 0x3, 0x2, 0x2, 0x2, 0x154, 0x682, 0x3, 0x2, 
       0x2, 0x2, 0x156, 0x68c, 0x3, 0x2, 0x2, 0x2, 0x158, 0x696, 0x3, 0x2, 
       0x2, 0x2, 0x15a, 0x6a0, 0x3, 0x2, 0x2, 0x2, 0x15c, 0x6aa, 0x3, 0x2, 
       0x2, 0x2, 0x15e, 0x6b4, 0x3, 0x2, 0x2, 0x2, 0x160, 0x6be, 0x3, 0x2, 
       0x2, 0x2, 0x162, 0x6c8, 0x3, 0x2, 0x2, 0x2, 0x164, 0x6d2, 0x3, 0x2, 
       0x2, 0x2, 0x166, 0x6dc, 0x3, 0x2, 0x2, 0x2, 0x168, 0x6e6, 0x3, 0x2, 
       0x2, 0x2, 0x16a, 0x6f0, 0x3, 0x2, 0x2, 0x2, 0x16c, 0x6fa, 0x3, 0x2, 
       0x2, 0x2, 0x16e, 0x704, 0x3, 0x2, 0x2, 0x2, 0x170, 0x70e, 0x3, 0x2, 
       0x2, 0x2, 0x172, 0x718, 0x3, 0x2, 0x2, 0x2, 0x174, 0x722, 0x3, 0x2, 
       0x2, 0x2, 0x176, 0x72c, 0x3, 0x2, 0x2, 0x2, 0x178, 0x736, 0x3, 0x2, 
       0x2, 0x2, 0x17a, 0x740, 0x3, 0x2, 0x2, 0x2, 0x17c, 0x74a, 0x3, 0x2, 
       0x2, 0x2, 0x17e, 0x754, 0x3, 0x2, 0x2, 0x2, 0x180, 0x75e, 0x3, 0x2, 
       0x2, 0x2, 0x182, 0x768, 0x3, 0x2, 0x2, 0x2, 0x184, 0x772, 0x3, 0x2, 
       0x2, 0x2, 0x186, 0x77c, 0x3, 0x2, 0x2, 0x2, 0x188, 0x786, 0x3, 0x2, 
       0x2, 0x2, 0x18a, 0x790, 0x3, 0x2, 0x2, 0x2, 0x18c, 0x79a, 0x3, 0x2, 
       0x2, 0x2, 0x18e, 0x7a4, 0x3, 0x2, 0x2, 0x2, 0x190, 0x7ae, 0x3, 0x2, 
       0x2, 0x2, 0x192, 0x7b0, 0x3, 0x2, 0x2, 0x2, 0x194, 0x7b3, 0x3, 0x2, 
       0x2, 0x2, 0x196, 0x7b6, 0x3, 0x2, 0x2, 0x2, 0x198, 0x7b9, 0x3, 0x2, 
       0x2, 0x2, 0x19a, 0x7bc, 0x3, 0x2, 0x2, 0x2, 0x19c, 0x7bf, 0x3, 0x2, 
       0x2, 0x2, 0x19e, 0x7c2, 0x3, 0x2, 0x2, 0x2, 0x1a0, 0x7c5, 0x3, 0x2, 
       0x2, 0x2, 0x1a2, 0x7c8, 0x3, 0x2, 0x2, 0x2, 0x1a4, 0x7cb, 0x3, 0x2, 
       0x2, 0x2, 0x1a6, 0x7ce, 0x3, 0x2, 0x2, 0x2, 0x1a8, 0x7d1, 0x3, 0x2, 
       0x2, 0x2, 0x1aa, 0x7d4, 0x3, 0x2, 0x2, 0x2, 0x1ac, 0x7d7, 0x3, 0x2, 
       0x2, 0x2, 0x1ae, 0x7da, 0x3, 0x2, 0x2, 0x2, 0x1b0, 0x7dd, 0x3, 0x2, 
       0x2, 0x2, 0x1b2, 0x836, 0x3, 0x2, 0x2, 0x2, 0x1b4, 0x838, 0x3, 0x2, 
       0x2, 0x2, 0x1b6, 0x83a, 0x3, 0x2, 0x2, 0x2, 0x1b8, 0x83c, 0x3, 0x2, 
       0x2, 0x2, 0x1ba, 0x83e, 0x3, 0x2, 0x2, 0x2, 0x1bc, 0x840, 0x3, 0x2, 
       0x2, 0x2, 0x1be, 0x842, 0x3, 0x2, 0x2, 0x2, 0x1c0, 0x844, 0x3, 0x2, 
       0x2, 0x2, 0x1c2, 0x846, 0x3, 0x2, 0x2, 0x2, 0x1c4, 0x848, 0x3, 0x2, 
       0x2, 0x2, 0x1c6, 0x84a, 0x3, 0x2, 0x2, 0x2, 0x1c8, 0x857, 0x3, 0x2, 
       0x2, 0x2, 0x1ca, 0x859, 0x3, 0x2, 0x2, 0x2, 0x1cc, 0x85e, 0x3, 0x2, 
       0x2, 0x2, 0x1ce, 0x863, 0x3, 0x2, 0x2, 0x2, 0x1d0, 0x86d, 0x3, 0x2, 
       0x2, 0x2, 0x1d2, 0x874, 0x3, 0x2, 0x2, 0x2, 0x1d4, 0x876, 0x3, 0x2, 
       0x2, 0x2, 0x1d6, 0x87b, 0x3, 0x2, 0x2, 0x2, 0x1d8, 0x880, 0x3, 0x2, 
       0x2, 0x2, 0x1da, 0x883, 0x3, 0x2, 0x2, 0x2, 0x1dc, 0x886, 0x3, 0x2, 
       0x2, 0x2, 0x1de, 0x889, 0x3, 0x2, 0x2, 0x2, 0x1e0, 0x88c, 0x3, 0x2, 
       0x2, 0x2, 0x1e2, 0x88f, 0x3, 0x2, 0x2, 0x2, 0x1e4, 0x89e, 0x3, 0x2, 
       0x2, 0x2, 0x1e6, 0x8a0, 0x3, 0x2, 0x2, 0x2, 0x1e8, 0x8a2, 0x3, 0x2, 
       0x2, 0x2, 0x1ea, 0x8a4, 0x3, 0x2, 0x2, 0x2, 0x1ec, 0x8a6, 0x3, 0x2, 
       0x2, 0x2, 0x1ee, 0x8a8, 0x3, 0x2, 0x2, 0x2, 0x1f0, 0x8aa, 0x3, 0x2, 
       0x2, 0x2, 0x1f2, 0x8ac, 0x3, 0x2, 0x2, 0x2, 0x1f4, 0x8ae, 0x3, 0x2, 
       0x2, 0x2, 0x1f6, 0x8b0, 0x3, 0x2, 0x2, 0x2, 0x1f8, 0x8b2, 0x3, 0x2, 
       0x2, 0x2, 0x1fa, 0x8b4, 0x3, 0x2, 0x2, 0x2, 0x1fc, 0x8b6, 0x3, 0x2, 
       0x2, 0x2, 0x1fe, 0x8b8, 0x3, 0x2, 0x2, 0x2, 0x200, 0x8ba, 0x3, 0x2, 
       0x2, 0x2, 0x202, 0x8bc, 0x3, 0x2, 0x2, 0x2, 0x204, 0x8bf, 0x3, 0x2, 
       0x2, 0x2, 0x206, 0x8c2, 0x3, 0x2, 0x2, 0x2, 0x208, 0x8c5, 0x3, 0x2, 
       0x2, 0x2, 0x20a, 0x8c8, 0x3, 0x2, 0x2, 0x2, 0x20c, 0x8cb, 0x3, 0x2, 
       0x2, 0x2, 0x20e, 0x8ce, 0x3, 0x2, 0x2, 0x2, 0x210, 0x8d1, 0x3, 0x2, 
       0x2, 0x2, 0x212, 0x8d4, 0x3, 0x2, 0x2, 0x2, 0x214, 0x8d7, 0x3, 0x2, 
       0x2, 0x2, 0x216, 0x8da, 0x3, 0x2, 0x2, 0x2, 0x218, 0x8dd, 0x3, 0x2, 
       0x2, 0x2, 0x21a, 0x8e0, 0x3, 0x2, 0x2, 0x2, 0x21c, 0x8e3, 0x3, 0x2, 
       0x2, 0x2, 0x21e, 0x8e6, 0x3, 0x2, 0x2, 0x2, 0x220, 0x8e9, 0x3, 0x2, 
       0x2, 0x2, 0x222, 0x8ec, 0x3, 0x2, 0x2, 0x2, 0x224, 0x8ef, 0x3, 0x2, 
       0x2, 0x2, 0x226, 0x8f2, 0x3, 0x2, 0x2, 0x2, 0x228, 0x8f5, 0x3, 0x2, 
       0x2, 0x2, 0x22a, 0x8f8, 0x3, 0x2, 0x2, 0x2, 0x22c, 0x8fa, 0x3, 0x2, 
       0x2, 0x2, 0x22e, 0x916, 0x3, 0x2, 0x2, 0x2, 0x230, 0x918, 0x3, 0x2, 
       0x2, 0x2, 0x232, 0x91a, 0x3, 0x2, 0x2, 0x2, 0x234, 0x91c, 0x3, 0x2, 
       0x2, 0x2, 0x236, 0x91e, 0x3, 0x2, 0x2, 0x2, 0x238, 0x923, 0x3, 0x2, 
       0x2, 0x2, 0x23a, 0x928, 0x3, 0x2, 0x2, 0x2, 0x23c, 0x92d, 0x3, 0x2, 
       0x2, 0x2, 0x23e, 0x932, 0x3, 0x2, 0x2, 0x2, 0x240, 0x937, 0x3, 0x2, 
       0x2, 0x2, 0x242, 0x93c, 0x3, 0x2, 0x2, 0x2, 0x244, 0x941, 0x3, 0x2, 
       0x2, 0x2, 0x246, 0x946, 0x3, 0x2, 0x2, 0x2, 0x248, 0x94b, 0x3, 0x2, 
       0x2, 0x2, 0x24a, 0x950, 0x3, 0x2, 0x2, 0x2, 0x24c, 0x955, 0x3, 0x2, 
       0x2, 0x2, 0x24e, 0x966, 0x3, 0x2, 0x2, 0x2, 0x250, 0x970, 0x3, 0x2, 
       0x2, 0x2, 0x252, 0x972, 0x3, 0x2, 0x2, 0x2, 0x254, 0x974, 0x3, 0x2, 
       0x2, 0x2, 0x256, 0x976, 0x3, 0x2, 0x2, 0x2, 0x258, 0x978, 0x3, 0x2, 
       0x2, 0x2, 0x25a, 0x97a, 0x3, 0x2, 0x2, 0x2, 0x25c, 0x97c, 0x3, 0x2, 
       0x2, 0x2, 0x25e, 0x97e, 0x3, 0x2, 0x2, 0x2, 0x260, 0x980, 0x3, 0x2, 
       0x2, 0x2, 0x262, 0x982, 0x3, 0x2, 0x2, 0x2, 0x264, 0x985, 0x3, 0x2, 
       0x2, 0x2, 0x266, 0x989, 0x3, 0x2, 0x2, 0x2, 0x268, 0x98c, 0x3, 0x2, 
       0x2, 0x2, 0x26a, 0x996, 0x3, 0x2, 0x2, 0x2, 0x26c, 0x9a0, 0x3, 0x2, 
       0x2, 0x2, 0x26e, 0x9aa, 0x3, 0x2, 0x2, 0x2, 0x270, 0x9ac, 0x3, 0x2, 
       0x2, 0x2, 0x272, 0x9af, 0x3, 0x2, 0x2, 0x2, 0x274, 0x9b2, 0x3, 0x2, 
       0x2, 0x2, 0x276, 0x9b6, 0x3, 0x2, 0x2, 0x2, 0x278, 0x9b8, 0x3, 0x2, 
       0x2, 0x2, 0x27a, 0x9bb, 0x3, 0x2, 0x2, 0x2, 0x27c, 0x9bd, 0x3, 0x2, 
       0x2, 0x2, 0x27e, 0x9bf, 0x3, 0x2, 0x2, 0x2, 0x280, 0x9d1, 0x3, 0x2, 
       0x2, 0x2, 0x282, 0x9d3, 0x3, 0x2, 0x2, 0x2, 0x284, 0x9d5, 0x3, 0x2, 
       0x2, 0x2, 0x286, 0x9d7, 0x3, 0x2, 0x2, 0x2, 0x288, 0x9dc, 0x3, 0x2, 
       0x2, 0x2, 0x28a, 0x9e1, 0x3, 0x2, 0x2, 0x2, 0x28c, 0x9e3, 0x3, 0x2, 
       0x2, 0x2, 0x28e, 0x9e5, 0x3, 0x2, 0x2, 0x2, 0x290, 0x9e7, 0x3, 0x2, 
       0x2, 0x2, 0x292, 0x9e9, 0x3, 0x2, 0x2, 0x2, 0x294, 0x9ee, 0x3, 0x2, 
       0x2, 0x2, 0x296, 0x9f3, 0x3, 0x2, 0x2, 0x2, 0x298, 0x9f5, 0x3, 0x2, 
       0x2, 0x2, 0x29a, 0x9f7, 0x3, 0x2, 0x2, 0x2, 0x29c, 0x9f9, 0x3, 0x2, 
       0x2, 0x2, 0x29e, 0xa07, 0x3, 0x2, 0x2, 0x2, 0x2a0, 0xa09, 0x3, 0x2, 
       0x2, 0x2, 0x2a2, 0xa0d, 0x3, 0x2, 0x2, 0x2, 0x2a4, 0xa10, 0x3, 0x2, 
       0x2, 0x2, 0x2a6, 0xa12, 0x3, 0x2, 0x2, 0x2, 0x2a8, 0xa18, 0x3, 0x2, 
       0x2, 0x2, 0x2aa, 0xa1a, 0x3, 0x2, 0x2, 0x2, 0x2ac, 0xa1c, 0x3, 0x2, 
       0x2, 0x2, 0x2ae, 0xa1e, 0x3, 0x2, 0x2, 0x2, 0x2b0, 0x2b1, 0x5, 0x4, 
       0x3, 0x2, 0x2b1, 0x2b2, 0x7, 0xec, 0x2, 0x2, 0x2b2, 0x2b4, 0x3, 0x2, 
       0x2, 0x2, 0x2b3, 0x2b0, 0x3, 0x2, 0x2, 0x2, 0x2b4, 0x2b5, 0x3, 0x2, 
       0x2, 0x2, 0x2b5, 0x2b3, 0x3, 0x2, 0x2, 0x2, 0x2b5, 0x2b6, 0x3, 0x2, 
       0x2, 0x2, 0x2b6, 0x3, 0x3, 0x2, 0x2, 0x2, 0x2b7, 0x2b9, 0x5, 0x2a0, 
       0x151, 0x2, 0x2b8, 0x2b7, 0x3, 0x2, 0x2, 0x2, 0x2b8, 0x2b9, 0x3, 
       0x2, 0x2, 0x2, 0x2b9, 0x2bb, 0x3, 0x2, 0x2, 0x2, 0x2ba, 0x2bc, 0x5, 
       0x6, 0x4, 0x2, 0x2bb, 0x2ba, 0x3, 0x2, 0x2, 0x2, 0x2bb, 0x2bc, 0x3, 
       0x2, 0x2, 0x2, 0x2bc, 0x2be, 0x3, 0x2, 0x2, 0x2, 0x2bd, 0x2bf, 0x5, 
       0x2ae, 0x158, 0x2, 0x2be, 0x2bd, 0x3, 0x2, 0x2, 0x2, 0x2be, 0x2bf, 
       0x3, 0x2, 0x2, 0x2, 0x2bf, 0x5, 0x3, 0x2, 0x2, 0x2, 0x2c0, 0x2cb, 
       0x5, 0xa2, 0x52, 0x2, 0x2c1, 0x2cb, 0x5, 0xd0, 0x69, 0x2, 0x2c2, 
       0x2cb, 0x5, 0xf0, 0x79, 0x2, 0x2c3, 0x2cb, 0x5, 0x1b2, 0xda, 0x2, 
       0x2c4, 0x2cb, 0x5, 0x1c8, 0xe5, 0x2, 0x2c5, 0x2cb, 0x5, 0x1e4, 0xf3, 
       0x2, 0x2c6, 0x2cb, 0x5, 0x22e, 0x118, 0x2, 0x2c7, 0x2cb, 0x5, 0x24e, 
       0x128, 0x2, 0x2c8, 0x2cb, 0x5, 0x280, 0x141, 0x2, 0x2c9, 0x2cb, 0x5, 
       0x29e, 0x150, 0x2, 0x2ca, 0x2c0, 0x3, 0x2, 0x2, 0x2, 0x2ca, 0x2c1, 
       0x3, 0x2, 0x2, 0x2, 0x2ca, 0x2c2, 0x3, 0x2, 0x2, 0x2, 0x2ca, 0x2c3, 
       0x3, 0x2, 0x2, 0x2, 0x2ca, 0x2c4, 0x3, 0x2, 0x2, 0x2, 0x2ca, 0x2c5, 
       0x3, 0x2, 0x2, 0x2, 0x2ca, 0x2c6, 0x3, 0x2, 0x2, 0x2, 0x2ca, 0x2c7, 
       0x3, 0x2, 0x2, 0x2, 0x2ca, 0x2c8, 0x3, 0x2, 0x2, 0x2, 0x2ca, 0x2c9, 
       0x3, 0x2, 0x2, 0x2, 0x2cb, 0x7, 0x3, 0x2, 0x2, 0x2, 0x2cc, 0x2cd, 
       0x9, 0x2, 0x2, 0x2, 0x2cd, 0x9, 0x3, 0x2, 0x2, 0x2, 0x2ce, 0x2cf, 
       0x9, 0x3, 0x2, 0x2, 0x2cf, 0xb, 0x3, 0x2, 0x2, 0x2, 0x2d0, 0x2d1, 
       0x9, 0x4, 0x2, 0x2, 0x2d1, 0xd, 0x3, 0x2, 0x2, 0x2, 0x2d2, 0x2d3, 
       0x9, 0x5, 0x2, 0x2, 0x2d3, 0xf, 0x3, 0x2, 0x2, 0x2, 0x2d4, 0x2d5, 
       0x9, 0x6, 0x2, 0x2, 0x2d5, 0x11, 0x3, 0x2, 0x2, 0x2, 0x2d6, 0x2d7, 
       0x9, 0x7, 0x2, 0x2, 0x2d7, 0x13, 0x3, 0x2, 0x2, 0x2, 0x2d8, 0x2d9, 
       0x9, 0x8, 0x2, 0x2, 0x2d9, 0x15, 0x3, 0x2, 0x2, 0x2, 0x2da, 0x2db, 
       0x9, 0x9, 0x2, 0x2, 0x2db, 0x17, 0x3, 0x2, 0x2, 0x2, 0x2dc, 0x2e0, 
       0x7, 0x13, 0x2, 0x2, 0x2dd, 0x2e0, 0x7, 0x14, 0x2, 0x2, 0x2de, 0x2e0, 
       0x5, 0x8, 0x5, 0x2, 0x2df, 0x2dc, 0x3, 0x2, 0x2, 0x2, 0x2df, 0x2dd, 
       0x3, 0x2, 0x2, 0x2, 0x2df, 0x2de, 0x3, 0x2, 0x2, 0x2, 0x2e0, 0x19, 
       0x3, 0x2, 0x2, 0x2, 0x2e1, 0x2e5, 0x7, 0x15, 0x2, 0x2, 0x2e2, 0x2e5, 
       0x7, 0x16, 0x2, 0x2, 0x2e3, 0x2e5, 0x5, 0xa, 0x6, 0x2, 0x2e4, 0x2e1, 
       0x3, 0x2, 0x2, 0x2, 0x2e4, 0x2e2, 0x3, 0x2, 0x2, 0x2, 0x2e4, 0x2e3, 
       0x3, 0x2, 0x2, 0x2, 0x2e5, 0x1b, 0x3, 0x2, 0x2, 0x2, 0x2e6, 0x2ea, 
       0x7, 0x17, 0x2, 0x2, 0x2e7, 0x2ea, 0x7, 0x18, 0x2, 0x2, 0x2e8, 0x2ea, 
       0x5, 0x1e, 0x10, 0x2, 0x2e9, 0x2e6, 0x3, 0x2, 0x2, 0x2, 0x2e9, 0x2e7, 
       0x3, 0x2, 0x2, 0x2, 0x2e9, 0x2e8, 0x3, 0x2, 0x2, 0x2, 0x2ea, 0x1d, 
       0x3, 0x2, 0x2, 0x2, 0x2eb, 0x2ec, 0x9, 0xa, 0x2, 0x2, 0x2ec, 0x1f, 
       0x3, 0x2, 0x2, 0x2, 0x2ed, 0x2ee, 0x9, 0xb, 0x2, 0x2, 0x2ee, 0x21, 
       0x3, 0x2, 0x2, 0x2, 0x2ef, 0x2f0, 0x9, 0xc, 0x2, 0x2, 0x2f0, 0x23, 
       0x3, 0x2, 0x2, 0x2, 0x2f1, 0x2f2, 0x9, 0xd, 0x2, 0x2, 0x2f2, 0x25, 
       0x3, 0x2, 0x2, 0x2, 0x2f3, 0x2f7, 0x7, 0x21, 0x2, 0x2, 0x2f4, 0x2f7, 
       0x7, 0x22, 0x2, 0x2, 0x2f5, 0x2f7, 0x5, 0xc, 0x7, 0x2, 0x2f6, 0x2f3, 
       0x3, 0x2, 0x2, 0x2, 0x2f6, 0x2f4, 0x3, 0x2, 0x2, 0x2, 0x2f6, 0x2f5, 
       0x3, 0x2, 0x2, 0x2, 0x2f7, 0x27, 0x3, 0x2, 0x2, 0x2, 0x2f8, 0x2fc, 
       0x7, 0x23, 0x2, 0x2, 0x2f9, 0x2fc, 0x7, 0x24, 0x2, 0x2, 0x2fa, 0x2fc, 
       0x5, 0xe, 0x8, 0x2, 0x2fb, 0x2f8, 0x3, 0x2, 0x2, 0x2, 0x2fb, 0x2f9, 
       0x3, 0x2, 0x2, 0x2, 0x2fb, 0x2fa, 0x3, 0x2, 0x2, 0x2, 0x2fc, 0x29, 
       0x3, 0x2, 0x2, 0x2, 0x2fd, 0x301, 0x7, 0x25, 0x2, 0x2, 0x2fe, 0x301, 
       0x7, 0x26, 0x2, 0x2, 0x2ff, 0x301, 0x5, 0x20, 0x11, 0x2, 0x300, 0x2fd, 
       0x3, 0x2, 0x2, 0x2, 0x300, 0x2fe, 0x3, 0x2, 0x2, 0x2, 0x300, 0x2ff, 
       0x3, 0x2, 0x2, 0x2, 0x301, 0x2b, 0x3, 0x2, 0x2, 0x2, 0x302, 0x306, 
       0x7, 0x27, 0x2, 0x2, 0x303, 0x306, 0x7, 0x28, 0x2, 0x2, 0x304, 0x306, 
       0x5, 0x10, 0x9, 0x2, 0x305, 0x302, 0x3, 0x2, 0x2, 0x2, 0x305, 0x303, 
       0x3, 0x2, 0x2, 0x2, 0x305, 0x304, 0x3, 0x2, 0x2, 0x2, 0x306, 0x2d, 
       0x3, 0x2, 0x2, 0x2, 0x307, 0x30b, 0x7, 0x29, 0x2, 0x2, 0x308, 0x30b, 
       0x7, 0x2a, 0x2, 0x2, 0x309, 0x30b, 0x5, 0x12, 0xa, 0x2, 0x30a, 0x307, 
       0x3, 0x2, 0x2, 0x2, 0x30a, 0x308, 0x3, 0x2, 0x2, 0x2, 0x30a, 0x309, 
       0x3, 0x2, 0x2, 0x2, 0x30b, 0x2f, 0x3, 0x2, 0x2, 0x2, 0x30c, 0x310, 
       0x7, 0x2b, 0x2, 0x2, 0x30d, 0x310, 0x7, 0x2c, 0x2, 0x2, 0x30e, 0x310, 
       0x5, 0x22, 0x12, 0x2, 0x30f, 0x30c, 0x3, 0x2, 0x2, 0x2, 0x30f, 0x30d, 
       0x3, 0x2, 0x2, 0x2, 0x30f, 0x30e, 0x3, 0x2, 0x2, 0x2, 0x310, 0x31, 
       0x3, 0x2, 0x2, 0x2, 0x311, 0x315, 0x7, 0x2d, 0x2, 0x2, 0x312, 0x315, 
       0x7, 0x2e, 0x2, 0x2, 0x313, 0x315, 0x5, 0x14, 0xb, 0x2, 0x314, 0x311, 
       0x3, 0x2, 0x2, 0x2, 0x314, 0x312, 0x3, 0x2, 0x2, 0x2, 0x314, 0x313, 
       0x3, 0x2, 0x2, 0x2, 0x315, 0x33, 0x3, 0x2, 0x2, 0x2, 0x316, 0x31a, 
       0x7, 0x2f, 0x2, 0x2, 0x317, 0x31a, 0x7, 0x30, 0x2, 0x2, 0x318, 0x31a, 
       0x5, 0x16, 0xc, 0x2, 0x319, 0x316, 0x3, 0x2, 0x2, 0x2, 0x319, 0x317, 
       0x3, 0x2, 0x2, 0x2, 0x319, 0x318, 0x3, 0x2, 0x2, 0x2, 0x31a, 0x35, 
       0x3, 0x2, 0x2, 0x2, 0x31b, 0x31f, 0x7, 0x31, 0x2, 0x2, 0x31c, 0x31f, 
       0x7, 0x32, 0x2, 0x2, 0x31d, 0x31f, 0x5, 0x24, 0x13, 0x2, 0x31e, 0x31b, 
       0x3, 0x2, 0x2, 0x2, 0x31e, 0x31c, 0x3, 0x2, 0x2, 0x2, 0x31e, 0x31d, 
       0x3, 0x2, 0x2, 0x2, 0x31f, 0x37, 0x3, 0x2, 0x2, 0x2, 0x320, 0x321, 
       0x9, 0xe, 0x2, 0x2, 0x321, 0x39, 0x3, 0x2, 0x2, 0x2, 0x322, 0x323, 
       0x9, 0xf, 0x2, 0x2, 0x323, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x324, 0x325, 
       0x9, 0x10, 0x2, 0x2, 0x325, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x326, 0x327, 
       0x9, 0x11, 0x2, 0x2, 0x327, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x328, 0x329, 
       0x9, 0x12, 0x2, 0x2, 0x329, 0x41, 0x3, 0x2, 0x2, 0x2, 0x32a, 0x32b, 
       0x9, 0x13, 0x2, 0x2, 0x32b, 0x43, 0x3, 0x2, 0x2, 0x2, 0x32c, 0x32d, 
       0x9, 0x14, 0x2, 0x2, 0x32d, 0x45, 0x3, 0x2, 0x2, 0x2, 0x32e, 0x32f, 
       0x9, 0x15, 0x2, 0x2, 0x32f, 0x47, 0x3, 0x2, 0x2, 0x2, 0x330, 0x331, 
       0x9, 0x16, 0x2, 0x2, 0x331, 0x49, 0x3, 0x2, 0x2, 0x2, 0x332, 0x333, 
       0x9, 0x17, 0x2, 0x2, 0x333, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x334, 0x335, 
       0x7, 0x47, 0x2, 0x2, 0x335, 0x336, 0x5, 0x36, 0x1c, 0x2, 0x336, 0x337, 
       0x7, 0x48, 0x2, 0x2, 0x337, 0x4d, 0x3, 0x2, 0x2, 0x2, 0x338, 0x339, 
       0x7, 0x47, 0x2, 0x2, 0x339, 0x33a, 0x5, 0x2a, 0x16, 0x2, 0x33a, 0x33b, 
       0x7, 0x48, 0x2, 0x2, 0x33b, 0x4f, 0x3, 0x2, 0x2, 0x2, 0x33c, 0x33d, 
       0x7, 0x47, 0x2, 0x2, 0x33d, 0x33e, 0x5, 0x30, 0x19, 0x2, 0x33e, 0x33f, 
       0x7, 0x48, 0x2, 0x2, 0x33f, 0x51, 0x3, 0x2, 0x2, 0x2, 0x340, 0x341, 
       0x7, 0x47, 0x2, 0x2, 0x341, 0x342, 0x5, 0x48, 0x25, 0x2, 0x342, 0x343, 
       0x7, 0x48, 0x2, 0x2, 0x343, 0x53, 0x3, 0x2, 0x2, 0x2, 0x344, 0x345, 
       0x7, 0x47, 0x2, 0x2, 0x345, 0x346, 0x5, 0x28, 0x15, 0x2, 0x346, 0x347, 
       0x7, 0x48, 0x2, 0x2, 0x347, 0x55, 0x3, 0x2, 0x2, 0x2, 0x348, 0x349, 
       0x7, 0x47, 0x2, 0x2, 0x349, 0x34a, 0x5, 0x3c, 0x1f, 0x2, 0x34a, 0x34b, 
       0x7, 0x49, 0x2, 0x2, 0x34b, 0x34c, 0x5, 0x2a8, 0x155, 0x2, 0x34c, 
       0x34d, 0x7, 0x48, 0x2, 0x2, 0x34d, 0x57, 0x3, 0x2, 0x2, 0x2, 0x34e, 
       0x34f, 0x7, 0x47, 0x2, 0x2, 0x34f, 0x350, 0x5, 0x3e, 0x20, 0x2, 0x350, 
       0x351, 0x7, 0x49, 0x2, 0x2, 0x351, 0x352, 0x5, 0x2a8, 0x155, 0x2, 
       0x352, 0x353, 0x7, 0x48, 0x2, 0x2, 0x353, 0x59, 0x3, 0x2, 0x2, 0x2, 
       0x354, 0x355, 0x7, 0x47, 0x2, 0x2, 0x355, 0x356, 0x5, 0x2a8, 0x155, 
       0x2, 0x356, 0x357, 0x7, 0x48, 0x2, 0x2, 0x357, 0x5b, 0x3, 0x2, 0x2, 
       0x2, 0x358, 0x360, 0x5, 0x26, 0x14, 0x2, 0x359, 0x360, 0x5, 0x28, 
       0x15, 0x2, 0x35a, 0x360, 0x5, 0x2c, 0x17, 0x2, 0x35b, 0x360, 0x5, 
       0x2e, 0x18, 0x2, 0x35c, 0x360, 0x5, 0x32, 0x1a, 0x2, 0x35d, 0x360, 
       0x5, 0x34, 0x1b, 0x2, 0x35e, 0x360, 0x5, 0x18, 0xd, 0x2, 0x35f, 0x358, 
       0x3, 0x2, 0x2, 0x2, 0x35f, 0x359, 0x3, 0x2, 0x2, 0x2, 0x35f, 0x35a, 
       0x3, 0x2, 0x2, 0x2, 0x35f, 0x35b, 0x3, 0x2, 0x2, 0x2, 0x35f, 0x35c, 
       0x3, 0x2, 0x2, 0x2, 0x35f, 0x35d, 0x3, 0x2, 0x2, 0x2, 0x35f, 0x35e, 
       0x3, 0x2, 0x2, 0x2, 0x360, 0x5d, 0x3, 0x2, 0x2, 0x2, 0x361, 0x362, 
       0x9, 0x18, 0x2, 0x2, 0x362, 0x5f, 0x3, 0x2, 0x2, 0x2, 0x363, 0x364, 
       0x5, 0x5e, 0x30, 0x2, 0x364, 0x365, 0x5, 0x5c, 0x2f, 0x2, 0x365, 
       0x366, 0x7, 0x4c, 0x2, 0x2, 0x366, 0x367, 0x5, 0x5c, 0x2f, 0x2, 0x367, 
       0x61, 0x3, 0x2, 0x2, 0x2, 0x368, 0x369, 0x5, 0x5e, 0x30, 0x2, 0x369, 
       0x36a, 0x5, 0x5c, 0x2f, 0x2, 0x36a, 0x36b, 0x7, 0x4c, 0x2, 0x2, 0x36b, 
       0x36c, 0x5, 0x2a8, 0x155, 0x2, 0x36c, 0x63, 0x3, 0x2, 0x2, 0x2, 0x36d, 
       0x36e, 0x5, 0x5e, 0x30, 0x2, 0x36e, 0x36f, 0x5, 0x5c, 0x2f, 0x2, 
       0x36f, 0x370, 0x7, 0x4c, 0x2, 0x2, 0x370, 0x371, 0x5, 0x4c, 0x27, 
       0x2, 0x371, 0x65, 0x3, 0x2, 0x2, 0x2, 0x372, 0x373, 0x5, 0x5e, 0x30, 
       0x2, 0x373, 0x374, 0x5, 0x5c, 0x2f, 0x2, 0x374, 0x375, 0x7, 0x4c, 
       0x2, 0x2, 0x375, 0x376, 0x5, 0x56, 0x2c, 0x2, 0x376, 0x67, 0x3, 0x2, 
       0x2, 0x2, 0x377, 0x378, 0x5, 0x5e, 0x30, 0x2, 0x378, 0x379, 0x5, 
       0x5c, 0x2f, 0x2, 0x379, 0x37a, 0x7, 0x4c, 0x2, 0x2, 0x37a, 0x37b, 
       0x5, 0x58, 0x2d, 0x2, 0x37b, 0x69, 0x3, 0x2, 0x2, 0x2, 0x37c, 0x37d, 
       0x5, 0x5e, 0x30, 0x2, 0x37d, 0x37e, 0x5, 0x4c, 0x27, 0x2, 0x37e, 
       0x37f, 0x7, 0x4c, 0x2, 0x2, 0x37f, 0x380, 0x5, 0x5c, 0x2f, 0x2, 0x380, 
       0x6b, 0x3, 0x2, 0x2, 0x2, 0x381, 0x382, 0x5, 0x5e, 0x30, 0x2, 0x382, 
       0x383, 0x5, 0x56, 0x2c, 0x2, 0x383, 0x384, 0x7, 0x4c, 0x2, 0x2, 0x384, 
       0x385, 0x5, 0x5c, 0x2f, 0x2, 0x385, 0x6d, 0x3, 0x2, 0x2, 0x2, 0x386, 
       0x387, 0x5, 0x5e, 0x30, 0x2, 0x387, 0x388, 0x5, 0x58, 0x2d, 0x2, 
       0x388, 0x389, 0x7, 0x4c, 0x2, 0x2, 0x389, 0x38a, 0x5, 0x5c, 0x2f, 
       0x2, 0x38a, 0x6f, 0x3, 0x2, 0x2, 0x2, 0x38b, 0x38c, 0x5, 0x5e, 0x30, 
       0x2, 0x38c, 0x38d, 0x5, 0x4c, 0x27, 0x2, 0x38d, 0x38e, 0x7, 0x4c, 
       0x2, 0x2, 0x38e, 0x38f, 0x5, 0x2a8, 0x155, 0x2, 0x38f, 0x71, 0x3, 
       0x2, 0x2, 0x2, 0x390, 0x391, 0x5, 0x5e, 0x30, 0x2, 0x391, 0x392, 
       0x5, 0x56, 0x2c, 0x2, 0x392, 0x393, 0x7, 0x4c, 0x2, 0x2, 0x393, 0x394, 
       0x5, 0x2a8, 0x155, 0x2, 0x394, 0x73, 0x3, 0x2, 0x2, 0x2, 0x395, 0x396, 
       0x5, 0x5e, 0x30, 0x2, 0x396, 0x397, 0x5, 0x58, 0x2d, 0x2, 0x397, 
       0x398, 0x7, 0x4c, 0x2, 0x2, 0x398, 0x399, 0x5, 0x2a8, 0x155, 0x2, 
       0x399, 0x75, 0x3, 0x2, 0x2, 0x2, 0x39a, 0x39b, 0x5, 0x5e, 0x30, 0x2, 
       0x39b, 0x39c, 0x5, 0x18, 0xd, 0x2, 0x39c, 0x39d, 0x7, 0x4c, 0x2, 
       0x2, 0x39d, 0x39e, 0x5, 0x4e, 0x28, 0x2, 0x39e, 0x77, 0x3, 0x2, 0x2, 
       0x2, 0x39f, 0x3a0, 0x5, 0x5e, 0x30, 0x2, 0x3a0, 0x3a1, 0x5, 0x18, 
       0xd, 0x2, 0x3a1, 0x3a2, 0x7, 0x4c, 0x2, 0x2, 0x3a2, 0x3a3, 0x5, 0x50, 
       0x29, 0x2, 0x3a3, 0x79, 0x3, 0x2, 0x2, 0x2, 0x3a4, 0x3a5, 0x5, 0x5e, 
       0x30, 0x2, 0x3a5, 0x3a6, 0x5, 0x18, 0xd, 0x2, 0x3a6, 0x3a7, 0x7, 
       0x4c, 0x2, 0x2, 0x3a7, 0x3a8, 0x5, 0x5a, 0x2e, 0x2, 0x3a8, 0x7b, 
       0x3, 0x2, 0x2, 0x2, 0x3a9, 0x3aa, 0x5, 0x5e, 0x30, 0x2, 0x3aa, 0x3ab, 
       0x5, 0x4e, 0x28, 0x2, 0x3ab, 0x3ac, 0x7, 0x4c, 0x2, 0x2, 0x3ac, 0x3ad, 
       0x5, 0x18, 0xd, 0x2, 0x3ad, 0x7d, 0x3, 0x2, 0x2, 0x2, 0x3ae, 0x3af, 
       0x5, 0x5e, 0x30, 0x2, 0x3af, 0x3b0, 0x5, 0x50, 0x29, 0x2, 0x3b0, 
       0x3b1, 0x7, 0x4c, 0x2, 0x2, 0x3b1, 0x3b2, 0x5, 0x18, 0xd, 0x2, 0x3b2, 
       0x7f, 0x3, 0x2, 0x2, 0x2, 0x3b3, 0x3b4, 0x5, 0x5e, 0x30, 0x2, 0x3b4, 
       0x3b5, 0x5, 0x5a, 0x2e, 0x2, 0x3b5, 0x3b6, 0x7, 0x4c, 0x2, 0x2, 0x3b6, 
       0x3b7, 0x5, 0x18, 0xd, 0x2, 0x3b7, 0x81, 0x3, 0x2, 0x2, 0x2, 0x3b8, 
       0x3b9, 0x5, 0x5e, 0x30, 0x2, 0x3b9, 0x3ba, 0x5, 0x18, 0xd, 0x2, 0x3ba, 
       0x3bb, 0x7, 0x4c, 0x2, 0x2, 0x3bb, 0x3bc, 0x5, 0x38, 0x1d, 0x2, 0x3bc, 
       0x83, 0x3, 0x2, 0x2, 0x2, 0x3bd, 0x3be, 0x5, 0x5e, 0x30, 0x2, 0x3be, 
       0x3bf, 0x5, 0x18, 0xd, 0x2, 0x3bf, 0x3c0, 0x7, 0x4c, 0x2, 0x2, 0x3c0, 
       0x3c1, 0x5, 0x3a, 0x1e, 0x2, 0x3c1, 0x85, 0x3, 0x2, 0x2, 0x2, 0x3c2, 
       0x3c3, 0x5, 0x5e, 0x30, 0x2, 0x3c3, 0x3c4, 0x5, 0x38, 0x1d, 0x2, 
       0x3c4, 0x3c5, 0x7, 0x4c, 0x2, 0x2, 0x3c5, 0x3c6, 0x5, 0x18, 0xd, 
       0x2, 0x3c6, 0x87, 0x3, 0x2, 0x2, 0x2, 0x3c7, 0x3c8, 0x5, 0x5e, 0x30, 
       0x2, 0x3c8, 0x3c9, 0x5, 0x3a, 0x1e, 0x2, 0x3c9, 0x3ca, 0x7, 0x4c, 
       0x2, 0x2, 0x3ca, 0x3cb, 0x5, 0x18, 0xd, 0x2, 0x3cb, 0x89, 0x3, 0x2, 
       0x2, 0x2, 0x3cc, 0x3cd, 0x5, 0x5e, 0x30, 0x2, 0x3cd, 0x3ce, 0x5, 
       0x5c, 0x2f, 0x2, 0x3ce, 0x3cf, 0x7, 0x4c, 0x2, 0x2, 0x3cf, 0x3d0, 
       0x5, 0x40, 0x21, 0x2, 0x3d0, 0x8b, 0x3, 0x2, 0x2, 0x2, 0x3d1, 0x3d2, 
       0x5, 0x5e, 0x30, 0x2, 0x3d2, 0x3d3, 0x5, 0x5c, 0x2f, 0x2, 0x3d3, 
       0x3d4, 0x7, 0x4c, 0x2, 0x2, 0x3d4, 0x3d5, 0x5, 0x42, 0x22, 0x2, 0x3d5, 
       0x8d, 0x3, 0x2, 0x2, 0x2, 0x3d6, 0x3d7, 0x5, 0x5e, 0x30, 0x2, 0x3d7, 
       0x3d8, 0x5, 0x5c, 0x2f, 0x2, 0x3d8, 0x3d9, 0x7, 0x4c, 0x2, 0x2, 0x3d9, 
       0x3da, 0x5, 0x44, 0x23, 0x2, 0x3da, 0x8f, 0x3, 0x2, 0x2, 0x2, 0x3db, 
       0x3dc, 0x5, 0x5e, 0x30, 0x2, 0x3dc, 0x3dd, 0x5, 0x5c, 0x2f, 0x2, 
       0x3dd, 0x3de, 0x7, 0x4c, 0x2, 0x2, 0x3de, 0x3df, 0x5, 0x46, 0x24, 
       0x2, 0x3df, 0x91, 0x3, 0x2, 0x2, 0x2, 0x3e0, 0x3e1, 0x5, 0x5e, 0x30, 
       0x2, 0x3e1, 0x3e2, 0x5, 0x40, 0x21, 0x2, 0x3e2, 0x3e3, 0x7, 0x4c, 
       0x2, 0x2, 0x3e3, 0x3e4, 0x5, 0x5c, 0x2f, 0x2, 0x3e4, 0x93, 0x3, 0x2, 
       0x2, 0x2, 0x3e5, 0x3e8, 0x5, 0x40, 0x21, 0x2, 0x3e6, 0x3e8, 0x5, 
       0x42, 0x22, 0x2, 0x3e7, 0x3e5, 0x3, 0x2, 0x2, 0x2, 0x3e7, 0x3e6, 
       0x3, 0x2, 0x2, 0x2, 0x3e8, 0x95, 0x3, 0x2, 0x2, 0x2, 0x3e9, 0x3ec, 
       0x5, 0x44, 0x23, 0x2, 0x3ea, 0x3ec, 0x5, 0x46, 0x24, 0x2, 0x3eb, 
       0x3e9, 0x3, 0x2, 0x2, 0x2, 0x3eb, 0x3ea, 0x3, 0x2, 0x2, 0x2, 0x3ec, 
       0x97, 0x3, 0x2, 0x2, 0x2, 0x3ed, 0x3ee, 0x5, 0x5e, 0x30, 0x2, 0x3ee, 
       0x3ef, 0x5, 0x94, 0x4b, 0x2, 0x3ef, 0x3f0, 0x7, 0x4c, 0x2, 0x2, 0x3f0, 
       0x3f1, 0x5, 0x94, 0x4b, 0x2, 0x3f1, 0x99, 0x3, 0x2, 0x2, 0x2, 0x3f2, 
       0x3f3, 0x5, 0x5e, 0x30, 0x2, 0x3f3, 0x3f4, 0x5, 0x96, 0x4c, 0x2, 
       0x3f4, 0x3f5, 0x7, 0x4c, 0x2, 0x2, 0x3f5, 0x3f6, 0x5, 0x96, 0x4c, 
       0x2, 0x3f6, 0x9b, 0x3, 0x2, 0x2, 0x2, 0x3f7, 0x3f8, 0x5, 0x5e, 0x30, 
       0x2, 0x3f8, 0x3f9, 0x5, 0x42, 0x22, 0x2, 0x3f9, 0x3fa, 0x7, 0x4c, 
       0x2, 0x2, 0x3fa, 0x3fb, 0x5, 0x5c, 0x2f, 0x2, 0x3fb, 0x9d, 0x3, 0x2, 
       0x2, 0x2, 0x3fc, 0x3fd, 0x5, 0x5e, 0x30, 0x2, 0x3fd, 0x3fe, 0x5, 
       0x44, 0x23, 0x2, 0x3fe, 0x3ff, 0x7, 0x4c, 0x2, 0x2, 0x3ff, 0x400, 
       0x5, 0x5c, 0x2f, 0x2, 0x400, 0x9f, 0x3, 0x2, 0x2, 0x2, 0x401, 0x402, 
       0x5, 0x5e, 0x30, 0x2, 0x402, 0x403, 0x5, 0x46, 0x24, 0x2, 0x403, 
       0x404, 0x7, 0x4c, 0x2, 0x2, 0x404, 0x405, 0x5, 0x5c, 0x2f, 0x2, 0x405, 
       0xa1, 0x3, 0x2, 0x2, 0x2, 0x406, 0x426, 0x5, 0x60, 0x31, 0x2, 0x407, 
       0x426, 0x5, 0x62, 0x32, 0x2, 0x408, 0x426, 0x5, 0x64, 0x33, 0x2, 
       0x409, 0x426, 0x5, 0x66, 0x34, 0x2, 0x40a, 0x426, 0x5, 0x68, 0x35, 
       0x2, 0x40b, 0x426, 0x5, 0x6a, 0x36, 0x2, 0x40c, 0x426, 0x5, 0x6c, 
       0x37, 0x2, 0x40d, 0x426, 0x5, 0x6e, 0x38, 0x2, 0x40e, 0x426, 0x5, 
       0x70, 0x39, 0x2, 0x40f, 0x426, 0x5, 0x72, 0x3a, 0x2, 0x410, 0x426, 
       0x5, 0x74, 0x3b, 0x2, 0x411, 0x426, 0x5, 0x76, 0x3c, 0x2, 0x412, 
       0x426, 0x5, 0x78, 0x3d, 0x2, 0x413, 0x426, 0x5, 0x7a, 0x3e, 0x2, 
       0x414, 0x426, 0x5, 0x7c, 0x3f, 0x2, 0x415, 0x426, 0x5, 0x7e, 0x40, 
       0x2, 0x416, 0x426, 0x5, 0x80, 0x41, 0x2, 0x417, 0x426, 0x5, 0x82, 
       0x42, 0x2, 0x418, 0x426, 0x5, 0x84, 0x43, 0x2, 0x419, 0x426, 0x5, 
       0x86, 0x44, 0x2, 0x41a, 0x426, 0x5, 0x88, 0x45, 0x2, 0x41b, 0x426, 
       0x5, 0x8a, 0x46, 0x2, 0x41c, 0x426, 0x5, 0x8c, 0x47, 0x2, 0x41d, 
       0x426, 0x5, 0x8e, 0x48, 0x2, 0x41e, 0x426, 0x5, 0x90, 0x49, 0x2, 
       0x41f, 0x426, 0x5, 0x92, 0x4a, 0x2, 0x420, 0x426, 0x5, 0x9c, 0x4f, 
       0x2, 0x421, 0x426, 0x5, 0x9e, 0x50, 0x2, 0x422, 0x426, 0x5, 0xa0, 
       0x51, 0x2, 0x423, 0x426, 0x5, 0x9a, 0x4e, 0x2, 0x424, 0x426, 0x5, 
       0x98, 0x4d, 0x2, 0x425, 0x406, 0x3, 0x2, 0x2, 0x2, 0x425, 0x407, 
       0x3, 0x2, 0x2, 0x2, 0x425, 0x408, 0x3, 0x2, 0x2, 0x2, 0x425, 0x409, 
       0x3, 0x2, 0x2, 0x2, 0x425, 0x40a, 0x3, 0x2, 0x2, 0x2, 0x425, 0x40b, 
       0x3, 0x2, 0x2, 0x2, 0x425, 0x40c, 0x3, 0x2, 0x2, 0x2, 0x425, 0x40d, 
       0x3, 0x2, 0x2, 0x2, 0x425, 0x40e, 0x3, 0x2, 0x2, 0x2, 0x425, 0x40f, 
       0x3, 0x2, 0x2, 0x2, 0x425, 0x410, 0x3, 0x2, 0x2, 0x2, 0x425, 0x411, 
       0x3, 0x2, 0x2, 0x2, 0x425, 0x412, 0x3, 0x2, 0x2, 0x2, 0x425, 0x413, 
       0x3, 0x2, 0x2, 0x2, 0x425, 0x414, 0x3, 0x2, 0x2, 0x2, 0x425, 0x415, 
       0x3, 0x2, 0x2, 0x2, 0x425, 0x416, 0x3, 0x2, 0x2, 0x2, 0x425, 0x417, 
       0x3, 0x2, 0x2, 0x2, 0x425, 0x418, 0x3, 0x2, 0x2, 0x2, 0x425, 0x419, 
       0x3, 0x2, 0x2, 0x2, 0x425, 0x41a, 0x3, 0x2, 0x2, 0x2, 0x425, 0x41b, 
       0x3, 0x2, 0x2, 0x2, 0x425, 0x41c, 0x3, 0x2, 0x2, 0x2, 0x425, 0x41d, 
       0x3, 0x2, 0x2, 0x2, 0x425, 0x41e, 0x3, 0x2, 0x2, 0x2, 0x425, 0x41f, 
       0x3, 0x2, 0x2, 0x2, 0x425, 0x420, 0x3, 0x2, 0x2, 0x2, 0x425, 0x421, 
       0x3, 0x2, 0x2, 0x2, 0x425, 0x422, 0x3, 0x2, 0x2, 0x2, 0x425, 0x423, 
       0x3, 0x2, 0x2, 0x2, 0x425, 0x424, 0x3, 0x2, 0x2, 0x2, 0x426, 0xa3, 
       0x3, 0x2, 0x2, 0x2, 0x427, 0x42c, 0x5, 0x2a, 0x16, 0x2, 0x428, 0x42c, 
       0x5, 0x30, 0x19, 0x2, 0x429, 0x42c, 0x5, 0x36, 0x1c, 0x2, 0x42a, 
       0x42c, 0x5, 0x48, 0x25, 0x2, 0x42b, 0x427, 0x3, 0x2, 0x2, 0x2, 0x42b, 
       0x428, 0x3, 0x2, 0x2, 0x2, 0x42b, 0x429, 0x3, 0x2, 0x2, 0x2, 0x42b, 
       0x42a, 0x3, 0x2, 0x2, 0x2, 0x42c, 0xa5, 0x3, 0x2, 0x2, 0x2, 0x42d, 
       0x42e, 0x5, 0x5e, 0x30, 0x2, 0x42e, 0x42f, 0x5, 0xa4, 0x53, 0x2, 
       0x42f, 0x430, 0x7, 0x4c, 0x2, 0x2, 0x430, 0x431, 0x5, 0x2a8, 0x155, 
       0x2, 0x431, 0xa7, 0x3, 0x2, 0x2, 0x2, 0x432, 0x433, 0x5, 0x5e, 0x30, 
       0x2, 0x433, 0x434, 0x5, 0x3c, 0x1f, 0x2, 0x434, 0x435, 0x7, 0x4c, 
       0x2, 0x2, 0x435, 0x436, 0x5, 0x2a8, 0x155, 0x2, 0x436, 0xa9, 0x3, 
       0x2, 0x2, 0x2, 0x437, 0x438, 0x5, 0x5e, 0x30, 0x2, 0x438, 0x439, 
       0x5, 0x3e, 0x20, 0x2, 0x439, 0x43a, 0x7, 0x4c, 0x2, 0x2, 0x43a, 0x43b, 
       0x5, 0x2a8, 0x155, 0x2, 0x43b, 0xab, 0x3, 0x2, 0x2, 0x2, 0x43c, 0x43d, 
       0x5, 0x5e, 0x30, 0x2, 0x43d, 0x43e, 0x5, 0xa4, 0x53, 0x2, 0x43e, 
       0x43f, 0x7, 0x4c, 0x2, 0x2, 0x43f, 0x440, 0x5, 0x5a, 0x2e, 0x2, 0x440, 
       0xad, 0x3, 0x2, 0x2, 0x2, 0x441, 0x442, 0x5, 0x5e, 0x30, 0x2, 0x442, 
       0x443, 0x5, 0x3c, 0x1f, 0x2, 0x443, 0x444, 0x7, 0x4c, 0x2, 0x2, 0x444, 
       0x445, 0x5, 0x5a, 0x2e, 0x2, 0x445, 0xaf, 0x3, 0x2, 0x2, 0x2, 0x446, 
       0x447, 0x5, 0x5e, 0x30, 0x2, 0x447, 0x448, 0x5, 0x3e, 0x20, 0x2, 
       0x448, 0x449, 0x7, 0x4c, 0x2, 0x2, 0x449, 0x44a, 0x5, 0x5a, 0x2e, 
       0x2, 0x44a, 0xb1, 0x3, 0x2, 0x2, 0x2, 0x44b, 0x44c, 0x5, 0x5e, 0x30, 
       0x2, 0x44c, 0x44d, 0x5, 0x5a, 0x2e, 0x2, 0x44d, 0x44e, 0x7, 0x4c, 
       0x2, 0x2, 0x44e, 0x44f, 0x5, 0xa4, 0x53, 0x2, 0x44f, 0xb3, 0x3, 0x2, 
       0x2, 0x2, 0x450, 0x451, 0x5, 0x5e, 0x30, 0x2, 0x451, 0x452, 0x5, 
       0x5a, 0x2e, 0x2, 0x452, 0x453, 0x7, 0x4c, 0x2, 0x2, 0x453, 0x454, 
       0x5, 0x3c, 0x1f, 0x2, 0x454, 0xb5, 0x3, 0x2, 0x2, 0x2, 0x455, 0x456, 
       0x5, 0x5e, 0x30, 0x2, 0x456, 0x457, 0x5, 0x5a, 0x2e, 0x2, 0x457, 
       0x458, 0x7, 0x4c, 0x2, 0x2, 0x458, 0x459, 0x5, 0x3e, 0x20, 0x2, 0x459, 
       0xb7, 0x3, 0x2, 0x2, 0x2, 0x45a, 0x45b, 0x5, 0x5e, 0x30, 0x2, 0x45b, 
       0x45c, 0x5, 0x48, 0x25, 0x2, 0x45c, 0x45d, 0x7, 0x4c, 0x2, 0x2, 0x45d, 
       0x45e, 0x5, 0x36, 0x1c, 0x2, 0x45e, 0xb9, 0x3, 0x2, 0x2, 0x2, 0x45f, 
       0x460, 0x5, 0x5e, 0x30, 0x2, 0x460, 0x461, 0x5, 0x48, 0x25, 0x2, 
       0x461, 0x462, 0x7, 0x4c, 0x2, 0x2, 0x462, 0x463, 0x5, 0x3c, 0x1f, 
       0x2, 0x463, 0xbb, 0x3, 0x2, 0x2, 0x2, 0x464, 0x465, 0x5, 0x5e, 0x30, 
       0x2, 0x465, 0x466, 0x5, 0x48, 0x25, 0x2, 0x466, 0x467, 0x7, 0x4c, 
       0x2, 0x2, 0x467, 0x468, 0x5, 0x3e, 0x20, 0x2, 0x468, 0xbd, 0x3, 0x2, 
       0x2, 0x2, 0x469, 0x46a, 0x9, 0x19, 0x2, 0x2, 0x46a, 0xbf, 0x3, 0x2, 
       0x2, 0x2, 0x46b, 0x46c, 0x9, 0x1a, 0x2, 0x2, 0x46c, 0xc1, 0x3, 0x2, 
       0x2, 0x2, 0x46d, 0x473, 0x5, 0x2a, 0x16, 0x2, 0x46e, 0x473, 0x5, 
       0x30, 0x19, 0x2, 0x46f, 0x473, 0x5, 0x36, 0x1c, 0x2, 0x470, 0x473, 
       0x5, 0x1c, 0xf, 0x2, 0x471, 0x473, 0x3, 0x2, 0x2, 0x2, 0x472, 0x46d, 
       0x3, 0x2, 0x2, 0x2, 0x472, 0x46e, 0x3, 0x2, 0x2, 0x2, 0x472, 0x46f, 
       0x3, 0x2, 0x2, 0x2, 0x472, 0x470, 0x3, 0x2, 0x2, 0x2, 0x472, 0x471, 
       0x3, 0x2, 0x2, 0x2, 0x473, 0xc3, 0x3, 0x2, 0x2, 0x2, 0x474, 0x475, 
       0x5, 0xbe, 0x60, 0x2, 0x475, 0x476, 0x5, 0xc2, 0x62, 0x2, 0x476, 
       0xc5, 0x3, 0x2, 0x2, 0x2, 0x477, 0x478, 0x5, 0xbe, 0x60, 0x2, 0x478, 
       0x479, 0x5, 0x3c, 0x1f, 0x2, 0x479, 0xc7, 0x3, 0x2, 0x2, 0x2, 0x47a, 
       0x47b, 0x5, 0xbe, 0x60, 0x2, 0x47b, 0x47c, 0x5, 0x3e, 0x20, 0x2, 
       0x47c, 0xc9, 0x3, 0x2, 0x2, 0x2, 0x47d, 0x47e, 0x5, 0xc0, 0x61, 0x2, 
       0x47e, 0x47f, 0x5, 0xc2, 0x62, 0x2, 0x47f, 0xcb, 0x3, 0x2, 0x2, 0x2, 
       0x480, 0x481, 0x5, 0xc0, 0x61, 0x2, 0x481, 0x482, 0x5, 0x3c, 0x1f, 
       0x2, 0x482, 0xcd, 0x3, 0x2, 0x2, 0x2, 0x483, 0x484, 0x5, 0xc0, 0x61, 
       0x2, 0x484, 0x485, 0x5, 0x3e, 0x20, 0x2, 0x485, 0xcf, 0x3, 0x2, 0x2, 
       0x2, 0x486, 0x499, 0x5, 0xa6, 0x54, 0x2, 0x487, 0x499, 0x5, 0xa8, 
       0x55, 0x2, 0x488, 0x499, 0x5, 0xaa, 0x56, 0x2, 0x489, 0x499, 0x5, 
       0xac, 0x57, 0x2, 0x48a, 0x499, 0x5, 0xae, 0x58, 0x2, 0x48b, 0x499, 
       0x5, 0xb0, 0x59, 0x2, 0x48c, 0x499, 0x5, 0xb4, 0x5b, 0x2, 0x48d, 
       0x499, 0x5, 0xb6, 0x5c, 0x2, 0x48e, 0x499, 0x5, 0xb2, 0x5a, 0x2, 
       0x48f, 0x499, 0x5, 0xb8, 0x5d, 0x2, 0x490, 0x499, 0x5, 0xba, 0x5e, 
       0x2, 0x491, 0x499, 0x5, 0xbc, 0x5f, 0x2, 0x492, 0x499, 0x5, 0xc4, 
       0x63, 0x2, 0x493, 0x499, 0x5, 0xc6, 0x64, 0x2, 0x494, 0x499, 0x5, 
       0xc8, 0x65, 0x2, 0x495, 0x499, 0x5, 0xca, 0x66, 0x2, 0x496, 0x499, 
       0x5, 0xcc, 0x67, 0x2, 0x497, 0x499, 0x5, 0xce, 0x68, 0x2, 0x498, 
       0x486, 0x3, 0x2, 0x2, 0x2, 0x498, 0x487, 0x3, 0x2, 0x2, 0x2, 0x498, 
       0x488, 0x3, 0x2, 0x2, 0x2, 0x498, 0x489, 0x3, 0x2, 0x2, 0x2, 0x498, 
       0x48a, 0x3, 0x2, 0x2, 0x2, 0x498, 0x48b, 0x3, 0x2, 0x2, 0x2, 0x498, 
       0x48c, 0x3, 0x2, 0x2, 0x2, 0x498, 0x48d, 0x3, 0x2, 0x2, 0x2, 0x498, 
       0x48e, 0x3, 0x2, 0x2, 0x2, 0x498, 0x48f, 0x3, 0x2, 0x2, 0x2, 0x498, 
       0x490, 0x3, 0x2, 0x2, 0x2, 0x498, 0x491, 0x3, 0x2, 0x2, 0x2, 0x498, 
       0x492, 0x3, 0x2, 0x2, 0x2, 0x498, 0x493, 0x3, 0x2, 0x2, 0x2, 0x498, 
       0x494, 0x3, 0x2, 0x2, 0x2, 0x498, 0x495, 0x3, 0x2, 0x2, 0x2, 0x498, 
       0x496, 0x3, 0x2, 0x2, 0x2, 0x498, 0x497, 0x3, 0x2, 0x2, 0x2, 0x499, 
       0xd1, 0x3, 0x2, 0x2, 0x2, 0x49a, 0x49b, 0x9, 0x1b, 0x2, 0x2, 0x49b, 
       0xd3, 0x3, 0x2, 0x2, 0x2, 0x49c, 0x49d, 0x5, 0xd2, 0x6a, 0x2, 0x49d, 
       0x49e, 0x5, 0x30, 0x19, 0x2, 0x49e, 0x49f, 0x7, 0x4c, 0x2, 0x2, 0x49f, 
       0x4a0, 0x5, 0x36, 0x1c, 0x2, 0x4a0, 0xd5, 0x3, 0x2, 0x2, 0x2, 0x4a1, 
       0x4a2, 0x5, 0xd2, 0x6a, 0x2, 0x4a2, 0x4a3, 0x5, 0x1c, 0xf, 0x2, 0x4a3, 
       0x4a4, 0x7, 0x4c, 0x2, 0x2, 0x4a4, 0x4a5, 0x5, 0x1c, 0xf, 0x2, 0x4a5, 
       0xd7, 0x3, 0x2, 0x2, 0x2, 0x4a6, 0x4a7, 0x9, 0x1c, 0x2, 0x2, 0x4a7, 
       0xd9, 0x3, 0x2, 0x2, 0x2, 0x4a8, 0x4a9, 0x5, 0xd2, 0x6a, 0x2, 0x4a9, 
       0x4aa, 0x5, 0x52, 0x2a, 0x2, 0x4aa, 0x4ab, 0x7, 0x4c, 0x2, 0x2, 0x4ab, 
       0x4ac, 0x5, 0x36, 0x1c, 0x2, 0x4ac, 0xdb, 0x3, 0x2, 0x2, 0x2, 0x4ad, 
       0x4ae, 0x5, 0xd2, 0x6a, 0x2, 0x4ae, 0x4af, 0x5, 0x52, 0x2a, 0x2, 
       0x4af, 0x4b0, 0x7, 0x4c, 0x2, 0x2, 0x4b0, 0x4b1, 0x5, 0x3c, 0x1f, 
       0x2, 0x4b1, 0xdd, 0x3, 0x2, 0x2, 0x2, 0x4b2, 0x4b3, 0x5, 0xd2, 0x6a, 
       0x2, 0x4b3, 0x4b4, 0x5, 0x52, 0x2a, 0x2, 0x4b4, 0x4b5, 0x7, 0x4c, 
       0x2, 0x2, 0x4b5, 0x4b6, 0x5, 0x3e, 0x20, 0x2, 0x4b6, 0xdf, 0x3, 0x2, 
       0x2, 0x2, 0x4b7, 0x4b8, 0x9, 0x1d, 0x2, 0x2, 0x4b8, 0xe1, 0x3, 0x2, 
       0x2, 0x2, 0x4b9, 0x4bd, 0x7, 0x57, 0x2, 0x2, 0x4ba, 0x4bd, 0x7, 0x58, 
       0x2, 0x2, 0x4bb, 0x4bd, 0x3, 0x2, 0x2, 0x2, 0x4bc, 0x4b9, 0x3, 0x2, 
       0x2, 0x2, 0x4bc, 0x4ba, 0x3, 0x2, 0x2, 0x2, 0x4bc, 0x4bb, 0x3, 0x2, 
       0x2, 0x2, 0x4bd, 0xe3, 0x3, 0x2, 0x2, 0x2, 0x4be, 0x4c2, 0x7, 0x59, 
       0x2, 0x2, 0x4bf, 0x4c2, 0x7, 0x5a, 0x2, 0x2, 0x4c0, 0x4c2, 0x3, 0x2, 
       0x2, 0x2, 0x4c1, 0x4be, 0x3, 0x2, 0x2, 0x2, 0x4c1, 0x4bf, 0x3, 0x2, 
       0x2, 0x2, 0x4c1, 0x4c0, 0x3, 0x2, 0x2, 0x2, 0x4c2, 0xe5, 0x3, 0x2, 
       0x2, 0x2, 0x4c3, 0x4c7, 0x7, 0x5b, 0x2, 0x2, 0x4c4, 0x4c7, 0x7, 0x5c, 
       0x2, 0x2, 0x4c5, 0x4c7, 0x3, 0x2, 0x2, 0x2, 0x4c6, 0x4c3, 0x3, 0x2, 
       0x2, 0x2, 0x4c6, 0x4c4, 0x3, 0x2, 0x2, 0x2, 0x4c6, 0x4c5, 0x3, 0x2, 
       0x2, 0x2, 0x4c7, 0xe7, 0x3, 0x2, 0x2, 0x2, 0x4c8, 0x4c9, 0x9, 0x1e, 
       0x2, 0x2, 0x4c9, 0xe9, 0x3, 0x2, 0x2, 0x2, 0x4ca, 0x4cb, 0x9, 0x1f, 
       0x2, 0x2, 0x4cb, 0xeb, 0x3, 0x2, 0x2, 0x2, 0x4cc, 0x4cd, 0x9, 0x20, 
       0x2, 0x2, 0x4cd, 0xed, 0x3, 0x2, 0x2, 0x2, 0x4ce, 0x4cf, 0x9, 0x21, 
       0x2, 0x2, 0x4cf, 0xef, 0x3, 0x2, 0x2, 0x2, 0x4d0, 0x4df, 0x5, 0xd4, 
       0x6b, 0x2, 0x4d1, 0x4df, 0x5, 0xd6, 0x6c, 0x2, 0x4d2, 0x4df, 0x5, 
       0xd8, 0x6d, 0x2, 0x4d3, 0x4df, 0x5, 0xda, 0x6e, 0x2, 0x4d4, 0x4df, 
       0x5, 0xdc, 0x6f, 0x2, 0x4d5, 0x4df, 0x5, 0xde, 0x70, 0x2, 0x4d6, 
       0x4df, 0x5, 0xe0, 0x71, 0x2, 0x4d7, 0x4df, 0x5, 0xe2, 0x72, 0x2, 
       0x4d8, 0x4df, 0x5, 0xe4, 0x73, 0x2, 0x4d9, 0x4df, 0x5, 0xe6, 0x74, 
       0x2, 0x4da, 0x4df, 0x5, 0xe8, 0x75, 0x2, 0x4db, 0x4df, 0x5, 0xea, 
       0x76, 0x2, 0x4dc, 0x4df, 0x5, 0xec, 0x77, 0x2, 0x4dd, 0x4df, 0x5, 
       0xee, 0x78, 0x2, 0x4de, 0x4d0, 0x3, 0x2, 0x2, 0x2, 0x4de, 0x4d1, 
       0x3, 0x2, 0x2, 0x2, 0x4de, 0x4d2, 0x3, 0x2, 0x2, 0x2, 0x4de, 0x4d3, 
       0x3, 0x2, 0x2, 0x2, 0x4de, 0x4d4, 0x3, 0x2, 0x2, 0x2, 0x4de, 0x4d5, 
       0x3, 0x2, 0x2, 0x2, 0x4de, 0x4d6, 0x3, 0x2, 0x2, 0x2, 0x4de, 0x4d7, 
       0x3, 0x2, 0x2, 0x2, 0x4de, 0x4d8, 0x3, 0x2, 0x2, 0x2, 0x4de, 0x4d9, 
       0x3, 0x2, 0x2, 0x2, 0x4de, 0x4da, 0x3, 0x2, 0x2, 0x2, 0x4de, 0x4db, 
       0x3, 0x2, 0x2, 0x2, 0x4de, 0x4dc, 0x3, 0x2, 0x2, 0x2, 0x4de, 0x4dd, 
       0x3, 0x2, 0x2, 0x2, 0x4df, 0xf1, 0x3, 0x2, 0x2, 0x2, 0x4e0, 0x4e1, 
       0x9, 0x22, 0x2, 0x2, 0x4e1, 0xf3, 0x3, 0x2, 0x2, 0x2, 0x4e2, 0x4e3, 
       0x9, 0x23, 0x2, 0x2, 0x4e3, 0xf5, 0x3, 0x2, 0x2, 0x2, 0x4e4, 0x4e5, 
       0x9, 0x24, 0x2, 0x2, 0x4e5, 0xf7, 0x3, 0x2, 0x2, 0x2, 0x4e6, 0x4e7, 
       0x9, 0x25, 0x2, 0x2, 0x4e7, 0xf9, 0x3, 0x2, 0x2, 0x2, 0x4e8, 0x4e9, 
       0x9, 0x26, 0x2, 0x2, 0x4e9, 0xfb, 0x3, 0x2, 0x2, 0x2, 0x4ea, 0x4eb, 
       0x9, 0x27, 0x2, 0x2, 0x4eb, 0xfd, 0x3, 0x2, 0x2, 0x2, 0x4ec, 0x4ed, 
       0x9, 0x28, 0x2, 0x2, 0x4ed, 0xff, 0x3, 0x2, 0x2, 0x2, 0x4ee, 0x4ef, 
       0x9, 0x29, 0x2, 0x2, 0x4ef, 0x101, 0x3, 0x2, 0x2, 0x2, 0x4f0, 0x4f1, 
       0x9, 0x2a, 0x2, 0x2, 0x4f1, 0x103, 0x3, 0x2, 0x2, 0x2, 0x4f2, 0x4f3, 
       0x9, 0x2b, 0x2, 0x2, 0x4f3, 0x105, 0x3, 0x2, 0x2, 0x2, 0x4f4, 0x4f5, 
       0x5, 0xf2, 0x7a, 0x2, 0x4f5, 0x4f6, 0x5, 0x5c, 0x2f, 0x2, 0x4f6, 
       0x4fd, 0x3, 0x2, 0x2, 0x2, 0x4f7, 0x4f8, 0x5, 0xf2, 0x7a, 0x2, 0x4f8, 
       0x4f9, 0x5, 0x18, 0xd, 0x2, 0x4f9, 0x4fa, 0x7, 0x4c, 0x2, 0x2, 0x4fa, 
       0x4fb, 0x5, 0x5c, 0x2f, 0x2, 0x4fb, 0x4fd, 0x3, 0x2, 0x2, 0x2, 0x4fc, 
       0x4f4, 0x3, 0x2, 0x2, 0x2, 0x4fc, 0x4f7, 0x3, 0x2, 0x2, 0x2, 0x4fd, 
       0x107, 0x3, 0x2, 0x2, 0x2, 0x4fe, 0x4ff, 0x5, 0xf2, 0x7a, 0x2, 0x4ff, 
       0x500, 0x5, 0x2a8, 0x155, 0x2, 0x500, 0x507, 0x3, 0x2, 0x2, 0x2, 
       0x501, 0x502, 0x5, 0xf2, 0x7a, 0x2, 0x502, 0x503, 0x5, 0x18, 0xd, 
       0x2, 0x503, 0x504, 0x7, 0x4c, 0x2, 0x2, 0x504, 0x505, 0x5, 0x2a8, 
       0x155, 0x2, 0x505, 0x507, 0x3, 0x2, 0x2, 0x2, 0x506, 0x4fe, 0x3, 
       0x2, 0x2, 0x2, 0x506, 0x501, 0x3, 0x2, 0x2, 0x2, 0x507, 0x109, 0x3, 
       0x2, 0x2, 0x2, 0x508, 0x509, 0x5, 0xf2, 0x7a, 0x2, 0x509, 0x50a, 
       0x5, 0x40, 0x21, 0x2, 0x50a, 0x511, 0x3, 0x2, 0x2, 0x2, 0x50b, 0x50c, 
       0x5, 0xf2, 0x7a, 0x2, 0x50c, 0x50d, 0x5, 0x18, 0xd, 0x2, 0x50d, 0x50e, 
       0x7, 0x4c, 0x2, 0x2, 0x50e, 0x50f, 0x5, 0x40, 0x21, 0x2, 0x50f, 0x511, 
       0x3, 0x2, 0x2, 0x2, 0x510, 0x508, 0x3, 0x2, 0x2, 0x2, 0x510, 0x50b, 
       0x3, 0x2, 0x2, 0x2, 0x511, 0x10b, 0x3, 0x2, 0x2, 0x2, 0x512, 0x513, 
       0x5, 0xf2, 0x7a, 0x2, 0x513, 0x514, 0x5, 0x42, 0x22, 0x2, 0x514, 
       0x51b, 0x3, 0x2, 0x2, 0x2, 0x515, 0x516, 0x5, 0xf2, 0x7a, 0x2, 0x516, 
       0x517, 0x5, 0x18, 0xd, 0x2, 0x517, 0x518, 0x7, 0x4c, 0x2, 0x2, 0x518, 
       0x519, 0x5, 0x42, 0x22, 0x2, 0x519, 0x51b, 0x3, 0x2, 0x2, 0x2, 0x51a, 
       0x512, 0x3, 0x2, 0x2, 0x2, 0x51a, 0x515, 0x3, 0x2, 0x2, 0x2, 0x51b, 
       0x10d, 0x3, 0x2, 0x2, 0x2, 0x51c, 0x51d, 0x5, 0xf2, 0x7a, 0x2, 0x51d, 
       0x51e, 0x5, 0x44, 0x23, 0x2, 0x51e, 0x525, 0x3, 0x2, 0x2, 0x2, 0x51f, 
       0x520, 0x5, 0xf2, 0x7a, 0x2, 0x520, 0x521, 0x5, 0x18, 0xd, 0x2, 0x521, 
       0x522, 0x7, 0x4c, 0x2, 0x2, 0x522, 0x523, 0x5, 0x44, 0x23, 0x2, 0x523, 
       0x525, 0x3, 0x2, 0x2, 0x2, 0x524, 0x51c, 0x3, 0x2, 0x2, 0x2, 0x524, 
       0x51f, 0x3, 0x2, 0x2, 0x2, 0x525, 0x10f, 0x3, 0x2, 0x2, 0x2, 0x526, 
       0x527, 0x5, 0xf2, 0x7a, 0x2, 0x527, 0x528, 0x5, 0x46, 0x24, 0x2, 
       0x528, 0x52f, 0x3, 0x2, 0x2, 0x2, 0x529, 0x52a, 0x5, 0xf2, 0x7a, 
       0x2, 0x52a, 0x52b, 0x5, 0x18, 0xd, 0x2, 0x52b, 0x52c, 0x7, 0x4c, 
       0x2, 0x2, 0x52c, 0x52d, 0x5, 0x46, 0x24, 0x2, 0x52d, 0x52f, 0x3, 
       0x2, 0x2, 0x2, 0x52e, 0x526, 0x3, 0x2, 0x2, 0x2, 0x52e, 0x529, 0x3, 
       0x2, 0x2, 0x2, 0x52f, 0x111, 0x3, 0x2, 0x2, 0x2, 0x530, 0x531, 0x5, 
       0xf2, 0x7a, 0x2, 0x531, 0x532, 0x5, 0x4c, 0x27, 0x2, 0x532, 0x539, 
       0x3, 0x2, 0x2, 0x2, 0x533, 0x534, 0x5, 0xf2, 0x7a, 0x2, 0x534, 0x535, 
       0x5, 0x18, 0xd, 0x2, 0x535, 0x536, 0x7, 0x4c, 0x2, 0x2, 0x536, 0x537, 
       0x5, 0x4c, 0x27, 0x2, 0x537, 0x539, 0x3, 0x2, 0x2, 0x2, 0x538, 0x530, 
       0x3, 0x2, 0x2, 0x2, 0x538, 0x533, 0x3, 0x2, 0x2, 0x2, 0x539, 0x113, 
       0x3, 0x2, 0x2, 0x2, 0x53a, 0x53b, 0x5, 0xf2, 0x7a, 0x2, 0x53b, 0x53c, 
       0x5, 0x56, 0x2c, 0x2, 0x53c, 0x543, 0x3, 0x2, 0x2, 0x2, 0x53d, 0x53e, 
       0x5, 0xf2, 0x7a, 0x2, 0x53e, 0x53f, 0x5, 0x18, 0xd, 0x2, 0x53f, 0x540, 
       0x7, 0x4c, 0x2, 0x2, 0x540, 0x541, 0x5, 0x56, 0x2c, 0x2, 0x541, 0x543, 
       0x3, 0x2, 0x2, 0x2, 0x542, 0x53a, 0x3, 0x2, 0x2, 0x2, 0x542, 0x53d, 
       0x3, 0x2, 0x2, 0x2, 0x543, 0x115, 0x3, 0x2, 0x2, 0x2, 0x544, 0x545, 
       0x5, 0xf2, 0x7a, 0x2, 0x545, 0x546, 0x5, 0x58, 0x2d, 0x2, 0x546, 
       0x54d, 0x3, 0x2, 0x2, 0x2, 0x547, 0x548, 0x5, 0xf2, 0x7a, 0x2, 0x548, 
       0x549, 0x5, 0x18, 0xd, 0x2, 0x549, 0x54a, 0x7, 0x4c, 0x2, 0x2, 0x54a, 
       0x54b, 0x5, 0x58, 0x2d, 0x2, 0x54b, 0x54d, 0x3, 0x2, 0x2, 0x2, 0x54c, 
       0x544, 0x3, 0x2, 0x2, 0x2, 0x54c, 0x547, 0x3, 0x2, 0x2, 0x2, 0x54d, 
       0x117, 0x3, 0x2, 0x2, 0x2, 0x54e, 0x54f, 0x5, 0xf4, 0x7b, 0x2, 0x54f, 
       0x550, 0x5, 0x5c, 0x2f, 0x2, 0x550, 0x557, 0x3, 0x2, 0x2, 0x2, 0x551, 
       0x552, 0x5, 0xf4, 0x7b, 0x2, 0x552, 0x553, 0x5, 0x18, 0xd, 0x2, 0x553, 
       0x554, 0x7, 0x4c, 0x2, 0x2, 0x554, 0x555, 0x5, 0x5c, 0x2f, 0x2, 0x555, 
       0x557, 0x3, 0x2, 0x2, 0x2, 0x556, 0x54e, 0x3, 0x2, 0x2, 0x2, 0x556, 
       0x551, 0x3, 0x2, 0x2, 0x2, 0x557, 0x119, 0x3, 0x2, 0x2, 0x2, 0x558, 
       0x559, 0x5, 0xf4, 0x7b, 0x2, 0x559, 0x55a, 0x5, 0x4c, 0x27, 0x2, 
       0x55a, 0x561, 0x3, 0x2, 0x2, 0x2, 0x55b, 0x55c, 0x5, 0xf4, 0x7b, 
       0x2, 0x55c, 0x55d, 0x5, 0x18, 0xd, 0x2, 0x55d, 0x55e, 0x7, 0x4c, 
       0x2, 0x2, 0x55e, 0x55f, 0x5, 0x4c, 0x27, 0x2, 0x55f, 0x561, 0x3, 
       0x2, 0x2, 0x2, 0x560, 0x558, 0x3, 0x2, 0x2, 0x2, 0x560, 0x55b, 0x3, 
       0x2, 0x2, 0x2, 0x561, 0x11b, 0x3, 0x2, 0x2, 0x2, 0x562, 0x563, 0x5, 
       0xf4, 0x7b, 0x2, 0x563, 0x564, 0x5, 0x2a8, 0x155, 0x2, 0x564, 0x56b, 
       0x3, 0x2, 0x2, 0x2, 0x565, 0x566, 0x5, 0xf4, 0x7b, 0x2, 0x566, 0x567, 
       0x5, 0x18, 0xd, 0x2, 0x567, 0x568, 0x7, 0x4c, 0x2, 0x2, 0x568, 0x569, 
       0x5, 0x2a8, 0x155, 0x2, 0x569, 0x56b, 0x3, 0x2, 0x2, 0x2, 0x56a, 
       0x562, 0x3, 0x2, 0x2, 0x2, 0x56a, 0x565, 0x3, 0x2, 0x2, 0x2, 0x56b, 
       0x11d, 0x3, 0x2, 0x2, 0x2, 0x56c, 0x56d, 0x5, 0xf4, 0x7b, 0x2, 0x56d, 
       0x56e, 0x5, 0x56, 0x2c, 0x2, 0x56e, 0x575, 0x3, 0x2, 0x2, 0x2, 0x56f, 
       0x570, 0x5, 0xf4, 0x7b, 0x2, 0x570, 0x571, 0x5, 0x18, 0xd, 0x2, 0x571, 
       0x572, 0x7, 0x4c, 0x2, 0x2, 0x572, 0x573, 0x5, 0x56, 0x2c, 0x2, 0x573, 
       0x575, 0x3, 0x2, 0x2, 0x2, 0x574, 0x56c, 0x3, 0x2, 0x2, 0x2, 0x574, 
       0x56f, 0x3, 0x2, 0x2, 0x2, 0x575, 0x11f, 0x3, 0x2, 0x2, 0x2, 0x576, 
       0x577, 0x5, 0xf4, 0x7b, 0x2, 0x577, 0x578, 0x5, 0x58, 0x2d, 0x2, 
       0x578, 0x57f, 0x3, 0x2, 0x2, 0x2, 0x579, 0x57a, 0x5, 0xf4, 0x7b, 
       0x2, 0x57a, 0x57b, 0x5, 0x18, 0xd, 0x2, 0x57b, 0x57c, 0x7, 0x4c, 
       0x2, 0x2, 0x57c, 0x57d, 0x5, 0x58, 0x2d, 0x2, 0x57d, 0x57f, 0x3, 
       0x2, 0x2, 0x2, 0x57e, 0x576, 0x3, 0x2, 0x2, 0x2, 0x57e, 0x579, 0x3, 
       0x2, 0x2, 0x2, 0x57f, 0x121, 0x3, 0x2, 0x2, 0x2, 0x580, 0x581, 0x5, 
       0xf4, 0x7b, 0x2, 0x581, 0x582, 0x5, 0x40, 0x21, 0x2, 0x582, 0x589, 
       0x3, 0x2, 0x2, 0x2, 0x583, 0x584, 0x5, 0xf4, 0x7b, 0x2, 0x584, 0x585, 
       0x5, 0x18, 0xd, 0x2, 0x585, 0x586, 0x7, 0x4c, 0x2, 0x2, 0x586, 0x587, 
       0x5, 0x40, 0x21, 0x2, 0x587, 0x589, 0x3, 0x2, 0x2, 0x2, 0x588, 0x580, 
       0x3, 0x2, 0x2, 0x2, 0x588, 0x583, 0x3, 0x2, 0x2, 0x2, 0x589, 0x123, 
       0x3, 0x2, 0x2, 0x2, 0x58a, 0x58b, 0x5, 0xf4, 0x7b, 0x2, 0x58b, 0x58c, 
       0x5, 0x42, 0x22, 0x2, 0x58c, 0x593, 0x3, 0x2, 0x2, 0x2, 0x58d, 0x58e, 
       0x5, 0xf4, 0x7b, 0x2, 0x58e, 0x58f, 0x5, 0x18, 0xd, 0x2, 0x58f, 0x590, 
       0x7, 0x4c, 0x2, 0x2, 0x590, 0x591, 0x5, 0x42, 0x22, 0x2, 0x591, 0x593, 
       0x3, 0x2, 0x2, 0x2, 0x592, 0x58a, 0x3, 0x2, 0x2, 0x2, 0x592, 0x58d, 
       0x3, 0x2, 0x2, 0x2, 0x593, 0x125, 0x3, 0x2, 0x2, 0x2, 0x594, 0x595, 
       0x5, 0xf4, 0x7b, 0x2, 0x595, 0x596, 0x5, 0x44, 0x23, 0x2, 0x596, 
       0x59d, 0x3, 0x2, 0x2, 0x2, 0x597, 0x598, 0x5, 0xf4, 0x7b, 0x2, 0x598, 
       0x599, 0x5, 0x18, 0xd, 0x2, 0x599, 0x59a, 0x7, 0x4c, 0x2, 0x2, 0x59a, 
       0x59b, 0x5, 0x44, 0x23, 0x2, 0x59b, 0x59d, 0x3, 0x2, 0x2, 0x2, 0x59c, 
       0x594, 0x3, 0x2, 0x2, 0x2, 0x59c, 0x597, 0x3, 0x2, 0x2, 0x2, 0x59d, 
       0x127, 0x3, 0x2, 0x2, 0x2, 0x59e, 0x59f, 0x5, 0xf4, 0x7b, 0x2, 0x59f, 
       0x5a0, 0x5, 0x46, 0x24, 0x2, 0x5a0, 0x5a7, 0x3, 0x2, 0x2, 0x2, 0x5a1, 
       0x5a2, 0x5, 0xf4, 0x7b, 0x2, 0x5a2, 0x5a3, 0x5, 0x18, 0xd, 0x2, 0x5a3, 
       0x5a4, 0x7, 0x4c, 0x2, 0x2, 0x5a4, 0x5a5, 0x5, 0x46, 0x24, 0x2, 0x5a5, 
       0x5a7, 0x3, 0x2, 0x2, 0x2, 0x5a6, 0x59e, 0x3, 0x2, 0x2, 0x2, 0x5a6, 
       0x5a1, 0x3, 0x2, 0x2, 0x2, 0x5a7, 0x129, 0x3, 0x2, 0x2, 0x2, 0x5a8, 
       0x5a9, 0x5, 0xf6, 0x7c, 0x2, 0x5a9, 0x5aa, 0x5, 0x5c, 0x2f, 0x2, 
       0x5aa, 0x5b1, 0x3, 0x2, 0x2, 0x2, 0x5ab, 0x5ac, 0x5, 0xf6, 0x7c, 
       0x2, 0x5ac, 0x5ad, 0x5, 0x18, 0xd, 0x2, 0x5ad, 0x5ae, 0x7, 0x4c, 
       0x2, 0x2, 0x5ae, 0x5af, 0x5, 0x5c, 0x2f, 0x2, 0x5af, 0x5b1, 0x3, 
       0x2, 0x2, 0x2, 0x5b0, 0x5a8, 0x3, 0x2, 0x2, 0x2, 0x5b0, 0x5ab, 0x3, 
       0x2, 0x2, 0x2, 0x5b1, 0x12b, 0x3, 0x2, 0x2, 0x2, 0x5b2, 0x5b3, 0x5, 
       0xf6, 0x7c, 0x2, 0x5b3, 0x5b4, 0x5, 0x4c, 0x27, 0x2, 0x5b4, 0x5bb, 
       0x3, 0x2, 0x2, 0x2, 0x5b5, 0x5b6, 0x5, 0xf6, 0x7c, 0x2, 0x5b6, 0x5b7, 
       0x5, 0x18, 0xd, 0x2, 0x5b7, 0x5b8, 0x7, 0x4c, 0x2, 0x2, 0x5b8, 0x5b9, 
       0x5, 0x4c, 0x27, 0x2, 0x5b9, 0x5bb, 0x3, 0x2, 0x2, 0x2, 0x5ba, 0x5b2, 
       0x3, 0x2, 0x2, 0x2, 0x5ba, 0x5b5, 0x3, 0x2, 0x2, 0x2, 0x5bb, 0x12d, 
       0x3, 0x2, 0x2, 0x2, 0x5bc, 0x5bd, 0x5, 0xf6, 0x7c, 0x2, 0x5bd, 0x5be, 
       0x5, 0x2a8, 0x155, 0x2, 0x5be, 0x5c5, 0x3, 0x2, 0x2, 0x2, 0x5bf, 
       0x5c0, 0x5, 0xf6, 0x7c, 0x2, 0x5c0, 0x5c1, 0x5, 0x18, 0xd, 0x2, 0x5c1, 
       0x5c2, 0x7, 0x4c, 0x2, 0x2, 0x5c2, 0x5c3, 0x5, 0x2a8, 0x155, 0x2, 
       0x5c3, 0x5c5, 0x3, 0x2, 0x2, 0x2, 0x5c4, 0x5bc, 0x3, 0x2, 0x2, 0x2, 
       0x5c4, 0x5bf, 0x3, 0x2, 0x2, 0x2, 0x5c5, 0x12f, 0x3, 0x2, 0x2, 0x2, 
       0x5c6, 0x5c7, 0x5, 0xf6, 0x7c, 0x2, 0x5c7, 0x5c8, 0x5, 0x56, 0x2c, 
       0x2, 0x5c8, 0x5cf, 0x3, 0x2, 0x2, 0x2, 0x5c9, 0x5ca, 0x5, 0xf6, 0x7c, 
       0x2, 0x5ca, 0x5cb, 0x5, 0x18, 0xd, 0x2, 0x5cb, 0x5cc, 0x7, 0x4c, 
       0x2, 0x2, 0x5cc, 0x5cd, 0x5, 0x56, 0x2c, 0x2, 0x5cd, 0x5cf, 0x3, 
       0x2, 0x2, 0x2, 0x5ce, 0x5c6, 0x3, 0x2, 0x2, 0x2, 0x5ce, 0x5c9, 0x3, 
       0x2, 0x2, 0x2, 0x5cf, 0x131, 0x3, 0x2, 0x2, 0x2, 0x5d0, 0x5d1, 0x5, 
       0xf6, 0x7c, 0x2, 0x5d1, 0x5d2, 0x5, 0x58, 0x2d, 0x2, 0x5d2, 0x5d9, 
       0x3, 0x2, 0x2, 0x2, 0x5d3, 0x5d4, 0x5, 0xf6, 0x7c, 0x2, 0x5d4, 0x5d5, 
       0x5, 0x18, 0xd, 0x2, 0x5d5, 0x5d6, 0x7, 0x4c, 0x2, 0x2, 0x5d6, 0x5d7, 
       0x5, 0x58, 0x2d, 0x2, 0x5d7, 0x5d9, 0x3, 0x2, 0x2, 0x2, 0x5d8, 0x5d0, 
       0x3, 0x2, 0x2, 0x2, 0x5d8, 0x5d3, 0x3, 0x2, 0x2, 0x2, 0x5d9, 0x133, 
       0x3, 0x2, 0x2, 0x2, 0x5da, 0x5db, 0x5, 0xf6, 0x7c, 0x2, 0x5db, 0x5dc, 
       0x5, 0x94, 0x4b, 0x2, 0x5dc, 0x5e3, 0x3, 0x2, 0x2, 0x2, 0x5dd, 0x5de, 
       0x5, 0xf6, 0x7c, 0x2, 0x5de, 0x5df, 0x5, 0x18, 0xd, 0x2, 0x5df, 0x5e0, 
       0x7, 0x4c, 0x2, 0x2, 0x5e0, 0x5e1, 0x5, 0x94, 0x4b, 0x2, 0x5e1, 0x5e3, 
       0x3, 0x2, 0x2, 0x2, 0x5e2, 0x5da, 0x3, 0x2, 0x2, 0x2, 0x5e2, 0x5dd, 
       0x3, 0x2, 0x2, 0x2, 0x5e3, 0x135, 0x3, 0x2, 0x2, 0x2, 0x5e4, 0x5e5, 
       0x5, 0xf6, 0x7c, 0x2, 0x5e5, 0x5e6, 0x5, 0x96, 0x4c, 0x2, 0x5e6, 
       0x5ed, 0x3, 0x2, 0x2, 0x2, 0x5e7, 0x5e8, 0x5, 0xf6, 0x7c, 0x2, 0x5e8, 
       0x5e9, 0x5, 0x18, 0xd, 0x2, 0x5e9, 0x5ea, 0x7, 0x4c, 0x2, 0x2, 0x5ea, 
       0x5eb, 0x5, 0x96, 0x4c, 0x2, 0x5eb, 0x5ed, 0x3, 0x2, 0x2, 0x2, 0x5ec, 
       0x5e4, 0x3, 0x2, 0x2, 0x2, 0x5ec, 0x5e7, 0x3, 0x2, 0x2, 0x2, 0x5ed, 
       0x137, 0x3, 0x2, 0x2, 0x2, 0x5ee, 0x5ef, 0x5, 0xf8, 0x7d, 0x2, 0x5ef, 
       0x5f0, 0x5, 0x5c, 0x2f, 0x2, 0x5f0, 0x5f7, 0x3, 0x2, 0x2, 0x2, 0x5f1, 
       0x5f2, 0x5, 0xf8, 0x7d, 0x2, 0x5f2, 0x5f3, 0x5, 0x18, 0xd, 0x2, 0x5f3, 
       0x5f4, 0x7, 0x4c, 0x2, 0x2, 0x5f4, 0x5f5, 0x5, 0x5c, 0x2f, 0x2, 0x5f5, 
       0x5f7, 0x3, 0x2, 0x2, 0x2, 0x5f6, 0x5ee, 0x3, 0x2, 0x2, 0x2, 0x5f6, 
       0x5f1, 0x3, 0x2, 0x2, 0x2, 0x5f7, 0x139, 0x3, 0x2, 0x2, 0x2, 0x5f8, 
       0x5f9, 0x5, 0xf8, 0x7d, 0x2, 0x5f9, 0x5fa, 0x5, 0x4c, 0x27, 0x2, 
       0x5fa, 0x601, 0x3, 0x2, 0x2, 0x2, 0x5fb, 0x5fc, 0x5, 0xf8, 0x7d, 
       0x2, 0x5fc, 0x5fd, 0x5, 0x18, 0xd, 0x2, 0x5fd, 0x5fe, 0x7, 0x4c, 
       0x2, 0x2, 0x5fe, 0x5ff, 0x5, 0x4c, 0x27, 0x2, 0x5ff, 0x601, 0x3, 
       0x2, 0x2, 0x2, 0x600, 0x5f8, 0x3, 0x2, 0x2, 0x2, 0x600, 0x5fb, 0x3, 
       0x2, 0x2, 0x2, 0x601, 0x13b, 0x3, 0x2, 0x2, 0x2, 0x602, 0x603, 0x5, 
       0xf8, 0x7d, 0x2, 0x603, 0x604, 0x5, 0x56, 0x2c, 0x2, 0x604, 0x60b, 
       0x3, 0x2, 0x2, 0x2, 0x605, 0x606, 0x5, 0xf8, 0x7d, 0x2, 0x606, 0x607, 
       0x5, 0x18, 0xd, 0x2, 0x607, 0x608, 0x7, 0x4c, 0x2, 0x2, 0x608, 0x609, 
       0x5, 0x56, 0x2c, 0x2, 0x609, 0x60b, 0x3, 0x2, 0x2, 0x2, 0x60a, 0x602, 
       0x3, 0x2, 0x2, 0x2, 0x60a, 0x605, 0x3, 0x2, 0x2, 0x2, 0x60b, 0x13d, 
       0x3, 0x2, 0x2, 0x2, 0x60c, 0x60d, 0x5, 0xf8, 0x7d, 0x2, 0x60d, 0x60e, 
       0x5, 0x58, 0x2d, 0x2, 0x60e, 0x615, 0x3, 0x2, 0x2, 0x2, 0x60f, 0x610, 
       0x5, 0xf8, 0x7d, 0x2, 0x610, 0x611, 0x5, 0x18, 0xd, 0x2, 0x611, 0x612, 
       0x7, 0x4c, 0x2, 0x2, 0x612, 0x613, 0x5, 0x58, 0x2d, 0x2, 0x613, 0x615, 
       0x3, 0x2, 0x2, 0x2, 0x614, 0x60c, 0x3, 0x2, 0x2, 0x2, 0x614, 0x60f, 
       0x3, 0x2, 0x2, 0x2, 0x615, 0x13f, 0x3, 0x2, 0x2, 0x2, 0x616, 0x617, 
       0x5, 0xf8, 0x7d, 0x2, 0x617, 0x618, 0x5, 0x2a8, 0x155, 0x2, 0x618, 
       0x61f, 0x3, 0x2, 0x2, 0x2, 0x619, 0x61a, 0x5, 0xf8, 0x7d, 0x2, 0x61a, 
       0x61b, 0x5, 0x18, 0xd, 0x2, 0x61b, 0x61c, 0x7, 0x4c, 0x2, 0x2, 0x61c, 
       0x61d, 0x5, 0x2a8, 0x155, 0x2, 0x61d, 0x61f, 0x3, 0x2, 0x2, 0x2, 
       0x61e, 0x616, 0x3, 0x2, 0x2, 0x2, 0x61e, 0x619, 0x3, 0x2, 0x2, 0x2, 
       0x61f, 0x141, 0x3, 0x2, 0x2, 0x2, 0x620, 0x621, 0x5, 0xf8, 0x7d, 
       0x2, 0x621, 0x622, 0x5, 0x40, 0x21, 0x2, 0x622, 0x629, 0x3, 0x2, 
       0x2, 0x2, 0x623, 0x624, 0x5, 0xf8, 0x7d, 0x2, 0x624, 0x625, 0x5, 
       0x18, 0xd, 0x2, 0x625, 0x626, 0x7, 0x4c, 0x2, 0x2, 0x626, 0x627, 
       0x5, 0x40, 0x21, 0x2, 0x627, 0x629, 0x3, 0x2, 0x2, 0x2, 0x628, 0x620, 
       0x3, 0x2, 0x2, 0x2, 0x628, 0x623, 0x3, 0x2, 0x2, 0x2, 0x629, 0x143, 
       0x3, 0x2, 0x2, 0x2, 0x62a, 0x62b, 0x5, 0xf8, 0x7d, 0x2, 0x62b, 0x62c, 
       0x5, 0x42, 0x22, 0x2, 0x62c, 0x633, 0x3, 0x2, 0x2, 0x2, 0x62d, 0x62e, 
       0x5, 0xf8, 0x7d, 0x2, 0x62e, 0x62f, 0x5, 0x18, 0xd, 0x2, 0x62f, 0x630, 
       0x7, 0x4c, 0x2, 0x2, 0x630, 0x631, 0x5, 0x42, 0x22, 0x2, 0x631, 0x633, 
       0x3, 0x2, 0x2, 0x2, 0x632, 0x62a, 0x3, 0x2, 0x2, 0x2, 0x632, 0x62d, 
       0x3, 0x2, 0x2, 0x2, 0x633, 0x145, 0x3, 0x2, 0x2, 0x2, 0x634, 0x635, 
       0x5, 0xf8, 0x7d, 0x2, 0x635, 0x636, 0x5, 0x44, 0x23, 0x2, 0x636, 
       0x63d, 0x3, 0x2, 0x2, 0x2, 0x637, 0x638, 0x5, 0xf8, 0x7d, 0x2, 0x638, 
       0x639, 0x5, 0x18, 0xd, 0x2, 0x639, 0x63a, 0x7, 0x4c, 0x2, 0x2, 0x63a, 
       0x63b, 0x5, 0x44, 0x23, 0x2, 0x63b, 0x63d, 0x3, 0x2, 0x2, 0x2, 0x63c, 
       0x634, 0x3, 0x2, 0x2, 0x2, 0x63c, 0x637, 0x3, 0x2, 0x2, 0x2, 0x63d, 
       0x147, 0x3, 0x2, 0x2, 0x2, 0x63e, 0x63f, 0x5, 0xf8, 0x7d, 0x2, 0x63f, 
       0x640, 0x5, 0x46, 0x24, 0x2, 0x640, 0x647, 0x3, 0x2, 0x2, 0x2, 0x641, 
       0x642, 0x5, 0xf8, 0x7d, 0x2, 0x642, 0x643, 0x5, 0x18, 0xd, 0x2, 0x643, 
       0x644, 0x7, 0x4c, 0x2, 0x2, 0x644, 0x645, 0x5, 0x46, 0x24, 0x2, 0x645, 
       0x647, 0x3, 0x2, 0x2, 0x2, 0x646, 0x63e, 0x3, 0x2, 0x2, 0x2, 0x646, 
       0x641, 0x3, 0x2, 0x2, 0x2, 0x647, 0x149, 0x3, 0x2, 0x2, 0x2, 0x648, 
       0x649, 0x5, 0xfa, 0x7e, 0x2, 0x649, 0x64a, 0x5, 0x5c, 0x2f, 0x2, 
       0x64a, 0x651, 0x3, 0x2, 0x2, 0x2, 0x64b, 0x64c, 0x5, 0xfa, 0x7e, 
       0x2, 0x64c, 0x64d, 0x5, 0x18, 0xd, 0x2, 0x64d, 0x64e, 0x7, 0x4c, 
       0x2, 0x2, 0x64e, 0x64f, 0x5, 0x5c, 0x2f, 0x2, 0x64f, 0x651, 0x3, 
       0x2, 0x2, 0x2, 0x650, 0x648, 0x3, 0x2, 0x2, 0x2, 0x650, 0x64b, 0x3, 
       0x2, 0x2, 0x2, 0x651, 0x14b, 0x3, 0x2, 0x2, 0x2, 0x652, 0x653, 0x5, 
       0xfa, 0x7e, 0x2, 0x653, 0x654, 0x5, 0x2a8, 0x155, 0x2, 0x654, 0x65b, 
       0x3, 0x2, 0x2, 0x2, 0x655, 0x656, 0x5, 0xfa, 0x7e, 0x2, 0x656, 0x657, 
       0x5, 0x18, 0xd, 0x2, 0x657, 0x658, 0x7, 0x4c, 0x2, 0x2, 0x658, 0x659, 
       0x5, 0x2a8, 0x155, 0x2, 0x659, 0x65b, 0x3, 0x2, 0x2, 0x2, 0x65a, 
       0x652, 0x3, 0x2, 0x2, 0x2, 0x65a, 0x655, 0x3, 0x2, 0x2, 0x2, 0x65b, 
       0x14d, 0x3, 0x2, 0x2, 0x2, 0x65c, 0x65d, 0x5, 0xfa, 0x7e, 0x2, 0x65d, 
       0x65e, 0x5, 0x4c, 0x27, 0x2, 0x65e, 0x665, 0x3, 0x2, 0x2, 0x2, 0x65f, 
       0x660, 0x5, 0xfa, 0x7e, 0x2, 0x660, 0x661, 0x5, 0x18, 0xd, 0x2, 0x661, 
       0x662, 0x7, 0x4c, 0x2, 0x2, 0x662, 0x663, 0x5, 0x4c, 0x27, 0x2, 0x663, 
       0x665, 0x3, 0x2, 0x2, 0x2, 0x664, 0x65c, 0x3, 0x2, 0x2, 0x2, 0x664, 
       0x65f, 0x3, 0x2, 0x2, 0x2, 0x665, 0x14f, 0x3, 0x2, 0x2, 0x2, 0x666, 
       0x667, 0x5, 0xfa, 0x7e, 0x2, 0x667, 0x668, 0x5, 0x56, 0x2c, 0x2, 
       0x668, 0x66f, 0x3, 0x2, 0x2, 0x2, 0x669, 0x66a, 0x5, 0xfa, 0x7e, 
       0x2, 0x66a, 0x66b, 0x5, 0x18, 0xd, 0x2, 0x66b, 0x66c, 0x7, 0x4c, 
       0x2, 0x2, 0x66c, 0x66d, 0x5, 0x56, 0x2c, 0x2, 0x66d, 0x66f, 0x3, 
       0x2, 0x2, 0x2, 0x66e, 0x666, 0x3, 0x2, 0x2, 0x2, 0x66e, 0x669, 0x3, 
       0x2, 0x2, 0x2, 0x66f, 0x151, 0x3, 0x2, 0x2, 0x2, 0x670, 0x671, 0x5, 
       0xfa, 0x7e, 0x2, 0x671, 0x672, 0x5, 0x58, 0x2d, 0x2, 0x672, 0x679, 
       0x3, 0x2, 0x2, 0x2, 0x673, 0x674, 0x5, 0xfa, 0x7e, 0x2, 0x674, 0x675, 
       0x5, 0x18, 0xd, 0x2, 0x675, 0x676, 0x7, 0x4c, 0x2, 0x2, 0x676, 0x677, 
       0x5, 0x58, 0x2d, 0x2, 0x677, 0x679, 0x3, 0x2, 0x2, 0x2, 0x678, 0x670, 
       0x3, 0x2, 0x2, 0x2, 0x678, 0x673, 0x3, 0x2, 0x2, 0x2, 0x679, 0x153, 
       0x3, 0x2, 0x2, 0x2, 0x67a, 0x67b, 0x5, 0xfa, 0x7e, 0x2, 0x67b, 0x67c, 
       0x5, 0x40, 0x21, 0x2, 0x67c, 0x683, 0x3, 0x2, 0x2, 0x2, 0x67d, 0x67e, 
       0x5, 0xfa, 0x7e, 0x2, 0x67e, 0x67f, 0x5, 0x18, 0xd, 0x2, 0x67f, 0x680, 
       0x7, 0x4c, 0x2, 0x2, 0x680, 0x681, 0x5, 0x40, 0x21, 0x2, 0x681, 0x683, 
       0x3, 0x2, 0x2, 0x2, 0x682, 0x67a, 0x3, 0x2, 0x2, 0x2, 0x682, 0x67d, 
       0x3, 0x2, 0x2, 0x2, 0x683, 0x155, 0x3, 0x2, 0x2, 0x2, 0x684, 0x685, 
       0x5, 0xfa, 0x7e, 0x2, 0x685, 0x686, 0x5, 0x42, 0x22, 0x2, 0x686, 
       0x68d, 0x3, 0x2, 0x2, 0x2, 0x687, 0x688, 0x5, 0xfa, 0x7e, 0x2, 0x688, 
       0x689, 0x5, 0x18, 0xd, 0x2, 0x689, 0x68a, 0x7, 0x4c, 0x2, 0x2, 0x68a, 
       0x68b, 0x5, 0x42, 0x22, 0x2, 0x68b, 0x68d, 0x3, 0x2, 0x2, 0x2, 0x68c, 
       0x684, 0x3, 0x2, 0x2, 0x2, 0x68c, 0x687, 0x3, 0x2, 0x2, 0x2, 0x68d, 
       0x157, 0x3, 0x2, 0x2, 0x2, 0x68e, 0x68f, 0x5, 0xfa, 0x7e, 0x2, 0x68f, 
       0x690, 0x5, 0x44, 0x23, 0x2, 0x690, 0x697, 0x3, 0x2, 0x2, 0x2, 0x691, 
       0x692, 0x5, 0xfa, 0x7e, 0x2, 0x692, 0x693, 0x5, 0x18, 0xd, 0x2, 0x693, 
       0x694, 0x7, 0x4c, 0x2, 0x2, 0x694, 0x695, 0x5, 0x44, 0x23, 0x2, 0x695, 
       0x697, 0x3, 0x2, 0x2, 0x2, 0x696, 0x68e, 0x3, 0x2, 0x2, 0x2, 0x696, 
       0x691, 0x3, 0x2, 0x2, 0x2, 0x697, 0x159, 0x3, 0x2, 0x2, 0x2, 0x698, 
       0x699, 0x5, 0xfa, 0x7e, 0x2, 0x699, 0x69a, 0x5, 0x46, 0x24, 0x2, 
       0x69a, 0x6a1, 0x3, 0x2, 0x2, 0x2, 0x69b, 0x69c, 0x5, 0xfa, 0x7e, 
       0x2, 0x69c, 0x69d, 0x5, 0x18, 0xd, 0x2, 0x69d, 0x69e, 0x7, 0x4c, 
       0x2, 0x2, 0x69e, 0x69f, 0x5, 0x46, 0x24, 0x2, 0x69f, 0x6a1, 0x3, 
       0x2, 0x2, 0x2, 0x6a0, 0x698, 0x3, 0x2, 0x2, 0x2, 0x6a0, 0x69b, 0x3, 
       0x2, 0x2, 0x2, 0x6a1, 0x15b, 0x3, 0x2, 0x2, 0x2, 0x6a2, 0x6a3, 0x5, 
       0xfc, 0x7f, 0x2, 0x6a3, 0x6a4, 0x5, 0x5c, 0x2f, 0x2, 0x6a4, 0x6ab, 
       0x3, 0x2, 0x2, 0x2, 0x6a5, 0x6a6, 0x5, 0xfc, 0x7f, 0x2, 0x6a6, 0x6a7, 
       0x5, 0x18, 0xd, 0x2, 0x6a7, 0x6a8, 0x7, 0x4c, 0x2, 0x2, 0x6a8, 0x6a9, 
       0x5, 0x5c, 0x2f, 0x2, 0x6a9, 0x6ab, 0x3, 0x2, 0x2, 0x2, 0x6aa, 0x6a2, 
       0x3, 0x2, 0x2, 0x2, 0x6aa, 0x6a5, 0x3, 0x2, 0x2, 0x2, 0x6ab, 0x15d, 
       0x3, 0x2, 0x2, 0x2, 0x6ac, 0x6ad, 0x5, 0xfc, 0x7f, 0x2, 0x6ad, 0x6ae, 
       0x5, 0x2a8, 0x155, 0x2, 0x6ae, 0x6b5, 0x3, 0x2, 0x2, 0x2, 0x6af, 
       0x6b0, 0x5, 0xfc, 0x7f, 0x2, 0x6b0, 0x6b1, 0x5, 0x18, 0xd, 0x2, 0x6b1, 
       0x6b2, 0x7, 0x4c, 0x2, 0x2, 0x6b2, 0x6b3, 0x5, 0x2a8, 0x155, 0x2, 
       0x6b3, 0x6b5, 0x3, 0x2, 0x2, 0x2, 0x6b4, 0x6ac, 0x3, 0x2, 0x2, 0x2, 
       0x6b4, 0x6af, 0x3, 0x2, 0x2, 0x2, 0x6b5, 0x15f, 0x3, 0x2, 0x2, 0x2, 
       0x6b6, 0x6b7, 0x5, 0xfc, 0x7f, 0x2, 0x6b7, 0x6b8, 0x5, 0x4c, 0x27, 
       0x2, 0x6b8, 0x6bf, 0x3, 0x2, 0x2, 0x2, 0x6b9, 0x6ba, 0x5, 0xfc, 0x7f, 
       0x2, 0x6ba, 0x6bb, 0x5, 0x18, 0xd, 0x2, 0x6bb, 0x6bc, 0x7, 0x4c, 
       0x2, 0x2, 0x6bc, 0x6bd, 0x5, 0x4c, 0x27, 0x2, 0x6bd, 0x6bf, 0x3, 
       0x2, 0x2, 0x2, 0x6be, 0x6b6, 0x3, 0x2, 0x2, 0x2, 0x6be, 0x6b9, 0x3, 
       0x2, 0x2, 0x2, 0x6bf, 0x161, 0x3, 0x2, 0x2, 0x2, 0x6c0, 0x6c1, 0x5, 
       0xfc, 0x7f, 0x2, 0x6c1, 0x6c2, 0x5, 0x56, 0x2c, 0x2, 0x6c2, 0x6c9, 
       0x3, 0x2, 0x2, 0x2, 0x6c3, 0x6c4, 0x5, 0xfc, 0x7f, 0x2, 0x6c4, 0x6c5, 
       0x5, 0x18, 0xd, 0x2, 0x6c5, 0x6c6, 0x7, 0x4c, 0x2, 0x2, 0x6c6, 0x6c7, 
       0x5, 0x56, 0x2c, 0x2, 0x6c7, 0x6c9, 0x3, 0x2, 0x2, 0x2, 0x6c8, 0x6c0, 
       0x3, 0x2, 0x2, 0x2, 0x6c8, 0x6c3, 0x3, 0x2, 0x2, 0x2, 0x6c9, 0x163, 
       0x3, 0x2, 0x2, 0x2, 0x6ca, 0x6cb, 0x5, 0xfc, 0x7f, 0x2, 0x6cb, 0x6cc, 
       0x5, 0x58, 0x2d, 0x2, 0x6cc, 0x6d3, 0x3, 0x2, 0x2, 0x2, 0x6cd, 0x6ce, 
       0x5, 0xfc, 0x7f, 0x2, 0x6ce, 0x6cf, 0x5, 0x18, 0xd, 0x2, 0x6cf, 0x6d0, 
       0x7, 0x4c, 0x2, 0x2, 0x6d0, 0x6d1, 0x5, 0x58, 0x2d, 0x2, 0x6d1, 0x6d3, 
       0x3, 0x2, 0x2, 0x2, 0x6d2, 0x6ca, 0x3, 0x2, 0x2, 0x2, 0x6d2, 0x6cd, 
       0x3, 0x2, 0x2, 0x2, 0x6d3, 0x165, 0x3, 0x2, 0x2, 0x2, 0x6d4, 0x6d5, 
       0x5, 0xfc, 0x7f, 0x2, 0x6d5, 0x6d6, 0x5, 0x40, 0x21, 0x2, 0x6d6, 
       0x6dd, 0x3, 0x2, 0x2, 0x2, 0x6d7, 0x6d8, 0x5, 0xfc, 0x7f, 0x2, 0x6d8, 
       0x6d9, 0x5, 0x18, 0xd, 0x2, 0x6d9, 0x6da, 0x7, 0x4c, 0x2, 0x2, 0x6da, 
       0x6db, 0x5, 0x40, 0x21, 0x2, 0x6db, 0x6dd, 0x3, 0x2, 0x2, 0x2, 0x6dc, 
       0x6d4, 0x3, 0x2, 0x2, 0x2, 0x6dc, 0x6d7, 0x3, 0x2, 0x2, 0x2, 0x6dd, 
       0x167, 0x3, 0x2, 0x2, 0x2, 0x6de, 0x6df, 0x5, 0xfc, 0x7f, 0x2, 0x6df, 
       0x6e0, 0x5, 0x42, 0x22, 0x2, 0x6e0, 0x6e7, 0x3, 0x2, 0x2, 0x2, 0x6e1, 
       0x6e2, 0x5, 0xfc, 0x7f, 0x2, 0x6e2, 0x6e3, 0x5, 0x18, 0xd, 0x2, 0x6e3, 
       0x6e4, 0x7, 0x4c, 0x2, 0x2, 0x6e4, 0x6e5, 0x5, 0x42, 0x22, 0x2, 0x6e5, 
       0x6e7, 0x3, 0x2, 0x2, 0x2, 0x6e6, 0x6de, 0x3, 0x2, 0x2, 0x2, 0x6e6, 
       0x6e1, 0x3, 0x2, 0x2, 0x2, 0x6e7, 0x169, 0x3, 0x2, 0x2, 0x2, 0x6e8, 
       0x6e9, 0x5, 0xfc, 0x7f, 0x2, 0x6e9, 0x6ea, 0x5, 0x44, 0x23, 0x2, 
       0x6ea, 0x6f1, 0x3, 0x2, 0x2, 0x2, 0x6eb, 0x6ec, 0x5, 0xfc, 0x7f, 
       0x2, 0x6ec, 0x6ed, 0x5, 0x18, 0xd, 0x2, 0x6ed, 0x6ee, 0x7, 0x4c, 
       0x2, 0x2, 0x6ee, 0x6ef, 0x5, 0x44, 0x23, 0x2, 0x6ef, 0x6f1, 0x3, 
       0x2, 0x2, 0x2, 0x6f0, 0x6e8, 0x3, 0x2, 0x2, 0x2, 0x6f0, 0x6eb, 0x3, 
       0x2, 0x2, 0x2, 0x6f1, 0x16b, 0x3, 0x2, 0x2, 0x2, 0x6f2, 0x6f3, 0x5, 
       0xfc, 0x7f, 0x2, 0x6f3, 0x6f4, 0x5, 0x46, 0x24, 0x2, 0x6f4, 0x6fb, 
       0x3, 0x2, 0x2, 0x2, 0x6f5, 0x6f6, 0x5, 0xfc, 0x7f, 0x2, 0x6f6, 0x6f7, 
       0x5, 0x18, 0xd, 0x2, 0x6f7, 0x6f8, 0x7, 0x4c, 0x2, 0x2, 0x6f8, 0x6f9, 
       0x5, 0x46, 0x24, 0x2, 0x6f9, 0x6fb, 0x3, 0x2, 0x2, 0x2, 0x6fa, 0x6f2, 
       0x3, 0x2, 0x2, 0x2, 0x6fa, 0x6f5, 0x3, 0x2, 0x2, 0x2, 0x6fb, 0x16d, 
       0x3, 0x2, 0x2, 0x2, 0x6fc, 0x6fd, 0x5, 0xfe, 0x80, 0x2, 0x6fd, 0x6fe, 
       0x5, 0x5c, 0x2f, 0x2, 0x6fe, 0x705, 0x3, 0x2, 0x2, 0x2, 0x6ff, 0x700, 
       0x5, 0xfe, 0x80, 0x2, 0x700, 0x701, 0x5, 0x18, 0xd, 0x2, 0x701, 0x702, 
       0x7, 0x4c, 0x2, 0x2, 0x702, 0x703, 0x5, 0x5c, 0x2f, 0x2, 0x703, 0x705, 
       0x3, 0x2, 0x2, 0x2, 0x704, 0x6fc, 0x3, 0x2, 0x2, 0x2, 0x704, 0x6ff, 
       0x3, 0x2, 0x2, 0x2, 0x705, 0x16f, 0x3, 0x2, 0x2, 0x2, 0x706, 0x707, 
       0x5, 0xfe, 0x80, 0x2, 0x707, 0x708, 0x5, 0x2a8, 0x155, 0x2, 0x708, 
       0x70f, 0x3, 0x2, 0x2, 0x2, 0x709, 0x70a, 0x5, 0xfe, 0x80, 0x2, 0x70a, 
       0x70b, 0x5, 0x18, 0xd, 0x2, 0x70b, 0x70c, 0x7, 0x4c, 0x2, 0x2, 0x70c, 
       0x70d, 0x5, 0x2a8, 0x155, 0x2, 0x70d, 0x70f, 0x3, 0x2, 0x2, 0x2, 
       0x70e, 0x706, 0x3, 0x2, 0x2, 0x2, 0x70e, 0x709, 0x3, 0x2, 0x2, 0x2, 
       0x70f, 0x171, 0x3, 0x2, 0x2, 0x2, 0x710, 0x711, 0x5, 0xfe, 0x80, 
       0x2, 0x711, 0x712, 0x5, 0x4c, 0x27, 0x2, 0x712, 0x719, 0x3, 0x2, 
       0x2, 0x2, 0x713, 0x714, 0x5, 0xfe, 0x80, 0x2, 0x714, 0x715, 0x5, 
       0x18, 0xd, 0x2, 0x715, 0x716, 0x7, 0x4c, 0x2, 0x2, 0x716, 0x717, 
       0x5, 0x4c, 0x27, 0x2, 0x717, 0x719, 0x3, 0x2, 0x2, 0x2, 0x718, 0x710, 
       0x3, 0x2, 0x2, 0x2, 0x718, 0x713, 0x3, 0x2, 0x2, 0x2, 0x719, 0x173, 
       0x3, 0x2, 0x2, 0x2, 0x71a, 0x71b, 0x5, 0xfe, 0x80, 0x2, 0x71b, 0x71c, 
       0x5, 0x56, 0x2c, 0x2, 0x71c, 0x723, 0x3, 0x2, 0x2, 0x2, 0x71d, 0x71e, 
       0x5, 0xfe, 0x80, 0x2, 0x71e, 0x71f, 0x5, 0x18, 0xd, 0x2, 0x71f, 0x720, 
       0x7, 0x4c, 0x2, 0x2, 0x720, 0x721, 0x5, 0x56, 0x2c, 0x2, 0x721, 0x723, 
       0x3, 0x2, 0x2, 0x2, 0x722, 0x71a, 0x3, 0x2, 0x2, 0x2, 0x722, 0x71d, 
       0x3, 0x2, 0x2, 0x2, 0x723, 0x175, 0x3, 0x2, 0x2, 0x2, 0x724, 0x725, 
       0x5, 0xfe, 0x80, 0x2, 0x725, 0x726, 0x5, 0x58, 0x2d, 0x2, 0x726, 
       0x72d, 0x3, 0x2, 0x2, 0x2, 0x727, 0x728, 0x5, 0xfe, 0x80, 0x2, 0x728, 
       0x729, 0x5, 0x18, 0xd, 0x2, 0x729, 0x72a, 0x7, 0x4c, 0x2, 0x2, 0x72a, 
       0x72b, 0x5, 0x58, 0x2d, 0x2, 0x72b, 0x72d, 0x3, 0x2, 0x2, 0x2, 0x72c, 
       0x724, 0x3, 0x2, 0x2, 0x2, 0x72c, 0x727, 0x3, 0x2, 0x2, 0x2, 0x72d, 
       0x177, 0x3, 0x2, 0x2, 0x2, 0x72e, 0x72f, 0x5, 0xfe, 0x80, 0x2, 0x72f, 
       0x730, 0x5, 0x40, 0x21, 0x2, 0x730, 0x737, 0x3, 0x2, 0x2, 0x2, 0x731, 
       0x732, 0x5, 0xfe, 0x80, 0x2, 0x732, 0x733, 0x5, 0x18, 0xd, 0x2, 0x733, 
       0x734, 0x7, 0x4c, 0x2, 0x2, 0x734, 0x735, 0x5, 0x40, 0x21, 0x2, 0x735, 
       0x737, 0x3, 0x2, 0x2, 0x2, 0x736, 0x72e, 0x3, 0x2, 0x2, 0x2, 0x736, 
       0x731, 0x3, 0x2, 0x2, 0x2, 0x737, 0x179, 0x3, 0x2, 0x2, 0x2, 0x738, 
       0x739, 0x5, 0xfe, 0x80, 0x2, 0x739, 0x73a, 0x5, 0x42, 0x22, 0x2, 
       0x73a, 0x741, 0x3, 0x2, 0x2, 0x2, 0x73b, 0x73c, 0x5, 0xfe, 0x80, 
       0x2, 0x73c, 0x73d, 0x5, 0x18, 0xd, 0x2, 0x73d, 0x73e, 0x7, 0x4c, 
       0x2, 0x2, 0x73e, 0x73f, 0x5, 0x42, 0x22, 0x2, 0x73f, 0x741, 0x3, 
       0x2, 0x2, 0x2, 0x740, 0x738, 0x3, 0x2, 0x2, 0x2, 0x740, 0x73b, 0x3, 
       0x2, 0x2, 0x2, 0x741, 0x17b, 0x3, 0x2, 0x2, 0x2, 0x742, 0x743, 0x5, 
       0xfe, 0x80, 0x2, 0x743, 0x744, 0x5, 0x44, 0x23, 0x2, 0x744, 0x74b, 
       0x3, 0x2, 0x2, 0x2, 0x745, 0x746, 0x5, 0xfe, 0x80, 0x2, 0x746, 0x747, 
       0x5, 0x18, 0xd, 0x2, 0x747, 0x748, 0x7, 0x4c, 0x2, 0x2, 0x748, 0x749, 
       0x5, 0x44, 0x23, 0x2, 0x749, 0x74b, 0x3, 0x2, 0x2, 0x2, 0x74a, 0x742, 
       0x3, 0x2, 0x2, 0x2, 0x74a, 0x745, 0x3, 0x2, 0x2, 0x2, 0x74b, 0x17d, 
       0x3, 0x2, 0x2, 0x2, 0x74c, 0x74d, 0x5, 0xfe, 0x80, 0x2, 0x74d, 0x74e, 
       0x5, 0x46, 0x24, 0x2, 0x74e, 0x755, 0x3, 0x2, 0x2, 0x2, 0x74f, 0x750, 
       0x5, 0xfe, 0x80, 0x2, 0x750, 0x751, 0x5, 0x18, 0xd, 0x2, 0x751, 0x752, 
       0x7, 0x4c, 0x2, 0x2, 0x752, 0x753, 0x5, 0x46, 0x24, 0x2, 0x753, 0x755, 
       0x3, 0x2, 0x2, 0x2, 0x754, 0x74c, 0x3, 0x2, 0x2, 0x2, 0x754, 0x74f, 
       0x3, 0x2, 0x2, 0x2, 0x755, 0x17f, 0x3, 0x2, 0x2, 0x2, 0x756, 0x757, 
       0x5, 0x100, 0x81, 0x2, 0x757, 0x758, 0x5, 0x5c, 0x2f, 0x2, 0x758, 
       0x75f, 0x3, 0x2, 0x2, 0x2, 0x759, 0x75a, 0x5, 0x100, 0x81, 0x2, 0x75a, 
       0x75b, 0x5, 0x18, 0xd, 0x2, 0x75b, 0x75c, 0x7, 0x4c, 0x2, 0x2, 0x75c, 
       0x75d, 0x5, 0x5c, 0x2f, 0x2, 0x75d, 0x75f, 0x3, 0x2, 0x2, 0x2, 0x75e, 
       0x756, 0x3, 0x2, 0x2, 0x2, 0x75e, 0x759, 0x3, 0x2, 0x2, 0x2, 0x75f, 
       0x181, 0x3, 0x2, 0x2, 0x2, 0x760, 0x761, 0x5, 0x100, 0x81, 0x2, 0x761, 
       0x762, 0x5, 0x4c, 0x27, 0x2, 0x762, 0x769, 0x3, 0x2, 0x2, 0x2, 0x763, 
       0x764, 0x5, 0x100, 0x81, 0x2, 0x764, 0x765, 0x5, 0x18, 0xd, 0x2, 
       0x765, 0x766, 0x7, 0x4c, 0x2, 0x2, 0x766, 0x767, 0x5, 0x4c, 0x27, 
       0x2, 0x767, 0x769, 0x3, 0x2, 0x2, 0x2, 0x768, 0x760, 0x3, 0x2, 0x2, 
       0x2, 0x768, 0x763, 0x3, 0x2, 0x2, 0x2, 0x769, 0x183, 0x3, 0x2, 0x2, 
       0x2, 0x76a, 0x76b, 0x5, 0x100, 0x81, 0x2, 0x76b, 0x76c, 0x5, 0x2a8, 
       0x155, 0x2, 0x76c, 0x773, 0x3, 0x2, 0x2, 0x2, 0x76d, 0x76e, 0x5, 
       0x100, 0x81, 0x2, 0x76e, 0x76f, 0x5, 0x18, 0xd, 0x2, 0x76f, 0x770, 
       0x7, 0x4c, 0x2, 0x2, 0x770, 0x771, 0x5, 0x2a8, 0x155, 0x2, 0x771, 
       0x773, 0x3, 0x2, 0x2, 0x2, 0x772, 0x76a, 0x3, 0x2, 0x2, 0x2, 0x772, 
       0x76d, 0x3, 0x2, 0x2, 0x2, 0x773, 0x185, 0x3, 0x2, 0x2, 0x2, 0x774, 
       0x775, 0x5, 0x100, 0x81, 0x2, 0x775, 0x776, 0x5, 0x56, 0x2c, 0x2, 
       0x776, 0x77d, 0x3, 0x2, 0x2, 0x2, 0x777, 0x778, 0x5, 0x100, 0x81, 
       0x2, 0x778, 0x779, 0x5, 0x18, 0xd, 0x2, 0x779, 0x77a, 0x7, 0x4c, 
       0x2, 0x2, 0x77a, 0x77b, 0x5, 0x56, 0x2c, 0x2, 0x77b, 0x77d, 0x3, 
       0x2, 0x2, 0x2, 0x77c, 0x774, 0x3, 0x2, 0x2, 0x2, 0x77c, 0x777, 0x3, 
       0x2, 0x2, 0x2, 0x77d, 0x187, 0x3, 0x2, 0x2, 0x2, 0x77e, 0x77f, 0x5, 
       0x100, 0x81, 0x2, 0x77f, 0x780, 0x5, 0x58, 0x2d, 0x2, 0x780, 0x787, 
       0x3, 0x2, 0x2, 0x2, 0x781, 0x782, 0x5, 0x100, 0x81, 0x2, 0x782, 0x783, 
       0x5, 0x18, 0xd, 0x2, 0x783, 0x784, 0x7, 0x4c, 0x2, 0x2, 0x784, 0x785, 
       0x5, 0x58, 0x2d, 0x2, 0x785, 0x787, 0x3, 0x2, 0x2, 0x2, 0x786, 0x77e, 
       0x3, 0x2, 0x2, 0x2, 0x786, 0x781, 0x3, 0x2, 0x2, 0x2, 0x787, 0x189, 
       0x3, 0x2, 0x2, 0x2, 0x788, 0x789, 0x5, 0x100, 0x81, 0x2, 0x789, 0x78a, 
       0x5, 0x40, 0x21, 0x2, 0x78a, 0x791, 0x3, 0x2, 0x2, 0x2, 0x78b, 0x78c, 
       0x5, 0x100, 0x81, 0x2, 0x78c, 0x78d, 0x5, 0x18, 0xd, 0x2, 0x78d, 
       0x78e, 0x7, 0x4c, 0x2, 0x2, 0x78e, 0x78f, 0x5, 0x40, 0x21, 0x2, 0x78f, 
       0x791, 0x3, 0x2, 0x2, 0x2, 0x790, 0x788, 0x3, 0x2, 0x2, 0x2, 0x790, 
       0x78b, 0x3, 0x2, 0x2, 0x2, 0x791, 0x18b, 0x3, 0x2, 0x2, 0x2, 0x792, 
       0x793, 0x5, 0x100, 0x81, 0x2, 0x793, 0x794, 0x5, 0x42, 0x22, 0x2, 
       0x794, 0x79b, 0x3, 0x2, 0x2, 0x2, 0x795, 0x796, 0x5, 0x100, 0x81, 
       0x2, 0x796, 0x797, 0x5, 0x18, 0xd, 0x2, 0x797, 0x798, 0x7, 0x4c, 
       0x2, 0x2, 0x798, 0x799, 0x5, 0x42, 0x22, 0x2, 0x799, 0x79b, 0x3, 
       0x2, 0x2, 0x2, 0x79a, 0x792, 0x3, 0x2, 0x2, 0x2, 0x79a, 0x795, 0x3, 
       0x2, 0x2, 0x2, 0x79b, 0x18d, 0x3, 0x2, 0x2, 0x2, 0x79c, 0x79d, 0x5, 
       0x100, 0x81, 0x2, 0x79d, 0x79e, 0x5, 0x44, 0x23, 0x2, 0x79e, 0x7a5, 
       0x3, 0x2, 0x2, 0x2, 0x79f, 0x7a0, 0x5, 0x100, 0x81, 0x2, 0x7a0, 0x7a1, 
       0x5, 0x18, 0xd, 0x2, 0x7a1, 0x7a2, 0x7, 0x4c, 0x2, 0x2, 0x7a2, 0x7a3, 
       0x5, 0x44, 0x23, 0x2, 0x7a3, 0x7a5, 0x3, 0x2, 0x2, 0x2, 0x7a4, 0x79c, 
       0x3, 0x2, 0x2, 0x2, 0x7a4, 0x79f, 0x3, 0x2, 0x2, 0x2, 0x7a5, 0x18f, 
       0x3, 0x2, 0x2, 0x2, 0x7a6, 0x7a7, 0x5, 0x100, 0x81, 0x2, 0x7a7, 0x7a8, 
       0x5, 0x46, 0x24, 0x2, 0x7a8, 0x7af, 0x3, 0x2, 0x2, 0x2, 0x7a9, 0x7aa, 
       0x5, 0x100, 0x81, 0x2, 0x7aa, 0x7ab, 0x5, 0x18, 0xd, 0x2, 0x7ab, 
       0x7ac, 0x7, 0x4c, 0x2, 0x2, 0x7ac, 0x7ad, 0x5, 0x46, 0x24, 0x2, 0x7ad, 
       0x7af, 0x3, 0x2, 0x2, 0x2, 0x7ae, 0x7a6, 0x3, 0x2, 0x2, 0x2, 0x7ae, 
       0x7a9, 0x3, 0x2, 0x2, 0x2, 0x7af, 0x191, 0x3, 0x2, 0x2, 0x2, 0x7b0, 
       0x7b1, 0x5, 0x102, 0x82, 0x2, 0x7b1, 0x7b2, 0x5, 0x5c, 0x2f, 0x2, 
       0x7b2, 0x193, 0x3, 0x2, 0x2, 0x2, 0x7b3, 0x7b4, 0x5, 0x102, 0x82, 
       0x2, 0x7b4, 0x7b5, 0x5, 0x40, 0x21, 0x2, 0x7b5, 0x195, 0x3, 0x2, 
       0x2, 0x2, 0x7b6, 0x7b7, 0x5, 0x102, 0x82, 0x2, 0x7b7, 0x7b8, 0x5, 
       0x42, 0x22, 0x2, 0x7b8, 0x197, 0x3, 0x2, 0x2, 0x2, 0x7b9, 0x7ba, 
       0x5, 0x102, 0x82, 0x2, 0x7ba, 0x7bb, 0x5, 0x44, 0x23, 0x2, 0x7bb, 
       0x199, 0x3, 0x2, 0x2, 0x2, 0x7bc, 0x7bd, 0x5, 0x102, 0x82, 0x2, 0x7bd, 
       0x7be, 0x5, 0x46, 0x24, 0x2, 0x7be, 0x19b, 0x3, 0x2, 0x2, 0x2, 0x7bf, 
       0x7c0, 0x5, 0x102, 0x82, 0x2, 0x7c0, 0x7c1, 0x5, 0x4c, 0x27, 0x2, 
       0x7c1, 0x19d, 0x3, 0x2, 0x2, 0x2, 0x7c2, 0x7c3, 0x5, 0x102, 0x82, 
       0x2, 0x7c3, 0x7c4, 0x5, 0x56, 0x2c, 0x2, 0x7c4, 0x19f, 0x3, 0x2, 
       0x2, 0x2, 0x7c5, 0x7c6, 0x5, 0x102, 0x82, 0x2, 0x7c6, 0x7c7, 0x5, 
       0x58, 0x2d, 0x2, 0x7c7, 0x1a1, 0x3, 0x2, 0x2, 0x2, 0x7c8, 0x7c9, 
       0x5, 0x104, 0x83, 0x2, 0x7c9, 0x7ca, 0x5, 0x5c, 0x2f, 0x2, 0x7ca, 
       0x1a3, 0x3, 0x2, 0x2, 0x2, 0x7cb, 0x7cc, 0x5, 0x104, 0x83, 0x2, 0x7cc, 
       0x7cd, 0x5, 0x40, 0x21, 0x2, 0x7cd, 0x1a5, 0x3, 0x2, 0x2, 0x2, 0x7ce, 
       0x7cf, 0x5, 0x104, 0x83, 0x2, 0x7cf, 0x7d0, 0x5, 0x42, 0x22, 0x2, 
       0x7d0, 0x1a7, 0x3, 0x2, 0x2, 0x2, 0x7d1, 0x7d2, 0x5, 0x104, 0x83, 
       0x2, 0x7d2, 0x7d3, 0x5, 0x44, 0x23, 0x2, 0x7d3, 0x1a9, 0x3, 0x2, 
       0x2, 0x2, 0x7d4, 0x7d5, 0x5, 0x104, 0x83, 0x2, 0x7d5, 0x7d6, 0x5, 
       0x46, 0x24, 0x2, 0x7d6, 0x1ab, 0x3, 0x2, 0x2, 0x2, 0x7d7, 0x7d8, 
       0x5, 0x104, 0x83, 0x2, 0x7d8, 0x7d9, 0x5, 0x4c, 0x27, 0x2, 0x7d9, 
       0x1ad, 0x3, 0x2, 0x2, 0x2, 0x7da, 0x7db, 0x5, 0x104, 0x83, 0x2, 0x7db, 
       0x7dc, 0x5, 0x56, 0x2c, 0x2, 0x7dc, 0x1af, 0x3, 0x2, 0x2, 0x2, 0x7dd, 
       0x7de, 0x5, 0x104, 0x83, 0x2, 0x7de, 0x7df, 0x5, 0x58, 0x2d, 0x2, 
       0x7df, 0x1b1, 0x3, 0x2, 0x2, 0x2, 0x7e0, 0x837, 0x5, 0x106, 0x84, 
       0x2, 0x7e1, 0x837, 0x5, 0x108, 0x85, 0x2, 0x7e2, 0x837, 0x5, 0x10a, 
       0x86, 0x2, 0x7e3, 0x837, 0x5, 0x10c, 0x87, 0x2, 0x7e4, 0x837, 0x5, 
       0x10e, 0x88, 0x2, 0x7e5, 0x837, 0x5, 0x110, 0x89, 0x2, 0x7e6, 0x837, 
       0x5, 0x112, 0x8a, 0x2, 0x7e7, 0x837, 0x5, 0x114, 0x8b, 0x2, 0x7e8, 
       0x837, 0x5, 0x116, 0x8c, 0x2, 0x7e9, 0x837, 0x5, 0x118, 0x8d, 0x2, 
       0x7ea, 0x837, 0x5, 0x11a, 0x8e, 0x2, 0x7eb, 0x837, 0x5, 0x11c, 0x8f, 
       0x2, 0x7ec, 0x837, 0x5, 0x11e, 0x90, 0x2, 0x7ed, 0x837, 0x5, 0x120, 
       0x91, 0x2, 0x7ee, 0x837, 0x5, 0x122, 0x92, 0x2, 0x7ef, 0x837, 0x5, 
       0x124, 0x93, 0x2, 0x7f0, 0x837, 0x5, 0x126, 0x94, 0x2, 0x7f1, 0x837, 
       0x5, 0x128, 0x95, 0x2, 0x7f2, 0x837, 0x5, 0x12a, 0x96, 0x2, 0x7f3, 
       0x837, 0x5, 0x12c, 0x97, 0x2, 0x7f4, 0x837, 0x5, 0x12e, 0x98, 0x2, 
       0x7f5, 0x837, 0x5, 0x130, 0x99, 0x2, 0x7f6, 0x837, 0x5, 0x132, 0x9a, 
       0x2, 0x7f7, 0x837, 0x5, 0x138, 0x9d, 0x2, 0x7f8, 0x837, 0x5, 0x13a, 
       0x9e, 0x2, 0x7f9, 0x837, 0x5, 0x13c, 0x9f, 0x2, 0x7fa, 0x837, 0x5, 
       0x13e, 0xa0, 0x2, 0x7fb, 0x837, 0x5, 0x140, 0xa1, 0x2, 0x7fc, 0x837, 
       0x5, 0x142, 0xa2, 0x2, 0x7fd, 0x837, 0x5, 0x144, 0xa3, 0x2, 0x7fe, 
       0x837, 0x5, 0x146, 0xa4, 0x2, 0x7ff, 0x837, 0x5, 0x148, 0xa5, 0x2, 
       0x800, 0x837, 0x5, 0x134, 0x9b, 0x2, 0x801, 0x837, 0x5, 0x136, 0x9c, 
       0x2, 0x802, 0x837, 0x5, 0x14a, 0xa6, 0x2, 0x803, 0x837, 0x5, 0x14c, 
       0xa7, 0x2, 0x804, 0x837, 0x5, 0x14e, 0xa8, 0x2, 0x805, 0x837, 0x5, 
       0x150, 0xa9, 0x2, 0x806, 0x837, 0x5, 0x152, 0xaa, 0x2, 0x807, 0x837, 
       0x5, 0x154, 0xab, 0x2, 0x808, 0x837, 0x5, 0x156, 0xac, 0x2, 0x809, 
       0x837, 0x5, 0x158, 0xad, 0x2, 0x80a, 0x837, 0x5, 0x15a, 0xae, 0x2, 
       0x80b, 0x837, 0x5, 0x15c, 0xaf, 0x2, 0x80c, 0x837, 0x5, 0x15e, 0xb0, 
       0x2, 0x80d, 0x837, 0x5, 0x160, 0xb1, 0x2, 0x80e, 0x837, 0x5, 0x162, 
       0xb2, 0x2, 0x80f, 0x837, 0x5, 0x164, 0xb3, 0x2, 0x810, 0x837, 0x5, 
       0x166, 0xb4, 0x2, 0x811, 0x837, 0x5, 0x168, 0xb5, 0x2, 0x812, 0x837, 
       0x5, 0x16a, 0xb6, 0x2, 0x813, 0x837, 0x5, 0x16c, 0xb7, 0x2, 0x814, 
       0x837, 0x5, 0x16e, 0xb8, 0x2, 0x815, 0x837, 0x5, 0x170, 0xb9, 0x2, 
       0x816, 0x837, 0x5, 0x172, 0xba, 0x2, 0x817, 0x837, 0x5, 0x174, 0xbb, 
       0x2, 0x818, 0x837, 0x5, 0x176, 0xbc, 0x2, 0x819, 0x837, 0x5, 0x178, 
       0xbd, 0x2, 0x81a, 0x837, 0x5, 0x17a, 0xbe, 0x2, 0x81b, 0x837, 0x5, 
       0x17c, 0xbf, 0x2, 0x81c, 0x837, 0x5, 0x17e, 0xc0, 0x2, 0x81d, 0x837, 
       0x5, 0x180, 0xc1, 0x2, 0x81e, 0x837, 0x5, 0x182, 0xc2, 0x2, 0x81f, 
       0x837, 0x5, 0x184, 0xc3, 0x2, 0x820, 0x837, 0x5, 0x186, 0xc4, 0x2, 
       0x821, 0x837, 0x5, 0x188, 0xc5, 0x2, 0x822, 0x837, 0x5, 0x18a, 0xc6, 
       0x2, 0x823, 0x837, 0x5, 0x18c, 0xc7, 0x2, 0x824, 0x837, 0x5, 0x18e, 
       0xc8, 0x2, 0x825, 0x837, 0x5, 0x190, 0xc9, 0x2, 0x826, 0x837, 0x5, 
       0x192, 0xca, 0x2, 0x827, 0x837, 0x5, 0x194, 0xcb, 0x2, 0x828, 0x837, 
       0x5, 0x196, 0xcc, 0x2, 0x829, 0x837, 0x5, 0x198, 0xcd, 0x2, 0x82a, 
       0x837, 0x5, 0x19a, 0xce, 0x2, 0x82b, 0x837, 0x5, 0x19c, 0xcf, 0x2, 
       0x82c, 0x837, 0x5, 0x19e, 0xd0, 0x2, 0x82d, 0x837, 0x5, 0x1a0, 0xd1, 
       0x2, 0x82e, 0x837, 0x5, 0x1a2, 0xd2, 0x2, 0x82f, 0x837, 0x5, 0x1a4, 
       0xd3, 0x2, 0x830, 0x837, 0x5, 0x1a6, 0xd4, 0x2, 0x831, 0x837, 0x5, 
       0x1a8, 0xd5, 0x2, 0x832, 0x837, 0x5, 0x1aa, 0xd6, 0x2, 0x833, 0x837, 
       0x5, 0x1ac, 0xd7, 0x2, 0x834, 0x837, 0x5, 0x1ae, 0xd8, 0x2, 0x835, 
       0x837, 0x5, 0x1b0, 0xd9, 0x2, 0x836, 0x7e0, 0x3, 0x2, 0x2, 0x2, 0x836, 
       0x7e1, 0x3, 0x2, 0x2, 0x2, 0x836, 0x7e2, 0x3, 0x2, 0x2, 0x2, 0x836, 
       0x7e3, 0x3, 0x2, 0x2, 0x2, 0x836, 0x7e4, 0x3, 0x2, 0x2, 0x2, 0x836, 
       0x7e5, 0x3, 0x2, 0x2, 0x2, 0x836, 0x7e6, 0x3, 0x2, 0x2, 0x2, 0x836, 
       0x7e7, 0x3, 0x2, 0x2, 0x2, 0x836, 0x7e8, 0x3, 0x2, 0x2, 0x2, 0x836, 
       0x7e9, 0x3, 0x2, 0x2, 0x2, 0x836, 0x7ea, 0x3, 0x2, 0x2, 0x2, 0x836, 
       0x7eb, 0x3, 0x2, 0x2, 0x2, 0x836, 0x7ec, 0x3, 0x2, 0x2, 0x2, 0x836, 
       0x7ed, 0x3, 0x2, 0x2, 0x2, 0x836, 0x7ee, 0x3, 0x2, 0x2, 0x2, 0x836, 
       0x7ef, 0x3, 0x2, 0x2, 0x2, 0x836, 0x7f0, 0x3, 0x2, 0x2, 0x2, 0x836, 
       0x7f1, 0x3, 0x2, 0x2, 0x2, 0x836, 0x7f2, 0x3, 0x2, 0x2, 0x2, 0x836, 
       0x7f3, 0x3, 0x2, 0x2, 0x2, 0x836, 0x7f4, 0x3, 0x2, 0x2, 0x2, 0x836, 
       0x7f5, 0x3, 0x2, 0x2, 0x2, 0x836, 0x7f6, 0x3, 0x2, 0x2, 0x2, 0x836, 
       0x7f7, 0x3, 0x2, 0x2, 0x2, 0x836, 0x7f8, 0x3, 0x2, 0x2, 0x2, 0x836, 
       0x7f9, 0x3, 0x2, 0x2, 0x2, 0x836, 0x7fa, 0x3, 0x2, 0x2, 0x2, 0x836, 
       0x7fb, 0x3, 0x2, 0x2, 0x2, 0x836, 0x7fc, 0x3, 0x2, 0x2, 0x2, 0x836, 
       0x7fd, 0x3, 0x2, 0x2, 0x2, 0x836, 0x7fe, 0x3, 0x2, 0x2, 0x2, 0x836, 
       0x7ff, 0x3, 0x2, 0x2, 0x2, 0x836, 0x800, 0x3, 0x2, 0x2, 0x2, 0x836, 
       0x801, 0x3, 0x2, 0x2, 0x2, 0x836, 0x802, 0x3, 0x2, 0x2, 0x2, 0x836, 
       0x803, 0x3, 0x2, 0x2, 0x2, 0x836, 0x804, 0x3, 0x2, 0x2, 0x2, 0x836, 
       0x805, 0x3, 0x2, 0x2, 0x2, 0x836, 0x806, 0x3, 0x2, 0x2, 0x2, 0x836, 
       0x807, 0x3, 0x2, 0x2, 0x2, 0x836, 0x808, 0x3, 0x2, 0x2, 0x2, 0x836, 
       0x809, 0x3, 0x2, 0x2, 0x2, 0x836, 0x80a, 0x3, 0x2, 0x2, 0x2, 0x836, 
       0x80b, 0x3, 0x2, 0x2, 0x2, 0x836, 0x80c, 0x3, 0x2, 0x2, 0x2, 0x836, 
       0x80d, 0x3, 0x2, 0x2, 0x2, 0x836, 0x80e, 0x3, 0x2, 0x2, 0x2, 0x836, 
       0x80f, 0x3, 0x2, 0x2, 0x2, 0x836, 0x810, 0x3, 0x2, 0x2, 0x2, 0x836, 
       0x811, 0x3, 0x2, 0x2, 0x2, 0x836, 0x812, 0x3, 0x2, 0x2, 0x2, 0x836, 
       0x813, 0x3, 0x2, 0x2, 0x2, 0x836, 0x814, 0x3, 0x2, 0x2, 0x2, 0x836, 
       0x815, 0x3, 0x2, 0x2, 0x2, 0x836, 0x816, 0x3, 0x2, 0x2, 0x2, 0x836, 
       0x817, 0x3, 0x2, 0x2, 0x2, 0x836, 0x818, 0x3, 0x2, 0x2, 0x2, 0x836, 
       0x819, 0x3, 0x2, 0x2, 0x2, 0x836, 0x81a, 0x3, 0x2, 0x2, 0x2, 0x836, 
       0x81b, 0x3, 0x2, 0x2, 0x2, 0x836, 0x81c, 0x3, 0x2, 0x2, 0x2, 0x836, 
       0x81d, 0x3, 0x2, 0x2, 0x2, 0x836, 0x81e, 0x3, 0x2, 0x2, 0x2, 0x836, 
       0x81f, 0x3, 0x2, 0x2, 0x2, 0x836, 0x820, 0x3, 0x2, 0x2, 0x2, 0x836, 
       0x821, 0x3, 0x2, 0x2, 0x2, 0x836, 0x822, 0x3, 0x2, 0x2, 0x2, 0x836, 
       0x823, 0x3, 0x2, 0x2, 0x2, 0x836, 0x824, 0x3, 0x2, 0x2, 0x2, 0x836, 
       0x825, 0x3, 0x2, 0x2, 0x2, 0x836, 0x826, 0x3, 0x2, 0x2, 0x2, 0x836, 
       0x827, 0x3, 0x2, 0x2, 0x2, 0x836, 0x828, 0x3, 0x2, 0x2, 0x2, 0x836, 
       0x829, 0x3, 0x2, 0x2, 0x2, 0x836, 0x82a, 0x3, 0x2, 0x2, 0x2, 0x836, 
       0x82b, 0x3, 0x2, 0x2, 0x2, 0x836, 0x82c, 0x3, 0x2, 0x2, 0x2, 0x836, 
       0x82d, 0x3, 0x2, 0x2, 0x2, 0x836, 0x82e, 0x3, 0x2, 0x2, 0x2, 0x836, 
       0x82f, 0x3, 0x2, 0x2, 0x2, 0x836, 0x830, 0x3, 0x2, 0x2, 0x2, 0x836, 
       0x831, 0x3, 0x2, 0x2, 0x2, 0x836, 0x832, 0x3, 0x2, 0x2, 0x2, 0x836, 
       0x833, 0x3, 0x2, 0x2, 0x2, 0x836, 0x834, 0x3, 0x2, 0x2, 0x2, 0x836, 
       0x835, 0x3, 0x2, 0x2, 0x2, 0x837, 0x1b3, 0x3, 0x2, 0x2, 0x2, 0x838, 
       0x839, 0x9, 0x2c, 0x2, 0x2, 0x839, 0x1b5, 0x3, 0x2, 0x2, 0x2, 0x83a, 
       0x83b, 0x9, 0x2d, 0x2, 0x2, 0x83b, 0x1b7, 0x3, 0x2, 0x2, 0x2, 0x83c, 
       0x83d, 0x9, 0x2e, 0x2, 0x2, 0x83d, 0x1b9, 0x3, 0x2, 0x2, 0x2, 0x83e, 
       0x83f, 0x9, 0x2f, 0x2, 0x2, 0x83f, 0x1bb, 0x3, 0x2, 0x2, 0x2, 0x840, 
       0x841, 0x9, 0x30, 0x2, 0x2, 0x841, 0x1bd, 0x3, 0x2, 0x2, 0x2, 0x842, 
       0x843, 0x9, 0x31, 0x2, 0x2, 0x843, 0x1bf, 0x3, 0x2, 0x2, 0x2, 0x844, 
       0x845, 0x9, 0x32, 0x2, 0x2, 0x845, 0x1c1, 0x3, 0x2, 0x2, 0x2, 0x846, 
       0x847, 0x9, 0x33, 0x2, 0x2, 0x847, 0x1c3, 0x3, 0x2, 0x2, 0x2, 0x848, 
       0x849, 0x9, 0x34, 0x2, 0x2, 0x849, 0x1c5, 0x3, 0x2, 0x2, 0x2, 0x84a, 
       0x84b, 0x9, 0x35, 0x2, 0x2, 0x84b, 0x84c, 0x5, 0x2a8, 0x155, 0x2, 
       0x84c, 0x1c7, 0x3, 0x2, 0x2, 0x2, 0x84d, 0x858, 0x5, 0x1b4, 0xdb, 
       0x2, 0x84e, 0x858, 0x5, 0x1b6, 0xdc, 0x2, 0x84f, 0x858, 0x5, 0x1b8, 
       0xdd, 0x2, 0x850, 0x858, 0x5, 0x1ba, 0xde, 0x2, 0x851, 0x858, 0x5, 
       0x1bc, 0xdf, 0x2, 0x852, 0x858, 0x5, 0x1be, 0xe0, 0x2, 0x853, 0x858, 
       0x5, 0x1c0, 0xe1, 0x2, 0x854, 0x858, 0x5, 0x1c2, 0xe2, 0x2, 0x855, 
       0x858, 0x5, 0x1c4, 0xe3, 0x2, 0x856, 0x858, 0x5, 0x1c6, 0xe4, 0x2, 
       0x857, 0x84d, 0x3, 0x2, 0x2, 0x2, 0x857, 0x84e, 0x3, 0x2, 0x2, 0x2, 
       0x857, 0x84f, 0x3, 0x2, 0x2, 0x2, 0x857, 0x850, 0x3, 0x2, 0x2, 0x2, 
       0x857, 0x851, 0x3, 0x2, 0x2, 0x2, 0x857, 0x852, 0x3, 0x2, 0x2, 0x2, 
       0x857, 0x853, 0x3, 0x2, 0x2, 0x2, 0x857, 0x854, 0x3, 0x2, 0x2, 0x2, 
       0x857, 0x855, 0x3, 0x2, 0x2, 0x2, 0x857, 0x856, 0x3, 0x2, 0x2, 0x2, 
       0x858, 0x1c9, 0x3, 0x2, 0x2, 0x2, 0x859, 0x85a, 0x5, 0xf2, 0x7a, 
       0x2, 0x85a, 0x85b, 0x5, 0x36, 0x1c, 0x2, 0x85b, 0x85c, 0x7, 0x4c, 
       0x2, 0x2, 0x85c, 0x85d, 0x5, 0xa4, 0x53, 0x2, 0x85d, 0x1cb, 0x3, 
       0x2, 0x2, 0x2, 0x85e, 0x85f, 0x5, 0xf4, 0x7b, 0x2, 0x85f, 0x860, 
       0x5, 0x36, 0x1c, 0x2, 0x860, 0x861, 0x7, 0x4c, 0x2, 0x2, 0x861, 0x862, 
       0x5, 0xa4, 0x53, 0x2, 0x862, 0x1cd, 0x3, 0x2, 0x2, 0x2, 0x863, 0x864, 
       0x5, 0xf8, 0x7d, 0x2, 0x864, 0x865, 0x5, 0x36, 0x1c, 0x2, 0x865, 
       0x866, 0x7, 0x4c, 0x2, 0x2, 0x866, 0x867, 0x5, 0xa4, 0x53, 0x2, 0x867, 
       0x1cf, 0x3, 0x2, 0x2, 0x2, 0x868, 0x86e, 0x5, 0x2a, 0x16, 0x2, 0x869, 
       0x86e, 0x5, 0x30, 0x19, 0x2, 0x86a, 0x86e, 0x5, 0x3c, 0x1f, 0x2, 
       0x86b, 0x86e, 0x5, 0x48, 0x25, 0x2, 0x86c, 0x86e, 0x3, 0x2, 0x2, 
       0x2, 0x86d, 0x868, 0x3, 0x2, 0x2, 0x2, 0x86d, 0x869, 0x3, 0x2, 0x2, 
       0x2, 0x86d, 0x86a, 0x3, 0x2, 0x2, 0x2, 0x86d, 0x86b, 0x3, 0x2, 0x2, 
       0x2, 0x86d, 0x86c, 0x3, 0x2, 0x2, 0x2, 0x86e, 0x1d1, 0x3, 0x2, 0x2, 
       0x2, 0x86f, 0x875, 0x5, 0x2a, 0x16, 0x2, 0x870, 0x875, 0x5, 0x30, 
       0x19, 0x2, 0x871, 0x875, 0x5, 0x3e, 0x20, 0x2, 0x872, 0x875, 0x5, 
       0x48, 0x25, 0x2, 0x873, 0x875, 0x3, 0x2, 0x2, 0x2, 0x874, 0x86f, 
       0x3, 0x2, 0x2, 0x2, 0x874, 0x870, 0x3, 0x2, 0x2, 0x2, 0x874, 0x871, 
       0x3, 0x2, 0x2, 0x2, 0x874, 0x872, 0x3, 0x2, 0x2, 0x2, 0x874, 0x873, 
       0x3, 0x2, 0x2, 0x2, 0x875, 0x1d3, 0x3, 0x2, 0x2, 0x2, 0x876, 0x877, 
       0x5, 0xf2, 0x7a, 0x2, 0x877, 0x878, 0x5, 0x3c, 0x1f, 0x2, 0x878, 
       0x879, 0x7, 0x4c, 0x2, 0x2, 0x879, 0x87a, 0x5, 0x1d0, 0xe9, 0x2, 
       0x87a, 0x1d5, 0x3, 0x2, 0x2, 0x2, 0x87b, 0x87c, 0x5, 0xf2, 0x7a, 
       0x2, 0x87c, 0x87d, 0x5, 0x3e, 0x20, 0x2, 0x87d, 0x87e, 0x7, 0x4c, 
       0x2, 0x2, 0x87e, 0x87f, 0x5, 0x1d2, 0xea, 0x2, 0x87f, 0x1d7, 0x3, 
       0x2, 0x2, 0x2, 0x880, 0x881, 0x5, 0x102, 0x82, 0x2, 0x881, 0x882, 
       0x5, 0xa4, 0x53, 0x2, 0x882, 0x1d9, 0x3, 0x2, 0x2, 0x2, 0x883, 0x884, 
       0x5, 0x102, 0x82, 0x2, 0x884, 0x885, 0x5, 0x3c, 0x1f, 0x2, 0x885, 
       0x1db, 0x3, 0x2, 0x2, 0x2, 0x886, 0x887, 0x5, 0x102, 0x82, 0x2, 0x887, 
       0x888, 0x5, 0x3e, 0x20, 0x2, 0x888, 0x1dd, 0x3, 0x2, 0x2, 0x2, 0x889, 
       0x88a, 0x5, 0x104, 0x83, 0x2, 0x88a, 0x88b, 0x5, 0xa4, 0x53, 0x2, 
       0x88b, 0x1df, 0x3, 0x2, 0x2, 0x2, 0x88c, 0x88d, 0x5, 0x104, 0x83, 
       0x2, 0x88d, 0x88e, 0x5, 0x3c, 0x1f, 0x2, 0x88e, 0x1e1, 0x3, 0x2, 
       0x2, 0x2, 0x88f, 0x890, 0x5, 0x104, 0x83, 0x2, 0x890, 0x891, 0x5, 
       0x3e, 0x20, 0x2, 0x891, 0x1e3, 0x3, 0x2, 0x2, 0x2, 0x892, 0x89f, 
       0x5, 0x1ca, 0xe6, 0x2, 0x893, 0x89f, 0x5, 0x1cc, 0xe7, 0x2, 0x894, 
       0x89f, 0x5, 0x1ce, 0xe8, 0x2, 0x895, 0x89f, 0x5, 0x1d4, 0xeb, 0x2, 
       0x896, 0x89f, 0x5, 0x1d6, 0xec, 0x2, 0x897, 0x89f, 0x5, 0x1d6, 0xec, 
       0x2, 0x898, 0x89f, 0x5, 0x1d8, 0xed, 0x2, 0x899, 0x89f, 0x5, 0x1da, 
       0xee, 0x2, 0x89a, 0x89f, 0x5, 0x1dc, 0xef, 0x2, 0x89b, 0x89f, 0x5, 
       0x1de, 0xf0, 0x2, 0x89c, 0x89f, 0x5, 0x1e0, 0xf1, 0x2, 0x89d, 0x89f, 
       0x5, 0x1e2, 0xf2, 0x2, 0x89e, 0x892, 0x3, 0x2, 0x2, 0x2, 0x89e, 0x893, 
       0x3, 0x2, 0x2, 0x2, 0x89e, 0x894, 0x3, 0x2, 0x2, 0x2, 0x89e, 0x895, 
       0x3, 0x2, 0x2, 0x2, 0x89e, 0x896, 0x3, 0x2, 0x2, 0x2, 0x89e, 0x897, 
       0x3, 0x2, 0x2, 0x2, 0x89e, 0x898, 0x3, 0x2, 0x2, 0x2, 0x89e, 0x899, 
       0x3, 0x2, 0x2, 0x2, 0x89e, 0x89a, 0x3, 0x2, 0x2, 0x2, 0x89e, 0x89b, 
       0x3, 0x2, 0x2, 0x2, 0x89e, 0x89c, 0x3, 0x2, 0x2, 0x2, 0x89e, 0x89d, 
       0x3, 0x2, 0x2, 0x2, 0x89f, 0x1e5, 0x3, 0x2, 0x2, 0x2, 0x8a0, 0x8a1, 
       0x9, 0x36, 0x2, 0x2, 0x8a1, 0x1e7, 0x3, 0x2, 0x2, 0x2, 0x8a2, 0x8a3, 
       0x9, 0x37, 0x2, 0x2, 0x8a3, 0x1e9, 0x3, 0x2, 0x2, 0x2, 0x8a4, 0x8a5, 
       0x9, 0x38, 0x2, 0x2, 0x8a5, 0x1eb, 0x3, 0x2, 0x2, 0x2, 0x8a6, 0x8a7, 
       0x9, 0x39, 0x2, 0x2, 0x8a7, 0x1ed, 0x3, 0x2, 0x2, 0x2, 0x8a8, 0x8a9, 
       0x9, 0x3a, 0x2, 0x2, 0x8a9, 0x1ef, 0x3, 0x2, 0x2, 0x2, 0x8aa, 0x8ab, 
       0x9, 0x3b, 0x2, 0x2, 0x8ab, 0x1f1, 0x3, 0x2, 0x2, 0x2, 0x8ac, 0x8ad, 
       0x9, 0x3c, 0x2, 0x2, 0x8ad, 0x1f3, 0x3, 0x2, 0x2, 0x2, 0x8ae, 0x8af, 
       0x9, 0x3d, 0x2, 0x2, 0x8af, 0x1f5, 0x3, 0x2, 0x2, 0x2, 0x8b0, 0x8b1, 
       0x9, 0x3e, 0x2, 0x2, 0x8b1, 0x1f7, 0x3, 0x2, 0x2, 0x2, 0x8b2, 0x8b3, 
       0x9, 0x3f, 0x2, 0x2, 0x8b3, 0x1f9, 0x3, 0x2, 0x2, 0x2, 0x8b4, 0x8b5, 
       0x9, 0x40, 0x2, 0x2, 0x8b5, 0x1fb, 0x3, 0x2, 0x2, 0x2, 0x8b6, 0x8b7, 
       0x9, 0x41, 0x2, 0x2, 0x8b7, 0x1fd, 0x3, 0x2, 0x2, 0x2, 0x8b8, 0x8b9, 
       0x9, 0x42, 0x2, 0x2, 0x8b9, 0x1ff, 0x3, 0x2, 0x2, 0x2, 0x8ba, 0x8bb, 
       0x9, 0x43, 0x2, 0x2, 0x8bb, 0x201, 0x3, 0x2, 0x2, 0x2, 0x8bc, 0x8bd, 
       0x5, 0x1ee, 0xf8, 0x2, 0x8bd, 0x8be, 0x5, 0x5c, 0x2f, 0x2, 0x8be, 
       0x203, 0x3, 0x2, 0x2, 0x2, 0x8bf, 0x8c0, 0x5, 0x1ee, 0xf8, 0x2, 0x8c0, 
       0x8c1, 0x5, 0x4c, 0x27, 0x2, 0x8c1, 0x205, 0x3, 0x2, 0x2, 0x2, 0x8c2, 
       0x8c3, 0x5, 0x1ee, 0xf8, 0x2, 0x8c3, 0x8c4, 0x5, 0x56, 0x2c, 0x2, 
       0x8c4, 0x207, 0x3, 0x2, 0x2, 0x2, 0x8c5, 0x8c6, 0x5, 0x1ee, 0xf8, 
       0x2, 0x8c6, 0x8c7, 0x5, 0x58, 0x2d, 0x2, 0x8c7, 0x209, 0x3, 0x2, 
       0x2, 0x2, 0x8c8, 0x8c9, 0x5, 0x1f0, 0xf9, 0x2, 0x8c9, 0x8ca, 0x5, 
       0x5c, 0x2f, 0x2, 0x8ca, 0x20b, 0x3, 0x2, 0x2, 0x2, 0x8cb, 0x8cc, 
       0x5, 0x1f0, 0xf9, 0x2, 0x8cc, 0x8cd, 0x5, 0x4c, 0x27, 0x2, 0x8cd, 
       0x20d, 0x3, 0x2, 0x2, 0x2, 0x8ce, 0x8cf, 0x5, 0x1f0, 0xf9, 0x2, 0x8cf, 
       0x8d0, 0x5, 0x56, 0x2c, 0x2, 0x8d0, 0x20f, 0x3, 0x2, 0x2, 0x2, 0x8d1, 
       0x8d2, 0x5, 0x1f0, 0xf9, 0x2, 0x8d2, 0x8d3, 0x5, 0x58, 0x2d, 0x2, 
       0x8d3, 0x211, 0x3, 0x2, 0x2, 0x2, 0x8d4, 0x8d5, 0x5, 0x1f2, 0xfa, 
       0x2, 0x8d5, 0x8d6, 0x5, 0x5c, 0x2f, 0x2, 0x8d6, 0x213, 0x3, 0x2, 
       0x2, 0x2, 0x8d7, 0x8d8, 0x5, 0x1f2, 0xfa, 0x2, 0x8d8, 0x8d9, 0x5, 
       0x4c, 0x27, 0x2, 0x8d9, 0x215, 0x3, 0x2, 0x2, 0x2, 0x8da, 0x8db, 
       0x5, 0x1f2, 0xfa, 0x2, 0x8db, 0x8dc, 0x5, 0x56, 0x2c, 0x2, 0x8dc, 
       0x217, 0x3, 0x2, 0x2, 0x2, 0x8dd, 0x8de, 0x5, 0x1f2, 0xfa, 0x2, 0x8de, 
       0x8df, 0x5, 0x58, 0x2d, 0x2, 0x8df, 0x219, 0x3, 0x2, 0x2, 0x2, 0x8e0, 
       0x8e1, 0x5, 0x1f4, 0xfb, 0x2, 0x8e1, 0x8e2, 0x5, 0x5c, 0x2f, 0x2, 
       0x8e2, 0x21b, 0x3, 0x2, 0x2, 0x2, 0x8e3, 0x8e4, 0x5, 0x1f4, 0xfb, 
       0x2, 0x8e4, 0x8e5, 0x5, 0x4c, 0x27, 0x2, 0x8e5, 0x21d, 0x3, 0x2, 
       0x2, 0x2, 0x8e6, 0x8e7, 0x5, 0x1f4, 0xfb, 0x2, 0x8e7, 0x8e8, 0x5, 
       0x56, 0x2c, 0x2, 0x8e8, 0x21f, 0x3, 0x2, 0x2, 0x2, 0x8e9, 0x8ea, 
       0x5, 0x1f4, 0xfb, 0x2, 0x8ea, 0x8eb, 0x5, 0x58, 0x2d, 0x2, 0x8eb, 
       0x221, 0x3, 0x2, 0x2, 0x2, 0x8ec, 0x8ed, 0x5, 0x1f6, 0xfc, 0x2, 0x8ed, 
       0x8ee, 0x5, 0x5c, 0x2f, 0x2, 0x8ee, 0x223, 0x3, 0x2, 0x2, 0x2, 0x8ef, 
       0x8f0, 0x5, 0x1f8, 0xfd, 0x2, 0x8f0, 0x8f1, 0x5, 0x5c, 0x2f, 0x2, 
       0x8f1, 0x225, 0x3, 0x2, 0x2, 0x2, 0x8f2, 0x8f3, 0x5, 0x1fa, 0xfe, 
       0x2, 0x8f3, 0x8f4, 0x5, 0x5c, 0x2f, 0x2, 0x8f4, 0x227, 0x3, 0x2, 
       0x2, 0x2, 0x8f5, 0x8f6, 0x5, 0x1fc, 0xff, 0x2, 0x8f6, 0x8f7, 0x5, 
       0x5c, 0x2f, 0x2, 0x8f7, 0x229, 0x3, 0x2, 0x2, 0x2, 0x8f8, 0x8f9, 
       0x5, 0x1fe, 0x100, 0x2, 0x8f9, 0x22b, 0x3, 0x2, 0x2, 0x2, 0x8fa, 
       0x8fb, 0x5, 0x200, 0x101, 0x2, 0x8fb, 0x22d, 0x3, 0x2, 0x2, 0x2, 
       0x8fc, 0x917, 0x5, 0x1e6, 0xf4, 0x2, 0x8fd, 0x917, 0x5, 0x1e8, 0xf5, 
       0x2, 0x8fe, 0x917, 0x5, 0x1ea, 0xf6, 0x2, 0x8ff, 0x917, 0x5, 0x1ec, 
       0xf7, 0x2, 0x900, 0x917, 0x5, 0x202, 0x102, 0x2, 0x901, 0x917, 0x5, 
       0x204, 0x103, 0x2, 0x902, 0x917, 0x5, 0x206, 0x104, 0x2, 0x903, 0x917, 
       0x5, 0x208, 0x105, 0x2, 0x904, 0x917, 0x5, 0x20a, 0x106, 0x2, 0x905, 
       0x917, 0x5, 0x20c, 0x107, 0x2, 0x906, 0x917, 0x5, 0x20e, 0x108, 0x2, 
       0x907, 0x917, 0x5, 0x210, 0x109, 0x2, 0x908, 0x917, 0x5, 0x212, 0x10a, 
       0x2, 0x909, 0x917, 0x5, 0x214, 0x10b, 0x2, 0x90a, 0x917, 0x5, 0x216, 
       0x10c, 0x2, 0x90b, 0x917, 0x5, 0x218, 0x10d, 0x2, 0x90c, 0x917, 0x5, 
       0x21a, 0x10e, 0x2, 0x90d, 0x917, 0x5, 0x21c, 0x10f, 0x2, 0x90e, 0x917, 
       0x5, 0x21e, 0x110, 0x2, 0x90f, 0x917, 0x5, 0x220, 0x111, 0x2, 0x910, 
       0x917, 0x5, 0x222, 0x112, 0x2, 0x911, 0x917, 0x5, 0x224, 0x113, 0x2, 
       0x912, 0x917, 0x5, 0x226, 0x114, 0x2, 0x913, 0x917, 0x5, 0x228, 0x115, 
       0x2, 0x914, 0x917, 0x5, 0x22a, 0x116, 0x2, 0x915, 0x917, 0x5, 0x22c, 
       0x117, 0x2, 0x916, 0x8fc, 0x3, 0x2, 0x2, 0x2, 0x916, 0x8fd, 0x3, 
       0x2, 0x2, 0x2, 0x916, 0x8fe, 0x3, 0x2, 0x2, 0x2, 0x916, 0x8ff, 0x3, 
       0x2, 0x2, 0x2, 0x916, 0x900, 0x3, 0x2, 0x2, 0x2, 0x916, 0x901, 0x3, 
       0x2, 0x2, 0x2, 0x916, 0x902, 0x3, 0x2, 0x2, 0x2, 0x916, 0x903, 0x3, 
       0x2, 0x2, 0x2, 0x916, 0x904, 0x3, 0x2, 0x2, 0x2, 0x916, 0x905, 0x3, 
       0x2, 0x2, 0x2, 0x916, 0x906, 0x3, 0x2, 0x2, 0x2, 0x916, 0x907, 0x3, 
       0x2, 0x2, 0x2, 0x916, 0x908, 0x3, 0x2, 0x2, 0x2, 0x916, 0x909, 0x3, 
       0x2, 0x2, 0x2, 0x916, 0x90a, 0x3, 0x2, 0x2, 0x2, 0x916, 0x90b, 0x3, 
       0x2, 0x2, 0x2, 0x916, 0x90c, 0x3, 0x2, 0x2, 0x2, 0x916, 0x90d, 0x3, 
       0x2, 0x2, 0x2, 0x916, 0x90e, 0x3, 0x2, 0x2, 0x2, 0x916, 0x90f, 0x3, 
       0x2, 0x2, 0x2, 0x916, 0x910, 0x3, 0x2, 0x2, 0x2, 0x916, 0x911, 0x3, 
       0x2, 0x2, 0x2, 0x916, 0x912, 0x3, 0x2, 0x2, 0x2, 0x916, 0x913, 0x3, 
       0x2, 0x2, 0x2, 0x916, 0x914, 0x3, 0x2, 0x2, 0x2, 0x916, 0x915, 0x3, 
       0x2, 0x2, 0x2, 0x917, 0x22f, 0x3, 0x2, 0x2, 0x2, 0x918, 0x919, 0x9, 
       0x44, 0x2, 0x2, 0x919, 0x231, 0x3, 0x2, 0x2, 0x2, 0x91a, 0x91b, 0x9, 
       0x45, 0x2, 0x2, 0x91b, 0x233, 0x3, 0x2, 0x2, 0x2, 0x91c, 0x91d, 0x9, 
       0x46, 0x2, 0x2, 0x91d, 0x235, 0x3, 0x2, 0x2, 0x2, 0x91e, 0x91f, 0x5, 
       0x230, 0x119, 0x2, 0x91f, 0x920, 0x5, 0x2a8, 0x155, 0x2, 0x920, 0x921, 
       0x7, 0x4c, 0x2, 0x2, 0x921, 0x922, 0x5, 0x5c, 0x2f, 0x2, 0x922, 0x237, 
       0x3, 0x2, 0x2, 0x2, 0x923, 0x924, 0x5, 0x230, 0x119, 0x2, 0x924, 
       0x925, 0x5, 0x2a8, 0x155, 0x2, 0x925, 0x926, 0x7, 0x4c, 0x2, 0x2, 
       0x926, 0x927, 0x5, 0x4c, 0x27, 0x2, 0x927, 0x239, 0x3, 0x2, 0x2, 
       0x2, 0x928, 0x929, 0x5, 0x230, 0x119, 0x2, 0x929, 0x92a, 0x5, 0x2a8, 
       0x155, 0x2, 0x92a, 0x92b, 0x7, 0x4c, 0x2, 0x2, 0x92b, 0x92c, 0x5, 
       0x56, 0x2c, 0x2, 0x92c, 0x23b, 0x3, 0x2, 0x2, 0x2, 0x92d, 0x92e, 
       0x5, 0x230, 0x119, 0x2, 0x92e, 0x92f, 0x5, 0x2a8, 0x155, 0x2, 0x92f, 
       0x930, 0x7, 0x4c, 0x2, 0x2, 0x930, 0x931, 0x5, 0x58, 0x2d, 0x2, 0x931, 
       0x23d, 0x3, 0x2, 0x2, 0x2, 0x932, 0x933, 0x5, 0x232, 0x11a, 0x2, 
       0x933, 0x934, 0x5, 0x2a8, 0x155, 0x2, 0x934, 0x935, 0x7, 0x4c, 0x2, 
       0x2, 0x935, 0x936, 0x5, 0x5c, 0x2f, 0x2, 0x936, 0x23f, 0x3, 0x2, 
       0x2, 0x2, 0x937, 0x938, 0x5, 0x232, 0x11a, 0x2, 0x938, 0x939, 0x5, 
       0x2a8, 0x155, 0x2, 0x939, 0x93a, 0x7, 0x4c, 0x2, 0x2, 0x93a, 0x93b, 
       0x5, 0x4c, 0x27, 0x2, 0x93b, 0x241, 0x3, 0x2, 0x2, 0x2, 0x93c, 0x93d, 
       0x5, 0x232, 0x11a, 0x2, 0x93d, 0x93e, 0x5, 0x2a8, 0x155, 0x2, 0x93e, 
       0x93f, 0x7, 0x4c, 0x2, 0x2, 0x93f, 0x940, 0x5, 0x56, 0x2c, 0x2, 0x940, 
       0x243, 0x3, 0x2, 0x2, 0x2, 0x941, 0x942, 0x5, 0x232, 0x11a, 0x2, 
       0x942, 0x943, 0x5, 0x2a8, 0x155, 0x2, 0x943, 0x944, 0x7, 0x4c, 0x2, 
       0x2, 0x944, 0x945, 0x5, 0x58, 0x2d, 0x2, 0x945, 0x245, 0x3, 0x2, 
       0x2, 0x2, 0x946, 0x947, 0x5, 0x234, 0x11b, 0x2, 0x947, 0x948, 0x5, 
       0x2a8, 0x155, 0x2, 0x948, 0x949, 0x7, 0x4c, 0x2, 0x2, 0x949, 0x94a, 
       0x5, 0x5c, 0x2f, 0x2, 0x94a, 0x247, 0x3, 0x2, 0x2, 0x2, 0x94b, 0x94c, 
       0x5, 0x234, 0x11b, 0x2, 0x94c, 0x94d, 0x5, 0x2a8, 0x155, 0x2, 0x94d, 
       0x94e, 0x7, 0x4c, 0x2, 0x2, 0x94e, 0x94f, 0x5, 0x4c, 0x27, 0x2, 0x94f, 
       0x249, 0x3, 0x2, 0x2, 0x2, 0x950, 0x951, 0x5, 0x234, 0x11b, 0x2, 
       0x951, 0x952, 0x5, 0x2a8, 0x155, 0x2, 0x952, 0x953, 0x7, 0x4c, 0x2, 
       0x2, 0x953, 0x954, 0x5, 0x56, 0x2c, 0x2, 0x954, 0x24b, 0x3, 0x2, 
       0x2, 0x2, 0x955, 0x956, 0x5, 0x234, 0x11b, 0x2, 0x956, 0x957, 0x5, 
       0x2a8, 0x155, 0x2, 0x957, 0x958, 0x7, 0x4c, 0x2, 0x2, 0x958, 0x959, 
       0x5, 0x58, 0x2d, 0x2, 0x959, 0x24d, 0x3, 0x2, 0x2, 0x2, 0x95a, 0x967, 
       0x5, 0x236, 0x11c, 0x2, 0x95b, 0x967, 0x5, 0x238, 0x11d, 0x2, 0x95c, 
       0x967, 0x5, 0x23a, 0x11e, 0x2, 0x95d, 0x967, 0x5, 0x23c, 0x11f, 0x2, 
       0x95e, 0x967, 0x5, 0x23e, 0x120, 0x2, 0x95f, 0x967, 0x5, 0x240, 0x121, 
       0x2, 0x960, 0x967, 0x5, 0x242, 0x122, 0x2, 0x961, 0x967, 0x5, 0x244, 
       0x123, 0x2, 0x962, 0x967, 0x5, 0x246, 0x124, 0x2, 0x963, 0x967, 0x5, 
       0x248, 0x125, 0x2, 0x964, 0x967, 0x5, 0x24a, 0x126, 0x2, 0x965, 0x967, 
       0x5, 0x24c, 0x127, 0x2, 0x966, 0x95a, 0x3, 0x2, 0x2, 0x2, 0x966, 
       0x95b, 0x3, 0x2, 0x2, 0x2, 0x966, 0x95c, 0x3, 0x2, 0x2, 0x2, 0x966, 
       0x95d, 0x3, 0x2, 0x2, 0x2, 0x966, 0x95e, 0x3, 0x2, 0x2, 0x2, 0x966, 
       0x95f, 0x3, 0x2, 0x2, 0x2, 0x966, 0x960, 0x3, 0x2, 0x2, 0x2, 0x966, 
       0x961, 0x3, 0x2, 0x2, 0x2, 0x966, 0x962, 0x3, 0x2, 0x2, 0x2, 0x966, 
       0x963, 0x3, 0x2, 0x2, 0x2, 0x966, 0x964, 0x3, 0x2, 0x2, 0x2, 0x966, 
       0x965, 0x3, 0x2, 0x2, 0x2, 0x967, 0x24f, 0x3, 0x2, 0x2, 0x2, 0x968, 
       0x971, 0x9, 0x47, 0x2, 0x2, 0x969, 0x971, 0x9, 0x48, 0x2, 0x2, 0x96a, 
       0x971, 0x9, 0x49, 0x2, 0x2, 0x96b, 0x971, 0x9, 0x4a, 0x2, 0x2, 0x96c, 
       0x971, 0x9, 0x4b, 0x2, 0x2, 0x96d, 0x971, 0x9, 0x4c, 0x2, 0x2, 0x96e, 
       0x971, 0x9, 0x4d, 0x2, 0x2, 0x96f, 0x971, 0x9, 0x4e, 0x2, 0x2, 0x970, 
       0x968, 0x3, 0x2, 0x2, 0x2, 0x970, 0x969, 0x3, 0x2, 0x2, 0x2, 0x970, 
       0x96a, 0x3, 0x2, 0x2, 0x2, 0x970, 0x96b, 0x3, 0x2, 0x2, 0x2, 0x970, 
       0x96c, 0x3, 0x2, 0x2, 0x2, 0x970, 0x96d, 0x3, 0x2, 0x2, 0x2, 0x970, 
       0x96e, 0x3, 0x2, 0x2, 0x2, 0x970, 0x96f, 0x3, 0x2, 0x2, 0x2, 0x971, 
       0x251, 0x3, 0x2, 0x2, 0x2, 0x972, 0x973, 0x9, 0x4f, 0x2, 0x2, 0x973, 
       0x253, 0x3, 0x2, 0x2, 0x2, 0x974, 0x975, 0x9, 0x50, 0x2, 0x2, 0x975, 
       0x255, 0x3, 0x2, 0x2, 0x2, 0x976, 0x977, 0x9, 0x51, 0x2, 0x2, 0x977, 
       0x257, 0x3, 0x2, 0x2, 0x2, 0x978, 0x979, 0x9, 0x52, 0x2, 0x2, 0x979, 
       0x259, 0x3, 0x2, 0x2, 0x2, 0x97a, 0x97b, 0x9, 0x53, 0x2, 0x2, 0x97b, 
       0x25b, 0x3, 0x2, 0x2, 0x2, 0x97c, 0x97d, 0x9, 0x54, 0x2, 0x2, 0x97d, 
       0x25d, 0x3, 0x2, 0x2, 0x2, 0x97e, 0x97f, 0x9, 0x55, 0x2, 0x2, 0x97f, 
       0x25f, 0x3, 0x2, 0x2, 0x2, 0x980, 0x981, 0x9, 0x56, 0x2, 0x2, 0x981, 
       0x261, 0x3, 0x2, 0x2, 0x2, 0x982, 0x983, 0x5, 0x252, 0x12a, 0x2, 
       0x983, 0x984, 0x5, 0x2a8, 0x155, 0x2, 0x984, 0x263, 0x3, 0x2, 0x2, 
       0x2, 0x985, 0x986, 0x5, 0x252, 0x12a, 0x2, 0x986, 0x987, 0x5, 0x250, 
       0x129, 0x2, 0x987, 0x988, 0x5, 0x2a8, 0x155, 0x2, 0x988, 0x265, 0x3, 
       0x2, 0x2, 0x2, 0x989, 0x98a, 0x5, 0x254, 0x12b, 0x2, 0x98a, 0x98b, 
       0x5, 0x2a8, 0x155, 0x2, 0x98b, 0x267, 0x3, 0x2, 0x2, 0x2, 0x98c, 
       0x98d, 0x5, 0x254, 0x12b, 0x2, 0x98d, 0x98e, 0x5, 0x250, 0x129, 0x2, 
       0x98e, 0x98f, 0x5, 0x2a8, 0x155, 0x2, 0x98f, 0x269, 0x3, 0x2, 0x2, 
       0x2, 0x990, 0x991, 0x5, 0x252, 0x12a, 0x2, 0x991, 0x992, 0x5, 0x36, 
       0x1c, 0x2, 0x992, 0x997, 0x3, 0x2, 0x2, 0x2, 0x993, 0x994, 0x5, 0x252, 
       0x12a, 0x2, 0x994, 0x995, 0x5, 0x4c, 0x27, 0x2, 0x995, 0x997, 0x3, 
       0x2, 0x2, 0x2, 0x996, 0x990, 0x3, 0x2, 0x2, 0x2, 0x996, 0x993, 0x3, 
       0x2, 0x2, 0x2, 0x997, 0x26b, 0x3, 0x2, 0x2, 0x2, 0x998, 0x999, 0x5, 
       0x252, 0x12a, 0x2, 0x999, 0x99a, 0x7, 0x47, 0x2, 0x2, 0x99a, 0x99b, 
       0x5, 0x3c, 0x1f, 0x2, 0x99b, 0x99c, 0x7, 0x48, 0x2, 0x2, 0x99c, 0x9a1, 
       0x3, 0x2, 0x2, 0x2, 0x99d, 0x99e, 0x5, 0x252, 0x12a, 0x2, 0x99e, 
       0x99f, 0x5, 0x3c, 0x1f, 0x2, 0x99f, 0x9a1, 0x3, 0x2, 0x2, 0x2, 0x9a0, 
       0x998, 0x3, 0x2, 0x2, 0x2, 0x9a0, 0x99d, 0x3, 0x2, 0x2, 0x2, 0x9a1, 
       0x26d, 0x3, 0x2, 0x2, 0x2, 0x9a2, 0x9a3, 0x5, 0x252, 0x12a, 0x2, 
       0x9a3, 0x9a4, 0x7, 0x47, 0x2, 0x2, 0x9a4, 0x9a5, 0x5, 0x3e, 0x20, 
       0x2, 0x9a5, 0x9a6, 0x7, 0x48, 0x2, 0x2, 0x9a6, 0x9ab, 0x3, 0x2, 0x2, 
       0x2, 0x9a7, 0x9a8, 0x5, 0x252, 0x12a, 0x2, 0x9a8, 0x9a9, 0x5, 0x3e, 
       0x20, 0x2, 0x9a9, 0x9ab, 0x3, 0x2, 0x2, 0x2, 0x9aa, 0x9a2, 0x3, 0x2, 
       0x2, 0x2, 0x9aa, 0x9a7, 0x3, 0x2, 0x2, 0x2, 0x9ab, 0x26f, 0x3, 0x2, 
       0x2, 0x2, 0x9ac, 0x9ad, 0x5, 0x256, 0x12c, 0x2, 0x9ad, 0x9ae, 0x5, 
       0x2a8, 0x155, 0x2, 0x9ae, 0x271, 0x3, 0x2, 0x2, 0x2, 0x9af, 0x9b0, 
       0x5, 0x258, 0x12d, 0x2, 0x9b0, 0x9b1, 0x5, 0x2a8, 0x155, 0x2, 0x9b1, 
       0x273, 0x3, 0x2, 0x2, 0x2, 0x9b2, 0x9b3, 0x5, 0x258, 0x12d, 0x2, 
       0x9b3, 0x9b4, 0x5, 0x250, 0x129, 0x2, 0x9b4, 0x9b5, 0x5, 0x2a8, 0x155, 
       0x2, 0x9b5, 0x275, 0x3, 0x2, 0x2, 0x2, 0x9b6, 0x9b7, 0x5, 0x25a, 
       0x12e, 0x2, 0x9b7, 0x277, 0x3, 0x2, 0x2, 0x2, 0x9b8, 0x9b9, 0x5, 
       0x25a, 0x12e, 0x2, 0x9b9, 0x9ba, 0x5, 0x250, 0x129, 0x2, 0x9ba, 0x279, 
       0x3, 0x2, 0x2, 0x2, 0x9bb, 0x9bc, 0x5, 0x25c, 0x12f, 0x2, 0x9bc, 
       0x27b, 0x3, 0x2, 0x2, 0x2, 0x9bd, 0x9be, 0x5, 0x25e, 0x130, 0x2, 
       0x9be, 0x27d, 0x3, 0x2, 0x2, 0x2, 0x9bf, 0x9c0, 0x5, 0x260, 0x131, 
       0x2, 0x9c0, 0x9c1, 0x5, 0x2a8, 0x155, 0x2, 0x9c1, 0x27f, 0x3, 0x2, 
       0x2, 0x2, 0x9c2, 0x9d2, 0x5, 0x262, 0x132, 0x2, 0x9c3, 0x9d2, 0x5, 
       0x264, 0x133, 0x2, 0x9c4, 0x9d2, 0x5, 0x266, 0x134, 0x2, 0x9c5, 0x9d2, 
       0x5, 0x268, 0x135, 0x2, 0x9c6, 0x9d2, 0x5, 0x26a, 0x136, 0x2, 0x9c7, 
       0x9d2, 0x5, 0x26c, 0x137, 0x2, 0x9c8, 0x9d2, 0x5, 0x26e, 0x138, 0x2, 
       0x9c9, 0x9d2, 0x5, 0x270, 0x139, 0x2, 0x9ca, 0x9d2, 0x5, 0x272, 0x13a, 
       0x2, 0x9cb, 0x9d2, 0x5, 0x274, 0x13b, 0x2, 0x9cc, 0x9d2, 0x5, 0x276, 
       0x13c, 0x2, 0x9cd, 0x9d2, 0x5, 0x278, 0x13d, 0x2, 0x9ce, 0x9d2, 0x5, 
       0x27a, 0x13e, 0x2, 0x9cf, 0x9d2, 0x5, 0x27c, 0x13f, 0x2, 0x9d0, 0x9d2, 
       0x5, 0x27e, 0x140, 0x2, 0x9d1, 0x9c2, 0x3, 0x2, 0x2, 0x2, 0x9d1, 
       0x9c3, 0x3, 0x2, 0x2, 0x2, 0x9d1, 0x9c4, 0x3, 0x2, 0x2, 0x2, 0x9d1, 
       0x9c5, 0x3, 0x2, 0x2, 0x2, 0x9d1, 0x9c6, 0x3, 0x2, 0x2, 0x2, 0x9d1, 
       0x9c7, 0x3, 0x2, 0x2, 0x2, 0x9d1, 0x9c8, 0x3, 0x2, 0x2, 0x2, 0x9d1, 
       0x9c9, 0x3, 0x2, 0x2, 0x2, 0x9d1, 0x9ca, 0x3, 0x2, 0x2, 0x2, 0x9d1, 
       0x9cb, 0x3, 0x2, 0x2, 0x2, 0x9d1, 0x9cc, 0x3, 0x2, 0x2, 0x2, 0x9d1, 
       0x9cd, 0x3, 0x2, 0x2, 0x2, 0x9d1, 0x9ce, 0x3, 0x2, 0x2, 0x2, 0x9d1, 
       0x9cf, 0x3, 0x2, 0x2, 0x2, 0x9d1, 0x9d0, 0x3, 0x2, 0x2, 0x2, 0x9d2, 
       0x281, 0x3, 0x2, 0x2, 0x2, 0x9d3, 0x9d4, 0x9, 0x57, 0x2, 0x2, 0x9d4, 
       0x283, 0x3, 0x2, 0x2, 0x2, 0x9d5, 0x9d6, 0x9, 0x58, 0x2, 0x2, 0x9d6, 
       0x285, 0x3, 0x2, 0x2, 0x2, 0x9d7, 0x9d8, 0x5, 0x282, 0x142, 0x2, 
       0x9d8, 0x9d9, 0x5, 0x18, 0xd, 0x2, 0x9d9, 0x9da, 0x7, 0x4c, 0x2, 
       0x2, 0x9da, 0x9db, 0x5, 0x5a, 0x2e, 0x2, 0x9db, 0x287, 0x3, 0x2, 
       0x2, 0x2, 0x9dc, 0x9dd, 0x5, 0x282, 0x142, 0x2, 0x9dd, 0x9de, 0x5, 
       0x5c, 0x2f, 0x2, 0x9de, 0x9df, 0x7, 0x4c, 0x2, 0x2, 0x9df, 0x9e0, 
       0x5, 0x54, 0x2b, 0x2, 0x9e0, 0x289, 0x3, 0x2, 0x2, 0x2, 0x9e1, 0x9e2, 
       0x9, 0x59, 0x2, 0x2, 0x9e2, 0x28b, 0x3, 0x2, 0x2, 0x2, 0x9e3, 0x9e4, 
       0x9, 0x5a, 0x2, 0x2, 0x9e4, 0x28d, 0x3, 0x2, 0x2, 0x2, 0x9e5, 0x9e6, 
       0x9, 0x5b, 0x2, 0x2, 0x9e6, 0x28f, 0x3, 0x2, 0x2, 0x2, 0x9e7, 0x9e8, 
       0x9, 0x5c, 0x2, 0x2, 0x9e8, 0x291, 0x3, 0x2, 0x2, 0x2, 0x9e9, 0x9ea, 
       0x5, 0x284, 0x143, 0x2, 0x9ea, 0x9eb, 0x5, 0x5a, 0x2e, 0x2, 0x9eb, 
       0x9ec, 0x7, 0x4c, 0x2, 0x2, 0x9ec, 0x9ed, 0x5, 0x18, 0xd, 0x2, 0x9ed, 
       0x293, 0x3, 0x2, 0x2, 0x2, 0x9ee, 0x9ef, 0x5, 0x284, 0x143, 0x2, 
       0x9ef, 0x9f0, 0x5, 0x54, 0x2b, 0x2, 0x9f0, 0x9f1, 0x7, 0x4c, 0x2, 
       0x2, 0x9f1, 0x9f2, 0x5, 0x5c, 0x2f, 0x2, 0x9f2, 0x295, 0x3, 0x2, 
       0x2, 0x2, 0x9f3, 0x9f4, 0x9, 0x5d, 0x2, 0x2, 0x9f4, 0x297, 0x3, 0x2, 
       0x2, 0x2, 0x9f5, 0x9f6, 0x9, 0x5e, 0x2, 0x2, 0x9f6, 0x299, 0x3, 0x2, 
       0x2, 0x2, 0x9f7, 0x9f8, 0x9, 0x5f, 0x2, 0x2, 0x9f8, 0x29b, 0x3, 0x2, 
       0x2, 0x2, 0x9f9, 0x9fa, 0x9, 0x60, 0x2, 0x2, 0x9fa, 0x29d, 0x3, 0x2, 
       0x2, 0x2, 0x9fb, 0xa08, 0x5, 0x286, 0x144, 0x2, 0x9fc, 0xa08, 0x5, 
       0x288, 0x145, 0x2, 0x9fd, 0xa08, 0x5, 0x28a, 0x146, 0x2, 0x9fe, 0xa08, 
       0x5, 0x28c, 0x147, 0x2, 0x9ff, 0xa08, 0x5, 0x28e, 0x148, 0x2, 0xa00, 
       0xa08, 0x5, 0x290, 0x149, 0x2, 0xa01, 0xa08, 0x5, 0x292, 0x14a, 0x2, 
       0xa02, 0xa08, 0x5, 0x294, 0x14b, 0x2, 0xa03, 0xa08, 0x5, 0x296, 0x14c, 
       0x2, 0xa04, 0xa08, 0x5, 0x298, 0x14d, 0x2, 0xa05, 0xa08, 0x5, 0x29a, 
       0x14e, 0x2, 0xa06, 0xa08, 0x5, 0x29c, 0x14f, 0x2, 0xa07, 0x9fb, 0x3, 
       0x2, 0x2, 0x2, 0xa07, 0x9fc, 0x3, 0x2, 0x2, 0x2, 0xa07, 0x9fd, 0x3, 
       0x2, 0x2, 0x2, 0xa07, 0x9fe, 0x3, 0x2, 0x2, 0x2, 0xa07, 0x9ff, 0x3, 
       0x2, 0x2, 0x2, 0xa07, 0xa00, 0x3, 0x2, 0x2, 0x2, 0xa07, 0xa01, 0x3, 
       0x2, 0x2, 0x2, 0xa07, 0xa02, 0x3, 0x2, 0x2, 0x2, 0xa07, 0xa03, 0x3, 
       0x2, 0x2, 0x2, 0xa07, 0xa04, 0x3, 0x2, 0x2, 0x2, 0xa07, 0xa05, 0x3, 
       0x2, 0x2, 0x2, 0xa07, 0xa06, 0x3, 0x2, 0x2, 0x2, 0xa08, 0x29f, 0x3, 
       0x2, 0x2, 0x2, 0xa09, 0xa0b, 0x5, 0x2a6, 0x154, 0x2, 0xa0a, 0xa0c, 
       0x7, 0xe1, 0x2, 0x2, 0xa0b, 0xa0a, 0x3, 0x2, 0x2, 0x2, 0xa0b, 0xa0c, 
       0x3, 0x2, 0x2, 0x2, 0xa0c, 0x2a1, 0x3, 0x2, 0x2, 0x2, 0xa0d, 0xa0e, 
       0x9, 0x61, 0x2, 0x2, 0xa0e, 0xa0f, 0x5, 0x2a8, 0x155, 0x2, 0xa0f, 
       0x2a3, 0x3, 0x2, 0x2, 0x2, 0xa10, 0xa11, 0x7, 0xe9, 0x2, 0x2, 0xa11, 
       0x2a5, 0x3, 0x2, 0x2, 0x2, 0xa12, 0xa13, 0x7, 0xe8, 0x2, 0x2, 0xa13, 
       0x2a7, 0x3, 0x2, 0x2, 0x2, 0xa14, 0xa19, 0x5, 0x2ac, 0x157, 0x2, 
       0xa15, 0xa19, 0x5, 0x2aa, 0x156, 0x2, 0xa16, 0xa19, 0x5, 0x2a4, 0x153, 
       0x2, 0xa17, 0xa19, 0x5, 0x2a6, 0x154, 0x2, 0xa18, 0xa14, 0x3, 0x2, 
       0x2, 0x2, 0xa18, 0xa15, 0x3, 0x2, 0x2, 0x2, 0xa18, 0xa16, 0x3, 0x2, 
       0x2, 0x2, 0xa18, 0xa17, 0x3, 0x2, 0x2, 0x2, 0xa19, 0x2a9, 0x3, 0x2, 
       0x2, 0x2, 0xa1a, 0xa1b, 0x7, 0xe4, 0x2, 0x2, 0xa1b, 0x2ab, 0x3, 0x2, 
       0x2, 0x2, 0xa1c, 0xa1d, 0x9, 0x62, 0x2, 0x2, 0xa1d, 0x2ad, 0x3, 0x2, 
       0x2, 0x2, 0xa1e, 0xa1f, 0x7, 0xeb, 0x2, 0x2, 0xa1f, 0x2af, 0x3, 0x2, 
       0x2, 0x2, 0x73, 0x2b5, 0x2b8, 0x2bb, 0x2be, 0x2ca, 0x2df, 0x2e4, 
       0x2e9, 0x2f6, 0x2fb, 0x300, 0x305, 0x30a, 0x30f, 0x314, 0x319, 0x31e, 
       0x35f, 0x3e7, 0x3eb, 0x425, 0x42b, 0x472, 0x498, 0x4bc, 0x4c1, 0x4c6, 
       0x4de, 0x4fc, 0x506, 0x510, 0x51a, 0x524, 0x52e, 0x538, 0x542, 0x54c, 
       0x556, 0x560, 0x56a, 0x574, 0x57e, 0x588, 0x592, 0x59c, 0x5a6, 0x5b0, 
       0x5ba, 0x5c4, 0x5ce, 0x5d8, 0x5e2, 0x5ec, 0x5f6, 0x600, 0x60a, 0x614, 
       0x61e, 0x628, 0x632, 
  };
  static uint16_t serializedATNSegment1[] = {
    0x63c, 0x646, 0x650, 0x65a, 0x664, 0x66e, 0x678, 0x682, 0x68c, 0x696, 
       0x6a0, 0x6aa, 0x6b4, 0x6be, 0x6c8, 0x6d2, 0x6dc, 0x6e6, 0x6f0, 0x6fa, 
       0x704, 0x70e, 0x718, 0x722, 0x72c, 0x736, 0x740, 0x74a, 0x754, 0x75e, 
       0x768, 0x772, 0x77c, 0x786, 0x790, 0x79a, 0x7a4, 0x7ae, 0x836, 0x857, 
       0x86d, 0x874, 0x89e, 0x916, 0x966, 0x970, 0x996, 0x9a0, 0x9aa, 0x9d1, 
       0xa07, 0xa0b, 0xa18, 
  };

  _serializedATN.insert(_serializedATN.end(), serializedATNSegment0,
    serializedATNSegment0 + sizeof(serializedATNSegment0) / sizeof(serializedATNSegment0[0]));
  _serializedATN.insert(_serializedATN.end(), serializedATNSegment1,
    serializedATNSegment1 + sizeof(serializedATNSegment1) / sizeof(serializedATNSegment1[0]));


  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

Z80Parser::Initializer Z80Parser::_init;

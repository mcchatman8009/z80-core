
// Generated from Z80.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"
#include "Z80Parser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by Z80Parser.
 */
class  Z80Listener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterProgram(Z80Parser::ProgramContext *ctx) = 0;
  virtual void exitProgram(Z80Parser::ProgramContext *ctx) = 0;

  virtual void enterStatement(Z80Parser::StatementContext *ctx) = 0;
  virtual void exitStatement(Z80Parser::StatementContext *ctx) = 0;

  virtual void enterInstruction(Z80Parser::InstructionContext *ctx) = 0;
  virtual void exitInstruction(Z80Parser::InstructionContext *ctx) = 0;

  virtual void enterAShadowRegister(Z80Parser::AShadowRegisterContext *ctx) = 0;
  virtual void exitAShadowRegister(Z80Parser::AShadowRegisterContext *ctx) = 0;

  virtual void enterFShadowRegister(Z80Parser::FShadowRegisterContext *ctx) = 0;
  virtual void exitFShadowRegister(Z80Parser::FShadowRegisterContext *ctx) = 0;

  virtual void enterBShadowRegister(Z80Parser::BShadowRegisterContext *ctx) = 0;
  virtual void exitBShadowRegister(Z80Parser::BShadowRegisterContext *ctx) = 0;

  virtual void enterCShadowRegister(Z80Parser::CShadowRegisterContext *ctx) = 0;
  virtual void exitCShadowRegister(Z80Parser::CShadowRegisterContext *ctx) = 0;

  virtual void enterDShadowRegister(Z80Parser::DShadowRegisterContext *ctx) = 0;
  virtual void exitDShadowRegister(Z80Parser::DShadowRegisterContext *ctx) = 0;

  virtual void enterEShadowRegister(Z80Parser::EShadowRegisterContext *ctx) = 0;
  virtual void exitEShadowRegister(Z80Parser::EShadowRegisterContext *ctx) = 0;

  virtual void enterHShadowRegister(Z80Parser::HShadowRegisterContext *ctx) = 0;
  virtual void exitHShadowRegister(Z80Parser::HShadowRegisterContext *ctx) = 0;

  virtual void enterLShadowRegister(Z80Parser::LShadowRegisterContext *ctx) = 0;
  virtual void exitLShadowRegister(Z80Parser::LShadowRegisterContext *ctx) = 0;

  virtual void enterARegister(Z80Parser::ARegisterContext *ctx) = 0;
  virtual void exitARegister(Z80Parser::ARegisterContext *ctx) = 0;

  virtual void enterFRegister(Z80Parser::FRegisterContext *ctx) = 0;
  virtual void exitFRegister(Z80Parser::FRegisterContext *ctx) = 0;

  virtual void enterAfRegister(Z80Parser::AfRegisterContext *ctx) = 0;
  virtual void exitAfRegister(Z80Parser::AfRegisterContext *ctx) = 0;

  virtual void enterAfShadowRegister(Z80Parser::AfShadowRegisterContext *ctx) = 0;
  virtual void exitAfShadowRegister(Z80Parser::AfShadowRegisterContext *ctx) = 0;

  virtual void enterBcShadowRegister(Z80Parser::BcShadowRegisterContext *ctx) = 0;
  virtual void exitBcShadowRegister(Z80Parser::BcShadowRegisterContext *ctx) = 0;

  virtual void enterDeShadowRegister(Z80Parser::DeShadowRegisterContext *ctx) = 0;
  virtual void exitDeShadowRegister(Z80Parser::DeShadowRegisterContext *ctx) = 0;

  virtual void enterHlShadowRegister(Z80Parser::HlShadowRegisterContext *ctx) = 0;
  virtual void exitHlShadowRegister(Z80Parser::HlShadowRegisterContext *ctx) = 0;

  virtual void enterBRegister(Z80Parser::BRegisterContext *ctx) = 0;
  virtual void exitBRegister(Z80Parser::BRegisterContext *ctx) = 0;

  virtual void enterCRegister(Z80Parser::CRegisterContext *ctx) = 0;
  virtual void exitCRegister(Z80Parser::CRegisterContext *ctx) = 0;

  virtual void enterBcRegister(Z80Parser::BcRegisterContext *ctx) = 0;
  virtual void exitBcRegister(Z80Parser::BcRegisterContext *ctx) = 0;

  virtual void enterDRegister(Z80Parser::DRegisterContext *ctx) = 0;
  virtual void exitDRegister(Z80Parser::DRegisterContext *ctx) = 0;

  virtual void enterERegister(Z80Parser::ERegisterContext *ctx) = 0;
  virtual void exitERegister(Z80Parser::ERegisterContext *ctx) = 0;

  virtual void enterDeRegister(Z80Parser::DeRegisterContext *ctx) = 0;
  virtual void exitDeRegister(Z80Parser::DeRegisterContext *ctx) = 0;

  virtual void enterHRegister(Z80Parser::HRegisterContext *ctx) = 0;
  virtual void exitHRegister(Z80Parser::HRegisterContext *ctx) = 0;

  virtual void enterLRegister(Z80Parser::LRegisterContext *ctx) = 0;
  virtual void exitLRegister(Z80Parser::LRegisterContext *ctx) = 0;

  virtual void enterHlRegister(Z80Parser::HlRegisterContext *ctx) = 0;
  virtual void exitHlRegister(Z80Parser::HlRegisterContext *ctx) = 0;

  virtual void enterIRegister(Z80Parser::IRegisterContext *ctx) = 0;
  virtual void exitIRegister(Z80Parser::IRegisterContext *ctx) = 0;

  virtual void enterRRegister(Z80Parser::RRegisterContext *ctx) = 0;
  virtual void exitRRegister(Z80Parser::RRegisterContext *ctx) = 0;

  virtual void enterIxRegister(Z80Parser::IxRegisterContext *ctx) = 0;
  virtual void exitIxRegister(Z80Parser::IxRegisterContext *ctx) = 0;

  virtual void enterIyRegister(Z80Parser::IyRegisterContext *ctx) = 0;
  virtual void exitIyRegister(Z80Parser::IyRegisterContext *ctx) = 0;

  virtual void enterIxHighRegister(Z80Parser::IxHighRegisterContext *ctx) = 0;
  virtual void exitIxHighRegister(Z80Parser::IxHighRegisterContext *ctx) = 0;

  virtual void enterIxLowRegister(Z80Parser::IxLowRegisterContext *ctx) = 0;
  virtual void exitIxLowRegister(Z80Parser::IxLowRegisterContext *ctx) = 0;

  virtual void enterIyHighRegister(Z80Parser::IyHighRegisterContext *ctx) = 0;
  virtual void exitIyHighRegister(Z80Parser::IyHighRegisterContext *ctx) = 0;

  virtual void enterIyLowRegister(Z80Parser::IyLowRegisterContext *ctx) = 0;
  virtual void exitIyLowRegister(Z80Parser::IyLowRegisterContext *ctx) = 0;

  virtual void enterSpRegister(Z80Parser::SpRegisterContext *ctx) = 0;
  virtual void exitSpRegister(Z80Parser::SpRegisterContext *ctx) = 0;

  virtual void enterPcRegister(Z80Parser::PcRegisterContext *ctx) = 0;
  virtual void exitPcRegister(Z80Parser::PcRegisterContext *ctx) = 0;

  virtual void enterHlPointer(Z80Parser::HlPointerContext *ctx) = 0;
  virtual void exitHlPointer(Z80Parser::HlPointerContext *ctx) = 0;

  virtual void enterBcPointer(Z80Parser::BcPointerContext *ctx) = 0;
  virtual void exitBcPointer(Z80Parser::BcPointerContext *ctx) = 0;

  virtual void enterDePointer(Z80Parser::DePointerContext *ctx) = 0;
  virtual void exitDePointer(Z80Parser::DePointerContext *ctx) = 0;

  virtual void enterSpPointer(Z80Parser::SpPointerContext *ctx) = 0;
  virtual void exitSpPointer(Z80Parser::SpPointerContext *ctx) = 0;

  virtual void enterCPointer(Z80Parser::CPointerContext *ctx) = 0;
  virtual void exitCPointer(Z80Parser::CPointerContext *ctx) = 0;

  virtual void enterIxPointerWithOffset(Z80Parser::IxPointerWithOffsetContext *ctx) = 0;
  virtual void exitIxPointerWithOffset(Z80Parser::IxPointerWithOffsetContext *ctx) = 0;

  virtual void enterIyPointerWithOffset(Z80Parser::IyPointerWithOffsetContext *ctx) = 0;
  virtual void exitIyPointerWithOffset(Z80Parser::IyPointerWithOffsetContext *ctx) = 0;

  virtual void enterNumberPointer(Z80Parser::NumberPointerContext *ctx) = 0;
  virtual void exitNumberPointer(Z80Parser::NumberPointerContext *ctx) = 0;

  virtual void enterSimpleByteRegister(Z80Parser::SimpleByteRegisterContext *ctx) = 0;
  virtual void exitSimpleByteRegister(Z80Parser::SimpleByteRegisterContext *ctx) = 0;

  virtual void enterLoadCommandName(Z80Parser::LoadCommandNameContext *ctx) = 0;
  virtual void exitLoadCommandName(Z80Parser::LoadCommandNameContext *ctx) = 0;

  virtual void enterLoadByteRegisterWithByteRegister(Z80Parser::LoadByteRegisterWithByteRegisterContext *ctx) = 0;
  virtual void exitLoadByteRegisterWithByteRegister(Z80Parser::LoadByteRegisterWithByteRegisterContext *ctx) = 0;

  virtual void enterLoadByteRegisterWithImmediateByte(Z80Parser::LoadByteRegisterWithImmediateByteContext *ctx) = 0;
  virtual void exitLoadByteRegisterWithImmediateByte(Z80Parser::LoadByteRegisterWithImmediateByteContext *ctx) = 0;

  virtual void enterLoadByteRegisterWithHLPointer(Z80Parser::LoadByteRegisterWithHLPointerContext *ctx) = 0;
  virtual void exitLoadByteRegisterWithHLPointer(Z80Parser::LoadByteRegisterWithHLPointerContext *ctx) = 0;

  virtual void enterLoadByteRegisterWithIXOffset(Z80Parser::LoadByteRegisterWithIXOffsetContext *ctx) = 0;
  virtual void exitLoadByteRegisterWithIXOffset(Z80Parser::LoadByteRegisterWithIXOffsetContext *ctx) = 0;

  virtual void enterLoadByteRegisterWithIYOffset(Z80Parser::LoadByteRegisterWithIYOffsetContext *ctx) = 0;
  virtual void exitLoadByteRegisterWithIYOffset(Z80Parser::LoadByteRegisterWithIYOffsetContext *ctx) = 0;

  virtual void enterLoadHLPointerWithRegister(Z80Parser::LoadHLPointerWithRegisterContext *ctx) = 0;
  virtual void exitLoadHLPointerWithRegister(Z80Parser::LoadHLPointerWithRegisterContext *ctx) = 0;

  virtual void enterLoadIXOffsetWithRegister(Z80Parser::LoadIXOffsetWithRegisterContext *ctx) = 0;
  virtual void exitLoadIXOffsetWithRegister(Z80Parser::LoadIXOffsetWithRegisterContext *ctx) = 0;

  virtual void enterLoadIYOffsetWithRegister(Z80Parser::LoadIYOffsetWithRegisterContext *ctx) = 0;
  virtual void exitLoadIYOffsetWithRegister(Z80Parser::LoadIYOffsetWithRegisterContext *ctx) = 0;

  virtual void enterLoadHLPointerWithImmediateByte(Z80Parser::LoadHLPointerWithImmediateByteContext *ctx) = 0;
  virtual void exitLoadHLPointerWithImmediateByte(Z80Parser::LoadHLPointerWithImmediateByteContext *ctx) = 0;

  virtual void enterLoadIXOffsetWithImmediateByte(Z80Parser::LoadIXOffsetWithImmediateByteContext *ctx) = 0;
  virtual void exitLoadIXOffsetWithImmediateByte(Z80Parser::LoadIXOffsetWithImmediateByteContext *ctx) = 0;

  virtual void enterLoadIYOffsetWithImmediateByte(Z80Parser::LoadIYOffsetWithImmediateByteContext *ctx) = 0;
  virtual void exitLoadIYOffsetWithImmediateByte(Z80Parser::LoadIYOffsetWithImmediateByteContext *ctx) = 0;

  virtual void enterLoadAWithBCPointer(Z80Parser::LoadAWithBCPointerContext *ctx) = 0;
  virtual void exitLoadAWithBCPointer(Z80Parser::LoadAWithBCPointerContext *ctx) = 0;

  virtual void enterLoadAWithDEPointer(Z80Parser::LoadAWithDEPointerContext *ctx) = 0;
  virtual void exitLoadAWithDEPointer(Z80Parser::LoadAWithDEPointerContext *ctx) = 0;

  virtual void enterLoadAWithNNPointer(Z80Parser::LoadAWithNNPointerContext *ctx) = 0;
  virtual void exitLoadAWithNNPointer(Z80Parser::LoadAWithNNPointerContext *ctx) = 0;

  virtual void enterLoadBCPointerWithA(Z80Parser::LoadBCPointerWithAContext *ctx) = 0;
  virtual void exitLoadBCPointerWithA(Z80Parser::LoadBCPointerWithAContext *ctx) = 0;

  virtual void enterLoadDEPointerWithA(Z80Parser::LoadDEPointerWithAContext *ctx) = 0;
  virtual void exitLoadDEPointerWithA(Z80Parser::LoadDEPointerWithAContext *ctx) = 0;

  virtual void enterLoadNNPointerWithA(Z80Parser::LoadNNPointerWithAContext *ctx) = 0;
  virtual void exitLoadNNPointerWithA(Z80Parser::LoadNNPointerWithAContext *ctx) = 0;

  virtual void enterLoadAWithI(Z80Parser::LoadAWithIContext *ctx) = 0;
  virtual void exitLoadAWithI(Z80Parser::LoadAWithIContext *ctx) = 0;

  virtual void enterLoadAWithR(Z80Parser::LoadAWithRContext *ctx) = 0;
  virtual void exitLoadAWithR(Z80Parser::LoadAWithRContext *ctx) = 0;

  virtual void enterLoadIWithA(Z80Parser::LoadIWithAContext *ctx) = 0;
  virtual void exitLoadIWithA(Z80Parser::LoadIWithAContext *ctx) = 0;

  virtual void enterLoadRWithA(Z80Parser::LoadRWithAContext *ctx) = 0;
  virtual void exitLoadRWithA(Z80Parser::LoadRWithAContext *ctx) = 0;

  virtual void enterLoadRegisterWithIXHigh(Z80Parser::LoadRegisterWithIXHighContext *ctx) = 0;
  virtual void exitLoadRegisterWithIXHigh(Z80Parser::LoadRegisterWithIXHighContext *ctx) = 0;

  virtual void enterLoadRegisterWithIXLow(Z80Parser::LoadRegisterWithIXLowContext *ctx) = 0;
  virtual void exitLoadRegisterWithIXLow(Z80Parser::LoadRegisterWithIXLowContext *ctx) = 0;

  virtual void enterLoadRegisterWithIYHigh(Z80Parser::LoadRegisterWithIYHighContext *ctx) = 0;
  virtual void exitLoadRegisterWithIYHigh(Z80Parser::LoadRegisterWithIYHighContext *ctx) = 0;

  virtual void enterLoadRegisterWithIYLow(Z80Parser::LoadRegisterWithIYLowContext *ctx) = 0;
  virtual void exitLoadRegisterWithIYLow(Z80Parser::LoadRegisterWithIYLowContext *ctx) = 0;

  virtual void enterLoadIXHighWithRegister(Z80Parser::LoadIXHighWithRegisterContext *ctx) = 0;
  virtual void exitLoadIXHighWithRegister(Z80Parser::LoadIXHighWithRegisterContext *ctx) = 0;

  virtual void enterIxHighOrLowRegister(Z80Parser::IxHighOrLowRegisterContext *ctx) = 0;
  virtual void exitIxHighOrLowRegister(Z80Parser::IxHighOrLowRegisterContext *ctx) = 0;

  virtual void enterIyHighOrLowRegister(Z80Parser::IyHighOrLowRegisterContext *ctx) = 0;
  virtual void exitIyHighOrLowRegister(Z80Parser::IyHighOrLowRegisterContext *ctx) = 0;

  virtual void enterLoadIXNibbles(Z80Parser::LoadIXNibblesContext *ctx) = 0;
  virtual void exitLoadIXNibbles(Z80Parser::LoadIXNibblesContext *ctx) = 0;

  virtual void enterLoadIYNibbles(Z80Parser::LoadIYNibblesContext *ctx) = 0;
  virtual void exitLoadIYNibbles(Z80Parser::LoadIYNibblesContext *ctx) = 0;

  virtual void enterLoadIXLowWithRegister(Z80Parser::LoadIXLowWithRegisterContext *ctx) = 0;
  virtual void exitLoadIXLowWithRegister(Z80Parser::LoadIXLowWithRegisterContext *ctx) = 0;

  virtual void enterLoadIYHighWithRegister(Z80Parser::LoadIYHighWithRegisterContext *ctx) = 0;
  virtual void exitLoadIYHighWithRegister(Z80Parser::LoadIYHighWithRegisterContext *ctx) = 0;

  virtual void enterLoadIYLowWithRegister(Z80Parser::LoadIYLowWithRegisterContext *ctx) = 0;
  virtual void exitLoadIYLowWithRegister(Z80Parser::LoadIYLowWithRegisterContext *ctx) = 0;

  virtual void enterByteLoadCommand(Z80Parser::ByteLoadCommandContext *ctx) = 0;
  virtual void exitByteLoadCommand(Z80Parser::ByteLoadCommandContext *ctx) = 0;

  virtual void enterSimpleWordRegister(Z80Parser::SimpleWordRegisterContext *ctx) = 0;
  virtual void exitSimpleWordRegister(Z80Parser::SimpleWordRegisterContext *ctx) = 0;

  virtual void enterLoadWordWithImmediateWord(Z80Parser::LoadWordWithImmediateWordContext *ctx) = 0;
  virtual void exitLoadWordWithImmediateWord(Z80Parser::LoadWordWithImmediateWordContext *ctx) = 0;

  virtual void enterLoadIXWithImmediateWord(Z80Parser::LoadIXWithImmediateWordContext *ctx) = 0;
  virtual void exitLoadIXWithImmediateWord(Z80Parser::LoadIXWithImmediateWordContext *ctx) = 0;

  virtual void enterLoadIYWithImmediateWord(Z80Parser::LoadIYWithImmediateWordContext *ctx) = 0;
  virtual void exitLoadIYWithImmediateWord(Z80Parser::LoadIYWithImmediateWordContext *ctx) = 0;

  virtual void enterLoadWordRegisterWithNNPointer(Z80Parser::LoadWordRegisterWithNNPointerContext *ctx) = 0;
  virtual void exitLoadWordRegisterWithNNPointer(Z80Parser::LoadWordRegisterWithNNPointerContext *ctx) = 0;

  virtual void enterLoadIXWithNNPointer(Z80Parser::LoadIXWithNNPointerContext *ctx) = 0;
  virtual void exitLoadIXWithNNPointer(Z80Parser::LoadIXWithNNPointerContext *ctx) = 0;

  virtual void enterLoadIYWithNNPointer(Z80Parser::LoadIYWithNNPointerContext *ctx) = 0;
  virtual void exitLoadIYWithNNPointer(Z80Parser::LoadIYWithNNPointerContext *ctx) = 0;

  virtual void enterLoadNNPointerWithWordRegister(Z80Parser::LoadNNPointerWithWordRegisterContext *ctx) = 0;
  virtual void exitLoadNNPointerWithWordRegister(Z80Parser::LoadNNPointerWithWordRegisterContext *ctx) = 0;

  virtual void enterLoadNNPointerWithIX(Z80Parser::LoadNNPointerWithIXContext *ctx) = 0;
  virtual void exitLoadNNPointerWithIX(Z80Parser::LoadNNPointerWithIXContext *ctx) = 0;

  virtual void enterLoadNNPointerWithIY(Z80Parser::LoadNNPointerWithIYContext *ctx) = 0;
  virtual void exitLoadNNPointerWithIY(Z80Parser::LoadNNPointerWithIYContext *ctx) = 0;

  virtual void enterLoadSPWithHL(Z80Parser::LoadSPWithHLContext *ctx) = 0;
  virtual void exitLoadSPWithHL(Z80Parser::LoadSPWithHLContext *ctx) = 0;

  virtual void enterLoadSPWithIX(Z80Parser::LoadSPWithIXContext *ctx) = 0;
  virtual void exitLoadSPWithIX(Z80Parser::LoadSPWithIXContext *ctx) = 0;

  virtual void enterLoadSPWithIY(Z80Parser::LoadSPWithIYContext *ctx) = 0;
  virtual void exitLoadSPWithIY(Z80Parser::LoadSPWithIYContext *ctx) = 0;

  virtual void enterPushCommandName(Z80Parser::PushCommandNameContext *ctx) = 0;
  virtual void exitPushCommandName(Z80Parser::PushCommandNameContext *ctx) = 0;

  virtual void enterPopCommandName(Z80Parser::PopCommandNameContext *ctx) = 0;
  virtual void exitPopCommandName(Z80Parser::PopCommandNameContext *ctx) = 0;

  virtual void enterPushAndPopRegister(Z80Parser::PushAndPopRegisterContext *ctx) = 0;
  virtual void exitPushAndPopRegister(Z80Parser::PushAndPopRegisterContext *ctx) = 0;

  virtual void enterPushWordRegister(Z80Parser::PushWordRegisterContext *ctx) = 0;
  virtual void exitPushWordRegister(Z80Parser::PushWordRegisterContext *ctx) = 0;

  virtual void enterPushIX(Z80Parser::PushIXContext *ctx) = 0;
  virtual void exitPushIX(Z80Parser::PushIXContext *ctx) = 0;

  virtual void enterPushIY(Z80Parser::PushIYContext *ctx) = 0;
  virtual void exitPushIY(Z80Parser::PushIYContext *ctx) = 0;

  virtual void enterPopWordRegister(Z80Parser::PopWordRegisterContext *ctx) = 0;
  virtual void exitPopWordRegister(Z80Parser::PopWordRegisterContext *ctx) = 0;

  virtual void enterPopIX(Z80Parser::PopIXContext *ctx) = 0;
  virtual void exitPopIX(Z80Parser::PopIXContext *ctx) = 0;

  virtual void enterPopIY(Z80Parser::PopIYContext *ctx) = 0;
  virtual void exitPopIY(Z80Parser::PopIYContext *ctx) = 0;

  virtual void enterWordLoadCommand(Z80Parser::WordLoadCommandContext *ctx) = 0;
  virtual void exitWordLoadCommand(Z80Parser::WordLoadCommandContext *ctx) = 0;

  virtual void enterExchangeCommandName(Z80Parser::ExchangeCommandNameContext *ctx) = 0;
  virtual void exitExchangeCommandName(Z80Parser::ExchangeCommandNameContext *ctx) = 0;

  virtual void enterExchangeDEWithHL(Z80Parser::ExchangeDEWithHLContext *ctx) = 0;
  virtual void exitExchangeDEWithHL(Z80Parser::ExchangeDEWithHLContext *ctx) = 0;

  virtual void enterExchangeAFWithShadowAF(Z80Parser::ExchangeAFWithShadowAFContext *ctx) = 0;
  virtual void exitExchangeAFWithShadowAF(Z80Parser::ExchangeAFWithShadowAFContext *ctx) = 0;

  virtual void enterExchangeMultipleWordRegisters(Z80Parser::ExchangeMultipleWordRegistersContext *ctx) = 0;
  virtual void exitExchangeMultipleWordRegisters(Z80Parser::ExchangeMultipleWordRegistersContext *ctx) = 0;

  virtual void enterExchangeSPPointerWithHL(Z80Parser::ExchangeSPPointerWithHLContext *ctx) = 0;
  virtual void exitExchangeSPPointerWithHL(Z80Parser::ExchangeSPPointerWithHLContext *ctx) = 0;

  virtual void enterExchangeSPPointerWithIX(Z80Parser::ExchangeSPPointerWithIXContext *ctx) = 0;
  virtual void exitExchangeSPPointerWithIX(Z80Parser::ExchangeSPPointerWithIXContext *ctx) = 0;

  virtual void enterExchangeSPPointerWithIY(Z80Parser::ExchangeSPPointerWithIYContext *ctx) = 0;
  virtual void exitExchangeSPPointerWithIY(Z80Parser::ExchangeSPPointerWithIYContext *ctx) = 0;

  virtual void enterLoadHLPointerIntoDEThenDecrementBCAndIncrementHL(Z80Parser::LoadHLPointerIntoDEThenDecrementBCAndIncrementHLContext *ctx) = 0;
  virtual void exitLoadHLPointerIntoDEThenDecrementBCAndIncrementHL(Z80Parser::LoadHLPointerIntoDEThenDecrementBCAndIncrementHLContext *ctx) = 0;

  virtual void enterLoadDEPointerWithHLPointerThenDecrementBCAndIncrementHLRepeat(Z80Parser::LoadDEPointerWithHLPointerThenDecrementBCAndIncrementHLRepeatContext *ctx) = 0;
  virtual void exitLoadDEPointerWithHLPointerThenDecrementBCAndIncrementHLRepeat(Z80Parser::LoadDEPointerWithHLPointerThenDecrementBCAndIncrementHLRepeatContext *ctx) = 0;

  virtual void enterLoadDEPointerWithHLPointerThenDecrementBCAndHL(Z80Parser::LoadDEPointerWithHLPointerThenDecrementBCAndHLContext *ctx) = 0;
  virtual void exitLoadDEPointerWithHLPointerThenDecrementBCAndHL(Z80Parser::LoadDEPointerWithHLPointerThenDecrementBCAndHLContext *ctx) = 0;

  virtual void enterLoadDEPointerWithHLPointerThenDecrementBCAndHLRepeat(Z80Parser::LoadDEPointerWithHLPointerThenDecrementBCAndHLRepeatContext *ctx) = 0;
  virtual void exitLoadDEPointerWithHLPointerThenDecrementBCAndHLRepeat(Z80Parser::LoadDEPointerWithHLPointerThenDecrementBCAndHLRepeatContext *ctx) = 0;

  virtual void enterCompareAToHLPointerThenIncrementHLAndDecrementBC(Z80Parser::CompareAToHLPointerThenIncrementHLAndDecrementBCContext *ctx) = 0;
  virtual void exitCompareAToHLPointerThenIncrementHLAndDecrementBC(Z80Parser::CompareAToHLPointerThenIncrementHLAndDecrementBCContext *ctx) = 0;

  virtual void enterCompareAToHLPointerThenIncrementHLAndDecrementBCRepeat(Z80Parser::CompareAToHLPointerThenIncrementHLAndDecrementBCRepeatContext *ctx) = 0;
  virtual void exitCompareAToHLPointerThenIncrementHLAndDecrementBCRepeat(Z80Parser::CompareAToHLPointerThenIncrementHLAndDecrementBCRepeatContext *ctx) = 0;

  virtual void enterCompareAToHLPointerThenDecrementHLAndBC(Z80Parser::CompareAToHLPointerThenDecrementHLAndBCContext *ctx) = 0;
  virtual void exitCompareAToHLPointerThenDecrementHLAndBC(Z80Parser::CompareAToHLPointerThenDecrementHLAndBCContext *ctx) = 0;

  virtual void enterCompareAToHLPointerThenDecrementHLAndBCRepeat(Z80Parser::CompareAToHLPointerThenDecrementHLAndBCRepeatContext *ctx) = 0;
  virtual void exitCompareAToHLPointerThenDecrementHLAndBCRepeat(Z80Parser::CompareAToHLPointerThenDecrementHLAndBCRepeatContext *ctx) = 0;

  virtual void enterExchagneAndBlockTransfrerCommand(Z80Parser::ExchagneAndBlockTransfrerCommandContext *ctx) = 0;
  virtual void exitExchagneAndBlockTransfrerCommand(Z80Parser::ExchagneAndBlockTransfrerCommandContext *ctx) = 0;

  virtual void enterAddCommandName(Z80Parser::AddCommandNameContext *ctx) = 0;
  virtual void exitAddCommandName(Z80Parser::AddCommandNameContext *ctx) = 0;

  virtual void enterAddWithCarryCommandName(Z80Parser::AddWithCarryCommandNameContext *ctx) = 0;
  virtual void exitAddWithCarryCommandName(Z80Parser::AddWithCarryCommandNameContext *ctx) = 0;

  virtual void enterSubtractCommandName(Z80Parser::SubtractCommandNameContext *ctx) = 0;
  virtual void exitSubtractCommandName(Z80Parser::SubtractCommandNameContext *ctx) = 0;

  virtual void enterSubtractWithBorrowCommandName(Z80Parser::SubtractWithBorrowCommandNameContext *ctx) = 0;
  virtual void exitSubtractWithBorrowCommandName(Z80Parser::SubtractWithBorrowCommandNameContext *ctx) = 0;

  virtual void enterAndCommandName(Z80Parser::AndCommandNameContext *ctx) = 0;
  virtual void exitAndCommandName(Z80Parser::AndCommandNameContext *ctx) = 0;

  virtual void enterOrCommandName(Z80Parser::OrCommandNameContext *ctx) = 0;
  virtual void exitOrCommandName(Z80Parser::OrCommandNameContext *ctx) = 0;

  virtual void enterXorCommandName(Z80Parser::XorCommandNameContext *ctx) = 0;
  virtual void exitXorCommandName(Z80Parser::XorCommandNameContext *ctx) = 0;

  virtual void enterCompareCommandName(Z80Parser::CompareCommandNameContext *ctx) = 0;
  virtual void exitCompareCommandName(Z80Parser::CompareCommandNameContext *ctx) = 0;

  virtual void enterIncrementCommandName(Z80Parser::IncrementCommandNameContext *ctx) = 0;
  virtual void exitIncrementCommandName(Z80Parser::IncrementCommandNameContext *ctx) = 0;

  virtual void enterDecrementCommandName(Z80Parser::DecrementCommandNameContext *ctx) = 0;
  virtual void exitDecrementCommandName(Z80Parser::DecrementCommandNameContext *ctx) = 0;

  virtual void enterAddAAndRegister(Z80Parser::AddAAndRegisterContext *ctx) = 0;
  virtual void exitAddAAndRegister(Z80Parser::AddAAndRegisterContext *ctx) = 0;

  virtual void enterAddAAndImmediateByte(Z80Parser::AddAAndImmediateByteContext *ctx) = 0;
  virtual void exitAddAAndImmediateByte(Z80Parser::AddAAndImmediateByteContext *ctx) = 0;

  virtual void enterAddAAndIXH(Z80Parser::AddAAndIXHContext *ctx) = 0;
  virtual void exitAddAAndIXH(Z80Parser::AddAAndIXHContext *ctx) = 0;

  virtual void enterAddAAndIXL(Z80Parser::AddAAndIXLContext *ctx) = 0;
  virtual void exitAddAAndIXL(Z80Parser::AddAAndIXLContext *ctx) = 0;

  virtual void enterAddAAndIYH(Z80Parser::AddAAndIYHContext *ctx) = 0;
  virtual void exitAddAAndIYH(Z80Parser::AddAAndIYHContext *ctx) = 0;

  virtual void enterAddAAndIYL(Z80Parser::AddAAndIYLContext *ctx) = 0;
  virtual void exitAddAAndIYL(Z80Parser::AddAAndIYLContext *ctx) = 0;

  virtual void enterAddAAndHLPointer(Z80Parser::AddAAndHLPointerContext *ctx) = 0;
  virtual void exitAddAAndHLPointer(Z80Parser::AddAAndHLPointerContext *ctx) = 0;

  virtual void enterAddAAndIXOffset(Z80Parser::AddAAndIXOffsetContext *ctx) = 0;
  virtual void exitAddAAndIXOffset(Z80Parser::AddAAndIXOffsetContext *ctx) = 0;

  virtual void enterAddAAndIYOffset(Z80Parser::AddAAndIYOffsetContext *ctx) = 0;
  virtual void exitAddAAndIYOffset(Z80Parser::AddAAndIYOffsetContext *ctx) = 0;

  virtual void enterAddWithCarryAAndRegister(Z80Parser::AddWithCarryAAndRegisterContext *ctx) = 0;
  virtual void exitAddWithCarryAAndRegister(Z80Parser::AddWithCarryAAndRegisterContext *ctx) = 0;

  virtual void enterAddWithCarryAAndHLPointer(Z80Parser::AddWithCarryAAndHLPointerContext *ctx) = 0;
  virtual void exitAddWithCarryAAndHLPointer(Z80Parser::AddWithCarryAAndHLPointerContext *ctx) = 0;

  virtual void enterAddWithCarryAAndImmediate(Z80Parser::AddWithCarryAAndImmediateContext *ctx) = 0;
  virtual void exitAddWithCarryAAndImmediate(Z80Parser::AddWithCarryAAndImmediateContext *ctx) = 0;

  virtual void enterAddWithCarryAAndIXOffset(Z80Parser::AddWithCarryAAndIXOffsetContext *ctx) = 0;
  virtual void exitAddWithCarryAAndIXOffset(Z80Parser::AddWithCarryAAndIXOffsetContext *ctx) = 0;

  virtual void enterAddWithCarryAAndIYOffset(Z80Parser::AddWithCarryAAndIYOffsetContext *ctx) = 0;
  virtual void exitAddWithCarryAAndIYOffset(Z80Parser::AddWithCarryAAndIYOffsetContext *ctx) = 0;

  virtual void enterAddWithCarryAAndIXH(Z80Parser::AddWithCarryAAndIXHContext *ctx) = 0;
  virtual void exitAddWithCarryAAndIXH(Z80Parser::AddWithCarryAAndIXHContext *ctx) = 0;

  virtual void enterAddWithCarryAAndIXL(Z80Parser::AddWithCarryAAndIXLContext *ctx) = 0;
  virtual void exitAddWithCarryAAndIXL(Z80Parser::AddWithCarryAAndIXLContext *ctx) = 0;

  virtual void enterAddWithCarryAAndIYH(Z80Parser::AddWithCarryAAndIYHContext *ctx) = 0;
  virtual void exitAddWithCarryAAndIYH(Z80Parser::AddWithCarryAAndIYHContext *ctx) = 0;

  virtual void enterAddWithCarryAAndIYL(Z80Parser::AddWithCarryAAndIYLContext *ctx) = 0;
  virtual void exitAddWithCarryAAndIYL(Z80Parser::AddWithCarryAAndIYLContext *ctx) = 0;

  virtual void enterSubtractRegisterFromA(Z80Parser::SubtractRegisterFromAContext *ctx) = 0;
  virtual void exitSubtractRegisterFromA(Z80Parser::SubtractRegisterFromAContext *ctx) = 0;

  virtual void enterSubtractHLPointerFromA(Z80Parser::SubtractHLPointerFromAContext *ctx) = 0;
  virtual void exitSubtractHLPointerFromA(Z80Parser::SubtractHLPointerFromAContext *ctx) = 0;

  virtual void enterSubtractImmediateFromA(Z80Parser::SubtractImmediateFromAContext *ctx) = 0;
  virtual void exitSubtractImmediateFromA(Z80Parser::SubtractImmediateFromAContext *ctx) = 0;

  virtual void enterSubtractIXOffsetFromA(Z80Parser::SubtractIXOffsetFromAContext *ctx) = 0;
  virtual void exitSubtractIXOffsetFromA(Z80Parser::SubtractIXOffsetFromAContext *ctx) = 0;

  virtual void enterSubtractIYOffsetFromA(Z80Parser::SubtractIYOffsetFromAContext *ctx) = 0;
  virtual void exitSubtractIYOffsetFromA(Z80Parser::SubtractIYOffsetFromAContext *ctx) = 0;

  virtual void enterSubtractIXHighOrLowFromA(Z80Parser::SubtractIXHighOrLowFromAContext *ctx) = 0;
  virtual void exitSubtractIXHighOrLowFromA(Z80Parser::SubtractIXHighOrLowFromAContext *ctx) = 0;

  virtual void enterSubtractIYHighOrLowFromA(Z80Parser::SubtractIYHighOrLowFromAContext *ctx) = 0;
  virtual void exitSubtractIYHighOrLowFromA(Z80Parser::SubtractIYHighOrLowFromAContext *ctx) = 0;

  virtual void enterSubtractWithBorrowRegisterFromA(Z80Parser::SubtractWithBorrowRegisterFromAContext *ctx) = 0;
  virtual void exitSubtractWithBorrowRegisterFromA(Z80Parser::SubtractWithBorrowRegisterFromAContext *ctx) = 0;

  virtual void enterSubtractWithBorrowHLPointerFromA(Z80Parser::SubtractWithBorrowHLPointerFromAContext *ctx) = 0;
  virtual void exitSubtractWithBorrowHLPointerFromA(Z80Parser::SubtractWithBorrowHLPointerFromAContext *ctx) = 0;

  virtual void enterSubtractWithBorrowIXOffsetFromA(Z80Parser::SubtractWithBorrowIXOffsetFromAContext *ctx) = 0;
  virtual void exitSubtractWithBorrowIXOffsetFromA(Z80Parser::SubtractWithBorrowIXOffsetFromAContext *ctx) = 0;

  virtual void enterSubtractWithBorrowIYOffsetFromA(Z80Parser::SubtractWithBorrowIYOffsetFromAContext *ctx) = 0;
  virtual void exitSubtractWithBorrowIYOffsetFromA(Z80Parser::SubtractWithBorrowIYOffsetFromAContext *ctx) = 0;

  virtual void enterSubtractWithBorrowImmediateFromA(Z80Parser::SubtractWithBorrowImmediateFromAContext *ctx) = 0;
  virtual void exitSubtractWithBorrowImmediateFromA(Z80Parser::SubtractWithBorrowImmediateFromAContext *ctx) = 0;

  virtual void enterSubtractWithBorrowIXHFromA(Z80Parser::SubtractWithBorrowIXHFromAContext *ctx) = 0;
  virtual void exitSubtractWithBorrowIXHFromA(Z80Parser::SubtractWithBorrowIXHFromAContext *ctx) = 0;

  virtual void enterSubtractWithBorrowIXLFromA(Z80Parser::SubtractWithBorrowIXLFromAContext *ctx) = 0;
  virtual void exitSubtractWithBorrowIXLFromA(Z80Parser::SubtractWithBorrowIXLFromAContext *ctx) = 0;

  virtual void enterSubtractWithBorrowIYHFromA(Z80Parser::SubtractWithBorrowIYHFromAContext *ctx) = 0;
  virtual void exitSubtractWithBorrowIYHFromA(Z80Parser::SubtractWithBorrowIYHFromAContext *ctx) = 0;

  virtual void enterSubtractWithBorrowIYLFromA(Z80Parser::SubtractWithBorrowIYLFromAContext *ctx) = 0;
  virtual void exitSubtractWithBorrowIYLFromA(Z80Parser::SubtractWithBorrowIYLFromAContext *ctx) = 0;

  virtual void enterAndAWithRegister(Z80Parser::AndAWithRegisterContext *ctx) = 0;
  virtual void exitAndAWithRegister(Z80Parser::AndAWithRegisterContext *ctx) = 0;

  virtual void enterAndAWithImmediate(Z80Parser::AndAWithImmediateContext *ctx) = 0;
  virtual void exitAndAWithImmediate(Z80Parser::AndAWithImmediateContext *ctx) = 0;

  virtual void enterAndAWithHLPointer(Z80Parser::AndAWithHLPointerContext *ctx) = 0;
  virtual void exitAndAWithHLPointer(Z80Parser::AndAWithHLPointerContext *ctx) = 0;

  virtual void enterAndAWithIXOffset(Z80Parser::AndAWithIXOffsetContext *ctx) = 0;
  virtual void exitAndAWithIXOffset(Z80Parser::AndAWithIXOffsetContext *ctx) = 0;

  virtual void enterAndAWithIYOffset(Z80Parser::AndAWithIYOffsetContext *ctx) = 0;
  virtual void exitAndAWithIYOffset(Z80Parser::AndAWithIYOffsetContext *ctx) = 0;

  virtual void enterAndAWithIXH(Z80Parser::AndAWithIXHContext *ctx) = 0;
  virtual void exitAndAWithIXH(Z80Parser::AndAWithIXHContext *ctx) = 0;

  virtual void enterAndAWithIXL(Z80Parser::AndAWithIXLContext *ctx) = 0;
  virtual void exitAndAWithIXL(Z80Parser::AndAWithIXLContext *ctx) = 0;

  virtual void enterAndAWithIYH(Z80Parser::AndAWithIYHContext *ctx) = 0;
  virtual void exitAndAWithIYH(Z80Parser::AndAWithIYHContext *ctx) = 0;

  virtual void enterAndAWithIYL(Z80Parser::AndAWithIYLContext *ctx) = 0;
  virtual void exitAndAWithIYL(Z80Parser::AndAWithIYLContext *ctx) = 0;

  virtual void enterOrAWithRegister(Z80Parser::OrAWithRegisterContext *ctx) = 0;
  virtual void exitOrAWithRegister(Z80Parser::OrAWithRegisterContext *ctx) = 0;

  virtual void enterOrAWithImmediate(Z80Parser::OrAWithImmediateContext *ctx) = 0;
  virtual void exitOrAWithImmediate(Z80Parser::OrAWithImmediateContext *ctx) = 0;

  virtual void enterOrAWithHLPointer(Z80Parser::OrAWithHLPointerContext *ctx) = 0;
  virtual void exitOrAWithHLPointer(Z80Parser::OrAWithHLPointerContext *ctx) = 0;

  virtual void enterOrAWithIXOffset(Z80Parser::OrAWithIXOffsetContext *ctx) = 0;
  virtual void exitOrAWithIXOffset(Z80Parser::OrAWithIXOffsetContext *ctx) = 0;

  virtual void enterOrAWithIYOffset(Z80Parser::OrAWithIYOffsetContext *ctx) = 0;
  virtual void exitOrAWithIYOffset(Z80Parser::OrAWithIYOffsetContext *ctx) = 0;

  virtual void enterOrAWithIXH(Z80Parser::OrAWithIXHContext *ctx) = 0;
  virtual void exitOrAWithIXH(Z80Parser::OrAWithIXHContext *ctx) = 0;

  virtual void enterOrAWithIXL(Z80Parser::OrAWithIXLContext *ctx) = 0;
  virtual void exitOrAWithIXL(Z80Parser::OrAWithIXLContext *ctx) = 0;

  virtual void enterOrAWithIYH(Z80Parser::OrAWithIYHContext *ctx) = 0;
  virtual void exitOrAWithIYH(Z80Parser::OrAWithIYHContext *ctx) = 0;

  virtual void enterOrAWithIYL(Z80Parser::OrAWithIYLContext *ctx) = 0;
  virtual void exitOrAWithIYL(Z80Parser::OrAWithIYLContext *ctx) = 0;

  virtual void enterXorAWithRegister(Z80Parser::XorAWithRegisterContext *ctx) = 0;
  virtual void exitXorAWithRegister(Z80Parser::XorAWithRegisterContext *ctx) = 0;

  virtual void enterXorAWithImmediate(Z80Parser::XorAWithImmediateContext *ctx) = 0;
  virtual void exitXorAWithImmediate(Z80Parser::XorAWithImmediateContext *ctx) = 0;

  virtual void enterXorAWithHLPointer(Z80Parser::XorAWithHLPointerContext *ctx) = 0;
  virtual void exitXorAWithHLPointer(Z80Parser::XorAWithHLPointerContext *ctx) = 0;

  virtual void enterXorAWithIXOffset(Z80Parser::XorAWithIXOffsetContext *ctx) = 0;
  virtual void exitXorAWithIXOffset(Z80Parser::XorAWithIXOffsetContext *ctx) = 0;

  virtual void enterXorAWithIYOffset(Z80Parser::XorAWithIYOffsetContext *ctx) = 0;
  virtual void exitXorAWithIYOffset(Z80Parser::XorAWithIYOffsetContext *ctx) = 0;

  virtual void enterXorAWithIXH(Z80Parser::XorAWithIXHContext *ctx) = 0;
  virtual void exitXorAWithIXH(Z80Parser::XorAWithIXHContext *ctx) = 0;

  virtual void enterXorAWithIXL(Z80Parser::XorAWithIXLContext *ctx) = 0;
  virtual void exitXorAWithIXL(Z80Parser::XorAWithIXLContext *ctx) = 0;

  virtual void enterXorAWithIYH(Z80Parser::XorAWithIYHContext *ctx) = 0;
  virtual void exitXorAWithIYH(Z80Parser::XorAWithIYHContext *ctx) = 0;

  virtual void enterXorAWithIYL(Z80Parser::XorAWithIYLContext *ctx) = 0;
  virtual void exitXorAWithIYL(Z80Parser::XorAWithIYLContext *ctx) = 0;

  virtual void enterCompareAWithRegister(Z80Parser::CompareAWithRegisterContext *ctx) = 0;
  virtual void exitCompareAWithRegister(Z80Parser::CompareAWithRegisterContext *ctx) = 0;

  virtual void enterCompareAWithHLPointer(Z80Parser::CompareAWithHLPointerContext *ctx) = 0;
  virtual void exitCompareAWithHLPointer(Z80Parser::CompareAWithHLPointerContext *ctx) = 0;

  virtual void enterCompareAWithImmediate(Z80Parser::CompareAWithImmediateContext *ctx) = 0;
  virtual void exitCompareAWithImmediate(Z80Parser::CompareAWithImmediateContext *ctx) = 0;

  virtual void enterCompareAWithIXOffset(Z80Parser::CompareAWithIXOffsetContext *ctx) = 0;
  virtual void exitCompareAWithIXOffset(Z80Parser::CompareAWithIXOffsetContext *ctx) = 0;

  virtual void enterCompareAWithIYOffset(Z80Parser::CompareAWithIYOffsetContext *ctx) = 0;
  virtual void exitCompareAWithIYOffset(Z80Parser::CompareAWithIYOffsetContext *ctx) = 0;

  virtual void enterCompareAWithIXH(Z80Parser::CompareAWithIXHContext *ctx) = 0;
  virtual void exitCompareAWithIXH(Z80Parser::CompareAWithIXHContext *ctx) = 0;

  virtual void enterCompareAWithIXL(Z80Parser::CompareAWithIXLContext *ctx) = 0;
  virtual void exitCompareAWithIXL(Z80Parser::CompareAWithIXLContext *ctx) = 0;

  virtual void enterCompareAWithIYH(Z80Parser::CompareAWithIYHContext *ctx) = 0;
  virtual void exitCompareAWithIYH(Z80Parser::CompareAWithIYHContext *ctx) = 0;

  virtual void enterCompareAWithIYL(Z80Parser::CompareAWithIYLContext *ctx) = 0;
  virtual void exitCompareAWithIYL(Z80Parser::CompareAWithIYLContext *ctx) = 0;

  virtual void enterIncrementRegister(Z80Parser::IncrementRegisterContext *ctx) = 0;
  virtual void exitIncrementRegister(Z80Parser::IncrementRegisterContext *ctx) = 0;

  virtual void enterIncrementIXH(Z80Parser::IncrementIXHContext *ctx) = 0;
  virtual void exitIncrementIXH(Z80Parser::IncrementIXHContext *ctx) = 0;

  virtual void enterIncrementIXL(Z80Parser::IncrementIXLContext *ctx) = 0;
  virtual void exitIncrementIXL(Z80Parser::IncrementIXLContext *ctx) = 0;

  virtual void enterIncrementIYH(Z80Parser::IncrementIYHContext *ctx) = 0;
  virtual void exitIncrementIYH(Z80Parser::IncrementIYHContext *ctx) = 0;

  virtual void enterIncrementIYL(Z80Parser::IncrementIYLContext *ctx) = 0;
  virtual void exitIncrementIYL(Z80Parser::IncrementIYLContext *ctx) = 0;

  virtual void enterIncrementHLPointer(Z80Parser::IncrementHLPointerContext *ctx) = 0;
  virtual void exitIncrementHLPointer(Z80Parser::IncrementHLPointerContext *ctx) = 0;

  virtual void enterIncrementIXOffset(Z80Parser::IncrementIXOffsetContext *ctx) = 0;
  virtual void exitIncrementIXOffset(Z80Parser::IncrementIXOffsetContext *ctx) = 0;

  virtual void enterIncrementIYOffset(Z80Parser::IncrementIYOffsetContext *ctx) = 0;
  virtual void exitIncrementIYOffset(Z80Parser::IncrementIYOffsetContext *ctx) = 0;

  virtual void enterDecrementRegister(Z80Parser::DecrementRegisterContext *ctx) = 0;
  virtual void exitDecrementRegister(Z80Parser::DecrementRegisterContext *ctx) = 0;

  virtual void enterDecrementIXH(Z80Parser::DecrementIXHContext *ctx) = 0;
  virtual void exitDecrementIXH(Z80Parser::DecrementIXHContext *ctx) = 0;

  virtual void enterDecrementIXL(Z80Parser::DecrementIXLContext *ctx) = 0;
  virtual void exitDecrementIXL(Z80Parser::DecrementIXLContext *ctx) = 0;

  virtual void enterDecrementIYH(Z80Parser::DecrementIYHContext *ctx) = 0;
  virtual void exitDecrementIYH(Z80Parser::DecrementIYHContext *ctx) = 0;

  virtual void enterDecrementIYL(Z80Parser::DecrementIYLContext *ctx) = 0;
  virtual void exitDecrementIYL(Z80Parser::DecrementIYLContext *ctx) = 0;

  virtual void enterDecrementHLPointer(Z80Parser::DecrementHLPointerContext *ctx) = 0;
  virtual void exitDecrementHLPointer(Z80Parser::DecrementHLPointerContext *ctx) = 0;

  virtual void enterDecrementIXOffset(Z80Parser::DecrementIXOffsetContext *ctx) = 0;
  virtual void exitDecrementIXOffset(Z80Parser::DecrementIXOffsetContext *ctx) = 0;

  virtual void enterDecrementIYOffset(Z80Parser::DecrementIYOffsetContext *ctx) = 0;
  virtual void exitDecrementIYOffset(Z80Parser::DecrementIYOffsetContext *ctx) = 0;

  virtual void enterArithmeticCommand(Z80Parser::ArithmeticCommandContext *ctx) = 0;
  virtual void exitArithmeticCommand(Z80Parser::ArithmeticCommandContext *ctx) = 0;

  virtual void enterDecimalAdjustA(Z80Parser::DecimalAdjustAContext *ctx) = 0;
  virtual void exitDecimalAdjustA(Z80Parser::DecimalAdjustAContext *ctx) = 0;

  virtual void enterComplementA(Z80Parser::ComplementAContext *ctx) = 0;
  virtual void exitComplementA(Z80Parser::ComplementAContext *ctx) = 0;

  virtual void enterNegateA(Z80Parser::NegateAContext *ctx) = 0;
  virtual void exitNegateA(Z80Parser::NegateAContext *ctx) = 0;

  virtual void enterCompletementCarryFlag(Z80Parser::CompletementCarryFlagContext *ctx) = 0;
  virtual void exitCompletementCarryFlag(Z80Parser::CompletementCarryFlagContext *ctx) = 0;

  virtual void enterSetCarryFlag(Z80Parser::SetCarryFlagContext *ctx) = 0;
  virtual void exitSetCarryFlag(Z80Parser::SetCarryFlagContext *ctx) = 0;

  virtual void enterNop(Z80Parser::NopContext *ctx) = 0;
  virtual void exitNop(Z80Parser::NopContext *ctx) = 0;

  virtual void enterHalt(Z80Parser::HaltContext *ctx) = 0;
  virtual void exitHalt(Z80Parser::HaltContext *ctx) = 0;

  virtual void enterDisableInterrupts(Z80Parser::DisableInterruptsContext *ctx) = 0;
  virtual void exitDisableInterrupts(Z80Parser::DisableInterruptsContext *ctx) = 0;

  virtual void enterEnableInterrupts(Z80Parser::EnableInterruptsContext *ctx) = 0;
  virtual void exitEnableInterrupts(Z80Parser::EnableInterruptsContext *ctx) = 0;

  virtual void enterSetInterruptMode(Z80Parser::SetInterruptModeContext *ctx) = 0;
  virtual void exitSetInterruptMode(Z80Parser::SetInterruptModeContext *ctx) = 0;

  virtual void enterArithmeticControlCommand(Z80Parser::ArithmeticControlCommandContext *ctx) = 0;
  virtual void exitArithmeticControlCommand(Z80Parser::ArithmeticControlCommandContext *ctx) = 0;

  virtual void enterAddHLAndWordRegister(Z80Parser::AddHLAndWordRegisterContext *ctx) = 0;
  virtual void exitAddHLAndWordRegister(Z80Parser::AddHLAndWordRegisterContext *ctx) = 0;

  virtual void enterAddWithCarryHLAndWordRegister(Z80Parser::AddWithCarryHLAndWordRegisterContext *ctx) = 0;
  virtual void exitAddWithCarryHLAndWordRegister(Z80Parser::AddWithCarryHLAndWordRegisterContext *ctx) = 0;

  virtual void enterSubtractWithCarryWordRegisterFromHL(Z80Parser::SubtractWithCarryWordRegisterFromHLContext *ctx) = 0;
  virtual void exitSubtractWithCarryWordRegisterFromHL(Z80Parser::SubtractWithCarryWordRegisterFromHLContext *ctx) = 0;

  virtual void enterSimpleIXAdditionRegister(Z80Parser::SimpleIXAdditionRegisterContext *ctx) = 0;
  virtual void exitSimpleIXAdditionRegister(Z80Parser::SimpleIXAdditionRegisterContext *ctx) = 0;

  virtual void enterSimpleIYAdditionRegister(Z80Parser::SimpleIYAdditionRegisterContext *ctx) = 0;
  virtual void exitSimpleIYAdditionRegister(Z80Parser::SimpleIYAdditionRegisterContext *ctx) = 0;

  virtual void enterAddIXWithRegister(Z80Parser::AddIXWithRegisterContext *ctx) = 0;
  virtual void exitAddIXWithRegister(Z80Parser::AddIXWithRegisterContext *ctx) = 0;

  virtual void enterAddIYWithRegister(Z80Parser::AddIYWithRegisterContext *ctx) = 0;
  virtual void exitAddIYWithRegister(Z80Parser::AddIYWithRegisterContext *ctx) = 0;

  virtual void enterIncrementWordRegister(Z80Parser::IncrementWordRegisterContext *ctx) = 0;
  virtual void exitIncrementWordRegister(Z80Parser::IncrementWordRegisterContext *ctx) = 0;

  virtual void enterIncrementIX(Z80Parser::IncrementIXContext *ctx) = 0;
  virtual void exitIncrementIX(Z80Parser::IncrementIXContext *ctx) = 0;

  virtual void enterIncrementIY(Z80Parser::IncrementIYContext *ctx) = 0;
  virtual void exitIncrementIY(Z80Parser::IncrementIYContext *ctx) = 0;

  virtual void enterDecrementWordRegister(Z80Parser::DecrementWordRegisterContext *ctx) = 0;
  virtual void exitDecrementWordRegister(Z80Parser::DecrementWordRegisterContext *ctx) = 0;

  virtual void enterDecrementIX(Z80Parser::DecrementIXContext *ctx) = 0;
  virtual void exitDecrementIX(Z80Parser::DecrementIXContext *ctx) = 0;

  virtual void enterDecrementIY(Z80Parser::DecrementIYContext *ctx) = 0;
  virtual void exitDecrementIY(Z80Parser::DecrementIYContext *ctx) = 0;

  virtual void enterWordArithemeticCommand(Z80Parser::WordArithemeticCommandContext *ctx) = 0;
  virtual void exitWordArithemeticCommand(Z80Parser::WordArithemeticCommandContext *ctx) = 0;

  virtual void enterRotateLeftCircularA(Z80Parser::RotateLeftCircularAContext *ctx) = 0;
  virtual void exitRotateLeftCircularA(Z80Parser::RotateLeftCircularAContext *ctx) = 0;

  virtual void enterRotateLeftThroughCarryA(Z80Parser::RotateLeftThroughCarryAContext *ctx) = 0;
  virtual void exitRotateLeftThroughCarryA(Z80Parser::RotateLeftThroughCarryAContext *ctx) = 0;

  virtual void enterRotateRightCircularA(Z80Parser::RotateRightCircularAContext *ctx) = 0;
  virtual void exitRotateRightCircularA(Z80Parser::RotateRightCircularAContext *ctx) = 0;

  virtual void enterRotateRightThroughtCarryA(Z80Parser::RotateRightThroughtCarryAContext *ctx) = 0;
  virtual void exitRotateRightThroughtCarryA(Z80Parser::RotateRightThroughtCarryAContext *ctx) = 0;

  virtual void enterRotateLeftCircularCommandName(Z80Parser::RotateLeftCircularCommandNameContext *ctx) = 0;
  virtual void exitRotateLeftCircularCommandName(Z80Parser::RotateLeftCircularCommandNameContext *ctx) = 0;

  virtual void enterRotateLeftThroughCarryCommandName(Z80Parser::RotateLeftThroughCarryCommandNameContext *ctx) = 0;
  virtual void exitRotateLeftThroughCarryCommandName(Z80Parser::RotateLeftThroughCarryCommandNameContext *ctx) = 0;

  virtual void enterRotateRightCircularCommandName(Z80Parser::RotateRightCircularCommandNameContext *ctx) = 0;
  virtual void exitRotateRightCircularCommandName(Z80Parser::RotateRightCircularCommandNameContext *ctx) = 0;

  virtual void enterRotateRightThroughCarryCommandName(Z80Parser::RotateRightThroughCarryCommandNameContext *ctx) = 0;
  virtual void exitRotateRightThroughCarryCommandName(Z80Parser::RotateRightThroughCarryCommandNameContext *ctx) = 0;

  virtual void enterShiftLeftArithmeticCommandName(Z80Parser::ShiftLeftArithmeticCommandNameContext *ctx) = 0;
  virtual void exitShiftLeftArithmeticCommandName(Z80Parser::ShiftLeftArithmeticCommandNameContext *ctx) = 0;

  virtual void enterShiftLeftLogicialCommandName(Z80Parser::ShiftLeftLogicialCommandNameContext *ctx) = 0;
  virtual void exitShiftLeftLogicialCommandName(Z80Parser::ShiftLeftLogicialCommandNameContext *ctx) = 0;

  virtual void enterShiftRightArithmeticCommandName(Z80Parser::ShiftRightArithmeticCommandNameContext *ctx) = 0;
  virtual void exitShiftRightArithmeticCommandName(Z80Parser::ShiftRightArithmeticCommandNameContext *ctx) = 0;

  virtual void enterShiftRightLogicalCommandName(Z80Parser::ShiftRightLogicalCommandNameContext *ctx) = 0;
  virtual void exitShiftRightLogicalCommandName(Z80Parser::ShiftRightLogicalCommandNameContext *ctx) = 0;

  virtual void enterRotateDigitLeftCommandName(Z80Parser::RotateDigitLeftCommandNameContext *ctx) = 0;
  virtual void exitRotateDigitLeftCommandName(Z80Parser::RotateDigitLeftCommandNameContext *ctx) = 0;

  virtual void enterRotateDigitRightCommandName(Z80Parser::RotateDigitRightCommandNameContext *ctx) = 0;
  virtual void exitRotateDigitRightCommandName(Z80Parser::RotateDigitRightCommandNameContext *ctx) = 0;

  virtual void enterRotateLeftCircularRegister(Z80Parser::RotateLeftCircularRegisterContext *ctx) = 0;
  virtual void exitRotateLeftCircularRegister(Z80Parser::RotateLeftCircularRegisterContext *ctx) = 0;

  virtual void enterRotateLeftCircularHLPointer(Z80Parser::RotateLeftCircularHLPointerContext *ctx) = 0;
  virtual void exitRotateLeftCircularHLPointer(Z80Parser::RotateLeftCircularHLPointerContext *ctx) = 0;

  virtual void enterRotateLeftCircularIXOffset(Z80Parser::RotateLeftCircularIXOffsetContext *ctx) = 0;
  virtual void exitRotateLeftCircularIXOffset(Z80Parser::RotateLeftCircularIXOffsetContext *ctx) = 0;

  virtual void enterRotateLeftCircularIYOffset(Z80Parser::RotateLeftCircularIYOffsetContext *ctx) = 0;
  virtual void exitRotateLeftCircularIYOffset(Z80Parser::RotateLeftCircularIYOffsetContext *ctx) = 0;

  virtual void enterRotateLeftThroughCarryRegister(Z80Parser::RotateLeftThroughCarryRegisterContext *ctx) = 0;
  virtual void exitRotateLeftThroughCarryRegister(Z80Parser::RotateLeftThroughCarryRegisterContext *ctx) = 0;

  virtual void enterRotateLeftThroughCarryHLPointer(Z80Parser::RotateLeftThroughCarryHLPointerContext *ctx) = 0;
  virtual void exitRotateLeftThroughCarryHLPointer(Z80Parser::RotateLeftThroughCarryHLPointerContext *ctx) = 0;

  virtual void enterRotateLeftThroughCarryIXOffset(Z80Parser::RotateLeftThroughCarryIXOffsetContext *ctx) = 0;
  virtual void exitRotateLeftThroughCarryIXOffset(Z80Parser::RotateLeftThroughCarryIXOffsetContext *ctx) = 0;

  virtual void enterRotateLeftThroughCarryIYOffset(Z80Parser::RotateLeftThroughCarryIYOffsetContext *ctx) = 0;
  virtual void exitRotateLeftThroughCarryIYOffset(Z80Parser::RotateLeftThroughCarryIYOffsetContext *ctx) = 0;

  virtual void enterRotateRightCircularRegister(Z80Parser::RotateRightCircularRegisterContext *ctx) = 0;
  virtual void exitRotateRightCircularRegister(Z80Parser::RotateRightCircularRegisterContext *ctx) = 0;

  virtual void enterRotateRightCircularHLPointer(Z80Parser::RotateRightCircularHLPointerContext *ctx) = 0;
  virtual void exitRotateRightCircularHLPointer(Z80Parser::RotateRightCircularHLPointerContext *ctx) = 0;

  virtual void enterRotateRightCircularIXOffset(Z80Parser::RotateRightCircularIXOffsetContext *ctx) = 0;
  virtual void exitRotateRightCircularIXOffset(Z80Parser::RotateRightCircularIXOffsetContext *ctx) = 0;

  virtual void enterRotateRightCircularIYOffset(Z80Parser::RotateRightCircularIYOffsetContext *ctx) = 0;
  virtual void exitRotateRightCircularIYOffset(Z80Parser::RotateRightCircularIYOffsetContext *ctx) = 0;

  virtual void enterRotateRightThroughCarryRegister(Z80Parser::RotateRightThroughCarryRegisterContext *ctx) = 0;
  virtual void exitRotateRightThroughCarryRegister(Z80Parser::RotateRightThroughCarryRegisterContext *ctx) = 0;

  virtual void enterRotateRightThroughCarryHLPointer(Z80Parser::RotateRightThroughCarryHLPointerContext *ctx) = 0;
  virtual void exitRotateRightThroughCarryHLPointer(Z80Parser::RotateRightThroughCarryHLPointerContext *ctx) = 0;

  virtual void enterRotateRightThroughCarryIXOffset(Z80Parser::RotateRightThroughCarryIXOffsetContext *ctx) = 0;
  virtual void exitRotateRightThroughCarryIXOffset(Z80Parser::RotateRightThroughCarryIXOffsetContext *ctx) = 0;

  virtual void enterRotateRightThroughCarryIYOffset(Z80Parser::RotateRightThroughCarryIYOffsetContext *ctx) = 0;
  virtual void exitRotateRightThroughCarryIYOffset(Z80Parser::RotateRightThroughCarryIYOffsetContext *ctx) = 0;

  virtual void enterShiftLeftArithmetic(Z80Parser::ShiftLeftArithmeticContext *ctx) = 0;
  virtual void exitShiftLeftArithmetic(Z80Parser::ShiftLeftArithmeticContext *ctx) = 0;

  virtual void enterShiftLeftLogical(Z80Parser::ShiftLeftLogicalContext *ctx) = 0;
  virtual void exitShiftLeftLogical(Z80Parser::ShiftLeftLogicalContext *ctx) = 0;

  virtual void enterShiftRightArithmetic(Z80Parser::ShiftRightArithmeticContext *ctx) = 0;
  virtual void exitShiftRightArithmetic(Z80Parser::ShiftRightArithmeticContext *ctx) = 0;

  virtual void enterShiftRightLogical(Z80Parser::ShiftRightLogicalContext *ctx) = 0;
  virtual void exitShiftRightLogical(Z80Parser::ShiftRightLogicalContext *ctx) = 0;

  virtual void enterRotateDigitLeft(Z80Parser::RotateDigitLeftContext *ctx) = 0;
  virtual void exitRotateDigitLeft(Z80Parser::RotateDigitLeftContext *ctx) = 0;

  virtual void enterRotateDigitRight(Z80Parser::RotateDigitRightContext *ctx) = 0;
  virtual void exitRotateDigitRight(Z80Parser::RotateDigitRightContext *ctx) = 0;

  virtual void enterRotateCommamd(Z80Parser::RotateCommamdContext *ctx) = 0;
  virtual void exitRotateCommamd(Z80Parser::RotateCommamdContext *ctx) = 0;

  virtual void enterBitCommandName(Z80Parser::BitCommandNameContext *ctx) = 0;
  virtual void exitBitCommandName(Z80Parser::BitCommandNameContext *ctx) = 0;

  virtual void enterSetCommandName(Z80Parser::SetCommandNameContext *ctx) = 0;
  virtual void exitSetCommandName(Z80Parser::SetCommandNameContext *ctx) = 0;

  virtual void enterResetBitCommandName(Z80Parser::ResetBitCommandNameContext *ctx) = 0;
  virtual void exitResetBitCommandName(Z80Parser::ResetBitCommandNameContext *ctx) = 0;

  virtual void enterTestBitInRegister(Z80Parser::TestBitInRegisterContext *ctx) = 0;
  virtual void exitTestBitInRegister(Z80Parser::TestBitInRegisterContext *ctx) = 0;

  virtual void enterTestBitInHLPointer(Z80Parser::TestBitInHLPointerContext *ctx) = 0;
  virtual void exitTestBitInHLPointer(Z80Parser::TestBitInHLPointerContext *ctx) = 0;

  virtual void enterTestBitInIXOffset(Z80Parser::TestBitInIXOffsetContext *ctx) = 0;
  virtual void exitTestBitInIXOffset(Z80Parser::TestBitInIXOffsetContext *ctx) = 0;

  virtual void enterTestBitInIYOffset(Z80Parser::TestBitInIYOffsetContext *ctx) = 0;
  virtual void exitTestBitInIYOffset(Z80Parser::TestBitInIYOffsetContext *ctx) = 0;

  virtual void enterSetBitInRegister(Z80Parser::SetBitInRegisterContext *ctx) = 0;
  virtual void exitSetBitInRegister(Z80Parser::SetBitInRegisterContext *ctx) = 0;

  virtual void enterSetBitInHLPointer(Z80Parser::SetBitInHLPointerContext *ctx) = 0;
  virtual void exitSetBitInHLPointer(Z80Parser::SetBitInHLPointerContext *ctx) = 0;

  virtual void enterSetBitInIXOffset(Z80Parser::SetBitInIXOffsetContext *ctx) = 0;
  virtual void exitSetBitInIXOffset(Z80Parser::SetBitInIXOffsetContext *ctx) = 0;

  virtual void enterSetBitInIYOffset(Z80Parser::SetBitInIYOffsetContext *ctx) = 0;
  virtual void exitSetBitInIYOffset(Z80Parser::SetBitInIYOffsetContext *ctx) = 0;

  virtual void enterResetBitInRegister(Z80Parser::ResetBitInRegisterContext *ctx) = 0;
  virtual void exitResetBitInRegister(Z80Parser::ResetBitInRegisterContext *ctx) = 0;

  virtual void enterResetBitHLPointer(Z80Parser::ResetBitHLPointerContext *ctx) = 0;
  virtual void exitResetBitHLPointer(Z80Parser::ResetBitHLPointerContext *ctx) = 0;

  virtual void enterResetBitIXOffset(Z80Parser::ResetBitIXOffsetContext *ctx) = 0;
  virtual void exitResetBitIXOffset(Z80Parser::ResetBitIXOffsetContext *ctx) = 0;

  virtual void enterResetBitIYOffset(Z80Parser::ResetBitIYOffsetContext *ctx) = 0;
  virtual void exitResetBitIYOffset(Z80Parser::ResetBitIYOffsetContext *ctx) = 0;

  virtual void enterBitManipulationCommand(Z80Parser::BitManipulationCommandContext *ctx) = 0;
  virtual void exitBitManipulationCommand(Z80Parser::BitManipulationCommandContext *ctx) = 0;

  virtual void enterJumpCondition(Z80Parser::JumpConditionContext *ctx) = 0;
  virtual void exitJumpCondition(Z80Parser::JumpConditionContext *ctx) = 0;

  virtual void enterJumpCommandName(Z80Parser::JumpCommandNameContext *ctx) = 0;
  virtual void exitJumpCommandName(Z80Parser::JumpCommandNameContext *ctx) = 0;

  virtual void enterJumpRelativeCommandName(Z80Parser::JumpRelativeCommandNameContext *ctx) = 0;
  virtual void exitJumpRelativeCommandName(Z80Parser::JumpRelativeCommandNameContext *ctx) = 0;

  virtual void enterJumpRelativeAndDecrementCommandName(Z80Parser::JumpRelativeAndDecrementCommandNameContext *ctx) = 0;
  virtual void exitJumpRelativeAndDecrementCommandName(Z80Parser::JumpRelativeAndDecrementCommandNameContext *ctx) = 0;

  virtual void enterCallCommandName(Z80Parser::CallCommandNameContext *ctx) = 0;
  virtual void exitCallCommandName(Z80Parser::CallCommandNameContext *ctx) = 0;

  virtual void enterReturnCommandName(Z80Parser::ReturnCommandNameContext *ctx) = 0;
  virtual void exitReturnCommandName(Z80Parser::ReturnCommandNameContext *ctx) = 0;

  virtual void enterReturnAndEnableInterruptCommandName(Z80Parser::ReturnAndEnableInterruptCommandNameContext *ctx) = 0;
  virtual void exitReturnAndEnableInterruptCommandName(Z80Parser::ReturnAndEnableInterruptCommandNameContext *ctx) = 0;

  virtual void enterReturnFromNonMaskableInterruptCommandName(Z80Parser::ReturnFromNonMaskableInterruptCommandNameContext *ctx) = 0;
  virtual void exitReturnFromNonMaskableInterruptCommandName(Z80Parser::ReturnFromNonMaskableInterruptCommandNameContext *ctx) = 0;

  virtual void enterRestartCommandName(Z80Parser::RestartCommandNameContext *ctx) = 0;
  virtual void exitRestartCommandName(Z80Parser::RestartCommandNameContext *ctx) = 0;

  virtual void enterJumpToAbsoluteAddress(Z80Parser::JumpToAbsoluteAddressContext *ctx) = 0;
  virtual void exitJumpToAbsoluteAddress(Z80Parser::JumpToAbsoluteAddressContext *ctx) = 0;

  virtual void enterJumpToAbsoluteAddressGivenCondition(Z80Parser::JumpToAbsoluteAddressGivenConditionContext *ctx) = 0;
  virtual void exitJumpToAbsoluteAddressGivenCondition(Z80Parser::JumpToAbsoluteAddressGivenConditionContext *ctx) = 0;

  virtual void enterJumpToRelativeAddress(Z80Parser::JumpToRelativeAddressContext *ctx) = 0;
  virtual void exitJumpToRelativeAddress(Z80Parser::JumpToRelativeAddressContext *ctx) = 0;

  virtual void enterJumpToRelativeAddressGivenCondition(Z80Parser::JumpToRelativeAddressGivenConditionContext *ctx) = 0;
  virtual void exitJumpToRelativeAddressGivenCondition(Z80Parser::JumpToRelativeAddressGivenConditionContext *ctx) = 0;

  virtual void enterJumpToHL(Z80Parser::JumpToHLContext *ctx) = 0;
  virtual void exitJumpToHL(Z80Parser::JumpToHLContext *ctx) = 0;

  virtual void enterJumpToIX(Z80Parser::JumpToIXContext *ctx) = 0;
  virtual void exitJumpToIX(Z80Parser::JumpToIXContext *ctx) = 0;

  virtual void enterJumpToIY(Z80Parser::JumpToIYContext *ctx) = 0;
  virtual void exitJumpToIY(Z80Parser::JumpToIYContext *ctx) = 0;

  virtual void enterJumpRelativeAndDecrement(Z80Parser::JumpRelativeAndDecrementContext *ctx) = 0;
  virtual void exitJumpRelativeAndDecrement(Z80Parser::JumpRelativeAndDecrementContext *ctx) = 0;

  virtual void enterCallSubroutine(Z80Parser::CallSubroutineContext *ctx) = 0;
  virtual void exitCallSubroutine(Z80Parser::CallSubroutineContext *ctx) = 0;

  virtual void enterCallSubroutineWithCondition(Z80Parser::CallSubroutineWithConditionContext *ctx) = 0;
  virtual void exitCallSubroutineWithCondition(Z80Parser::CallSubroutineWithConditionContext *ctx) = 0;

  virtual void enterReturnFromSubroutine(Z80Parser::ReturnFromSubroutineContext *ctx) = 0;
  virtual void exitReturnFromSubroutine(Z80Parser::ReturnFromSubroutineContext *ctx) = 0;

  virtual void enterReturnFromSubroutineGivenCondition(Z80Parser::ReturnFromSubroutineGivenConditionContext *ctx) = 0;
  virtual void exitReturnFromSubroutineGivenCondition(Z80Parser::ReturnFromSubroutineGivenConditionContext *ctx) = 0;

  virtual void enterReturnAndEnableInterrupt(Z80Parser::ReturnAndEnableInterruptContext *ctx) = 0;
  virtual void exitReturnAndEnableInterrupt(Z80Parser::ReturnAndEnableInterruptContext *ctx) = 0;

  virtual void enterReturnFromNonMaskableInterrupt(Z80Parser::ReturnFromNonMaskableInterruptContext *ctx) = 0;
  virtual void exitReturnFromNonMaskableInterrupt(Z80Parser::ReturnFromNonMaskableInterruptContext *ctx) = 0;

  virtual void enterRestartCommand(Z80Parser::RestartCommandContext *ctx) = 0;
  virtual void exitRestartCommand(Z80Parser::RestartCommandContext *ctx) = 0;

  virtual void enterBranchCommand(Z80Parser::BranchCommandContext *ctx) = 0;
  virtual void exitBranchCommand(Z80Parser::BranchCommandContext *ctx) = 0;

  virtual void enterInputCommandName(Z80Parser::InputCommandNameContext *ctx) = 0;
  virtual void exitInputCommandName(Z80Parser::InputCommandNameContext *ctx) = 0;

  virtual void enterOutCommandName(Z80Parser::OutCommandNameContext *ctx) = 0;
  virtual void exitOutCommandName(Z80Parser::OutCommandNameContext *ctx) = 0;

  virtual void enterInputDataIntoA(Z80Parser::InputDataIntoAContext *ctx) = 0;
  virtual void exitInputDataIntoA(Z80Parser::InputDataIntoAContext *ctx) = 0;

  virtual void enterInputDataIntoRegister(Z80Parser::InputDataIntoRegisterContext *ctx) = 0;
  virtual void exitInputDataIntoRegister(Z80Parser::InputDataIntoRegisterContext *ctx) = 0;

  virtual void enterIni(Z80Parser::IniContext *ctx) = 0;
  virtual void exitIni(Z80Parser::IniContext *ctx) = 0;

  virtual void enterInir(Z80Parser::InirContext *ctx) = 0;
  virtual void exitInir(Z80Parser::InirContext *ctx) = 0;

  virtual void enterInd(Z80Parser::IndContext *ctx) = 0;
  virtual void exitInd(Z80Parser::IndContext *ctx) = 0;

  virtual void enterIndr(Z80Parser::IndrContext *ctx) = 0;
  virtual void exitIndr(Z80Parser::IndrContext *ctx) = 0;

  virtual void enterOutputAIntoDataPointer(Z80Parser::OutputAIntoDataPointerContext *ctx) = 0;
  virtual void exitOutputAIntoDataPointer(Z80Parser::OutputAIntoDataPointerContext *ctx) = 0;

  virtual void enterOutputRegisterIntoCPointer(Z80Parser::OutputRegisterIntoCPointerContext *ctx) = 0;
  virtual void exitOutputRegisterIntoCPointer(Z80Parser::OutputRegisterIntoCPointerContext *ctx) = 0;

  virtual void enterOuti(Z80Parser::OutiContext *ctx) = 0;
  virtual void exitOuti(Z80Parser::OutiContext *ctx) = 0;

  virtual void enterOtir(Z80Parser::OtirContext *ctx) = 0;
  virtual void exitOtir(Z80Parser::OtirContext *ctx) = 0;

  virtual void enterOutd(Z80Parser::OutdContext *ctx) = 0;
  virtual void exitOutd(Z80Parser::OutdContext *ctx) = 0;

  virtual void enterOtdr(Z80Parser::OtdrContext *ctx) = 0;
  virtual void exitOtdr(Z80Parser::OtdrContext *ctx) = 0;

  virtual void enterInputAndOutpuCommand(Z80Parser::InputAndOutpuCommandContext *ctx) = 0;
  virtual void exitInputAndOutpuCommand(Z80Parser::InputAndOutpuCommandContext *ctx) = 0;

  virtual void enterLabel(Z80Parser::LabelContext *ctx) = 0;
  virtual void exitLabel(Z80Parser::LabelContext *ctx) = 0;

  virtual void enterOrgDirective(Z80Parser::OrgDirectiveContext *ctx) = 0;
  virtual void exitOrgDirective(Z80Parser::OrgDirectiveContext *ctx) = 0;

  virtual void enterCharNumber(Z80Parser::CharNumberContext *ctx) = 0;
  virtual void exitCharNumber(Z80Parser::CharNumberContext *ctx) = 0;

  virtual void enterName(Z80Parser::NameContext *ctx) = 0;
  virtual void exitName(Z80Parser::NameContext *ctx) = 0;

  virtual void enterNumber(Z80Parser::NumberContext *ctx) = 0;
  virtual void exitNumber(Z80Parser::NumberContext *ctx) = 0;

  virtual void enterDecimalNumber(Z80Parser::DecimalNumberContext *ctx) = 0;
  virtual void exitDecimalNumber(Z80Parser::DecimalNumberContext *ctx) = 0;

  virtual void enterHexNumber(Z80Parser::HexNumberContext *ctx) = 0;
  virtual void exitHexNumber(Z80Parser::HexNumberContext *ctx) = 0;

  virtual void enterComment(Z80Parser::CommentContext *ctx) = 0;
  virtual void exitComment(Z80Parser::CommentContext *ctx) = 0;


};


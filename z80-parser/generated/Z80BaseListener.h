
// Generated from Z80.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"
#include "Z80Listener.h"


/**
 * This class provides an empty implementation of Z80Listener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  Z80BaseListener : public Z80Listener {
public:

  virtual void enterProgram(Z80Parser::ProgramContext * /*ctx*/) override { }
  virtual void exitProgram(Z80Parser::ProgramContext * /*ctx*/) override { }

  virtual void enterStatement(Z80Parser::StatementContext * /*ctx*/) override { }
  virtual void exitStatement(Z80Parser::StatementContext * /*ctx*/) override { }

  virtual void enterInstruction(Z80Parser::InstructionContext * /*ctx*/) override { }
  virtual void exitInstruction(Z80Parser::InstructionContext * /*ctx*/) override { }

  virtual void enterAShadowRegister(Z80Parser::AShadowRegisterContext * /*ctx*/) override { }
  virtual void exitAShadowRegister(Z80Parser::AShadowRegisterContext * /*ctx*/) override { }

  virtual void enterFShadowRegister(Z80Parser::FShadowRegisterContext * /*ctx*/) override { }
  virtual void exitFShadowRegister(Z80Parser::FShadowRegisterContext * /*ctx*/) override { }

  virtual void enterBShadowRegister(Z80Parser::BShadowRegisterContext * /*ctx*/) override { }
  virtual void exitBShadowRegister(Z80Parser::BShadowRegisterContext * /*ctx*/) override { }

  virtual void enterCShadowRegister(Z80Parser::CShadowRegisterContext * /*ctx*/) override { }
  virtual void exitCShadowRegister(Z80Parser::CShadowRegisterContext * /*ctx*/) override { }

  virtual void enterDShadowRegister(Z80Parser::DShadowRegisterContext * /*ctx*/) override { }
  virtual void exitDShadowRegister(Z80Parser::DShadowRegisterContext * /*ctx*/) override { }

  virtual void enterEShadowRegister(Z80Parser::EShadowRegisterContext * /*ctx*/) override { }
  virtual void exitEShadowRegister(Z80Parser::EShadowRegisterContext * /*ctx*/) override { }

  virtual void enterHShadowRegister(Z80Parser::HShadowRegisterContext * /*ctx*/) override { }
  virtual void exitHShadowRegister(Z80Parser::HShadowRegisterContext * /*ctx*/) override { }

  virtual void enterLShadowRegister(Z80Parser::LShadowRegisterContext * /*ctx*/) override { }
  virtual void exitLShadowRegister(Z80Parser::LShadowRegisterContext * /*ctx*/) override { }

  virtual void enterARegister(Z80Parser::ARegisterContext * /*ctx*/) override { }
  virtual void exitARegister(Z80Parser::ARegisterContext * /*ctx*/) override { }

  virtual void enterFRegister(Z80Parser::FRegisterContext * /*ctx*/) override { }
  virtual void exitFRegister(Z80Parser::FRegisterContext * /*ctx*/) override { }

  virtual void enterAfRegister(Z80Parser::AfRegisterContext * /*ctx*/) override { }
  virtual void exitAfRegister(Z80Parser::AfRegisterContext * /*ctx*/) override { }

  virtual void enterAfShadowRegister(Z80Parser::AfShadowRegisterContext * /*ctx*/) override { }
  virtual void exitAfShadowRegister(Z80Parser::AfShadowRegisterContext * /*ctx*/) override { }

  virtual void enterBcShadowRegister(Z80Parser::BcShadowRegisterContext * /*ctx*/) override { }
  virtual void exitBcShadowRegister(Z80Parser::BcShadowRegisterContext * /*ctx*/) override { }

  virtual void enterDeShadowRegister(Z80Parser::DeShadowRegisterContext * /*ctx*/) override { }
  virtual void exitDeShadowRegister(Z80Parser::DeShadowRegisterContext * /*ctx*/) override { }

  virtual void enterHlShadowRegister(Z80Parser::HlShadowRegisterContext * /*ctx*/) override { }
  virtual void exitHlShadowRegister(Z80Parser::HlShadowRegisterContext * /*ctx*/) override { }

  virtual void enterBRegister(Z80Parser::BRegisterContext * /*ctx*/) override { }
  virtual void exitBRegister(Z80Parser::BRegisterContext * /*ctx*/) override { }

  virtual void enterCRegister(Z80Parser::CRegisterContext * /*ctx*/) override { }
  virtual void exitCRegister(Z80Parser::CRegisterContext * /*ctx*/) override { }

  virtual void enterBcRegister(Z80Parser::BcRegisterContext * /*ctx*/) override { }
  virtual void exitBcRegister(Z80Parser::BcRegisterContext * /*ctx*/) override { }

  virtual void enterDRegister(Z80Parser::DRegisterContext * /*ctx*/) override { }
  virtual void exitDRegister(Z80Parser::DRegisterContext * /*ctx*/) override { }

  virtual void enterERegister(Z80Parser::ERegisterContext * /*ctx*/) override { }
  virtual void exitERegister(Z80Parser::ERegisterContext * /*ctx*/) override { }

  virtual void enterDeRegister(Z80Parser::DeRegisterContext * /*ctx*/) override { }
  virtual void exitDeRegister(Z80Parser::DeRegisterContext * /*ctx*/) override { }

  virtual void enterHRegister(Z80Parser::HRegisterContext * /*ctx*/) override { }
  virtual void exitHRegister(Z80Parser::HRegisterContext * /*ctx*/) override { }

  virtual void enterLRegister(Z80Parser::LRegisterContext * /*ctx*/) override { }
  virtual void exitLRegister(Z80Parser::LRegisterContext * /*ctx*/) override { }

  virtual void enterHlRegister(Z80Parser::HlRegisterContext * /*ctx*/) override { }
  virtual void exitHlRegister(Z80Parser::HlRegisterContext * /*ctx*/) override { }

  virtual void enterIRegister(Z80Parser::IRegisterContext * /*ctx*/) override { }
  virtual void exitIRegister(Z80Parser::IRegisterContext * /*ctx*/) override { }

  virtual void enterRRegister(Z80Parser::RRegisterContext * /*ctx*/) override { }
  virtual void exitRRegister(Z80Parser::RRegisterContext * /*ctx*/) override { }

  virtual void enterIxRegister(Z80Parser::IxRegisterContext * /*ctx*/) override { }
  virtual void exitIxRegister(Z80Parser::IxRegisterContext * /*ctx*/) override { }

  virtual void enterIyRegister(Z80Parser::IyRegisterContext * /*ctx*/) override { }
  virtual void exitIyRegister(Z80Parser::IyRegisterContext * /*ctx*/) override { }

  virtual void enterIxHighRegister(Z80Parser::IxHighRegisterContext * /*ctx*/) override { }
  virtual void exitIxHighRegister(Z80Parser::IxHighRegisterContext * /*ctx*/) override { }

  virtual void enterIxLowRegister(Z80Parser::IxLowRegisterContext * /*ctx*/) override { }
  virtual void exitIxLowRegister(Z80Parser::IxLowRegisterContext * /*ctx*/) override { }

  virtual void enterIyHighRegister(Z80Parser::IyHighRegisterContext * /*ctx*/) override { }
  virtual void exitIyHighRegister(Z80Parser::IyHighRegisterContext * /*ctx*/) override { }

  virtual void enterIyLowRegister(Z80Parser::IyLowRegisterContext * /*ctx*/) override { }
  virtual void exitIyLowRegister(Z80Parser::IyLowRegisterContext * /*ctx*/) override { }

  virtual void enterSpRegister(Z80Parser::SpRegisterContext * /*ctx*/) override { }
  virtual void exitSpRegister(Z80Parser::SpRegisterContext * /*ctx*/) override { }

  virtual void enterPcRegister(Z80Parser::PcRegisterContext * /*ctx*/) override { }
  virtual void exitPcRegister(Z80Parser::PcRegisterContext * /*ctx*/) override { }

  virtual void enterHlPointer(Z80Parser::HlPointerContext * /*ctx*/) override { }
  virtual void exitHlPointer(Z80Parser::HlPointerContext * /*ctx*/) override { }

  virtual void enterBcPointer(Z80Parser::BcPointerContext * /*ctx*/) override { }
  virtual void exitBcPointer(Z80Parser::BcPointerContext * /*ctx*/) override { }

  virtual void enterDePointer(Z80Parser::DePointerContext * /*ctx*/) override { }
  virtual void exitDePointer(Z80Parser::DePointerContext * /*ctx*/) override { }

  virtual void enterSpPointer(Z80Parser::SpPointerContext * /*ctx*/) override { }
  virtual void exitSpPointer(Z80Parser::SpPointerContext * /*ctx*/) override { }

  virtual void enterCPointer(Z80Parser::CPointerContext * /*ctx*/) override { }
  virtual void exitCPointer(Z80Parser::CPointerContext * /*ctx*/) override { }

  virtual void enterIxPointerWithOffset(Z80Parser::IxPointerWithOffsetContext * /*ctx*/) override { }
  virtual void exitIxPointerWithOffset(Z80Parser::IxPointerWithOffsetContext * /*ctx*/) override { }

  virtual void enterIyPointerWithOffset(Z80Parser::IyPointerWithOffsetContext * /*ctx*/) override { }
  virtual void exitIyPointerWithOffset(Z80Parser::IyPointerWithOffsetContext * /*ctx*/) override { }

  virtual void enterNumberPointer(Z80Parser::NumberPointerContext * /*ctx*/) override { }
  virtual void exitNumberPointer(Z80Parser::NumberPointerContext * /*ctx*/) override { }

  virtual void enterSimpleByteRegister(Z80Parser::SimpleByteRegisterContext * /*ctx*/) override { }
  virtual void exitSimpleByteRegister(Z80Parser::SimpleByteRegisterContext * /*ctx*/) override { }

  virtual void enterLoadCommandName(Z80Parser::LoadCommandNameContext * /*ctx*/) override { }
  virtual void exitLoadCommandName(Z80Parser::LoadCommandNameContext * /*ctx*/) override { }

  virtual void enterLoadByteRegisterWithByteRegister(Z80Parser::LoadByteRegisterWithByteRegisterContext * /*ctx*/) override { }
  virtual void exitLoadByteRegisterWithByteRegister(Z80Parser::LoadByteRegisterWithByteRegisterContext * /*ctx*/) override { }

  virtual void enterLoadByteRegisterWithImmediateByte(Z80Parser::LoadByteRegisterWithImmediateByteContext * /*ctx*/) override { }
  virtual void exitLoadByteRegisterWithImmediateByte(Z80Parser::LoadByteRegisterWithImmediateByteContext * /*ctx*/) override { }

  virtual void enterLoadByteRegisterWithHLPointer(Z80Parser::LoadByteRegisterWithHLPointerContext * /*ctx*/) override { }
  virtual void exitLoadByteRegisterWithHLPointer(Z80Parser::LoadByteRegisterWithHLPointerContext * /*ctx*/) override { }

  virtual void enterLoadByteRegisterWithIXOffset(Z80Parser::LoadByteRegisterWithIXOffsetContext * /*ctx*/) override { }
  virtual void exitLoadByteRegisterWithIXOffset(Z80Parser::LoadByteRegisterWithIXOffsetContext * /*ctx*/) override { }

  virtual void enterLoadByteRegisterWithIYOffset(Z80Parser::LoadByteRegisterWithIYOffsetContext * /*ctx*/) override { }
  virtual void exitLoadByteRegisterWithIYOffset(Z80Parser::LoadByteRegisterWithIYOffsetContext * /*ctx*/) override { }

  virtual void enterLoadHLPointerWithRegister(Z80Parser::LoadHLPointerWithRegisterContext * /*ctx*/) override { }
  virtual void exitLoadHLPointerWithRegister(Z80Parser::LoadHLPointerWithRegisterContext * /*ctx*/) override { }

  virtual void enterLoadIXOffsetWithRegister(Z80Parser::LoadIXOffsetWithRegisterContext * /*ctx*/) override { }
  virtual void exitLoadIXOffsetWithRegister(Z80Parser::LoadIXOffsetWithRegisterContext * /*ctx*/) override { }

  virtual void enterLoadIYOffsetWithRegister(Z80Parser::LoadIYOffsetWithRegisterContext * /*ctx*/) override { }
  virtual void exitLoadIYOffsetWithRegister(Z80Parser::LoadIYOffsetWithRegisterContext * /*ctx*/) override { }

  virtual void enterLoadHLPointerWithImmediateByte(Z80Parser::LoadHLPointerWithImmediateByteContext * /*ctx*/) override { }
  virtual void exitLoadHLPointerWithImmediateByte(Z80Parser::LoadHLPointerWithImmediateByteContext * /*ctx*/) override { }

  virtual void enterLoadIXOffsetWithImmediateByte(Z80Parser::LoadIXOffsetWithImmediateByteContext * /*ctx*/) override { }
  virtual void exitLoadIXOffsetWithImmediateByte(Z80Parser::LoadIXOffsetWithImmediateByteContext * /*ctx*/) override { }

  virtual void enterLoadIYOffsetWithImmediateByte(Z80Parser::LoadIYOffsetWithImmediateByteContext * /*ctx*/) override { }
  virtual void exitLoadIYOffsetWithImmediateByte(Z80Parser::LoadIYOffsetWithImmediateByteContext * /*ctx*/) override { }

  virtual void enterLoadAWithBCPointer(Z80Parser::LoadAWithBCPointerContext * /*ctx*/) override { }
  virtual void exitLoadAWithBCPointer(Z80Parser::LoadAWithBCPointerContext * /*ctx*/) override { }

  virtual void enterLoadAWithDEPointer(Z80Parser::LoadAWithDEPointerContext * /*ctx*/) override { }
  virtual void exitLoadAWithDEPointer(Z80Parser::LoadAWithDEPointerContext * /*ctx*/) override { }

  virtual void enterLoadAWithNNPointer(Z80Parser::LoadAWithNNPointerContext * /*ctx*/) override { }
  virtual void exitLoadAWithNNPointer(Z80Parser::LoadAWithNNPointerContext * /*ctx*/) override { }

  virtual void enterLoadBCPointerWithA(Z80Parser::LoadBCPointerWithAContext * /*ctx*/) override { }
  virtual void exitLoadBCPointerWithA(Z80Parser::LoadBCPointerWithAContext * /*ctx*/) override { }

  virtual void enterLoadDEPointerWithA(Z80Parser::LoadDEPointerWithAContext * /*ctx*/) override { }
  virtual void exitLoadDEPointerWithA(Z80Parser::LoadDEPointerWithAContext * /*ctx*/) override { }

  virtual void enterLoadNNPointerWithA(Z80Parser::LoadNNPointerWithAContext * /*ctx*/) override { }
  virtual void exitLoadNNPointerWithA(Z80Parser::LoadNNPointerWithAContext * /*ctx*/) override { }

  virtual void enterLoadAWithI(Z80Parser::LoadAWithIContext * /*ctx*/) override { }
  virtual void exitLoadAWithI(Z80Parser::LoadAWithIContext * /*ctx*/) override { }

  virtual void enterLoadAWithR(Z80Parser::LoadAWithRContext * /*ctx*/) override { }
  virtual void exitLoadAWithR(Z80Parser::LoadAWithRContext * /*ctx*/) override { }

  virtual void enterLoadIWithA(Z80Parser::LoadIWithAContext * /*ctx*/) override { }
  virtual void exitLoadIWithA(Z80Parser::LoadIWithAContext * /*ctx*/) override { }

  virtual void enterLoadRWithA(Z80Parser::LoadRWithAContext * /*ctx*/) override { }
  virtual void exitLoadRWithA(Z80Parser::LoadRWithAContext * /*ctx*/) override { }

  virtual void enterLoadRegisterWithIXHigh(Z80Parser::LoadRegisterWithIXHighContext * /*ctx*/) override { }
  virtual void exitLoadRegisterWithIXHigh(Z80Parser::LoadRegisterWithIXHighContext * /*ctx*/) override { }

  virtual void enterLoadRegisterWithIXLow(Z80Parser::LoadRegisterWithIXLowContext * /*ctx*/) override { }
  virtual void exitLoadRegisterWithIXLow(Z80Parser::LoadRegisterWithIXLowContext * /*ctx*/) override { }

  virtual void enterLoadRegisterWithIYHigh(Z80Parser::LoadRegisterWithIYHighContext * /*ctx*/) override { }
  virtual void exitLoadRegisterWithIYHigh(Z80Parser::LoadRegisterWithIYHighContext * /*ctx*/) override { }

  virtual void enterLoadRegisterWithIYLow(Z80Parser::LoadRegisterWithIYLowContext * /*ctx*/) override { }
  virtual void exitLoadRegisterWithIYLow(Z80Parser::LoadRegisterWithIYLowContext * /*ctx*/) override { }

  virtual void enterLoadIXHighWithRegister(Z80Parser::LoadIXHighWithRegisterContext * /*ctx*/) override { }
  virtual void exitLoadIXHighWithRegister(Z80Parser::LoadIXHighWithRegisterContext * /*ctx*/) override { }

  virtual void enterIxHighOrLowRegister(Z80Parser::IxHighOrLowRegisterContext * /*ctx*/) override { }
  virtual void exitIxHighOrLowRegister(Z80Parser::IxHighOrLowRegisterContext * /*ctx*/) override { }

  virtual void enterIyHighOrLowRegister(Z80Parser::IyHighOrLowRegisterContext * /*ctx*/) override { }
  virtual void exitIyHighOrLowRegister(Z80Parser::IyHighOrLowRegisterContext * /*ctx*/) override { }

  virtual void enterLoadIXNibbles(Z80Parser::LoadIXNibblesContext * /*ctx*/) override { }
  virtual void exitLoadIXNibbles(Z80Parser::LoadIXNibblesContext * /*ctx*/) override { }

  virtual void enterLoadIYNibbles(Z80Parser::LoadIYNibblesContext * /*ctx*/) override { }
  virtual void exitLoadIYNibbles(Z80Parser::LoadIYNibblesContext * /*ctx*/) override { }

  virtual void enterLoadIXLowWithRegister(Z80Parser::LoadIXLowWithRegisterContext * /*ctx*/) override { }
  virtual void exitLoadIXLowWithRegister(Z80Parser::LoadIXLowWithRegisterContext * /*ctx*/) override { }

  virtual void enterLoadIYHighWithRegister(Z80Parser::LoadIYHighWithRegisterContext * /*ctx*/) override { }
  virtual void exitLoadIYHighWithRegister(Z80Parser::LoadIYHighWithRegisterContext * /*ctx*/) override { }

  virtual void enterLoadIYLowWithRegister(Z80Parser::LoadIYLowWithRegisterContext * /*ctx*/) override { }
  virtual void exitLoadIYLowWithRegister(Z80Parser::LoadIYLowWithRegisterContext * /*ctx*/) override { }

  virtual void enterByteLoadCommand(Z80Parser::ByteLoadCommandContext * /*ctx*/) override { }
  virtual void exitByteLoadCommand(Z80Parser::ByteLoadCommandContext * /*ctx*/) override { }

  virtual void enterSimpleWordRegister(Z80Parser::SimpleWordRegisterContext * /*ctx*/) override { }
  virtual void exitSimpleWordRegister(Z80Parser::SimpleWordRegisterContext * /*ctx*/) override { }

  virtual void enterLoadWordWithImmediateWord(Z80Parser::LoadWordWithImmediateWordContext * /*ctx*/) override { }
  virtual void exitLoadWordWithImmediateWord(Z80Parser::LoadWordWithImmediateWordContext * /*ctx*/) override { }

  virtual void enterLoadIXWithImmediateWord(Z80Parser::LoadIXWithImmediateWordContext * /*ctx*/) override { }
  virtual void exitLoadIXWithImmediateWord(Z80Parser::LoadIXWithImmediateWordContext * /*ctx*/) override { }

  virtual void enterLoadIYWithImmediateWord(Z80Parser::LoadIYWithImmediateWordContext * /*ctx*/) override { }
  virtual void exitLoadIYWithImmediateWord(Z80Parser::LoadIYWithImmediateWordContext * /*ctx*/) override { }

  virtual void enterLoadWordRegisterWithNNPointer(Z80Parser::LoadWordRegisterWithNNPointerContext * /*ctx*/) override { }
  virtual void exitLoadWordRegisterWithNNPointer(Z80Parser::LoadWordRegisterWithNNPointerContext * /*ctx*/) override { }

  virtual void enterLoadIXWithNNPointer(Z80Parser::LoadIXWithNNPointerContext * /*ctx*/) override { }
  virtual void exitLoadIXWithNNPointer(Z80Parser::LoadIXWithNNPointerContext * /*ctx*/) override { }

  virtual void enterLoadIYWithNNPointer(Z80Parser::LoadIYWithNNPointerContext * /*ctx*/) override { }
  virtual void exitLoadIYWithNNPointer(Z80Parser::LoadIYWithNNPointerContext * /*ctx*/) override { }

  virtual void enterLoadNNPointerWithWordRegister(Z80Parser::LoadNNPointerWithWordRegisterContext * /*ctx*/) override { }
  virtual void exitLoadNNPointerWithWordRegister(Z80Parser::LoadNNPointerWithWordRegisterContext * /*ctx*/) override { }

  virtual void enterLoadNNPointerWithIX(Z80Parser::LoadNNPointerWithIXContext * /*ctx*/) override { }
  virtual void exitLoadNNPointerWithIX(Z80Parser::LoadNNPointerWithIXContext * /*ctx*/) override { }

  virtual void enterLoadNNPointerWithIY(Z80Parser::LoadNNPointerWithIYContext * /*ctx*/) override { }
  virtual void exitLoadNNPointerWithIY(Z80Parser::LoadNNPointerWithIYContext * /*ctx*/) override { }

  virtual void enterLoadSPWithHL(Z80Parser::LoadSPWithHLContext * /*ctx*/) override { }
  virtual void exitLoadSPWithHL(Z80Parser::LoadSPWithHLContext * /*ctx*/) override { }

  virtual void enterLoadSPWithIX(Z80Parser::LoadSPWithIXContext * /*ctx*/) override { }
  virtual void exitLoadSPWithIX(Z80Parser::LoadSPWithIXContext * /*ctx*/) override { }

  virtual void enterLoadSPWithIY(Z80Parser::LoadSPWithIYContext * /*ctx*/) override { }
  virtual void exitLoadSPWithIY(Z80Parser::LoadSPWithIYContext * /*ctx*/) override { }

  virtual void enterPushCommandName(Z80Parser::PushCommandNameContext * /*ctx*/) override { }
  virtual void exitPushCommandName(Z80Parser::PushCommandNameContext * /*ctx*/) override { }

  virtual void enterPopCommandName(Z80Parser::PopCommandNameContext * /*ctx*/) override { }
  virtual void exitPopCommandName(Z80Parser::PopCommandNameContext * /*ctx*/) override { }

  virtual void enterPushAndPopRegister(Z80Parser::PushAndPopRegisterContext * /*ctx*/) override { }
  virtual void exitPushAndPopRegister(Z80Parser::PushAndPopRegisterContext * /*ctx*/) override { }

  virtual void enterPushWordRegister(Z80Parser::PushWordRegisterContext * /*ctx*/) override { }
  virtual void exitPushWordRegister(Z80Parser::PushWordRegisterContext * /*ctx*/) override { }

  virtual void enterPushIX(Z80Parser::PushIXContext * /*ctx*/) override { }
  virtual void exitPushIX(Z80Parser::PushIXContext * /*ctx*/) override { }

  virtual void enterPushIY(Z80Parser::PushIYContext * /*ctx*/) override { }
  virtual void exitPushIY(Z80Parser::PushIYContext * /*ctx*/) override { }

  virtual void enterPopWordRegister(Z80Parser::PopWordRegisterContext * /*ctx*/) override { }
  virtual void exitPopWordRegister(Z80Parser::PopWordRegisterContext * /*ctx*/) override { }

  virtual void enterPopIX(Z80Parser::PopIXContext * /*ctx*/) override { }
  virtual void exitPopIX(Z80Parser::PopIXContext * /*ctx*/) override { }

  virtual void enterPopIY(Z80Parser::PopIYContext * /*ctx*/) override { }
  virtual void exitPopIY(Z80Parser::PopIYContext * /*ctx*/) override { }

  virtual void enterWordLoadCommand(Z80Parser::WordLoadCommandContext * /*ctx*/) override { }
  virtual void exitWordLoadCommand(Z80Parser::WordLoadCommandContext * /*ctx*/) override { }

  virtual void enterExchangeCommandName(Z80Parser::ExchangeCommandNameContext * /*ctx*/) override { }
  virtual void exitExchangeCommandName(Z80Parser::ExchangeCommandNameContext * /*ctx*/) override { }

  virtual void enterExchangeDEWithHL(Z80Parser::ExchangeDEWithHLContext * /*ctx*/) override { }
  virtual void exitExchangeDEWithHL(Z80Parser::ExchangeDEWithHLContext * /*ctx*/) override { }

  virtual void enterExchangeAFWithShadowAF(Z80Parser::ExchangeAFWithShadowAFContext * /*ctx*/) override { }
  virtual void exitExchangeAFWithShadowAF(Z80Parser::ExchangeAFWithShadowAFContext * /*ctx*/) override { }

  virtual void enterExchangeMultipleWordRegisters(Z80Parser::ExchangeMultipleWordRegistersContext * /*ctx*/) override { }
  virtual void exitExchangeMultipleWordRegisters(Z80Parser::ExchangeMultipleWordRegistersContext * /*ctx*/) override { }

  virtual void enterExchangeSPPointerWithHL(Z80Parser::ExchangeSPPointerWithHLContext * /*ctx*/) override { }
  virtual void exitExchangeSPPointerWithHL(Z80Parser::ExchangeSPPointerWithHLContext * /*ctx*/) override { }

  virtual void enterExchangeSPPointerWithIX(Z80Parser::ExchangeSPPointerWithIXContext * /*ctx*/) override { }
  virtual void exitExchangeSPPointerWithIX(Z80Parser::ExchangeSPPointerWithIXContext * /*ctx*/) override { }

  virtual void enterExchangeSPPointerWithIY(Z80Parser::ExchangeSPPointerWithIYContext * /*ctx*/) override { }
  virtual void exitExchangeSPPointerWithIY(Z80Parser::ExchangeSPPointerWithIYContext * /*ctx*/) override { }

  virtual void enterLoadHLPointerIntoDEThenDecrementBCAndIncrementHL(Z80Parser::LoadHLPointerIntoDEThenDecrementBCAndIncrementHLContext * /*ctx*/) override { }
  virtual void exitLoadHLPointerIntoDEThenDecrementBCAndIncrementHL(Z80Parser::LoadHLPointerIntoDEThenDecrementBCAndIncrementHLContext * /*ctx*/) override { }

  virtual void enterLoadDEPointerWithHLPointerThenDecrementBCAndIncrementHLRepeat(Z80Parser::LoadDEPointerWithHLPointerThenDecrementBCAndIncrementHLRepeatContext * /*ctx*/) override { }
  virtual void exitLoadDEPointerWithHLPointerThenDecrementBCAndIncrementHLRepeat(Z80Parser::LoadDEPointerWithHLPointerThenDecrementBCAndIncrementHLRepeatContext * /*ctx*/) override { }

  virtual void enterLoadDEPointerWithHLPointerThenDecrementBCAndHL(Z80Parser::LoadDEPointerWithHLPointerThenDecrementBCAndHLContext * /*ctx*/) override { }
  virtual void exitLoadDEPointerWithHLPointerThenDecrementBCAndHL(Z80Parser::LoadDEPointerWithHLPointerThenDecrementBCAndHLContext * /*ctx*/) override { }

  virtual void enterLoadDEPointerWithHLPointerThenDecrementBCAndHLRepeat(Z80Parser::LoadDEPointerWithHLPointerThenDecrementBCAndHLRepeatContext * /*ctx*/) override { }
  virtual void exitLoadDEPointerWithHLPointerThenDecrementBCAndHLRepeat(Z80Parser::LoadDEPointerWithHLPointerThenDecrementBCAndHLRepeatContext * /*ctx*/) override { }

  virtual void enterCompareAToHLPointerThenIncrementHLAndDecrementBC(Z80Parser::CompareAToHLPointerThenIncrementHLAndDecrementBCContext * /*ctx*/) override { }
  virtual void exitCompareAToHLPointerThenIncrementHLAndDecrementBC(Z80Parser::CompareAToHLPointerThenIncrementHLAndDecrementBCContext * /*ctx*/) override { }

  virtual void enterCompareAToHLPointerThenIncrementHLAndDecrementBCRepeat(Z80Parser::CompareAToHLPointerThenIncrementHLAndDecrementBCRepeatContext * /*ctx*/) override { }
  virtual void exitCompareAToHLPointerThenIncrementHLAndDecrementBCRepeat(Z80Parser::CompareAToHLPointerThenIncrementHLAndDecrementBCRepeatContext * /*ctx*/) override { }

  virtual void enterCompareAToHLPointerThenDecrementHLAndBC(Z80Parser::CompareAToHLPointerThenDecrementHLAndBCContext * /*ctx*/) override { }
  virtual void exitCompareAToHLPointerThenDecrementHLAndBC(Z80Parser::CompareAToHLPointerThenDecrementHLAndBCContext * /*ctx*/) override { }

  virtual void enterCompareAToHLPointerThenDecrementHLAndBCRepeat(Z80Parser::CompareAToHLPointerThenDecrementHLAndBCRepeatContext * /*ctx*/) override { }
  virtual void exitCompareAToHLPointerThenDecrementHLAndBCRepeat(Z80Parser::CompareAToHLPointerThenDecrementHLAndBCRepeatContext * /*ctx*/) override { }

  virtual void enterExchagneAndBlockTransfrerCommand(Z80Parser::ExchagneAndBlockTransfrerCommandContext * /*ctx*/) override { }
  virtual void exitExchagneAndBlockTransfrerCommand(Z80Parser::ExchagneAndBlockTransfrerCommandContext * /*ctx*/) override { }

  virtual void enterAddCommandName(Z80Parser::AddCommandNameContext * /*ctx*/) override { }
  virtual void exitAddCommandName(Z80Parser::AddCommandNameContext * /*ctx*/) override { }

  virtual void enterAddWithCarryCommandName(Z80Parser::AddWithCarryCommandNameContext * /*ctx*/) override { }
  virtual void exitAddWithCarryCommandName(Z80Parser::AddWithCarryCommandNameContext * /*ctx*/) override { }

  virtual void enterSubtractCommandName(Z80Parser::SubtractCommandNameContext * /*ctx*/) override { }
  virtual void exitSubtractCommandName(Z80Parser::SubtractCommandNameContext * /*ctx*/) override { }

  virtual void enterSubtractWithBorrowCommandName(Z80Parser::SubtractWithBorrowCommandNameContext * /*ctx*/) override { }
  virtual void exitSubtractWithBorrowCommandName(Z80Parser::SubtractWithBorrowCommandNameContext * /*ctx*/) override { }

  virtual void enterAndCommandName(Z80Parser::AndCommandNameContext * /*ctx*/) override { }
  virtual void exitAndCommandName(Z80Parser::AndCommandNameContext * /*ctx*/) override { }

  virtual void enterOrCommandName(Z80Parser::OrCommandNameContext * /*ctx*/) override { }
  virtual void exitOrCommandName(Z80Parser::OrCommandNameContext * /*ctx*/) override { }

  virtual void enterXorCommandName(Z80Parser::XorCommandNameContext * /*ctx*/) override { }
  virtual void exitXorCommandName(Z80Parser::XorCommandNameContext * /*ctx*/) override { }

  virtual void enterCompareCommandName(Z80Parser::CompareCommandNameContext * /*ctx*/) override { }
  virtual void exitCompareCommandName(Z80Parser::CompareCommandNameContext * /*ctx*/) override { }

  virtual void enterIncrementCommandName(Z80Parser::IncrementCommandNameContext * /*ctx*/) override { }
  virtual void exitIncrementCommandName(Z80Parser::IncrementCommandNameContext * /*ctx*/) override { }

  virtual void enterDecrementCommandName(Z80Parser::DecrementCommandNameContext * /*ctx*/) override { }
  virtual void exitDecrementCommandName(Z80Parser::DecrementCommandNameContext * /*ctx*/) override { }

  virtual void enterAddAAndRegister(Z80Parser::AddAAndRegisterContext * /*ctx*/) override { }
  virtual void exitAddAAndRegister(Z80Parser::AddAAndRegisterContext * /*ctx*/) override { }

  virtual void enterAddAAndImmediateByte(Z80Parser::AddAAndImmediateByteContext * /*ctx*/) override { }
  virtual void exitAddAAndImmediateByte(Z80Parser::AddAAndImmediateByteContext * /*ctx*/) override { }

  virtual void enterAddAAndIXH(Z80Parser::AddAAndIXHContext * /*ctx*/) override { }
  virtual void exitAddAAndIXH(Z80Parser::AddAAndIXHContext * /*ctx*/) override { }

  virtual void enterAddAAndIXL(Z80Parser::AddAAndIXLContext * /*ctx*/) override { }
  virtual void exitAddAAndIXL(Z80Parser::AddAAndIXLContext * /*ctx*/) override { }

  virtual void enterAddAAndIYH(Z80Parser::AddAAndIYHContext * /*ctx*/) override { }
  virtual void exitAddAAndIYH(Z80Parser::AddAAndIYHContext * /*ctx*/) override { }

  virtual void enterAddAAndIYL(Z80Parser::AddAAndIYLContext * /*ctx*/) override { }
  virtual void exitAddAAndIYL(Z80Parser::AddAAndIYLContext * /*ctx*/) override { }

  virtual void enterAddAAndHLPointer(Z80Parser::AddAAndHLPointerContext * /*ctx*/) override { }
  virtual void exitAddAAndHLPointer(Z80Parser::AddAAndHLPointerContext * /*ctx*/) override { }

  virtual void enterAddAAndIXOffset(Z80Parser::AddAAndIXOffsetContext * /*ctx*/) override { }
  virtual void exitAddAAndIXOffset(Z80Parser::AddAAndIXOffsetContext * /*ctx*/) override { }

  virtual void enterAddAAndIYOffset(Z80Parser::AddAAndIYOffsetContext * /*ctx*/) override { }
  virtual void exitAddAAndIYOffset(Z80Parser::AddAAndIYOffsetContext * /*ctx*/) override { }

  virtual void enterAddWithCarryAAndRegister(Z80Parser::AddWithCarryAAndRegisterContext * /*ctx*/) override { }
  virtual void exitAddWithCarryAAndRegister(Z80Parser::AddWithCarryAAndRegisterContext * /*ctx*/) override { }

  virtual void enterAddWithCarryAAndHLPointer(Z80Parser::AddWithCarryAAndHLPointerContext * /*ctx*/) override { }
  virtual void exitAddWithCarryAAndHLPointer(Z80Parser::AddWithCarryAAndHLPointerContext * /*ctx*/) override { }

  virtual void enterAddWithCarryAAndImmediate(Z80Parser::AddWithCarryAAndImmediateContext * /*ctx*/) override { }
  virtual void exitAddWithCarryAAndImmediate(Z80Parser::AddWithCarryAAndImmediateContext * /*ctx*/) override { }

  virtual void enterAddWithCarryAAndIXOffset(Z80Parser::AddWithCarryAAndIXOffsetContext * /*ctx*/) override { }
  virtual void exitAddWithCarryAAndIXOffset(Z80Parser::AddWithCarryAAndIXOffsetContext * /*ctx*/) override { }

  virtual void enterAddWithCarryAAndIYOffset(Z80Parser::AddWithCarryAAndIYOffsetContext * /*ctx*/) override { }
  virtual void exitAddWithCarryAAndIYOffset(Z80Parser::AddWithCarryAAndIYOffsetContext * /*ctx*/) override { }

  virtual void enterAddWithCarryAAndIXH(Z80Parser::AddWithCarryAAndIXHContext * /*ctx*/) override { }
  virtual void exitAddWithCarryAAndIXH(Z80Parser::AddWithCarryAAndIXHContext * /*ctx*/) override { }

  virtual void enterAddWithCarryAAndIXL(Z80Parser::AddWithCarryAAndIXLContext * /*ctx*/) override { }
  virtual void exitAddWithCarryAAndIXL(Z80Parser::AddWithCarryAAndIXLContext * /*ctx*/) override { }

  virtual void enterAddWithCarryAAndIYH(Z80Parser::AddWithCarryAAndIYHContext * /*ctx*/) override { }
  virtual void exitAddWithCarryAAndIYH(Z80Parser::AddWithCarryAAndIYHContext * /*ctx*/) override { }

  virtual void enterAddWithCarryAAndIYL(Z80Parser::AddWithCarryAAndIYLContext * /*ctx*/) override { }
  virtual void exitAddWithCarryAAndIYL(Z80Parser::AddWithCarryAAndIYLContext * /*ctx*/) override { }

  virtual void enterSubtractRegisterFromA(Z80Parser::SubtractRegisterFromAContext * /*ctx*/) override { }
  virtual void exitSubtractRegisterFromA(Z80Parser::SubtractRegisterFromAContext * /*ctx*/) override { }

  virtual void enterSubtractHLPointerFromA(Z80Parser::SubtractHLPointerFromAContext * /*ctx*/) override { }
  virtual void exitSubtractHLPointerFromA(Z80Parser::SubtractHLPointerFromAContext * /*ctx*/) override { }

  virtual void enterSubtractImmediateFromA(Z80Parser::SubtractImmediateFromAContext * /*ctx*/) override { }
  virtual void exitSubtractImmediateFromA(Z80Parser::SubtractImmediateFromAContext * /*ctx*/) override { }

  virtual void enterSubtractIXOffsetFromA(Z80Parser::SubtractIXOffsetFromAContext * /*ctx*/) override { }
  virtual void exitSubtractIXOffsetFromA(Z80Parser::SubtractIXOffsetFromAContext * /*ctx*/) override { }

  virtual void enterSubtractIYOffsetFromA(Z80Parser::SubtractIYOffsetFromAContext * /*ctx*/) override { }
  virtual void exitSubtractIYOffsetFromA(Z80Parser::SubtractIYOffsetFromAContext * /*ctx*/) override { }

  virtual void enterSubtractIXHighOrLowFromA(Z80Parser::SubtractIXHighOrLowFromAContext * /*ctx*/) override { }
  virtual void exitSubtractIXHighOrLowFromA(Z80Parser::SubtractIXHighOrLowFromAContext * /*ctx*/) override { }

  virtual void enterSubtractIYHighOrLowFromA(Z80Parser::SubtractIYHighOrLowFromAContext * /*ctx*/) override { }
  virtual void exitSubtractIYHighOrLowFromA(Z80Parser::SubtractIYHighOrLowFromAContext * /*ctx*/) override { }

  virtual void enterSubtractWithBorrowRegisterFromA(Z80Parser::SubtractWithBorrowRegisterFromAContext * /*ctx*/) override { }
  virtual void exitSubtractWithBorrowRegisterFromA(Z80Parser::SubtractWithBorrowRegisterFromAContext * /*ctx*/) override { }

  virtual void enterSubtractWithBorrowHLPointerFromA(Z80Parser::SubtractWithBorrowHLPointerFromAContext * /*ctx*/) override { }
  virtual void exitSubtractWithBorrowHLPointerFromA(Z80Parser::SubtractWithBorrowHLPointerFromAContext * /*ctx*/) override { }

  virtual void enterSubtractWithBorrowIXOffsetFromA(Z80Parser::SubtractWithBorrowIXOffsetFromAContext * /*ctx*/) override { }
  virtual void exitSubtractWithBorrowIXOffsetFromA(Z80Parser::SubtractWithBorrowIXOffsetFromAContext * /*ctx*/) override { }

  virtual void enterSubtractWithBorrowIYOffsetFromA(Z80Parser::SubtractWithBorrowIYOffsetFromAContext * /*ctx*/) override { }
  virtual void exitSubtractWithBorrowIYOffsetFromA(Z80Parser::SubtractWithBorrowIYOffsetFromAContext * /*ctx*/) override { }

  virtual void enterSubtractWithBorrowImmediateFromA(Z80Parser::SubtractWithBorrowImmediateFromAContext * /*ctx*/) override { }
  virtual void exitSubtractWithBorrowImmediateFromA(Z80Parser::SubtractWithBorrowImmediateFromAContext * /*ctx*/) override { }

  virtual void enterSubtractWithBorrowIXHFromA(Z80Parser::SubtractWithBorrowIXHFromAContext * /*ctx*/) override { }
  virtual void exitSubtractWithBorrowIXHFromA(Z80Parser::SubtractWithBorrowIXHFromAContext * /*ctx*/) override { }

  virtual void enterSubtractWithBorrowIXLFromA(Z80Parser::SubtractWithBorrowIXLFromAContext * /*ctx*/) override { }
  virtual void exitSubtractWithBorrowIXLFromA(Z80Parser::SubtractWithBorrowIXLFromAContext * /*ctx*/) override { }

  virtual void enterSubtractWithBorrowIYHFromA(Z80Parser::SubtractWithBorrowIYHFromAContext * /*ctx*/) override { }
  virtual void exitSubtractWithBorrowIYHFromA(Z80Parser::SubtractWithBorrowIYHFromAContext * /*ctx*/) override { }

  virtual void enterSubtractWithBorrowIYLFromA(Z80Parser::SubtractWithBorrowIYLFromAContext * /*ctx*/) override { }
  virtual void exitSubtractWithBorrowIYLFromA(Z80Parser::SubtractWithBorrowIYLFromAContext * /*ctx*/) override { }

  virtual void enterAndAWithRegister(Z80Parser::AndAWithRegisterContext * /*ctx*/) override { }
  virtual void exitAndAWithRegister(Z80Parser::AndAWithRegisterContext * /*ctx*/) override { }

  virtual void enterAndAWithImmediate(Z80Parser::AndAWithImmediateContext * /*ctx*/) override { }
  virtual void exitAndAWithImmediate(Z80Parser::AndAWithImmediateContext * /*ctx*/) override { }

  virtual void enterAndAWithHLPointer(Z80Parser::AndAWithHLPointerContext * /*ctx*/) override { }
  virtual void exitAndAWithHLPointer(Z80Parser::AndAWithHLPointerContext * /*ctx*/) override { }

  virtual void enterAndAWithIXOffset(Z80Parser::AndAWithIXOffsetContext * /*ctx*/) override { }
  virtual void exitAndAWithIXOffset(Z80Parser::AndAWithIXOffsetContext * /*ctx*/) override { }

  virtual void enterAndAWithIYOffset(Z80Parser::AndAWithIYOffsetContext * /*ctx*/) override { }
  virtual void exitAndAWithIYOffset(Z80Parser::AndAWithIYOffsetContext * /*ctx*/) override { }

  virtual void enterAndAWithIXH(Z80Parser::AndAWithIXHContext * /*ctx*/) override { }
  virtual void exitAndAWithIXH(Z80Parser::AndAWithIXHContext * /*ctx*/) override { }

  virtual void enterAndAWithIXL(Z80Parser::AndAWithIXLContext * /*ctx*/) override { }
  virtual void exitAndAWithIXL(Z80Parser::AndAWithIXLContext * /*ctx*/) override { }

  virtual void enterAndAWithIYH(Z80Parser::AndAWithIYHContext * /*ctx*/) override { }
  virtual void exitAndAWithIYH(Z80Parser::AndAWithIYHContext * /*ctx*/) override { }

  virtual void enterAndAWithIYL(Z80Parser::AndAWithIYLContext * /*ctx*/) override { }
  virtual void exitAndAWithIYL(Z80Parser::AndAWithIYLContext * /*ctx*/) override { }

  virtual void enterOrAWithRegister(Z80Parser::OrAWithRegisterContext * /*ctx*/) override { }
  virtual void exitOrAWithRegister(Z80Parser::OrAWithRegisterContext * /*ctx*/) override { }

  virtual void enterOrAWithImmediate(Z80Parser::OrAWithImmediateContext * /*ctx*/) override { }
  virtual void exitOrAWithImmediate(Z80Parser::OrAWithImmediateContext * /*ctx*/) override { }

  virtual void enterOrAWithHLPointer(Z80Parser::OrAWithHLPointerContext * /*ctx*/) override { }
  virtual void exitOrAWithHLPointer(Z80Parser::OrAWithHLPointerContext * /*ctx*/) override { }

  virtual void enterOrAWithIXOffset(Z80Parser::OrAWithIXOffsetContext * /*ctx*/) override { }
  virtual void exitOrAWithIXOffset(Z80Parser::OrAWithIXOffsetContext * /*ctx*/) override { }

  virtual void enterOrAWithIYOffset(Z80Parser::OrAWithIYOffsetContext * /*ctx*/) override { }
  virtual void exitOrAWithIYOffset(Z80Parser::OrAWithIYOffsetContext * /*ctx*/) override { }

  virtual void enterOrAWithIXH(Z80Parser::OrAWithIXHContext * /*ctx*/) override { }
  virtual void exitOrAWithIXH(Z80Parser::OrAWithIXHContext * /*ctx*/) override { }

  virtual void enterOrAWithIXL(Z80Parser::OrAWithIXLContext * /*ctx*/) override { }
  virtual void exitOrAWithIXL(Z80Parser::OrAWithIXLContext * /*ctx*/) override { }

  virtual void enterOrAWithIYH(Z80Parser::OrAWithIYHContext * /*ctx*/) override { }
  virtual void exitOrAWithIYH(Z80Parser::OrAWithIYHContext * /*ctx*/) override { }

  virtual void enterOrAWithIYL(Z80Parser::OrAWithIYLContext * /*ctx*/) override { }
  virtual void exitOrAWithIYL(Z80Parser::OrAWithIYLContext * /*ctx*/) override { }

  virtual void enterXorAWithRegister(Z80Parser::XorAWithRegisterContext * /*ctx*/) override { }
  virtual void exitXorAWithRegister(Z80Parser::XorAWithRegisterContext * /*ctx*/) override { }

  virtual void enterXorAWithImmediate(Z80Parser::XorAWithImmediateContext * /*ctx*/) override { }
  virtual void exitXorAWithImmediate(Z80Parser::XorAWithImmediateContext * /*ctx*/) override { }

  virtual void enterXorAWithHLPointer(Z80Parser::XorAWithHLPointerContext * /*ctx*/) override { }
  virtual void exitXorAWithHLPointer(Z80Parser::XorAWithHLPointerContext * /*ctx*/) override { }

  virtual void enterXorAWithIXOffset(Z80Parser::XorAWithIXOffsetContext * /*ctx*/) override { }
  virtual void exitXorAWithIXOffset(Z80Parser::XorAWithIXOffsetContext * /*ctx*/) override { }

  virtual void enterXorAWithIYOffset(Z80Parser::XorAWithIYOffsetContext * /*ctx*/) override { }
  virtual void exitXorAWithIYOffset(Z80Parser::XorAWithIYOffsetContext * /*ctx*/) override { }

  virtual void enterXorAWithIXH(Z80Parser::XorAWithIXHContext * /*ctx*/) override { }
  virtual void exitXorAWithIXH(Z80Parser::XorAWithIXHContext * /*ctx*/) override { }

  virtual void enterXorAWithIXL(Z80Parser::XorAWithIXLContext * /*ctx*/) override { }
  virtual void exitXorAWithIXL(Z80Parser::XorAWithIXLContext * /*ctx*/) override { }

  virtual void enterXorAWithIYH(Z80Parser::XorAWithIYHContext * /*ctx*/) override { }
  virtual void exitXorAWithIYH(Z80Parser::XorAWithIYHContext * /*ctx*/) override { }

  virtual void enterXorAWithIYL(Z80Parser::XorAWithIYLContext * /*ctx*/) override { }
  virtual void exitXorAWithIYL(Z80Parser::XorAWithIYLContext * /*ctx*/) override { }

  virtual void enterCompareAWithRegister(Z80Parser::CompareAWithRegisterContext * /*ctx*/) override { }
  virtual void exitCompareAWithRegister(Z80Parser::CompareAWithRegisterContext * /*ctx*/) override { }

  virtual void enterCompareAWithHLPointer(Z80Parser::CompareAWithHLPointerContext * /*ctx*/) override { }
  virtual void exitCompareAWithHLPointer(Z80Parser::CompareAWithHLPointerContext * /*ctx*/) override { }

  virtual void enterCompareAWithImmediate(Z80Parser::CompareAWithImmediateContext * /*ctx*/) override { }
  virtual void exitCompareAWithImmediate(Z80Parser::CompareAWithImmediateContext * /*ctx*/) override { }

  virtual void enterCompareAWithIXOffset(Z80Parser::CompareAWithIXOffsetContext * /*ctx*/) override { }
  virtual void exitCompareAWithIXOffset(Z80Parser::CompareAWithIXOffsetContext * /*ctx*/) override { }

  virtual void enterCompareAWithIYOffset(Z80Parser::CompareAWithIYOffsetContext * /*ctx*/) override { }
  virtual void exitCompareAWithIYOffset(Z80Parser::CompareAWithIYOffsetContext * /*ctx*/) override { }

  virtual void enterCompareAWithIXH(Z80Parser::CompareAWithIXHContext * /*ctx*/) override { }
  virtual void exitCompareAWithIXH(Z80Parser::CompareAWithIXHContext * /*ctx*/) override { }

  virtual void enterCompareAWithIXL(Z80Parser::CompareAWithIXLContext * /*ctx*/) override { }
  virtual void exitCompareAWithIXL(Z80Parser::CompareAWithIXLContext * /*ctx*/) override { }

  virtual void enterCompareAWithIYH(Z80Parser::CompareAWithIYHContext * /*ctx*/) override { }
  virtual void exitCompareAWithIYH(Z80Parser::CompareAWithIYHContext * /*ctx*/) override { }

  virtual void enterCompareAWithIYL(Z80Parser::CompareAWithIYLContext * /*ctx*/) override { }
  virtual void exitCompareAWithIYL(Z80Parser::CompareAWithIYLContext * /*ctx*/) override { }

  virtual void enterIncrementRegister(Z80Parser::IncrementRegisterContext * /*ctx*/) override { }
  virtual void exitIncrementRegister(Z80Parser::IncrementRegisterContext * /*ctx*/) override { }

  virtual void enterIncrementIXH(Z80Parser::IncrementIXHContext * /*ctx*/) override { }
  virtual void exitIncrementIXH(Z80Parser::IncrementIXHContext * /*ctx*/) override { }

  virtual void enterIncrementIXL(Z80Parser::IncrementIXLContext * /*ctx*/) override { }
  virtual void exitIncrementIXL(Z80Parser::IncrementIXLContext * /*ctx*/) override { }

  virtual void enterIncrementIYH(Z80Parser::IncrementIYHContext * /*ctx*/) override { }
  virtual void exitIncrementIYH(Z80Parser::IncrementIYHContext * /*ctx*/) override { }

  virtual void enterIncrementIYL(Z80Parser::IncrementIYLContext * /*ctx*/) override { }
  virtual void exitIncrementIYL(Z80Parser::IncrementIYLContext * /*ctx*/) override { }

  virtual void enterIncrementHLPointer(Z80Parser::IncrementHLPointerContext * /*ctx*/) override { }
  virtual void exitIncrementHLPointer(Z80Parser::IncrementHLPointerContext * /*ctx*/) override { }

  virtual void enterIncrementIXOffset(Z80Parser::IncrementIXOffsetContext * /*ctx*/) override { }
  virtual void exitIncrementIXOffset(Z80Parser::IncrementIXOffsetContext * /*ctx*/) override { }

  virtual void enterIncrementIYOffset(Z80Parser::IncrementIYOffsetContext * /*ctx*/) override { }
  virtual void exitIncrementIYOffset(Z80Parser::IncrementIYOffsetContext * /*ctx*/) override { }

  virtual void enterDecrementRegister(Z80Parser::DecrementRegisterContext * /*ctx*/) override { }
  virtual void exitDecrementRegister(Z80Parser::DecrementRegisterContext * /*ctx*/) override { }

  virtual void enterDecrementIXH(Z80Parser::DecrementIXHContext * /*ctx*/) override { }
  virtual void exitDecrementIXH(Z80Parser::DecrementIXHContext * /*ctx*/) override { }

  virtual void enterDecrementIXL(Z80Parser::DecrementIXLContext * /*ctx*/) override { }
  virtual void exitDecrementIXL(Z80Parser::DecrementIXLContext * /*ctx*/) override { }

  virtual void enterDecrementIYH(Z80Parser::DecrementIYHContext * /*ctx*/) override { }
  virtual void exitDecrementIYH(Z80Parser::DecrementIYHContext * /*ctx*/) override { }

  virtual void enterDecrementIYL(Z80Parser::DecrementIYLContext * /*ctx*/) override { }
  virtual void exitDecrementIYL(Z80Parser::DecrementIYLContext * /*ctx*/) override { }

  virtual void enterDecrementHLPointer(Z80Parser::DecrementHLPointerContext * /*ctx*/) override { }
  virtual void exitDecrementHLPointer(Z80Parser::DecrementHLPointerContext * /*ctx*/) override { }

  virtual void enterDecrementIXOffset(Z80Parser::DecrementIXOffsetContext * /*ctx*/) override { }
  virtual void exitDecrementIXOffset(Z80Parser::DecrementIXOffsetContext * /*ctx*/) override { }

  virtual void enterDecrementIYOffset(Z80Parser::DecrementIYOffsetContext * /*ctx*/) override { }
  virtual void exitDecrementIYOffset(Z80Parser::DecrementIYOffsetContext * /*ctx*/) override { }

  virtual void enterArithmeticCommand(Z80Parser::ArithmeticCommandContext * /*ctx*/) override { }
  virtual void exitArithmeticCommand(Z80Parser::ArithmeticCommandContext * /*ctx*/) override { }

  virtual void enterDecimalAdjustA(Z80Parser::DecimalAdjustAContext * /*ctx*/) override { }
  virtual void exitDecimalAdjustA(Z80Parser::DecimalAdjustAContext * /*ctx*/) override { }

  virtual void enterComplementA(Z80Parser::ComplementAContext * /*ctx*/) override { }
  virtual void exitComplementA(Z80Parser::ComplementAContext * /*ctx*/) override { }

  virtual void enterNegateA(Z80Parser::NegateAContext * /*ctx*/) override { }
  virtual void exitNegateA(Z80Parser::NegateAContext * /*ctx*/) override { }

  virtual void enterComplementCarryFlag(Z80Parser::ComplementCarryFlagContext * /*ctx*/) override { }
  virtual void exitComplementCarryFlag(Z80Parser::ComplementCarryFlagContext * /*ctx*/) override { }

  virtual void enterSetCarryFlag(Z80Parser::SetCarryFlagContext * /*ctx*/) override { }
  virtual void exitSetCarryFlag(Z80Parser::SetCarryFlagContext * /*ctx*/) override { }

  virtual void enterNop(Z80Parser::NopContext * /*ctx*/) override { }
  virtual void exitNop(Z80Parser::NopContext * /*ctx*/) override { }

  virtual void enterHalt(Z80Parser::HaltContext * /*ctx*/) override { }
  virtual void exitHalt(Z80Parser::HaltContext * /*ctx*/) override { }

  virtual void enterDisableInterrupts(Z80Parser::DisableInterruptsContext * /*ctx*/) override { }
  virtual void exitDisableInterrupts(Z80Parser::DisableInterruptsContext * /*ctx*/) override { }

  virtual void enterEnableInterrupts(Z80Parser::EnableInterruptsContext * /*ctx*/) override { }
  virtual void exitEnableInterrupts(Z80Parser::EnableInterruptsContext * /*ctx*/) override { }

  virtual void enterSetInterruptMode(Z80Parser::SetInterruptModeContext * /*ctx*/) override { }
  virtual void exitSetInterruptMode(Z80Parser::SetInterruptModeContext * /*ctx*/) override { }

  virtual void enterArithmeticControlCommand(Z80Parser::ArithmeticControlCommandContext * /*ctx*/) override { }
  virtual void exitArithmeticControlCommand(Z80Parser::ArithmeticControlCommandContext * /*ctx*/) override { }

  virtual void enterAddHLAndWordRegister(Z80Parser::AddHLAndWordRegisterContext * /*ctx*/) override { }
  virtual void exitAddHLAndWordRegister(Z80Parser::AddHLAndWordRegisterContext * /*ctx*/) override { }

  virtual void enterAddWithCarryHLAndWordRegister(Z80Parser::AddWithCarryHLAndWordRegisterContext * /*ctx*/) override { }
  virtual void exitAddWithCarryHLAndWordRegister(Z80Parser::AddWithCarryHLAndWordRegisterContext * /*ctx*/) override { }

  virtual void enterSubtractWithCarryWordRegisterFromHL(Z80Parser::SubtractWithCarryWordRegisterFromHLContext * /*ctx*/) override { }
  virtual void exitSubtractWithCarryWordRegisterFromHL(Z80Parser::SubtractWithCarryWordRegisterFromHLContext * /*ctx*/) override { }

  virtual void enterSimpleIXAdditionRegister(Z80Parser::SimpleIXAdditionRegisterContext * /*ctx*/) override { }
  virtual void exitSimpleIXAdditionRegister(Z80Parser::SimpleIXAdditionRegisterContext * /*ctx*/) override { }

  virtual void enterSimpleIYAdditionRegister(Z80Parser::SimpleIYAdditionRegisterContext * /*ctx*/) override { }
  virtual void exitSimpleIYAdditionRegister(Z80Parser::SimpleIYAdditionRegisterContext * /*ctx*/) override { }

  virtual void enterAddIXWithRegister(Z80Parser::AddIXWithRegisterContext * /*ctx*/) override { }
  virtual void exitAddIXWithRegister(Z80Parser::AddIXWithRegisterContext * /*ctx*/) override { }

  virtual void enterAddIYWithRegister(Z80Parser::AddIYWithRegisterContext * /*ctx*/) override { }
  virtual void exitAddIYWithRegister(Z80Parser::AddIYWithRegisterContext * /*ctx*/) override { }

  virtual void enterIncrementWordRegister(Z80Parser::IncrementWordRegisterContext * /*ctx*/) override { }
  virtual void exitIncrementWordRegister(Z80Parser::IncrementWordRegisterContext * /*ctx*/) override { }

  virtual void enterIncrementIX(Z80Parser::IncrementIXContext * /*ctx*/) override { }
  virtual void exitIncrementIX(Z80Parser::IncrementIXContext * /*ctx*/) override { }

  virtual void enterIncrementIY(Z80Parser::IncrementIYContext * /*ctx*/) override { }
  virtual void exitIncrementIY(Z80Parser::IncrementIYContext * /*ctx*/) override { }

  virtual void enterDecrementWordRegister(Z80Parser::DecrementWordRegisterContext * /*ctx*/) override { }
  virtual void exitDecrementWordRegister(Z80Parser::DecrementWordRegisterContext * /*ctx*/) override { }

  virtual void enterDecrementIX(Z80Parser::DecrementIXContext * /*ctx*/) override { }
  virtual void exitDecrementIX(Z80Parser::DecrementIXContext * /*ctx*/) override { }

  virtual void enterDecrementIY(Z80Parser::DecrementIYContext * /*ctx*/) override { }
  virtual void exitDecrementIY(Z80Parser::DecrementIYContext * /*ctx*/) override { }

  virtual void enterWordArithemeticCommand(Z80Parser::WordArithemeticCommandContext * /*ctx*/) override { }
  virtual void exitWordArithemeticCommand(Z80Parser::WordArithemeticCommandContext * /*ctx*/) override { }

  virtual void enterRotateLeftCircularA(Z80Parser::RotateLeftCircularAContext * /*ctx*/) override { }
  virtual void exitRotateLeftCircularA(Z80Parser::RotateLeftCircularAContext * /*ctx*/) override { }

  virtual void enterRotateLeftThroughCarryA(Z80Parser::RotateLeftThroughCarryAContext * /*ctx*/) override { }
  virtual void exitRotateLeftThroughCarryA(Z80Parser::RotateLeftThroughCarryAContext * /*ctx*/) override { }

  virtual void enterRotateRightCircularA(Z80Parser::RotateRightCircularAContext * /*ctx*/) override { }
  virtual void exitRotateRightCircularA(Z80Parser::RotateRightCircularAContext * /*ctx*/) override { }

  virtual void enterRotateRightThroughCarryA(Z80Parser::RotateRightThroughCarryAContext * /*ctx*/) override { }
  virtual void exitRotateRightThroughCarryA(Z80Parser::RotateRightThroughCarryAContext * /*ctx*/) override { }

  virtual void enterRotateLeftCircularCommandName(Z80Parser::RotateLeftCircularCommandNameContext * /*ctx*/) override { }
  virtual void exitRotateLeftCircularCommandName(Z80Parser::RotateLeftCircularCommandNameContext * /*ctx*/) override { }

  virtual void enterRotateLeftThroughCarryCommandName(Z80Parser::RotateLeftThroughCarryCommandNameContext * /*ctx*/) override { }
  virtual void exitRotateLeftThroughCarryCommandName(Z80Parser::RotateLeftThroughCarryCommandNameContext * /*ctx*/) override { }

  virtual void enterRotateRightCircularCommandName(Z80Parser::RotateRightCircularCommandNameContext * /*ctx*/) override { }
  virtual void exitRotateRightCircularCommandName(Z80Parser::RotateRightCircularCommandNameContext * /*ctx*/) override { }

  virtual void enterRotateRightThroughCarryCommandName(Z80Parser::RotateRightThroughCarryCommandNameContext * /*ctx*/) override { }
  virtual void exitRotateRightThroughCarryCommandName(Z80Parser::RotateRightThroughCarryCommandNameContext * /*ctx*/) override { }

  virtual void enterShiftLeftArithmeticCommandName(Z80Parser::ShiftLeftArithmeticCommandNameContext * /*ctx*/) override { }
  virtual void exitShiftLeftArithmeticCommandName(Z80Parser::ShiftLeftArithmeticCommandNameContext * /*ctx*/) override { }

  virtual void enterShiftLeftLogicalCommandName(Z80Parser::ShiftLeftLogicalCommandNameContext * /*ctx*/) override { }
  virtual void exitShiftLeftLogicalCommandName(Z80Parser::ShiftLeftLogicalCommandNameContext * /*ctx*/) override { }

  virtual void enterShiftRightArithmeticCommandName(Z80Parser::ShiftRightArithmeticCommandNameContext * /*ctx*/) override { }
  virtual void exitShiftRightArithmeticCommandName(Z80Parser::ShiftRightArithmeticCommandNameContext * /*ctx*/) override { }

  virtual void enterShiftRightLogicalCommandName(Z80Parser::ShiftRightLogicalCommandNameContext * /*ctx*/) override { }
  virtual void exitShiftRightLogicalCommandName(Z80Parser::ShiftRightLogicalCommandNameContext * /*ctx*/) override { }

  virtual void enterRotateDigitLeftCommandName(Z80Parser::RotateDigitLeftCommandNameContext * /*ctx*/) override { }
  virtual void exitRotateDigitLeftCommandName(Z80Parser::RotateDigitLeftCommandNameContext * /*ctx*/) override { }

  virtual void enterRotateDigitRightCommandName(Z80Parser::RotateDigitRightCommandNameContext * /*ctx*/) override { }
  virtual void exitRotateDigitRightCommandName(Z80Parser::RotateDigitRightCommandNameContext * /*ctx*/) override { }

  virtual void enterRotateLeftCircularRegister(Z80Parser::RotateLeftCircularRegisterContext * /*ctx*/) override { }
  virtual void exitRotateLeftCircularRegister(Z80Parser::RotateLeftCircularRegisterContext * /*ctx*/) override { }

  virtual void enterRotateLeftCircularHLPointer(Z80Parser::RotateLeftCircularHLPointerContext * /*ctx*/) override { }
  virtual void exitRotateLeftCircularHLPointer(Z80Parser::RotateLeftCircularHLPointerContext * /*ctx*/) override { }

  virtual void enterRotateLeftCircularIXOffset(Z80Parser::RotateLeftCircularIXOffsetContext * /*ctx*/) override { }
  virtual void exitRotateLeftCircularIXOffset(Z80Parser::RotateLeftCircularIXOffsetContext * /*ctx*/) override { }

  virtual void enterRotateLeftCircularIYOffset(Z80Parser::RotateLeftCircularIYOffsetContext * /*ctx*/) override { }
  virtual void exitRotateLeftCircularIYOffset(Z80Parser::RotateLeftCircularIYOffsetContext * /*ctx*/) override { }

  virtual void enterRotateLeftThroughCarryRegister(Z80Parser::RotateLeftThroughCarryRegisterContext * /*ctx*/) override { }
  virtual void exitRotateLeftThroughCarryRegister(Z80Parser::RotateLeftThroughCarryRegisterContext * /*ctx*/) override { }

  virtual void enterRotateLeftThroughCarryHLPointer(Z80Parser::RotateLeftThroughCarryHLPointerContext * /*ctx*/) override { }
  virtual void exitRotateLeftThroughCarryHLPointer(Z80Parser::RotateLeftThroughCarryHLPointerContext * /*ctx*/) override { }

  virtual void enterRotateLeftThroughCarryIXOffset(Z80Parser::RotateLeftThroughCarryIXOffsetContext * /*ctx*/) override { }
  virtual void exitRotateLeftThroughCarryIXOffset(Z80Parser::RotateLeftThroughCarryIXOffsetContext * /*ctx*/) override { }

  virtual void enterRotateLeftThroughCarryIYOffset(Z80Parser::RotateLeftThroughCarryIYOffsetContext * /*ctx*/) override { }
  virtual void exitRotateLeftThroughCarryIYOffset(Z80Parser::RotateLeftThroughCarryIYOffsetContext * /*ctx*/) override { }

  virtual void enterRotateRightCircularRegister(Z80Parser::RotateRightCircularRegisterContext * /*ctx*/) override { }
  virtual void exitRotateRightCircularRegister(Z80Parser::RotateRightCircularRegisterContext * /*ctx*/) override { }

  virtual void enterRotateRightCircularHLPointer(Z80Parser::RotateRightCircularHLPointerContext * /*ctx*/) override { }
  virtual void exitRotateRightCircularHLPointer(Z80Parser::RotateRightCircularHLPointerContext * /*ctx*/) override { }

  virtual void enterRotateRightCircularIXOffset(Z80Parser::RotateRightCircularIXOffsetContext * /*ctx*/) override { }
  virtual void exitRotateRightCircularIXOffset(Z80Parser::RotateRightCircularIXOffsetContext * /*ctx*/) override { }

  virtual void enterRotateRightCircularIYOffset(Z80Parser::RotateRightCircularIYOffsetContext * /*ctx*/) override { }
  virtual void exitRotateRightCircularIYOffset(Z80Parser::RotateRightCircularIYOffsetContext * /*ctx*/) override { }

  virtual void enterRotateRightThroughCarryRegister(Z80Parser::RotateRightThroughCarryRegisterContext * /*ctx*/) override { }
  virtual void exitRotateRightThroughCarryRegister(Z80Parser::RotateRightThroughCarryRegisterContext * /*ctx*/) override { }

  virtual void enterRotateRightThroughCarryHLPointer(Z80Parser::RotateRightThroughCarryHLPointerContext * /*ctx*/) override { }
  virtual void exitRotateRightThroughCarryHLPointer(Z80Parser::RotateRightThroughCarryHLPointerContext * /*ctx*/) override { }

  virtual void enterRotateRightThroughCarryIXOffset(Z80Parser::RotateRightThroughCarryIXOffsetContext * /*ctx*/) override { }
  virtual void exitRotateRightThroughCarryIXOffset(Z80Parser::RotateRightThroughCarryIXOffsetContext * /*ctx*/) override { }

  virtual void enterRotateRightThroughCarryIYOffset(Z80Parser::RotateRightThroughCarryIYOffsetContext * /*ctx*/) override { }
  virtual void exitRotateRightThroughCarryIYOffset(Z80Parser::RotateRightThroughCarryIYOffsetContext * /*ctx*/) override { }

  virtual void enterShiftLeftArithmetic(Z80Parser::ShiftLeftArithmeticContext * /*ctx*/) override { }
  virtual void exitShiftLeftArithmetic(Z80Parser::ShiftLeftArithmeticContext * /*ctx*/) override { }

  virtual void enterShiftLeftLogical(Z80Parser::ShiftLeftLogicalContext * /*ctx*/) override { }
  virtual void exitShiftLeftLogical(Z80Parser::ShiftLeftLogicalContext * /*ctx*/) override { }

  virtual void enterShiftRightArithmetic(Z80Parser::ShiftRightArithmeticContext * /*ctx*/) override { }
  virtual void exitShiftRightArithmetic(Z80Parser::ShiftRightArithmeticContext * /*ctx*/) override { }

  virtual void enterShiftRightLogical(Z80Parser::ShiftRightLogicalContext * /*ctx*/) override { }
  virtual void exitShiftRightLogical(Z80Parser::ShiftRightLogicalContext * /*ctx*/) override { }

  virtual void enterRotateDigitLeft(Z80Parser::RotateDigitLeftContext * /*ctx*/) override { }
  virtual void exitRotateDigitLeft(Z80Parser::RotateDigitLeftContext * /*ctx*/) override { }

  virtual void enterRotateDigitRight(Z80Parser::RotateDigitRightContext * /*ctx*/) override { }
  virtual void exitRotateDigitRight(Z80Parser::RotateDigitRightContext * /*ctx*/) override { }

  virtual void enterRotateCommand(Z80Parser::RotateCommandContext * /*ctx*/) override { }
  virtual void exitRotateCommand(Z80Parser::RotateCommandContext * /*ctx*/) override { }

  virtual void enterBitCommandName(Z80Parser::BitCommandNameContext * /*ctx*/) override { }
  virtual void exitBitCommandName(Z80Parser::BitCommandNameContext * /*ctx*/) override { }

  virtual void enterSetCommandName(Z80Parser::SetCommandNameContext * /*ctx*/) override { }
  virtual void exitSetCommandName(Z80Parser::SetCommandNameContext * /*ctx*/) override { }

  virtual void enterResetBitCommandName(Z80Parser::ResetBitCommandNameContext * /*ctx*/) override { }
  virtual void exitResetBitCommandName(Z80Parser::ResetBitCommandNameContext * /*ctx*/) override { }

  virtual void enterTestBitInRegister(Z80Parser::TestBitInRegisterContext * /*ctx*/) override { }
  virtual void exitTestBitInRegister(Z80Parser::TestBitInRegisterContext * /*ctx*/) override { }

  virtual void enterTestBitInHLPointer(Z80Parser::TestBitInHLPointerContext * /*ctx*/) override { }
  virtual void exitTestBitInHLPointer(Z80Parser::TestBitInHLPointerContext * /*ctx*/) override { }

  virtual void enterTestBitInIXOffset(Z80Parser::TestBitInIXOffsetContext * /*ctx*/) override { }
  virtual void exitTestBitInIXOffset(Z80Parser::TestBitInIXOffsetContext * /*ctx*/) override { }

  virtual void enterTestBitInIYOffset(Z80Parser::TestBitInIYOffsetContext * /*ctx*/) override { }
  virtual void exitTestBitInIYOffset(Z80Parser::TestBitInIYOffsetContext * /*ctx*/) override { }

  virtual void enterSetBitInRegister(Z80Parser::SetBitInRegisterContext * /*ctx*/) override { }
  virtual void exitSetBitInRegister(Z80Parser::SetBitInRegisterContext * /*ctx*/) override { }

  virtual void enterSetBitInHLPointer(Z80Parser::SetBitInHLPointerContext * /*ctx*/) override { }
  virtual void exitSetBitInHLPointer(Z80Parser::SetBitInHLPointerContext * /*ctx*/) override { }

  virtual void enterSetBitInIXOffset(Z80Parser::SetBitInIXOffsetContext * /*ctx*/) override { }
  virtual void exitSetBitInIXOffset(Z80Parser::SetBitInIXOffsetContext * /*ctx*/) override { }

  virtual void enterSetBitInIYOffset(Z80Parser::SetBitInIYOffsetContext * /*ctx*/) override { }
  virtual void exitSetBitInIYOffset(Z80Parser::SetBitInIYOffsetContext * /*ctx*/) override { }

  virtual void enterResetBitInRegister(Z80Parser::ResetBitInRegisterContext * /*ctx*/) override { }
  virtual void exitResetBitInRegister(Z80Parser::ResetBitInRegisterContext * /*ctx*/) override { }

  virtual void enterResetBitHLPointer(Z80Parser::ResetBitHLPointerContext * /*ctx*/) override { }
  virtual void exitResetBitHLPointer(Z80Parser::ResetBitHLPointerContext * /*ctx*/) override { }

  virtual void enterResetBitIXOffset(Z80Parser::ResetBitIXOffsetContext * /*ctx*/) override { }
  virtual void exitResetBitIXOffset(Z80Parser::ResetBitIXOffsetContext * /*ctx*/) override { }

  virtual void enterResetBitIYOffset(Z80Parser::ResetBitIYOffsetContext * /*ctx*/) override { }
  virtual void exitResetBitIYOffset(Z80Parser::ResetBitIYOffsetContext * /*ctx*/) override { }

  virtual void enterBitManipulationCommand(Z80Parser::BitManipulationCommandContext * /*ctx*/) override { }
  virtual void exitBitManipulationCommand(Z80Parser::BitManipulationCommandContext * /*ctx*/) override { }

  virtual void enterJumpCondition(Z80Parser::JumpConditionContext * /*ctx*/) override { }
  virtual void exitJumpCondition(Z80Parser::JumpConditionContext * /*ctx*/) override { }

  virtual void enterJumpCommandName(Z80Parser::JumpCommandNameContext * /*ctx*/) override { }
  virtual void exitJumpCommandName(Z80Parser::JumpCommandNameContext * /*ctx*/) override { }

  virtual void enterJumpRelativeCommandName(Z80Parser::JumpRelativeCommandNameContext * /*ctx*/) override { }
  virtual void exitJumpRelativeCommandName(Z80Parser::JumpRelativeCommandNameContext * /*ctx*/) override { }

  virtual void enterJumpRelativeAndDecrementCommandName(Z80Parser::JumpRelativeAndDecrementCommandNameContext * /*ctx*/) override { }
  virtual void exitJumpRelativeAndDecrementCommandName(Z80Parser::JumpRelativeAndDecrementCommandNameContext * /*ctx*/) override { }

  virtual void enterCallCommandName(Z80Parser::CallCommandNameContext * /*ctx*/) override { }
  virtual void exitCallCommandName(Z80Parser::CallCommandNameContext * /*ctx*/) override { }

  virtual void enterReturnCommandName(Z80Parser::ReturnCommandNameContext * /*ctx*/) override { }
  virtual void exitReturnCommandName(Z80Parser::ReturnCommandNameContext * /*ctx*/) override { }

  virtual void enterReturnAndEnableInterruptCommandName(Z80Parser::ReturnAndEnableInterruptCommandNameContext * /*ctx*/) override { }
  virtual void exitReturnAndEnableInterruptCommandName(Z80Parser::ReturnAndEnableInterruptCommandNameContext * /*ctx*/) override { }

  virtual void enterReturnFromNonMaskableInterruptCommandName(Z80Parser::ReturnFromNonMaskableInterruptCommandNameContext * /*ctx*/) override { }
  virtual void exitReturnFromNonMaskableInterruptCommandName(Z80Parser::ReturnFromNonMaskableInterruptCommandNameContext * /*ctx*/) override { }

  virtual void enterRestartCommandName(Z80Parser::RestartCommandNameContext * /*ctx*/) override { }
  virtual void exitRestartCommandName(Z80Parser::RestartCommandNameContext * /*ctx*/) override { }

  virtual void enterJumpToAbsoluteAddress(Z80Parser::JumpToAbsoluteAddressContext * /*ctx*/) override { }
  virtual void exitJumpToAbsoluteAddress(Z80Parser::JumpToAbsoluteAddressContext * /*ctx*/) override { }

  virtual void enterJumpToAbsoluteAddressGivenCondition(Z80Parser::JumpToAbsoluteAddressGivenConditionContext * /*ctx*/) override { }
  virtual void exitJumpToAbsoluteAddressGivenCondition(Z80Parser::JumpToAbsoluteAddressGivenConditionContext * /*ctx*/) override { }

  virtual void enterJumpToRelativeAddress(Z80Parser::JumpToRelativeAddressContext * /*ctx*/) override { }
  virtual void exitJumpToRelativeAddress(Z80Parser::JumpToRelativeAddressContext * /*ctx*/) override { }

  virtual void enterJumpToRelativeAddressGivenCondition(Z80Parser::JumpToRelativeAddressGivenConditionContext * /*ctx*/) override { }
  virtual void exitJumpToRelativeAddressGivenCondition(Z80Parser::JumpToRelativeAddressGivenConditionContext * /*ctx*/) override { }

  virtual void enterJumpToHL(Z80Parser::JumpToHLContext * /*ctx*/) override { }
  virtual void exitJumpToHL(Z80Parser::JumpToHLContext * /*ctx*/) override { }

  virtual void enterJumpToIX(Z80Parser::JumpToIXContext * /*ctx*/) override { }
  virtual void exitJumpToIX(Z80Parser::JumpToIXContext * /*ctx*/) override { }

  virtual void enterJumpToIY(Z80Parser::JumpToIYContext * /*ctx*/) override { }
  virtual void exitJumpToIY(Z80Parser::JumpToIYContext * /*ctx*/) override { }

  virtual void enterJumpRelativeAndDecrement(Z80Parser::JumpRelativeAndDecrementContext * /*ctx*/) override { }
  virtual void exitJumpRelativeAndDecrement(Z80Parser::JumpRelativeAndDecrementContext * /*ctx*/) override { }

  virtual void enterCallSubroutine(Z80Parser::CallSubroutineContext * /*ctx*/) override { }
  virtual void exitCallSubroutine(Z80Parser::CallSubroutineContext * /*ctx*/) override { }

  virtual void enterCallSubroutineWithCondition(Z80Parser::CallSubroutineWithConditionContext * /*ctx*/) override { }
  virtual void exitCallSubroutineWithCondition(Z80Parser::CallSubroutineWithConditionContext * /*ctx*/) override { }

  virtual void enterReturnFromSubroutine(Z80Parser::ReturnFromSubroutineContext * /*ctx*/) override { }
  virtual void exitReturnFromSubroutine(Z80Parser::ReturnFromSubroutineContext * /*ctx*/) override { }

  virtual void enterReturnFromSubroutineGivenCondition(Z80Parser::ReturnFromSubroutineGivenConditionContext * /*ctx*/) override { }
  virtual void exitReturnFromSubroutineGivenCondition(Z80Parser::ReturnFromSubroutineGivenConditionContext * /*ctx*/) override { }

  virtual void enterReturnAndEnableInterrupt(Z80Parser::ReturnAndEnableInterruptContext * /*ctx*/) override { }
  virtual void exitReturnAndEnableInterrupt(Z80Parser::ReturnAndEnableInterruptContext * /*ctx*/) override { }

  virtual void enterReturnFromNonMaskableInterrupt(Z80Parser::ReturnFromNonMaskableInterruptContext * /*ctx*/) override { }
  virtual void exitReturnFromNonMaskableInterrupt(Z80Parser::ReturnFromNonMaskableInterruptContext * /*ctx*/) override { }

  virtual void enterRestartCommand(Z80Parser::RestartCommandContext * /*ctx*/) override { }
  virtual void exitRestartCommand(Z80Parser::RestartCommandContext * /*ctx*/) override { }

  virtual void enterBranchCommand(Z80Parser::BranchCommandContext * /*ctx*/) override { }
  virtual void exitBranchCommand(Z80Parser::BranchCommandContext * /*ctx*/) override { }

  virtual void enterInputCommandName(Z80Parser::InputCommandNameContext * /*ctx*/) override { }
  virtual void exitInputCommandName(Z80Parser::InputCommandNameContext * /*ctx*/) override { }

  virtual void enterOutCommandName(Z80Parser::OutCommandNameContext * /*ctx*/) override { }
  virtual void exitOutCommandName(Z80Parser::OutCommandNameContext * /*ctx*/) override { }

  virtual void enterInputDataIntoA(Z80Parser::InputDataIntoAContext * /*ctx*/) override { }
  virtual void exitInputDataIntoA(Z80Parser::InputDataIntoAContext * /*ctx*/) override { }

  virtual void enterInputDataIntoRegister(Z80Parser::InputDataIntoRegisterContext * /*ctx*/) override { }
  virtual void exitInputDataIntoRegister(Z80Parser::InputDataIntoRegisterContext * /*ctx*/) override { }

  virtual void enterIni(Z80Parser::IniContext * /*ctx*/) override { }
  virtual void exitIni(Z80Parser::IniContext * /*ctx*/) override { }

  virtual void enterInir(Z80Parser::InirContext * /*ctx*/) override { }
  virtual void exitInir(Z80Parser::InirContext * /*ctx*/) override { }

  virtual void enterInd(Z80Parser::IndContext * /*ctx*/) override { }
  virtual void exitInd(Z80Parser::IndContext * /*ctx*/) override { }

  virtual void enterIndr(Z80Parser::IndrContext * /*ctx*/) override { }
  virtual void exitIndr(Z80Parser::IndrContext * /*ctx*/) override { }

  virtual void enterOutputAIntoDataPointer(Z80Parser::OutputAIntoDataPointerContext * /*ctx*/) override { }
  virtual void exitOutputAIntoDataPointer(Z80Parser::OutputAIntoDataPointerContext * /*ctx*/) override { }

  virtual void enterOutputRegisterIntoCPointer(Z80Parser::OutputRegisterIntoCPointerContext * /*ctx*/) override { }
  virtual void exitOutputRegisterIntoCPointer(Z80Parser::OutputRegisterIntoCPointerContext * /*ctx*/) override { }

  virtual void enterOuti(Z80Parser::OutiContext * /*ctx*/) override { }
  virtual void exitOuti(Z80Parser::OutiContext * /*ctx*/) override { }

  virtual void enterOtir(Z80Parser::OtirContext * /*ctx*/) override { }
  virtual void exitOtir(Z80Parser::OtirContext * /*ctx*/) override { }

  virtual void enterOutd(Z80Parser::OutdContext * /*ctx*/) override { }
  virtual void exitOutd(Z80Parser::OutdContext * /*ctx*/) override { }

  virtual void enterOtdr(Z80Parser::OtdrContext * /*ctx*/) override { }
  virtual void exitOtdr(Z80Parser::OtdrContext * /*ctx*/) override { }

  virtual void enterInputAndOutpuCommand(Z80Parser::InputAndOutpuCommandContext * /*ctx*/) override { }
  virtual void exitInputAndOutpuCommand(Z80Parser::InputAndOutpuCommandContext * /*ctx*/) override { }

  virtual void enterLabel(Z80Parser::LabelContext * /*ctx*/) override { }
  virtual void exitLabel(Z80Parser::LabelContext * /*ctx*/) override { }

  virtual void enterOrgDirective(Z80Parser::OrgDirectiveContext * /*ctx*/) override { }
  virtual void exitOrgDirective(Z80Parser::OrgDirectiveContext * /*ctx*/) override { }

  virtual void enterCharNumber(Z80Parser::CharNumberContext * /*ctx*/) override { }
  virtual void exitCharNumber(Z80Parser::CharNumberContext * /*ctx*/) override { }

  virtual void enterName(Z80Parser::NameContext * /*ctx*/) override { }
  virtual void exitName(Z80Parser::NameContext * /*ctx*/) override { }

  virtual void enterNumber(Z80Parser::NumberContext * /*ctx*/) override { }
  virtual void exitNumber(Z80Parser::NumberContext * /*ctx*/) override { }

  virtual void enterDecimalNumber(Z80Parser::DecimalNumberContext * /*ctx*/) override { }
  virtual void exitDecimalNumber(Z80Parser::DecimalNumberContext * /*ctx*/) override { }

  virtual void enterHexNumber(Z80Parser::HexNumberContext * /*ctx*/) override { }
  virtual void exitHexNumber(Z80Parser::HexNumberContext * /*ctx*/) override { }

  virtual void enterComment(Z80Parser::CommentContext * /*ctx*/) override { }
  virtual void exitComment(Z80Parser::CommentContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};


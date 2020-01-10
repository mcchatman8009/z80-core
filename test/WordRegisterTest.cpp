#include <gtest/gtest.h>
#include "WordRegister.h"

TEST(WordRegisterTest, Initialize) { // NOLINT
    FlagRegister flagRegister;
    WordRegister wordRegister{flagRegister};
    wordRegister.initialize();

    ASSERT_EQ(flagRegister.getByteValue().getValue(), 0x00);
    ASSERT_EQ(wordRegister.getWordValue().getValue(), 0x00);
}

TEST(WordRegisterTest, SimpleIncrementWord) { // NOLINT
    FlagRegister flagRegister;
    WordRegister wordRegister{flagRegister};
    wordRegister.initialize();

    wordRegister.setWordValue(Z80Word{0x0});
    wordRegister.incrementWord();

    ASSERT_EQ(wordRegister.getWordValue().getValue(), 0x01);
    ASSERT_EQ(wordRegister.getWordValue().getLowByte().getValue(), 0x01);
    ASSERT_EQ(wordRegister.getWordValue().getHighByte().getValue(), 0x00);
}

TEST(WordRegisterTest, IncrementWord) { // NOLINT
    FlagRegister flagRegister;
    WordRegister wordRegister{flagRegister};
    wordRegister.initialize();

    wordRegister.setWordValue(Z80Word{0x00FF});
    wordRegister.incrementWord();

    ASSERT_EQ(wordRegister.getWordValue().getValue(), 0x0100);
    ASSERT_EQ(wordRegister.getWordValue().getLowByte().getValue(), 0x00);
    ASSERT_EQ(wordRegister.getWordValue().getHighByte().getValue(), 0x01);
}

TEST(WordRegisterTest, DecrementWord) { // NOLINT
    FlagRegister flagRegister;
    WordRegister wordRegister{flagRegister};
    wordRegister.initialize();

    wordRegister.setWordValue(Z80Word{0x100});
    wordRegister.decrementWord();

    ASSERT_EQ(wordRegister.getWordValue().getValue(), 0x00FF);
    ASSERT_EQ(wordRegister.getWordValue().getLowByte().getValue(), 0xFF);
    ASSERT_EQ(wordRegister.getWordValue().getHighByte().getValue(), 0x00);
}

TEST(WordRegisterTest, SwapShadowRegister) { // NOLINT
    FlagRegister flagRegister;
    WordRegister wordRegister{flagRegister};
    wordRegister.initialize();

    //
    // Write to the Register before the Swap
    //
    wordRegister.setWordValue(Z80Word{0x1000});
    wordRegister.swapCurrentValueWithShadowValue(); // Swap the current value with the shadow value (offline value).
    wordRegister.setWordValue(Z80Word{0x0058}); // Write to live data.
    wordRegister.swapCurrentValueWithShadowValue(); // Switch to the offline value

    // We should have the initial value.
    ASSERT_EQ(wordRegister.getWordValue().getValue(), 0x1000);

    wordRegister.swapCurrentValueWithShadowValue();

    // We should have the on deck shadow value.
    ASSERT_EQ(wordRegister.getWordValue().getValue(), 0x0058);
}


TEST(WordRegisterTest, IncrementLowByte) { // NOLINT
    FlagRegister flagRegister;
    WordRegister wordRegister{flagRegister};
    wordRegister.initialize();

    wordRegister.setWordValue(Z80Word{0x01FF});
    wordRegister.incrementLowByte();

    ASSERT_EQ(wordRegister.getWordValue().getLowByte().getValue(), 0x00);
    ASSERT_EQ(wordRegister.getWordValue().getHighByte().getValue(), 0x01);
}

TEST(WordRegisterTest, IncrementHighByte) { // NOLINT
    FlagRegister flagRegister;
    WordRegister wordRegister{flagRegister};
    wordRegister.initialize();

    wordRegister.setWordValue(Z80Word{0x01FF});
    wordRegister.incrementHighByte();

    ASSERT_EQ(wordRegister.getWordValue().getLowByte().getValue(), 0xFF);
    ASSERT_EQ(wordRegister.getWordValue().getHighByte().getValue(), 0x02);
}


TEST(WordRegisterTest, DecrementLowByte) { // NOLINT
    FlagRegister flagRegister;
    WordRegister wordRegister{flagRegister};
    wordRegister.initialize();

    wordRegister.setWordValue(Z80Word{0x01FF});
    wordRegister.decrementLowByte();

    ASSERT_EQ(wordRegister.getWordValue().getLowByte().getValue(), 0xFE);
    ASSERT_EQ(wordRegister.getWordValue().getHighByte().getValue(), 0x01);
}

TEST(WordRegisterTest, DecrementHighByte) { // NOLINT
    FlagRegister flagRegister;
    WordRegister wordRegister{flagRegister};
    wordRegister.initialize();

    wordRegister.setWordValue(Z80Word{0x01FF});
    wordRegister.decrementHighByte();

    ASSERT_EQ(wordRegister.getWordValue().getLowByte().getValue(), 0xFF);
    ASSERT_EQ(wordRegister.getWordValue().getHighByte().getValue(), 0x00);
}


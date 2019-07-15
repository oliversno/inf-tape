#include "inf_tape.cpp"
#include "tape_deque.cpp"
#include <gtest/gtest.h>

TEST(ApplyTest, InitInf){
    infTape<int> t;
    EXPECT_EQ(t.get(), 0);
}

TEST(ApplyTest, InitDeque){
    tapeDeque<int> t;
    EXPECT_EQ(t.get(), 0);
}

TEST(ApplyTest, IncInf){
    infTape<int> t;
    t.increment();
    EXPECT_EQ(t.get(), 0);
}

TEST(ApplyTest, IncDeque){
    tapeDeque<int> t;
    t.increment();
    EXPECT_EQ(t.get(), 0);
}

TEST(ApplyTest, DecInf){
    infTape<int> t;
    t.decrement();
    EXPECT_EQ(t.get(), 0);
}

TEST(ApplyTest, DecDeque){
    tapeDeque<int> t;
    t.decrement();
    EXPECT_EQ(t.get(), 0);
}

TEST(ApplyTest, SetInf){
    infTape<int> t;
    t.set(1);
    EXPECT_EQ(t.get(), 1);
}

TEST(ApplyTest, SetDeque){
    tapeDeque<int> t;
    t.set(1);
    EXPECT_EQ(t.get(), 1);
}

TEST(ApplyTest, MoveInf){
    infTape<int> t;
    t.set(1);
    t.increment(2);
    t.decrement();
    t.decrement();
    EXPECT_EQ(t.get(), 1);
}

TEST(ApplyTest, MoveDeque){
    tapeDeque<int> t;
    t.set(1);
    t.increment(2);
    t.decrement();
    t.decrement();
    EXPECT_EQ(t.get(), 1);
}


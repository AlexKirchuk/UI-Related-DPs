#include "model.h"
#include <gtest/gtest.h>

TEST(ModelTest, DefaultValue) {
    Model m;
    EXPECT_EQ(m.getValue(), 0);
}

TEST(ModelTest, SetAndGet) {
    Model m;
    m.setValue(42);
    EXPECT_EQ(m.getValue(), 42);
}

TEST(ModelTest, IncrementAndAdd) {
    Model m(10);
    m.increment();
    EXPECT_EQ(m.getValue(), 11);
    m.add(4);
    EXPECT_EQ(m.getValue(), 15);
}

TEST(ModelTest, Reset) {
    Model m(7);
    m.reset();
    EXPECT_EQ(m.getValue(), 0);
}

TEST(ModelTest, NotifyCallback) {
    Model m;
    int observed = -1;
    m.setChangeCallback([&observed](int v) { observed = v; });
    m.setValue(8);
    m.notify();
    EXPECT_EQ(observed, 8);
}
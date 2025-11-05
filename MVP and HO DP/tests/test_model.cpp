#include "../include/model.h"
#include <gtest/gtest.h>

TEST(ModelTest, SumWorksCorrectly) {
    Model m;
    m.setNumbers(2, 3);
    EXPECT_EQ(m.sum(), 5);

    m.setNumbers(0, 3);
    EXPECT_EQ(m.sum(), 3);

    m.setNumbers(-3, 3);
    EXPECT_EQ(m.sum(), 0);
}
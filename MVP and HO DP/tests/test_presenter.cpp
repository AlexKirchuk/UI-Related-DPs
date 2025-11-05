#include "../include/presenter.h"
#include "../include/model.h"
#include "../include/view.h"
#include <gtest/gtest.h>
#include <sstream>
#include <iostream>

TEST(PresenterTest, ProducesCorrectOutput) {
    Model m;
    View v;
    Presenter p(m, v);

    testing::internal::CaptureStdout();
    p.onCalculate(4, 6);
    std::string output = testing::internal::GetCapturedStdout();

    EXPECT_NE(output.find("Result: 10"), std::string::npos);
}

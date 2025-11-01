#include "controller.h"
#include "model.h"
#include "view.h"
#include <gtest/gtest.h>
#include <vector>
#include <string>

class TestView : public IView {
public:
    std::vector<int> renders;
    std::vector<std::string> messages;

    void render(int value) override { renders.push_back(value); }
    void showMessage(const std::string& msg) override { messages.push_back(msg); }
};

TEST(ControllerTest, Increment) {
    Model m;
    TestView v;
    Controller c(m, &v);
    c.handleIncrement();
    EXPECT_EQ(m.getValue(), 1);
    ASSERT_EQ(v.renders.size(), 1u);
    EXPECT_EQ(v.renders[0], 1);
}

TEST(ControllerTest, Add) {
    Model m;
    TestView v;
    Controller c(m, &v);
    c.handleAdd(5);
    EXPECT_EQ(m.getValue(), 5);
    ASSERT_EQ(v.renders.size(), 1u);
    EXPECT_EQ(v.renders[0], 5);
}

TEST(ControllerTest, Reset) {
    Model m(99);
    TestView v;
    Controller c(m, &v);
    c.handleReset();
    EXPECT_EQ(m.getValue(), 0);
    ASSERT_EQ(v.renders.size(), 1u);
    EXPECT_EQ(v.renders[0], 0);
}

TEST(ControllerTest, WorksWithoutView) {
    Model m;
    Controller c(m);
    c.handleIncrement();
    EXPECT_EQ(m.getValue(), 1);
}
#pragma once

class Model {
public:
    void setNumbers(int a, int b);
    int getA() const;
    int getB() const;
    int sum() const;

private:
    int a_{ 0 };
    int b_{ 0 };
};

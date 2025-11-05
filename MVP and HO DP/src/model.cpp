#include "../include/model.h"

void Model::setNumbers(int a, int b) {
    a_ = a;
    b_ = b;
}

int Model::getA() const { return a_; }
int Model::getB() const { return b_; }
int Model::sum() const { return a_ + b_; }

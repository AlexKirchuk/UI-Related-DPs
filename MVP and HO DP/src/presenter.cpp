#include "../include/presenter.h"

Presenter::Presenter(Model& m, View& v) : model_(m), view_(v) {}

void Presenter::onCalculate(int a, int b) {
    model_.setNumbers(a, b);
    int result = model_.sum();
    view_.showResult(result);
}

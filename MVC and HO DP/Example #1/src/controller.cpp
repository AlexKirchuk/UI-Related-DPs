#include "controller.h"

Controller::Controller(Model& model, IView* view)
    : model_(model), view_(view) {
}

void Controller::setView(IView* v) { view_ = v; }

void Controller::handleIncrement() {
    model_.increment();
    model_.notify();
    if (view_) view_->render(model_.getValue());
}

void Controller::handleAdd(int delta) {
    model_.add(delta);
    model_.notify();
    if (view_) view_->render(model_.getValue());
}

void Controller::handleReset() {
    model_.reset();
    model_.notify();
    if (view_) view_->render(model_.getValue());
}

int Controller::getModelValue() const {
    return model_.getValue();
}
#include "model.h"

Model::Model() : value_(0) {}
Model::Model(int initial) : value_(initial) {}

void Model::setValue(int v) { value_ = v; }
int Model::getValue() const { return value_; }
void Model::increment() { ++value_; }
void Model::add(int delta) { value_ += delta; }
void Model::reset() { value_ = 0; }

void Model::setChangeCallback(ChangeCallback cb) { callback_ = std::move(cb); }

void Model::notify() const {
    if (callback_) callback_(value_);
}
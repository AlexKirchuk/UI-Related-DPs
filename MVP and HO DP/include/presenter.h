#pragma once
#include "model.h"
#include "view.h"

class Presenter {
public:
    Presenter(Model& m, View& v);
    void onCalculate(int a, int b);

private:
    Model& model_;
    View& view_;
};

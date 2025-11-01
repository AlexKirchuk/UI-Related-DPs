#ifndef CONTROLLER_H
#define CONTROLLER_H

#include "model.h"
#include "view.h"

class Controller {
    Model& model_;
    IView* view_;

public:
    Controller(Model& model, IView* view = nullptr);

    void setView(IView* v);

    void handleIncrement();
    void handleAdd(int delta);
    void handleReset();

    int getModelValue() const;
};

#endif
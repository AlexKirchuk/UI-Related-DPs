#ifndef MODEL_H
#define MODEL_H

#include <functional>

class Model {
    int value_;
    using ChangeCallback = std::function<void(int)>;
    ChangeCallback callback_;

public:
    Model();
    explicit Model(int initial);

    void setValue(int v);
    int getValue() const;
    void increment();
    void add(int delta);
    void reset();

    void setChangeCallback(ChangeCallback cb);
    void notify() const;
};

#endif
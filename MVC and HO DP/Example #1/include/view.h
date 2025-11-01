#ifndef VIEW_H
#define VIEW_H

#include <string>
#include <memory>

class IView {
public:
    virtual ~IView() = default;
    virtual void render(int value) = 0;
    virtual void showMessage(const std::string& msg) = 0;
};

std::unique_ptr<IView> createConsoleView();

#endif
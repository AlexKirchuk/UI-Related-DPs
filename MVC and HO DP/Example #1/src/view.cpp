#include "view.h"
#include <iostream>

class ConsoleView : public IView {
public:
    void render(int value) override {
        std::cout << "Model value: " << value << std::endl;
    }

    void showMessage(const std::string& msg) override {
        std::cout << msg << std::endl;
    }
};

std::unique_ptr<IView> createConsoleView() {
    return std::make_unique<ConsoleView>();
}
#include "../include/view.h"
#include <iostream>

void View::showMessage(const std::string& message) const {
    std::cout << message << "\n";
}

void View::showResult(int result) const {
    std::cout << "Result: " << result << "\n";
}

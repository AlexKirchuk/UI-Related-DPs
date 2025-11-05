#pragma once
#include <string>

class View {
public:
    void showMessage(const std::string& message) const;
    void showResult(int result) const;
};

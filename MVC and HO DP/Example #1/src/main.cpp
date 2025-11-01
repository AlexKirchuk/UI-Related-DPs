#include "model.h"
#include "controller.h"
#include "view.h"
#include <iostream>
#include <string>

int main() {
    Model model;
    auto view = createConsoleView();
    Controller controller(model, view.get());

    std::cout << "Simple MVC (Humble Object) demo\n";
    std::cout << "Commands: i - increment, a <n> - add n, r - reset, q - quit\n";

    std::string cmd;
    while (true) {
        std::cout << "> ";
        if (!std::getline(std::cin, cmd)) break;

        if (cmd == "q") break;
        if (cmd == "i") {
            controller.handleIncrement();
        }
        else if (cmd == "r") {
            controller.handleReset();
        }
        else if (cmd.rfind("a ", 0) == 0) {
            try {
                int n = std::stoi(cmd.substr(2));
                controller.handleAdd(n);
            }
            catch (...) {
                view->showMessage("Invalid number");
            }
        }
        else {
            view->showMessage("Unknown command");
        }
    }

    std::cout << "Bye!\n";
    return 0;
}
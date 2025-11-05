#include "../include/model.h"
#include "../include/view.h"
#include "../include/presenter.h"
#include <iostream>

int main() {
    Model model;
    View view;
    Presenter presenter(model, view);

    int a, b;
    std::cout << "Enter two integers: ";
    if (!(std::cin >> a >> b)) {
        std::cerr << "Invalid input!" << "\n";
        return 1;
    }

    presenter.onCalculate(a, b);
    return 0;
}

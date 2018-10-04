#include <iostream>
#include "Calculator.h"

int main() {
    sax::Calculator calculator;

    try {
        calculator.divide(1,0);
    }
    catch (std::logic_error &e) { std::cout << e.what() << std::endl; }
    return 0;
}
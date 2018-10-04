#include "Calculator.h"
#include <string>
#include <iostream>
#include <cmath>
#include <exception>
namespace sax {
    double Calculator::add(double num1, double num2) { return num1 + num2; }
    int Calculator::add(int num1, int num2) { return num1 + num2; }

    double Calculator::subtract(double num1, double num2) { return num1 - num2; }

    int Calculator::subtract(int num1, int num2) { return num1 - num2; }

    double Calculator::multiply(double num1, double num2) { return num1 * num2; }

    int Calculator::multiply(int num1, int num2) { return num1 * num2; }

    double Calculator::divide(double num1, double num2) {
            if (num2 == 0) throw std::logic_error("Division by zero condition!");
            else return num1 / num2;
    }

    double Calculator::divide(int num1, int num2) {
            if (num2 == 0) throw std::logic_error("Division by zero condition!");
            else return num1 / num2;
    }

    double Calculator::square(double num1) { return sqrt(num1); }

    double Calculator::square(int num1) { return sqrt(num1); }
}
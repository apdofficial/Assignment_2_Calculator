#ifndef ASSIGNMENT_2_CALCULATOR_H
#define ASSIGNMENT_2_CALCULATOR_H
namespace sax {
    class Calculator {
    public:
        double add(double n1, double n2);

        int add(int num1, int num2);

        double subtract(double n1, double n2);

        int subtract(int n1, int n2);

        double multiply(double n1, double n2);

        int multiply(int n1, int n2);

        double divide(double n1, double n2);

        double divide(int n1, int n2);

        double square(double n1);

        double square(int n1);
    };
}

#endif //ASSIGNMENT_2_CALCULATOR_H
#include <iostream>

/* Verifica o maior entre dois números */

double checkNumbers(double num1, double num2);

int main() {
    double num1{};
    double num2{};

    std::cout << "Type the first number: ";
    std::cin >> num1;

    std::cout << "Type the second number: ";
    std::cin >> num2;

    std::cout << "The largest number is " << checkNumbers(num1, num2);

    return 0;
}

double checkNumbers(double num1, double num2) {
    return (num1 > num2) ? num1 : num2;
}
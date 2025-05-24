#include <iostream>

/* Calculadora de fatorial */

void getFactorial(int number);

int main() {
    int number{};

    do {
        std::cout << "Type any number higher than 0: ";
        std::cin >> number;
    } while (number <= 0);

    getFactorial(number);

    return 0;
}

void getFactorial(int number) {
    std::cout << number << "! = ";
    int result = 1;

    for (int i = number; i >= 1; i--) {
        i == 1 ? std::cout << i : std::cout << i << " x ";
        result *= i;
    }

    std::cout << " = " << result << std::endl;
}

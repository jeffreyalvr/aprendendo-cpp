#include <iostream>

/* Verifica se o número é par ou ímpar */

std::string checkNumber(int number);

int main() {

    int number{};

    std::cout << "Type a number: ";
    std::cin >> number;

    std::cout << "The number " << number << checkNumber(number) << std::endl;

    return 0;
}

std::string checkNumber(int number) {
    return number % 2 == 0 ? " is even" : " is odd";
}
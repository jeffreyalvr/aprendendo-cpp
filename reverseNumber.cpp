#include <iostream>

/* Inverte a ordem dos dígitos em um número */

int reverseNumber(int number);

int main() {
  int number{};

  do {
  std::cout << "Type any positive number that has at least 3 digits: ";
  std::cin >> number;
  } while (number < 100);

  std::cout << number << " reversed is " << reverseNumber(number);

  return 0;
}

int reverseNumber(int number) {
  int reversedValue{};
  int currentDigit{};

  while (number > 0) {
    currentDigit = number % 10;
    reversedValue = (reversedValue * 10) + currentDigit;
    number /= 10;
  }

  return reversedValue;
}
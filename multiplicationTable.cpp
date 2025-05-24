#include <iostream>

void multiply(double number);

int main() {
  double number{};

  do {
    std::cout << "Type any number equal or higher than 0: ";
    std::cin >> number;
  } while (number < 0);

  multiply(number);
}

void multiply(double number) {
  std::cout << "Multiplication table of " << number << std::endl;

  for (int i = 0; i < 10; i++) {
    std::cout << i << " x " << number << " = " << number * i << std::endl;
  }
}
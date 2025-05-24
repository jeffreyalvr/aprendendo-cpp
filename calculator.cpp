#include <iostream>

/* Calculadora */

double add(double num1, double num2);
double sub(double num1, double num2);
double mul(double num1, double num2);
double div(double num1, double num2);

int main() {
  double num1{};
  double num2{};
  char operation{};

  std::cout << "Type the first number: ";
  std::cin >> num1;

  std::cout << "Type the second number: ";
  std::cin >> num2;

  std::cout << "Choose one of the following operations: ";
  std::cin >> operation;

  switch (operation) {
    case '+':
      std::cout << add(num1, num2);
      break;
    case '-':
      std::cout << sub(num1, num2);
      break;
    case '*':
      std::cout << mul(num1, num2);
      break;
    case '/':
      std::cout << div(num1, num2);
      break;
    }

  return 0;
}

double add(double num1, double num2) {
  return num1 + num2;
};

double sub(double num1, double num2) {
  return num1 - num2;
};

double mul(double num1, double num2) {
  return num1 * num2;
};

double div(double num1, double num2) {
  return num1 / num2;
};
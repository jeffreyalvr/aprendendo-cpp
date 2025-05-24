#include <iostream>
#include <cctype>

/* Conversor de temperaturas */

double fahrenheitToCelsius(double temp);
double celsiusToFahrenheit(double temp);

int main() {
  double temp{};
  char mode{};

  do {
    std::cout << "Is this Celsius or Fahrenheit? Type C or F: ";
    std::cin >> mode;
    mode = std::tolower(mode);
  } while (mode != 'f' && mode != 'c');

  std::cout << "Type any number value: ";
  std::cin >> temp;

  switch (mode) {
    case 'c':
      std::cout << temp << " ºC is " << celsiusToFahrenheit(temp) << " ºF";
      break;
    case 'f':
      std::cout << temp << " ºF is " << fahrenheitToCelsius(temp) << " ºC";
      break;
    }

  return 0;
}

double fahrenheitToCelsius(double temp) {
  return (5.0 / 9.0) * (temp - 32);
}

double celsiusToFahrenheit(double temp) {
  return (temp * 1.8) + 32;
}
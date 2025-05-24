#include <iostream>

/* Imprime o dia da semana de acordo com o número enviado */

void printDayOfTheWeek(int number);

int main() {
    int number{};

    do {
        std::cout << "Type any number from 1-7: ";
        std::cin >> number;
    } while (number < 1 || number > 7);

    printDayOfTheWeek(number);

    return 0;
}

void printDayOfTheWeek(int number) {
    std::string dayOfTheWeek[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};

    if (number >= 1 && number <= 7)
        std::cout << "The number " << number << " represents the day " << dayOfTheWeek[number - 1] << std::endl;
    else
        std::cout << "Invalid input!" << std::endl;
}
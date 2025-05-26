#include <array>
#include <iostream>

/* Ferramenta para rotacionar o array N vezes para a direita */

void validate(bool &shouldValidationFail, const int &intToCheck, const int min, const int max);
void promptForNumbers(std::array<int, 10> &numbers);
void rotateArray(std::array<int, 10> &array);
void printNumbers(const std::array<int, 10> &numbers);

int main() {
    std::array<int, 10> numbers{};

    promptForNumbers(numbers);

    rotateArray(numbers);
    printNumbers(numbers);

    return 0;
}

void validate(bool &shouldValidationFail, const int &intToCheck, const int min, const int max) {
    if (std::cin.fail() || intToCheck < min || intToCheck > max) {
        std::cin.clear();
        std::cin.ignore(1000, '\n');

        // intToCheck é inválida
        shouldValidationFail = true;
        return;
    }

    // intToCheck é válida
    shouldValidationFail = false;
};

void promptForNumbers(std::array<int, 10> &numbers) {
    int input{};
    bool shouldValidationFail = false;

    for (int i = 0; i < numbers.size(); i++) {
        do {
            std::cout << "Type any number from 0-100 for the #" << i + 1 << " entry: ";
            std::cin >> input;

            validate(shouldValidationFail, input, 0, 100);
        } while (shouldValidationFail);

        numbers[i] = input;
    }
}

void rotateArray(std::array<int, 10> &array) {
    int steps{};
    bool shouldValidationFail = false;

    do {
        std::cout << "How many steps do you want to rotate the array to the right? Type 1-9: ";
        std::cin >> steps;

        validate(shouldValidationFail, steps, 1, 9);
    } while (shouldValidationFail);

    for (int i = steps; i > 0; i--) {
        for (int j = array.size() - 1; j > 0; j--) {
            std::swap(array[j], array[j - 1]);
        }
    }
}

void printNumbers(const std::array<int, 10> &numbers) {
    std::cout << "[";

    for (int i = 0; i < numbers.size(); i++) {
        if (i == numbers.size() - 1)
            std::cout << numbers[i];
        else
            std::cout << numbers[i] << ", ";
    }

    std::cout << "]" << std::endl;
}
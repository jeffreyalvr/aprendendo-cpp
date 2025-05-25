#include <array>
#include <cctype>
#include <iostream>

/* Recebe um array e coloca em ordem descendente ou ascendente */

void printArray(std::array<int, 5> array);
void sortArray(std::array<int, 5> &numbers, char mode);

int main() {
    std::array<int, 5> unsortedArray{};
    std::array<int, 5> numbers{};

    char mode{};
    std::string sortMode{};

    do {
        std::cout << "Do you want to sort ASC or DESC? Type A or D: ";
        std::cin >> mode;
        mode = std::tolower(mode);
    } while (mode != 'a' && mode != 'd');

    if (mode == 'a')
        sortMode = "ASCENDING ORDER";
    else
        sortMode = "DESCENDING ORDER";

    std::cout << "The array will be sorted in " << sortMode << std::endl;

    for (int i = 0; i <= 4; i++) {
        std::cout << "Type any number for the #" << i + 1 << " input: ";
        std::cin >> numbers[i];
    }

    unsortedArray = numbers;
    printArray(unsortedArray);

    sortArray(numbers, mode);
    printArray(numbers);

    return 0;
}

void printArray(std::array<int, 5> array) {
    int size = array.size();

    for (int i = 0; i < size; i++) {
        if (i == size - 1) {
            std::cout << array[i] << "]" << std::endl;
        } else if (i == 0) {
            std::cout << "[" << array[i] << ", ";
        } else {
            std::cout << array[i] << ", ";
        }
    }
}

void sortArray(std::array<int, 5> &numbers, char mode) {
    int size = numbers.size();
    int temporarySlot{};

    for (int i = 0; i < (size - 1); i++) {
        for (int j = 0; j < (size - 1 - i); j++) {
            if ((mode == 'a' && numbers[j] > numbers[j + 1]) || mode == 'd' && numbers[j] < numbers[j + 1]) {
                temporarySlot = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temporarySlot;
            }
        }
    }
}
#include <iostream>
#include <random>

/* Minigame para tentar adivinhar um número aleatório.
 * Utiliza o algoritmo de Mersenne para gerar um número pseudo-aleatório no range de 1-100.
 */

void checkGuess(int guess, const int answer);

int main() {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dist(1, 100);

    int answer = dist(gen);

    int guess{};

    std::cout << answer << std::endl;

    while (guess != answer) {
        std::cout << "Type any number between 1-100: ";
        std::cin >> guess;
        checkGuess(guess, answer);
    }

    return 0;
}

void checkGuess(int guess, const int answer) {
    if (guess == answer) {
        std::cout << "Congratulations! You found that the answer is " << answer << std::endl;
    } else if (guess > answer && guess <= (answer + 15)) {
        std::cout << "Ooh, close! Just a little lower..." << std::endl;
    } else if (guess < answer && guess >= (answer - 15)) {
        std::cout << "Almost there! Try going slightly higher..." << std::endl;
    } else if (guess > (answer + 15)) {
        std::cout << "That's too high! Try something lower." << std::endl;
    } else if (guess < (answer - 15)) {
        std::cout << "That's too low! Try a much higher number." << std::endl;
    }
}
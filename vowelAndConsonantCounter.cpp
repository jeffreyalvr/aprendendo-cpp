#include <cctype>
#include <iostream>

/* Contador de vogais e consoantes */

std::string toLower(const std::string &input);
bool isVowel(const char &character);
void checkInput(const std::string &input);

int main() {
    std::string input{};
    std::cout << "Type anything and press ENTER: ";
    std::getline(std::cin, input);

    checkInput(toLower(input));

    return 0;
}

std::string toLower(const std::string &input) {
    std::string result = input;

    for (char &character : result)
        std::tolower(static_cast<unsigned char>(character));

    return result;
}

bool isVowel(const char &character) {
    if (character != 'a' && character != 'e' && character != 'i' && character != 'o' && character != 'u')
        return false;

    return true;
}

void checkInput(const std::string &input) {
    int numberVowels{};
    int numberConsonants{};

    for (char character : input) {
        if (std::isalpha(character))
            isVowel(character) ? numberVowels++ : numberConsonants++;
    }

    std::cout << "Vowels: " << numberVowels << std::endl;
    std::cout << "Consonants: " << numberConsonants << std::endl;
}
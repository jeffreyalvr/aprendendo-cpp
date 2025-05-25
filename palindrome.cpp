#include <iostream>

/* Recebe uma palavra, inverte e verifica se é um políndromo */

void checkPalindrome(const std::string &word);

int main() {
    std::string word{};

    std::cout << "Type any word or numbers to verify if it's a palindrome or not: ";
    std::getline(std::cin, word);

    checkPalindrome(word);

    return 0;
}

void checkPalindrome(const std::string &word) {
    std::string reversedWord{};

    char wordSplit[word.length()];
    char temp{};

    for (int i = 0; i < word.length(); i++) {
        temp = word[i];
        wordSplit[i] = word[word.length() - 1 - i];
    }

    reversedWord = wordSplit;

    std::cout << "The word \"" << word << "\" backwards is \"" << reversedWord << "\"" << std::endl;

    if (reversedWord == word)
        std::cout << "This means it's a palindrome!" << std::endl;
    else
        std::cout << "It's not a palindrome..." << std::endl;
}
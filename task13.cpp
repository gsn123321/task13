

#include <iostream>

int myStrcmp(char str1[], char str2[]) {
    int i = 0;

    while (str1[i] == str2[i]) {
        if (str1[i] == '\0') {
            return 0;
        }
        i++;
    }

    return str1[i] - str2[i];
}

int main() {
    //char str1[100];
    //char str2[100];

    //std::cout << "Enter first string: ";
    //std::cin.getline(str1, 100);

    //std::cout << "Enter second string: ";
    //std::cin.getline(str2, 100);

    //int result = myStrcmp(str1, str2);

    //if (result == 0) {
    //    std::cout << "Strings are equal";
    //}
    //else if (result < 0) {
    //    std::cout << "First string is smaller";
    //}
    //else {
    //    std::cout << "First string is bigger";
    //}

    char str[200];

    std::cout << "Enter a string: ";
    std::cin.getline(str, 200);

    int letters = 0;
    int digits = 0;
    int other = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) {
            letters++;
        }
        else if (isdigit(str[i])) {
            digits++;
        }
        else {
            other++;
        }
    }

    std::cout << "Letters: " << letters << '\n';
    std::cout << "Digits: " << digits << '\n';
    std::cout << "Other symbols: " << other << '\n';
}

#include <iostream>
#include "factorial/factorial.h"
#include "factorial/factorial.cpp"
#include "palindrome/Palindrome.h"
#include "palindrome/Palindrome.cpp"


int main() {
    int tmp;

    std::cout << "Obliczyć silnie - wybierz 1\nSprawdić palindrom - wybierz 2\nWyjście - wybierz 0" << std::endl;;

    while (true) {
        std::cout << "Opcja: ";
        std::cin >> tmp;

        if (tmp == 1) {
            int test;
            std::cout << "Wpisz liczbe: ";
            std::cin >> test;
            std::cout << "Rekurencyjnie: " << factorial_r(test) << std::endl;;
            std::cout << "Iteracyjnie: " << factorial_i(test) << std::endl;;
        }

        if (tmp == 2) {
            std::cout << "Wpisz slowo: ";
            std::string str_to_check;
            std::cin >> str_to_check;
            bool bool_tmp = is_palindrome(str_to_check);
            if (bool_tmp) {
                std::cout << str_to_check << " jest palindromem" << std::endl;;
            } else {
                std::cout << str_to_check << " nie jest palindromem" << std::endl;;
            }
        }

        if (tmp == 0) {
            return 0;
        }
    }
}
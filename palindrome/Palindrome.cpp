#include "Palindrome.h"
#include <string>

bool is_palindrome(std::string str) {
    int str_len = int(str.length());
    int central_index = str_len / 2 + 1;
    for (int i = 0; i < central_index; i++) {
        if (str[i] != str[str_len - i - 1]) {
            return false;
        }
    }
    return true;
}

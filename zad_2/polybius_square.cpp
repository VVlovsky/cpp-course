#include "polybius_square.h"

std::string PolybiusCrypt(std::string message) {

    std::string alphabet = "abcdefghiklmnopqrstuvwxyz";
    std::string crypted;
    int size_message = size(message);

    for (int i = 0; i < size_message; i++) {
        if (message[i] == 'j') {
            message[i] = 'i';
        }
    }

    for (int i = 0; i < size_message; i++) {
        for (int j = 0; j < 25; j++) {
            if (message[i] == alphabet[j]) {
                crypted += std::to_string(j / 5 + 1);
                crypted += std::to_string(j % 5 + 1);
                crypted += " ";
                break;
            }
        }
    }
    return crypted;
}


std::string PolybiusDecrypt(std::string crypted) {

    std::string alphabet = "abcdefghiklmnopqrstuvwxyz";
    std::string message;
    int size_crypted = size(crypted);

    for (int i = 0; i < size_crypted; i += 3) {
        if (crypted[i] == '2' and crypted[i+1] == '4'){
            message += "(j/i)";
            continue;
        }
        int alpha_index = (int(crypted[i]) - 49) * 5 + int(crypted[i + 1]) - 49;
        message += alphabet[alpha_index];
    }
    return message;
}

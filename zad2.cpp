#include <iostream>
#include <fstream>
#include "zad_2/polybius_square.cpp"
#include "zad_2/polybius_square.h"

int main(int argc, char **argv) {

    std::string line;

    if (*argv[3] == '1') {
        std::ifstream file_to_enc(argv[1]);
        std::ofstream file_result(argv[2]);
        while (getline(file_to_enc, line)) {
            file_result << PolybiusCrypt(line) << std::endl;
        }
        file_to_enc.close();
        file_result.close();

    } else if (*argv[3] == '0') {
        std::ifstream file_to_dec(argv[2]);
        std::ofstream file_result(argv[1]);
        while (getline(file_to_dec, line)) {
            file_result << PolybiusDecrypt(line) << std::endl;
        }
        file_to_dec.close();
        file_result.close();

    } else {
        exit(1);
    }
    return 0;
}
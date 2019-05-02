//
// Created by venglov on 02.05.19.
//
#include <string.h>
#include "PESEL.h"

PESEL::PESEL(char *pesel) {
    if (!this->validatePESEL(pesel)) {
        throw WrongPeselException(*this);
    }
    strcpy(this->pesel, pesel);
}

bool PESEL::validatePESEL(const char *pesel) {
    if ((1 * pesel[0] + 3 * pesel[1] + 7 * pesel[2] + 9 * pesel[3] + 1 * pesel[4] + 3 * pesel[5] + 7 * pesel[6] +
         9 * pesel[7] + 1 * pesel[8] + 3 * pesel[9] + 1 * pesel[10]) % 10 == 0) {
        return true;
    }
}


PESEL::~PESEL() = default;

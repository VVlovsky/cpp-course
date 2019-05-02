//
// Created by venglov on 02.05.19.
//

#ifndef JMP2_WRONGPESELEXCEPTION_H
#define JMP2_WRONGPESELEXCEPTION_H

#include "PESEL.h"
#include <stdexcept>

class WrongPeselException : public std::invalid_argument {
public:
    WrongPeselException(const PESEL &pesel) : invalid_argument{"Wrong PESEL"}, pesel_{pesel} {}

    PESEL GetPESEL() const {
        return pesel_;
    }

private:
    PESEL pesel_;
};

#endif //JMP2_WRONGPESELEXCEPTION_H

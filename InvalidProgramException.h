//
// Created by venglov on 02.05.19.
//

#ifndef JMP2_INVALIDPROGRAMEXCEPTION_H
#define JMP2_INVALIDPROGRAMEXCEPTION_H


#include "Student.h"
#include <stdexcept>

class InvalidProgramException : public std::invalid_argument {
public:
    InvalidProgramException(const Student &student) : invalid_argument{"Invalid Program"}, student_{student} {}

    Student GetStudent() const {
        return student_;
    }

private:
    Student student_;
};

#endif //JMP2_INVALIDPROGRAMEXCEPTION_H

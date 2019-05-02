//
// Created by venglov on 02.05.19.
//

#ifndef JMP2_INVALIDAGEEXCEPTION_H
#define JMP2_INVALIDAGEEXCEPTION_H

#include "Student.h"
#include <stdexcept>

class InvalidAgeException : public std::invalid_argument {
public:
    InvalidAgeException(const Student &student) : invalid_argument{"Invalid Age"}, student_{student} {}

    Student GetStudent() const {
        return student_;
    }

private:
    Student student_;
};

#endif //JMP2_INVALIDAGEEXCEPTION_H

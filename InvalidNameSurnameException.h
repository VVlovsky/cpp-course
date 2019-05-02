//
// Created by venglov on 02.05.19.
//

#ifndef JMP2_INVALIDNAMESURNAMEEXCEPTION_H
#define JMP2_INVALIDNAMESURNAMEEXCEPTION_H


#include "Student.h"
#include <stdexcept>

class InvalidNameSurnameException : public std::invalid_argument {
public:
    InvalidNameSurnameException(const Student &student) : invalid_argument{"Invalid Name or Surname"},
                                                          student_{student} {}

    Student GetStudent() const {
        return student_;
    }

private:
    Student student_;
};

#endif //JMP2_INVALIDNAMESURNAMEEXCEPTION_H

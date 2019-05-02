//
// Created by venglov on 02.05.19.
//

#ifndef JMP2_INVALIDNAMECHARACTERSEXCEPTION_H
#define JMP2_INVALIDNAMECHARACTERSEXCEPTION_H


#include "Student.h"
#include <stdexcept>

class InvalidNameCharactersException : public std::invalid_argument {
public:
    InvalidNameCharactersException(const Student &student) : invalid_argument{"Invalid Characters"},
                                                             student_{student} {}

    Student GetStudent() const {
        return student_;
    }

private:
    Student student_;
};

#endif //JMP2_INVALIDNAMECHARACTERSEXCEPTION_H

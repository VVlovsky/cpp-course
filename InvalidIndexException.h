//
// Created by venglov on 30.05.19.
//

#ifndef JMP2_INVALIDINDEXEXCEPTION_H
#define JMP2_INVALIDINDEXEXCEPTION_H

#include "Vector.h"

template<class T>
class InvalidIndexException : public std::invalid_argument {
public:
    InvalidIndexException(const Vector <T> &vector) : invalid_argument{"Wrong index"}, vector_{vector} {}

    Vector <T> GetVECTOR() const {
        return vector_;
    }

private:
    Vector <T> vector_;
};


#endif //JMP2_INVALIDINDEXEXCEPTION_H

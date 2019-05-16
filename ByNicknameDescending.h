//
// Created by venglov on 16.05.19.
//

#ifndef JMP2_BYNICKNAMEDESCENDING_H
#define JMP2_BYNICKNAMEDESCENDING_H


#include "UserAccountComparator.h"

class ByNicknameDescending : public UserAccountComparator {

public:
    bool IsLess(const UserAccount &left, const UserAccount &right) override {
        return left.get_name() > right.get_name();
    }
};


#endif //JMP2_BYNICKNAMEDESCENDING_H

//
// Created by venglov on 16.05.19.
//

#ifndef JMP2_BYNICKNAMEASCENDING_H
#define JMP2_BYNICKNAMEASCENDING_H

#include "UserAccountComparator.h"

class ByNicknameAscending : public UserAccountComparator {
public:
    bool IsLess(const UserAccount &left, const UserAccount &right) override {
        return left.get_name() < right.get_name();
    }
};


#endif //JMP2_BYNICKNAMEASCENDING_H

//
// Created by venglov on 16.05.19.
//

#ifndef JMP2_DAYSTOACCOUNTEXPIRATIONASCENDING_H
#define JMP2_DAYSTOACCOUNTEXPIRATIONASCENDING_H


#include "UserAccountComparator.h"

class DaysToAccountExpirationAscending : public UserAccountComparator{

public:
    bool IsLess(const UserAccount &left, const UserAccount &right) override {
        return left.get_days() > right.get_days();
    }
};


#endif //JMP2_DAYSTOACCOUNTEXPIRATIONASCENDING_H

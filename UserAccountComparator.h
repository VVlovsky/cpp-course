//
// Created by venglov on 16.05.19.
//

#ifndef JMP2_USERACCOUNTCOMPARATOR_H
#define JMP2_USERACCOUNTCOMPARATOR_H


#include "UserAccount.h"

class UserAccountComparator {
    virtual bool IsLess(const UserAccount &left, const UserAccount &right) = 0;

};


#endif //JMP2_USERACCOUNTCOMPARATOR_H

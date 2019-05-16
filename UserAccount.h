//
// Created by venglov on 16.05.19.
//

#ifndef JMP2_USERACCOUNT_H
#define JMP2_USERACCOUNT_H


#include <string>

class UserAccount {
private:
    std::string Nickname;
    std::string Password;
    int DaysToAccountExpiration;
public:
    std::ostream &operator<<(std::ostream &output, const UserAccount &user_account);

};


#endif //JMP2_USERACCOUNT_H

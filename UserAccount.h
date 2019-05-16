#include <utility>


//
// Created by venglov on 16.05.19.
//

#ifndef JMP2_USERACCOUNT_H
#define JMP2_USERACCOUNT_H


#include <string>
#include <vector>
#include <iostream>

class UserAccount {
private:
    std::string Nickname;
    std::string Password;
    int DaysToAccountExpiration;
public:
    UserAccount();
    UserAccount(std::string n, std::string p, int d) :
    Nickname(std::move(n)), Password(std::move(p)), DaysToAccountExpiration(d){};

    friend std::ostream &operator<<(std::ostream &output, const UserAccount &user_account);

    friend std::istream &operator>>(std::istream &input, UserAccount &user_account);

    void operator++();

    std::string get_name() const {
        return this->Nickname;
    }
    int get_days() const {
        return this->DaysToAccountExpiration;
    }

};
#endif //JMP2_USERACCOUNT_H

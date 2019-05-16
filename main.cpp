//
// Created by venglov on 16.05.19.
//

#include <iostream>
#include "UserAccount.h"
#include "ByNicknameAscending.h"
#include "ByNicknameDescending.h"
#include "DaysToAccountExpirationAscending.h"

int main(){
    UserAccount test_account;
    std::cin >> test_account;
    ++test_account;
    std::cout << test_account;

    UserAccount test_account_2;
    std::cin >> test_account_2;
    ByNicknameAscending bna;
    ByNicknameDescending bnd;
    DaysToAccountExpirationAscending dtaea;
    std::cout << bna.IsLess(test_account, test_account_2);
    std::cout << bnd.IsLess(test_account, test_account_2);
    std::cout << dtaea.IsLess(test_account, test_account_2);


    return 0;
}
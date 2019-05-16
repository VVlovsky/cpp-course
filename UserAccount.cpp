//
// Created by venglov on 16.05.19.
//

#include "UserAccount.h"

std::ostream &operator<<(std::ostream &output, const UserAccount &user_account) {
    std::string str_to_return;
    int pass_length = user_account.Password.size();
    str_to_return = user_account.Nickname + "\n";
    for (int i = 0; i < pass_length; i++){
        str_to_return += "*";
    }
    str_to_return += "\n";
    str_to_return += "Days to Account Expiration: " + std::to_string(user_account.DaysToAccountExpiration) + "\n";
    output << str_to_return;
    return output;
}

std::istream &operator>>(std::istream &input, UserAccount &user_account) {
    std::string str_to_parse;
    input >> str_to_parse;

    size_t pos = 0;
    std::string token;
    std::vector<std::string> parsed;
    int counter = 0;

    while ((pos = str_to_parse.find('\"')) != std::string::npos) {
        token = str_to_parse.substr(0, pos);
        std::cout << token << std::endl;

        if (counter % 2 == 0) {
            parsed.push_back(token);
        }

        counter++;
        str_to_parse.erase(0, pos + 1);

    }

    user_account.Nickname = parsed[0];
    user_account.Password = parsed[1];
    user_account.DaysToAccountExpiration = stoi(parsed[2]);
}

    void UserAccount::operator++() {
        this->DaysToAccountExpiration++;
    }

UserAccount::UserAccount() {

}


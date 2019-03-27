#include <vector>
#include <optional>
#include <string>
#include "Name.h"

Name::Name(const std::string &name) {
    std::vector <std::string> name_vector;
    int tmp = 0;
    int stop_i = static_cast<int>(name.length());

    for (int i = 0; i < stop_i; i++) {
        if (name[i] == ' ') {
            name_vector.push_back(name.substr(tmp, i - tmp));
            tmp = i + 1;
        }
    }
    name_vector.push_back(name.substr(tmp));

    first_name = name_vector[0];
    if (name_vector.size() > 2) {
        second_name.emplace(name_vector[1]);
    }
    if (name_vector.size() > 3) {
        third_name.emplace(name_vector[2]);
    }
    surname = name_vector[name_vector.size() - 1];
}


std::string Name::FirstName() const {
    return first_name;
}


std::string Name::SecondName() const {
    if (second_name)
        return *second_name;
    return "";
}


std::string Name::ThirdName() const {
    if (third_name)
        return *third_name;
    return "";
}


std::string Name::Surname() const {
    return surname;
}


std::string Name::ToFullInitials() const {
    return this->create_name_initials() + surname[0] + ".";
}


std::string Name::ToFirstNamesInitials() const {
    return this->create_name_initials() + surname;
}


std::string Name::ToSurnameNames() const {
    std::string result = surname + " " + first_name;

    if (second_name) {
        result += " " + *second_name;
    }
    if (third_name) {
        result += " " + *third_name;
    }
    return result;
}


std::string Name::ToNamesSurname() const {
    std::string result = first_name;

    if (second_name) {
        result += " " + *second_name;
    }
    if (third_name) {
        result += " " + *third_name;
    }
    result += " " + surname;
    return result;
}


bool Name::IsBeforeBySurname(const std::string &tmp) const {
    return this->check_names(surname, tmp);
}


bool Name::IsBeforeByFirstName(const std::string &tmp) const {
    return this->check_names(first_name, tmp);
}


bool Name::check_names(const std::string &first, const std::string &second) const {
    int first_len = static_cast<int>(first.length());
    int second_len = static_cast<int>(second.length());

    for (int i = 0; i < first_len && i < second_len; i++) {
        if (first[i] < second[i]) {
            return true;
        } else if (first[i] > second[i]) {
            return false;
        }
    }
    return false;
}


std::string Name::create_name_initials() const {
    std::string initials;
    initials += first_name[0];
    initials += ". ";

    if (second_name) {
        initials += (*second_name)[0] + ". ";
    }
    if (third_name) {
        initials += (*third_name)[0] + ". ";
    }
    return initials;
}
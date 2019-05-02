//
// Created by venglov on 02.05.19.
//

#include "Student.h"
#include "InvalidNameSurnameException.h"
#include "InvalidNameCharactersException.h"
#include "InvalidAgeException.h"
#include "InvalidProgramException.h"
#include <algorithm>
#include <iterator>
#include <vector>

char ALPHA[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
char special_characters[] = R"(" !"#$%&'()*+,-./:;<=>?@[\]^_`{|}~")";
std::vector<std::string> programs = {"informatyka", "ekonomia", "matematyka", "fizyka", "filozofia"};


Student::Student() = default;

Student::Student(std::string firstName, std::string lastName, std::string program, int age) {
    if (!validate_name_surname(firstName)) {
        throw InvalidNameSurnameException(*this);
    }
    if (!validate_name_surname(lastName)) {
        throw InvalidNameSurnameException(*this);
    }
    if (!validate_name_characters(firstName)) {
        throw InvalidNameCharactersException(*this);
    }
    if (!validate_name_characters(lastName)) {
        throw InvalidNameCharactersException(*this);
    }
    if (!validate_age(age)) {
        throw InvalidAgeException(*this);
    }
    if (!validate_program(program)) {
        throw InvalidProgramException(*this);
    }
    this->firstName = std::move(firstName);
    this->lastName = std::move(lastName);
    this->program = std::move(program);
    this->age = age;
}

bool Student::validate_name_surname(std::string name) {
    if (std::find(std::begin(ALPHA), std::end(ALPHA), name[0]) == std::end(ALPHA)) {
        return false;
    }
    for (int i = 1; i < name.length(); i++) {
        if (std::find(std::begin(ALPHA), std::end(ALPHA), name[i]) != std::end(ALPHA)) {
            return false;
        }
    }
    return true;
}

bool Student::validate_name_characters(std::string name) {
    for (int i = 1; i < name.length(); i++) {
        if (std::find(std::begin(special_characters), std::end(special_characters), name[i]) !=
            std::end(special_characters)) {
            return false;
        }
    }
    return true;
}

bool Student::validate_age(int age) {
    return !(age > 100 or age < 10);
}

bool Student::validate_program(std::string program) {
    return !(std::find(std::begin(programs), std::end(programs), program) == std::end(programs));
}

Student::~Student() = default;

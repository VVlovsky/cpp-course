//
// Created by venglov on 02.05.19.
//

#include "Student.h"

Student::Student() = default;

Student::Student(std::string firstName, std::string lastName, std::string field, int age) {
    this->firstName = std::move(firstName);
    this->lastName = std::move(lastName);
    this->field = std::move(field);
    this->age = year;
}
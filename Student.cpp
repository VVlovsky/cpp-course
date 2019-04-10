//
// Created by venglov on 04.04.19.
//

#include "Student.h"
#include <vector>

Student::Student() = default;

Student::Student(std::string id, std::string firstName, std::string lastName, std::string field, int year) {
    this->id = std::move(id);
    this->firstName = std::move(firstName);
    this->lastName = std::move(lastName);
    this->field = std::move(field);
    this->year->value = year;
}

void Student::operator++() {
    this->year->value++;
}

void Student::operator--() {
    this->year->value--;

}

Student::~Student() = default;


std::ostream &operator<<(std::ostream &output, const Student &student) {
    std::string str_to_return;
    str_to_return = "{id: \"" + student.id + "\",\n" + "firstName: \"" + student.firstName + "\",\n" + "lastName: \"" +
                    student.lastName + "\",\n" + "field: \"" + student.field + "\",\n" + "year: \"" +
                    std::to_string(student.year->value) + "\"}\n";
    output << str_to_return;
    return output;
}

std::istream &operator>>(std::istream &input, Student &student) {
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

    student.id = parsed[0];
    student.firstName = parsed[1];
    student.lastName = parsed[2];
    student.field = parsed[3];
    student.year->value = stoi(parsed[4]);


    return input;
}


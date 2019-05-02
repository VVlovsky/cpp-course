//
// Created by venglov on 02.05.19.
//

#ifndef JMP2_STUDENT_H
#define JMP2_STUDENT_H


class Student : public std::error_code {
public:
    Student();

    Student(std::string firstName, std::string lastName, std::string field, int age);

    ~Student();

    bool validate_name_surname(std::string name);

    bool validate_name_characters(std::string name);

    bool validate_age(int age);

    bool validate_program(std::string program);


private:
    std::string firstName;
    std::string lastName;
    std::string program;
    int age{};


};


#endif //JMP2_STUDENT_H

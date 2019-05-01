//
// Created by venglov on 02.05.19.
//

#ifndef JMP2_STUDENT_H
#define JMP2_STUDENT_H




class Student {
public:
    Student();

    Student(std::string firstName, std::string lastName, std::string field, int age);

    ~Student();

private:
    std::string firstName;
    std::string lastName;
    std::string field;
    int age;


};


#endif //JMP2_STUDENT_H

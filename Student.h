//
// Created by venglov on 04.04.19.
//

#ifndef JMP2_STUDENT_H
#define JMP2_STUDENT_H

#include "StudyYear.h"


class Student {
public:
    Student();

    Student(std::string id, std::string firstName, std::string lastName, std::string field, int year);

    ~Student();

    std::string id;
    std::string firstName;
    std::string lastName;
    std::string field;
    StudyYear* year = new StudyYear();

    void operator++();

    void operator--();


    friend std::ostream &operator<<(std::ostream &output, const Student &student);

    friend std::istream &operator>>(std::istream &input, Student &student);


};


#endif //JMP2_STUDENT_H

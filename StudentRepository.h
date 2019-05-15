//
// Created by venglov on 04.04.19.
//

#ifndef JMP2_STUDENTREPOSITORY_H
#define JMP2_STUDENTREPOSITORY_H


#include "Student.h"
#include "Query/Query.h"
#include <vector>

class StudentRepository {
private:
    std::vector<Student> all_students;
public:

    Student operator[](int index);

    void add_student(const Student& student);

    std::vector<Student>FindByQuery(const Query &query);

};


#endif //JMP2_STUDENTREPOSITORY_H

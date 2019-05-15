//
// Created by venglov on 04.04.19.
//

#include "StudentRepository.h"

Student StudentRepository::operator[](int index) {
    return all_students[index];
}

void StudentRepository::add_student(const Student &student) {
    this->all_students.push_back(student);
}

std::vector<Student> StudentRepository::FindByQuery(const Query &query) {
    std::vector<Student> students_to_return;
    for (const auto& student : this->all_students){
        if(query.Accept(student)){
            students_to_return.push_back(student);
        }
    }
    return students_to_return;
}

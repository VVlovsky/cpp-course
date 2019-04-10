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

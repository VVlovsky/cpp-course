#include <iostream>
#include "Student.cpp"
#include "Student.h"
#include "StudentRepository.cpp"
#include "StudentRepository.h"
#include "StudyYear.cpp"
#include "StudyYear.h"
#include "Repository.h"

int main() {
    StudentRepository all_stud;
    Student test_student_1("350133", "Arkadiusz", "Kowalski", "informatyka", 1);
    Student test_student_2("350133", "Arkadiusz_2", "Kowalski_2", "informatyka", 2);
    all_stud.add_student(test_student_1);
    all_stud.add_student(test_student_2);
    ++all_stud[1];
    std::cout << all_stud[1];

    Repository<Student> student_repository;
    student_repository.push_back(test_student_1);
    student_repository.push_back(test_student_2);
    Query<Student> query_by_name_arkadiush("Arkadiusz_2");
    std::cout << student_repository.Size() << std::endl;
    std::cout << student_repository[0] << std::endl;
    for (auto &obj : student_repository.FindBy(query_by_name_arkadiush)){
        std::cout << obj << std::endl;
    }



    return 0;
}




#include <iostream>
#include "Student.cpp"
#include "Student.h"
#include "StudentRepository.cpp"
#include "StudentRepository.h"
#include "StudyYear.cpp"
#include "StudyYear.h"
#include "Query/Query.h"
#include "Query/ByFirstName.h"
#include "Query/AndQuery.h"
#include "Query/ByOneOfPrograms.h"
#include "Query/ByYearLowerOrEqualTo.h"



int main() {
    StudentRepository all_stud;
    Student test_student_1("350133", "Arkadiusz", "Kowalski", "informatyka", 1);
    Student test_student_2("350133", "Arkadiusz_2", "Kowalski_2", "informatyka", 2);
    all_stud.add_student(test_student_1);
    all_stud.add_student(test_student_2);
    ++all_stud[1];
    std::cout << all_stud[1] << std::endl;

    for (const auto& stud : all_stud.FindByQuery(ByFirstName("Arkadiusz"))){
        std::cout << stud << std::endl;
    }
    for (const auto& stud : all_stud.FindByQuery(AndQuery(std::make_unique<ByFirstName>("Arkadiusz"), std::make_unique<ByYearLowerOrEqualTo>(2)))){
        std::cout << stud;
    }



    return 0;
}




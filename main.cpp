#include <iostream>
#include "WrongPeselException.h"
#include "Student.h"
#include "PESEL.h"
#include "Student.cpp"
#include "PESEL.cpp"

int main() {
    char true_pesel[] = "44051401359";
    try {
        PESEL *test = new PESEL(true_pesel);
    } catch (const WrongPeselException &error) {
        std::cerr << error.what() << ": " << error.GetPESEL() << std::endl;
    }

    std::string name, surname, program;
    int age;

    std::cout << "Enter name: ";
    std::cin >> name;
    std::cout << "Enter surname: ";
    std::cin >> surname;
    std::cout << "Enter age: ";
    std::cin >> age;
    std::cout << "Enter program: ";
    std::cin >> program;
    try {
        Student *test_student = new Student(name, surname, program, age);
    } catch (const InvalidNameSurnameException &error) {
        std::cerr << error.what() << ": " << error.GetStudent() << std::endl;
    } catch (const InvalidNameCharactersException &error) {
        std::cerr << error.what() << ": " << error.GetStudent() << std::endl;
    } catch (const InvalidAgeException &error) {
        std::cerr << error.what() << ": " << error.GetStudent() << std::endl;
    } catch (const InvalidProgramException &error) {
        std::cerr << error.what() << ": " << error.GetStudent() << std::endl;
    }

    return 0;
}
//
// Created by venglov on 30.05.19.
//

#ifndef JMP2_ANIMAL_H
#define JMP2_ANIMAL_H

#include "iostream"
#include "vector"

class Animal {
private:
    std::string Species;
    std::string Name;
    int Age;
public:
    Animal(std::string species, std::string name, int age);

    void operator++();

    bool operator==(Animal &another_animal);

    friend std::ostream &operator<<(std::ostream &output, const Animal &animal);

    friend std::istream &operator>>(std::istream &input, Animal &animal);

    const std::string &getName() const;

    const std::string &getSpecies() const;

    int getAge() const;

};


#endif //JMP2_ANIMAL_H

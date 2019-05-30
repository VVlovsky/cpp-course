//
// Created by venglov on 30.05.19.
//

#include "Animal.h"
#include <utility>
#include <iostream>


Animal::Animal(std::string species, std::string name, int age) : Species(std::move(species)), Name(std::move(name)),
                                                                 Age(age) {}

void Animal::operator++() {
    this->Age++;
}

bool Animal::operator==(Animal &another_animal) {
    return (this->Age == another_animal.getAge() && this->Name == another_animal.getName() &&
            this->Species == another_animal.getSpecies());
}

std::ostream &operator<<(std::ostream &output, const Animal &animal) {
    std::string str_to_return;
    str_to_return = "{Species: \"" + animal.getSpecies() + "\",\n" + "Name: \"" + animal.getName() + "Age: \"" +
                    std::to_string(animal.getAge()) + "\"}\n";
    output << str_to_return;
    return output;
}

std::istream &operator>>(std::istream &input, Animal &animal) {
    std::cout << "Enter Animal information in JSON format:" << std::endl;
    std::string str_to_parse;
    input >> str_to_parse;

    size_t pos = 0;
    std::string token;
    std::vector<std::string> parsed;
    int counter = 0;

    while ((pos = str_to_parse.find('\"')) != std::string::npos) {
        token = str_to_parse.substr(0, pos);
        std::cout << token << std::endl;

        if (counter % 2 == 0) {
            parsed.push_back(token);
        }

        counter++;
        str_to_parse.erase(0, pos + 1);

    }

    animal.Species = parsed[0];
    animal.Name = parsed[1];
    animal.Age = stoi(parsed[2]);

    return input;
}

const std::string &Animal::getName() const {
    return this->Name;
}

const std::string &Animal::getSpecies() const {
    return this->Species;
}

int Animal::getAge() const {
    return this->Age;
}





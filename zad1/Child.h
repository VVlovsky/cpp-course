//
// Created by venglov on 03.04.19.
//

#ifndef JMP2_CHILD_H
#define JMP2_CHILD_H


class Child {

    friend class Parent;

private:
    std::string name;
    std::string surname;
    int age{};
    std::string school;

public:
    Child();

    Child(std::string name, std::string surname, int age, std::string school);

    ~Child();

    std::string get_school();
};


#endif //JMP2_CHILD_H

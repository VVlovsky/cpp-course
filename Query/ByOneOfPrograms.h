//
// Created by venglov on 15.05.19.
//

#ifndef JMP2_BYONEOFPROGRAMS_H
#define JMP2_BYONEOFPROGRAMS_H


#include <string>
#include "Query.h"
#include "../Student.h"
#include "vector"

class ByOneOfPrograms: public Query {
public:
    std::vector<std::string> programs;
    explicit ByOneOfPrograms(std::vector<std::string> programs){
        this->programs = std::move(programs);
    }
    bool Accept(const Student &student) const {
        for (const auto &program : programs){
            if (student.field == program){
                return true;
            }
        }
        return false;
    }
};


#endif //JMP2_BYONEOFPROGRAMS_H

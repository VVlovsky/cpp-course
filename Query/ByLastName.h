//
// Created by venglov on 15.05.19.
//

#ifndef JMP2_BYLASTNAME_H
#define JMP2_BYLASTNAME_H


#include <string>
#include "Query.h"
#include "../Student.h"

class ByLastName: public Query {
public:
    std::string last_name;
    explicit ByLastName(std::string last_name){
        this->last_name = std::move(last_name);
    }
    bool Accept(const Student &student) const {
        return student.lastName == this->last_name;
    }
};


#endif //JMP2_BYLASTNAME_H

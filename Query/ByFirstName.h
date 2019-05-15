#include <utility>

#ifndef JMP2_BYFIRSTNAME_H
#define JMP2_BYFIRSTNAME_H


#include <string>
#include "Query.h"
#include "../Student.h"

class ByFirstName: public Query {
public:
    std::string name;
    explicit ByFirstName(std::string name){
        this->name = std::move(name);
    }
    bool Accept(const Student &student) const {
        return student.firstName == this->name;
    }
};


#endif //JMP2_BYFIRSTNAME_H

//
// Created by venglov on 15.05.19.
//

#ifndef JMP2_BYYEARLOWEROREQUALTO_H
#define JMP2_BYYEARLOWEROREQUALTO_H


#include "Query.h"
#include "../Student.h"

class ByYearLowerOrEqualTo : public Query{
public:
    int year;
    explicit ByYearLowerOrEqualTo(int year){
        this->year = year;
    }
    virtual bool Accept(const Student &student) const{
        return this->year >= student.year->value;
    }

};


#endif //JMP2_BYYEARLOWEROREQUALTO_H

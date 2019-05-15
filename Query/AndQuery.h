//
// Created by venglov on 15.05.19.
//

#ifndef JMP2_ANDQUERY_H
#define JMP2_ANDQUERY_H


#include <memory>
#include "Query.h"
#include "../Student.h"

class AndQuery : public Query{
public:
    std::unique_ptr<Query> query_1;
    std::unique_ptr<Query> query_2;
    explicit AndQuery(std::unique_ptr<Query> left, std::unique_ptr<Query> right){
        this->query_1 = std::move(left);
        this->query_2 = std::move(right);
    }

    bool Accept(const Student &student) const {
        return this->query_1->Accept(student) && this->query_2->Accept(student);
    }

};

#endif //JMP2_ANDQUERY_H

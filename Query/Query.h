//
// Created by venglov on 15.05.19.
//

#ifndef JMP2_QUERY_H
#define JMP2_QUERY_H


class Query {
public:
    virtual bool Accept(const Student &student) const = 0;
};


#endif //JMP2_QUERY_H

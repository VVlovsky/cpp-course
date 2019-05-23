//
// Created by venglov on 22.05.19.
//

#ifndef JMP2_QUERY_H
#define JMP2_QUERY_H

#include <utility>

template<class T>
class Query {
public:
    explicit Query(std::string name);

    virtual bool Accept(const T &t);

private:
    std::string name;
};

template<class T>
bool Query<T>::Accept(const T &t) {
    return t.firstName == this->name;
}

template<class T>
Query<T>::Query(std::string name):name(std::move(name)) {}


#endif //JMP2_QUERY_H

//
// Created by venglov on 22.05.19.
//

#ifndef JMP2_REPOSITORY_H
#define JMP2_REPOSITORY_H

#include <vector>
#include "Query.h"


template<class T>
class Repository {
public:
    int Size();

    T &operator[](int num);

    std::vector<T> FindBy(Query<T> &query);

    void push_back(T t);

private:
    std::vector<T> repository;
};

template<class T>
int Repository<T>::Size() {
    return this->repository.size();
}

template<class T>
T &Repository<T>::operator[](int num) {
    return this->repository[num];
}

template<class T>
std::vector<T> Repository<T>::FindBy(Query<T> &query) {
    std::vector<T> to_return;
    for (auto &t: this->repository){
        if (query.Accept(t)){
            to_return.push_back(t);
        }
    }
    return to_return;
}

template<class T>
void Repository<T>::push_back(T t) {
    this->repository.push_back(t);
}


#endif //JMP2_REPOSITORY_H
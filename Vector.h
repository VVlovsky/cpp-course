//
// Created by venglov on 30.05.19.
//

#ifndef JMP2_VECTOR_H
#define JMP2_VECTOR_H

//#include "InvalidIndexException.h"


template<class T>
class Vector : public std::error_code {
public:
    explicit Vector(int initialSize);

    ~Vector();

    void setAt(int index, const T &t);

private:
    int vector_size;
    T *vector[];
};

template<class T>
Vector<T>::Vector(int initialSize) : vector_size(initialSize) {
    this->vector = new T[initialSize];
}

template<class T>
Vector<T>::~Vector() {
    for (auto obj : this->vector) {
        delete (obj);
    }
    delete (vector);
}

template<class T>
void Vector<T>::setAt(int index, const T &t) {
    if (index > this->vector_size - 1 || index < 0) {
        throw InvalidIndexException(*this);
    }
    this->vector[index] = t;

}


#endif //JMP2_VECTOR_H

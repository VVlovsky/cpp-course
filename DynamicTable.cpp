//
// Created by venglov on 11.06.19.
//

#include <iostream>
#include "DynamicTable.h"

void DynamicTable::Resize(int newSize) {
    auto resized_table = new double[newSize];

    if (this->table != nullptr) {
        for (int i = 0; i < this->length; i++) {
            resized_table[i] = this->table[i];
        }
    }

    this->table = resized_table;
    this->length = newSize;
}

DynamicTable::DynamicTable() {
    this->Resize(10);
    this->last = -1;

}

DynamicTable::DynamicTable(int initLength) {
    this->Resize(initLength);
    this->last = -1;
}

DynamicTable::~DynamicTable() {
    delete this->table;
}

void DynamicTable::Add(double element) {

    if (this->last == this->length - 1) {
        this->Resize(this->length + 1);
    }

    this->table[this->last + 1] = element;
    this->last++;
}

double DynamicTable::Get(int index) {
    if (index < this->length - 1 && index >= 0) {
        return this->table[index];
    } else {
        std::cerr << "index out of range";
    }
}

void DynamicTable::Set(double element, int index) {
    if (index < this->length - 1 && index > 0) {
        this->table[index] = element;
        if (index > this->last) {
            this->last = index;
        }
    } else {
        std::cerr << "index out of range";
    }
}

void DynamicTable::Print() {
    for (int i = 0; i <= this->last; i++) {
        std::cout << this->table[i] << ", ";
    }
    std::cout << std::endl;
}

//
// Created by venglov on 11.06.19.
//

#ifndef JMP2_DYNAMICTABLE_H
#define JMP2_DYNAMICTABLE_H


class DynamicTable {
private:
    double *table;
    int length;
    int last;

    void Resize(int newSize);

public:
    DynamicTable();

    explicit DynamicTable(int initLength);

    ~DynamicTable();

    void Add(double element);

    double Get(int index);

    void Set(double element, int index);

    void Print();
};


#endif //JMP2_DYNAMICTABLE_H

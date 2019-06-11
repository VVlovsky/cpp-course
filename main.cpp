//
// Created by venglov on 11.06.19.
//

#include <iostream>
#include "DynamicTable.h"
#include "DynamicTable.cpp"

int main() {
    auto test_table = new DynamicTable(3);
    test_table->Add(1.0);
    test_table->Add(2.0);
    test_table->Add(3.0);
    test_table->Add(4.0);
    test_table->Add(5.0);
    test_table->Print();
    std::cout << test_table->Get(3) << std::endl;
    test_table->Set(1.0, 3);
    test_table->Print();
    delete test_table;
    return 0;
}
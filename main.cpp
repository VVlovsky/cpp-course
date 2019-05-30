//
// Created by venglov on 30.05.19.
//

#include <iostream>
#include "Vector.h"
#include "InvalidIndexException.h"
#include "Animal.h"
#include "TaxReturn.h"
#include "Tax36.h"
#include "Tax37.h"

int main(){
    auto vector = new Vector<int>(3);

    vector->setAt(0, 1);
    vector->setAt(1, 2);
    vector->setAt(2, 3);

    try {
        vector->setAt(3, 4);
    } catch (const InvalidIndexException<int> &error) {
        std::cerr << error.what() << ": " << error.GetVECTOR() << std::endl;
    }

    Animal animal_1("Cat", "Meow", 3);
    std::cout << animal_1 << std::endl;

    double dividends = 100;
    auto tax36 = new Tax36();
    auto tax37 = new Tax37();
    std::cout << tax36->Calculate(dividends) << std::endl;
    std::cout << tax37->Calculate(dividends) << std::endl;

    return 0;
}
//
// Created by venglov on 30.05.19.
//

#ifndef JMP2_TAX36_H
#define JMP2_TAX36_H

#include "TaxReturn.h"

class Tax36 : public TaxReturn {
public:
    double Calculate(double dividends) override;
};



#endif //JMP2_TAX36_H

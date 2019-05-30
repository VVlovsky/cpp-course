//
// Created by venglov on 30.05.19.
//

#ifndef JMP2_TAX37_H
#define JMP2_TAX37_H

#include "TaxReturn.h"

class Tax37 : public TaxReturn {
public:
    double Calculate(double dividends) override;
};



#endif //JMP2_TAX37_H

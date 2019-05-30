//
// Created by venglov on 30.05.19.
//

#ifndef JMP2_TAXRETURN_H
#define JMP2_TAXRETURN_H


class TaxReturn {
public:
    virtual double Calculate(double dividends) = 0;
};


#endif //JMP2_TAXRETURN_H

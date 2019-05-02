//
// Created by venglov on 02.05.19.
//

#ifndef JMP2_PESEL_H
#define JMP2_PESEL_H


class PESEL : public std::error_code {
private:
    char pesel[11]{};
public:
    PESEL(char *pesel);

    ~PESEL();

    bool validatePESEL(const char *);
};


#endif //JMP2_PESEL_H

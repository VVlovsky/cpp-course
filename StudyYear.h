//
// Created by venglov on 04.04.19.
//

#ifndef JMP2_STUDYYEAR_H
#define JMP2_STUDYYEAR_H


class StudyYear {
public:
    int value;

    bool operator<(StudyYear another_year);

    bool operator==(StudyYear another_year);

    operator int();
};


#endif //JMP2_STUDYYEAR_H

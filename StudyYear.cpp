//
// Created by venglov on 04.04.19.
//

#include "StudyYear.h"

bool StudyYear::operator<(StudyYear another_year) {
    return this->value < another_year.value;
}

bool StudyYear::operator==(StudyYear another_year) {
    return this->value == another_year.value;
}

StudyYear::operator int() {
    return this->value;
}

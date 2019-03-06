#include "factorial.h"

int factorial_r(int num) {
    if (num > 1) {
        return (factorial_r(num - 1) * num);
    } else {
        return 1;
    }
}

int factorial_i(int num) {
    for (int i = num - 1; i > 1; i--) {
        num *= i;
    }
}

#ifndef COMMON_H_
#define COMMON_H_

#include <random>
#include <functional>

namespace Common{
    int get_random_number(int l, int r);

    template<class T>
    T binary_power(T number, int power);
}

#include "binary_power.h"

#endif
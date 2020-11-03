#include <iostream>

#include "util.h"

using namespace utils;
using namespace std;

CommonUtil::CommonUtil() {
    cout << "Intancing object from CommonUtil class"
}

int CommonUtil::minValue(int *numbers, int size) {
    int _min = 1000;

    if(size > 0) {
        for(int i = 0; i < size; ++i) {
            _min = min(numbers[i], _min);
        }
    }

    return _min;
}

int CommonUtil::maxValue(int *numbers, int size) {
     int _max = -10000;

    if(size > 0) {
        for(int i = 0; i < size; ++i) {
            _max = max(numbers[i], _max);
        }
    }

    return _max;
}

double CommonUtil::average(int *numbers, int size) {
    int _average = 0;

    if(size > 0) {
        for(int i = 0; i < size; ++i) {
            _average = _average + numbers[i];
        }

        _average = _average / size;
    }

    return _average;    
}
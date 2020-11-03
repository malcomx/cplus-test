#include <iostream>

#include "util.h"

using namespace std;

int main(int argc, char* argv[]) {

    cout << "Starting execution" << endl;

    int numbers[5] = { 1, 2, 3, 4, 5} ;
    int size = sizeof(numbers) / sizeof(numbers[0]);
    
    utils::CommonUtil common;

    double value = common.minValue(numbers, size);

    cout << "Min value from array is " << value << endl;

    value = common.maxValue(numbers, size);

    cout << "Max value from array is " << value << endl;

    value = common.average(numbers, size);

    cout << "Average value from array is " << value << endl;

    cout << "Ending execution" << endl;

    return 0;
}
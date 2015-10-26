// Copyright 2015 Nathan Green
#include <math.h>
#include <iostream>
#include <iomanip>
using std::cin;
using std::cout;
using std::setprecision;

/// Assuming Town A has a population less than that of Town B,
/// but a growth rate that is greater, calculate how long it
/// will take Town A to outgrow Town B.
int main(void) {
    int popA, rateA;
    int popB, rateB;
    int years = 0;
    cout << "Enter population and growth rate of Town A: ";
    cin >> popA >> rateA;
    cout << "Enter population and growth rate of Town B: ";
    cin >> popB >> rateB;
    if (rateA <= rateB) {
        if (popA < popB)
            cout << "Town A will always have a smaller population than Town B" << std::endl;
        else
            cout << "Town A's population is already greater than Town B's" << std::endl;
        return 1;
    }
    while (popA <= popB) {
        ++years;
        popA *= (1.0 + rateA / 100.0);
        popB *= (1.0 + rateB / 100.0);
    }
    cout << "After " << years << " years, Town A's population will be greater than Town B's" << std::endl;
    cout << popA << " citizens in Town A and " << popB << " citizens in Town B" << std::endl;
}

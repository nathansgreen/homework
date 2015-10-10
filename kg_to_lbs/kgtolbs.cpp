// Copyright 2015 Nathan Green
#include <iostream>
#include <iomanip>
using std::cout;
using std::setprecision;

typedef float kg;
typedef float lb;

lb to_lb(kg k) { return 2.20462262f * k; }

int main(void) {
    kg k;
    std::cout << "Enter person's weight in kg: ";
    std::cin >> k;
    cout << std::fixed << setprecision(2) << k << "kg" << " is "
        << setprecision(2) << to_lb(k) << "lb" << std::endl;
}

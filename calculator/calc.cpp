// Copyright 2015 Nathan Green
#include <math.h>
#include <iostream>
#include <iomanip>
using std::cout;
using std::setprecision;

int main(void) {
    float arg1, arg2;
    char oper;
    cout << "Enter a formula: ";
    std::cin >> arg1 >> oper >> arg2;
    float rslt;
    switch (oper) {
    case '+':
        rslt = arg1 + arg2;
        break;
    case '-':
        rslt = arg1 - arg2;
        break;
    case '*':
        rslt = arg1 * arg2;
        break;
    case '/':
        if (arg2 == 0.0) {
            cout << "ERRDIV0" << std::endl;
            return 2;
        }
        rslt  = arg1 / arg2;
        break;
    case '^':
        rslt = pow(arg1, arg2);
        break;
    case '%':
        rslt = static_cast<int>(arg1) % static_cast<int>(arg2);
        break;
    default:
        cout << "BADOP" << oper << std::endl;
        return 1;
    }
    cout << arg1 << ' ' << oper << ' ' << arg2
        << " = " << rslt << std::endl;
}

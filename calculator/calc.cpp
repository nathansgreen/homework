// Copyright 2015 Nathan Green
#include <math.h>
#include <iostream>
#include <iomanip>
using std::cout;
using std::setprecision;

union Rslt {
    float f;
    char c;
    Rslt() { c = 'E'; }
    Rslt(float ff) { f = ff; }
};

float factorial(float val, int next) {
    if (next <= 1) return val;
    val *= next;
    return factorial(val, --next);
}

int main(void) {
    float arg1, arg2;
    char oper;
    cout << "Enter a formula: ";
    std::cin >> arg1 >> oper;
    if (oper != '!') std::cin >> arg2;
    Rslt rslt;
    rslt = oper == '+' ? arg1 + arg2 : rslt;
    rslt = oper == '-' ? arg1 - arg2 : rslt;
    rslt = oper == '*' ? arg1 * arg2 : rslt;
    rslt = oper == '^' ? pow(arg1, arg2) : rslt;
    rslt = oper == '!' ? factorial(arg1, arg1 - 1): rslt;
    rslt = oper == '%' ? static_cast<int>(arg1) % static_cast<int>(arg2) : rslt;
    if (oper == '/' && arg2 == 0.0) {
        cout << "ERRDIV0" << std::endl;
        return 2;
    }
    rslt = oper == '/' ? arg1 / arg2 : rslt;
    if (rslt.c == 'E') {
        cout << "BADOP" << oper << std::endl;
        return 1;
    }
    cout << arg1 << ' ' << oper;
    if (oper != '!') cout << ' ' << arg2;
    cout << " = " << rslt.f << std::endl;
}

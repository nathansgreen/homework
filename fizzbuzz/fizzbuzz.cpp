// Copyright 2015 Nathan Green
#include <string>
#include <iostream>
using std::string;
using std::cout;

int main(void) {
    // running only one thread, so don't lock
    std::ios_base::sync_with_stdio(false);
    string s = string(10, ' ');
    s.clear();
    //for (int j = 0; j < 100000; j++)
    for (int i = 1; i < 101; i++) {
        if (i % 3 == 0) s.append("Fizz");
        if (i % 5 == 0) s.append("Buzz");
        if (s.empty()) s.append(std::to_string(i));
        s.append("\n");
        cout << s;
        s.clear();
    }
}

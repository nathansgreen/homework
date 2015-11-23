// Copyright 2015, Nathan Green
#include <iostream>
#include <iomanip>
#include <string>
using std::cin;
using std::cout;
using std::string;
using std::endl;

string nextStr(string &line) {
    size_t i = line.find_first_of(" \t,");
    string s = line.substr(0, i);
    line.erase(0, i);
    i = line.find_first_not_of(" \t,");
    if (i != string::npos)
        line.erase(0, i);
    return s;
}

string mask(string toMask) {
    return string(toMask.length(), 'x');
}

string maskSsn(string ssn) {
    ssn = string(ssn);
    for (string::iterator it=ssn.begin(); it != ssn.end(); ++it) {
        if (*it >= '0' && *it <= '9') {
            *it = 'x';
        }
    }
    size_t i = ssn.find('-');
    if (i == string::npos && ssn.length() > 2)
        ssn.insert(3, "-");
    i = ssn.find('-', 6);
    if (i == string::npos && ssn.length() > 5)
        ssn.insert(6, "-");
    if (ssn.length() > 11)
        ssn.erase(12);
    return ssn;
}

int main(void) {
    string line;
    string firstName, lastName, userId, ssn, password;
    cout << "Enter first name, last name, student id, social security number,"
         << " and password:" << endl;
    getline(std::cin, line);
    firstName = nextStr(line);
    lastName = nextStr(line);
    userId = nextStr(line);
    ssn = nextStr(line);
    password = line;
    cout << "First name: " << firstName << "." << endl
         << "Last name: " << lastName << "." << endl
         << "User ID: " << userId << "." << endl
         << "Social security number: " << maskSsn(ssn) << "." << endl
         << "Password: " << mask(password) << "." << endl;
    return 0;
}

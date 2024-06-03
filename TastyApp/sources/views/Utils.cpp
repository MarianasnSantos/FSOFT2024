#include "../../headers/views/Utils.h"
#include <iostream>
#include <sstream>

using namespace std;

int Utils::getNumber(const string& label){
    cout << label;
    int number;
    cin >> number;

    return number;
}

string Utils::getString(const string& label){
    cout << label;
    string input;
    cin >> input;

    return input;
}

void Utils::print(const string& message) {
    cout << message << endl;
}

vector<string> Utils::split(const string& str, char delimiter) {
    vector<std::string> tokens;
    string token;
    istringstream tokenStream(str);
    while (getline(tokenStream, token, delimiter)) {
        tokens.push_back(token);
    }
    return tokens;
}
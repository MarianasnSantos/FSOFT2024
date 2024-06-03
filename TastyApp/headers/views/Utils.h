#ifndef TASTYAPP_UTILSVIEW_H
#define TASTYAPP_UTILSVIEW_H

#include <string>
#include <vector>

using namespace std;

class Utils{
public:
    static int getNumber(const string& label);
    static string getString(const string& label);
    static void print(const string& message);
    static vector<string> split(const string& str, char delimiter);
};

#endif //TASTYAPP_UTILSVIEW_H

#ifndef TASTYAPP_UTILSVIEW_H
#define TASTYAPP_UTILSVIEW_H

#include <string>
using namespace std;

class Utils{
public:
    static int getNumber(const string& label);
    static string getString(const string& label);
};

#endif //TASTYAPP_UTILSVIEW_H

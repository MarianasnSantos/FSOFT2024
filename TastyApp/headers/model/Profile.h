#ifndef LASTTEST_LOG_PROFILE_H
#define LASTTEST_LOG_PROFILE_H

#include <string>

using namespace std;

class Profile {
public:
    Profile(const string& name);
    void setName(const string& name);
    string getName() const;

private:
    string name;
};

#endif //LASTTEST_LOG_PROFILE_H

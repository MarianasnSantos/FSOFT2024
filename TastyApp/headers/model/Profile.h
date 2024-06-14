#ifndef FSOFT2024_1DA_5_PROFILE_H
#define FSOFT2024_1DA_5_PROFILE_H

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

#endif //FSOFT2024_1DA_5_PROFILE_H

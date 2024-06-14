#ifndef FSOFT2024_1DA_5_REGISTRATION_H
#define FSOFT2024_1DA_5_REGISTRATION_H

#include "User.h"
#include "Group.h"

using namespace std;

class Registration {
private:
    int ID;
    User * user;
    Group * group;
    bool isPointerNotNull(void * ptr);
public:
    Registration(int ID, User * user, Group * group);
    Registration(const Registration& obj);
    ~Registration();
    int
};


#endif //FSOFT2024_1DA_5_REGISTRATION_H

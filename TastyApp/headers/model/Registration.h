#ifndef LASTTEST_LOG_REGISTRATION_H
#define LASTTEST_LOG_REGISTRATION_H

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


#endif //LASTTEST_LOG_REGISTRATION_H

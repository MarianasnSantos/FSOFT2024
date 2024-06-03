#ifndef LASTTEST_LOG_USERCONTAINER_H
#define LASTTEST_LOG_USERCONTAINER_H

#include <vector>
#include "User.h"

using namespace std;

class UserContainer {
public:
    void addUser(const User& user);
    vector <User> getUsers() const;

private:
    vector <User> users;
};


#endif //LASTTEST_LOG_USERCONTAINER_H

#ifndef FSOFT2024_1DA_5_USERVIEW_H
#define FSOFT2024_1DA_5_USERVIEW_H


#include <string>
#include "User.h"

using namespace std;

class UserView {
public:
    UserView();

    int menuUser();
    User getUser();
    void printUserAdded(const User& user);
    void printUserUpdated(const User& user);
    void printUserRemoved(const string& username);
    void printUserNotFound(const string& username);
};

#endif //FSOFT2024_1DA_5_USERVIEW_H

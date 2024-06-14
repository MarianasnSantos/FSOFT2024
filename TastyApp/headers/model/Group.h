#ifndef FSOFT2024_1DA_5_GROUP_H
#define FSOFT2024_1DA_5_GROUP_H

#include <string>
#include <vector>
#include "User.h"

using namespace std;

class Group {
public:
    Group(const string& name);
    string getName() const;
    void setName(const string& name);
    void addUser(const User& user);
    void removeUser(const string& username);
    vector<User> getUsers() const;

private:
    string name;
    vector<User> users;
};
#endif //FSOFT2024_1DA_5_GROUP_H

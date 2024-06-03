#include "../../headers/model/Group.h"

using namespace std;

Group::Group(const string& name) : name(name) {}

void Group::addUser(const User& user) {
    users.push_back(user);
}

vector<User> Group::getUsers() const {
    return users;
}
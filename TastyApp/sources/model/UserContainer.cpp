#include <iostream>
#include "../../headers/model/UserContainer.h"

using namespace std;

void UserContainer::addUser(const User& user) {
    users.push_back(user);
}

vector <User> UserContainer::getUsers() const {
    return users;
}
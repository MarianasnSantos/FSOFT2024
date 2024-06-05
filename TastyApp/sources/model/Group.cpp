#include "Group.h"

using namespace std;

Group::Group(const string& name) : name(name) {}

string Group::getName() const{
    return name;
}

void Group::setName(const string& name){
    this->name = name;
}

void Group::addUser(const User& user) {
    users.push_back(user);
}

void Group::removeUser(const string& username) {
    users.erase(remove_if(users.begin(), users.end(),
                          [&username](const User& user) { return user.getName() == username; }), users.end());
}
vector<User> Group::getUsers() const {
    return users;
}
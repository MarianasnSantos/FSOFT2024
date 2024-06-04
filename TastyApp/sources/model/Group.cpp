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

vector<User> Group::getUsers() const {
    return users;
}
#include "UserContainer.h"
#include <algorithm>

using namespace std;

void UserContainer::addUser(const User& user) {
    users.push_back(user);
}

bool UserContainer::removeUser(const string& name) {
    auto it = remove_if(users.begin(), users.end(), [&name](const User& user) {
        return user.getName() == name;
    });

    if (it != users.end()) {
        users.erase(it, users.end());
        return true;
    } else {
        return false;
    }
}

bool UserContainer::updateUser(const string& name, const User& updatedUser) {
    for (auto& user : users) {
        if (user.getName() == name) {
            user = updatedUser;
            return true;
        }
    }
    return false;
}

User* UserContainer::getUserByName(const string& name) {
    for (auto& user : users) {
        if (user.getName() == name) {
            return &user;
        }
    }
    return nullptr;
}

vector<User> UserContainer::getUsers() const {
    return users;
}

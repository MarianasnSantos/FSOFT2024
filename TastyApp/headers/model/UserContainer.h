#ifndef FSOFT2024_1DA_5_USERCONTAINER_H
#define FSOFT2024_1DA_5_USERCONTAINER_H

#include <vector>
#include "User.h"

class UserContainer {
public:
    void addUser(const User& user);
    bool removeUser(const std::string& name);
    bool updateUser(const std::string& name, const User& updatedUser);
    User* getUserByName(const std::string& name);
    std::vector<User> getUsers() const;

private:
    std::vector<User> users;
};

#endif //FSOFT2024_1DA_5_USERCONTAINER_H


#ifndef TASTYAPP_GROUPVIEW_H
#define TASTYAPP_GROUPVIEW_H

#include <string>
#include "Group.h"
#include "User.h"

using namespace std;

class GroupView {
public:
    GroupView();

    int menuGroup();
    string getGroupName();
    User getUser();
    void printGroupCreated(const string& groupName);
    void printJoinedGroup(const string& groupName);
    void printGroupRemoved(const string& groupName);
    void printGroupNotFound();
};

#endif //TASTYAPP_GROUPVIEW_H

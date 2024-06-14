#ifndef FSOFT2024_1DA_5_GROUPCONTAINER_H
#define FSOFT2024_1DA_5_GROUPCONTAINER_H

#include "Group.h"
#include <string>
#include <vector>

using namespace std;

class GroupContainer {
public:
    void addGroup(const Group& group);
    void removeGroup(const string &groupName);
    Group *getGroupByName(const string &groupName);
    vector <Group> getGroups() const;

private:
    vector <Group> groups;
};
#endif //FSOFT2024_1DA_5_GROUPCONTAINER_H

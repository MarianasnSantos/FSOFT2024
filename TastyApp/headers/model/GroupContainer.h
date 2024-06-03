#ifndef LASTTEST_LOG_GROUPCONTAINER_H
#define LASTTEST_LOG_GROUPCONTAINER_H

#include "Group.h"
#include <vector>

using namespace std;

class GroupContainer {
public:
    void addGroup(const Group& group);
    vector <Group> getGroups() const;

private:
    vector <Group> groups;
};


#endif //LASTTEST_LOG_GROUPCONTAINER_H

#include <iostream>
#include "GroupContainer.h"

using namespace std;

void GroupContainer::addGroup(const Group& group) {
    groups.push_back(group);
}

vector<Group> GroupContainer::getGroups() const {
    return groups;
}

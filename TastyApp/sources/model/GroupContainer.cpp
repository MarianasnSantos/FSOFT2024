#inclue "GroupContainer.h"

using namespace std;

void GroupContainer::addGroup(const Group& group){
    groups.push_back(group);
}

void GroupContainer::removeGroup(const string& groupName) {
    groups.erase(remove_if(groups.begin(), groups.end(),
                           [&groupName](const Group& group) { return group.getName() == groupName; }), groups.end());
}

Group* GroupContainer::getGroupByName(const string& groupName) {
    for (auto& group : groups) {
        if (group.getName() == groupName) {
            return &group;
        }
    }
    return nullptr;
}


vector<Group>GroupContainer::getGroups() const{
    return groups;
}
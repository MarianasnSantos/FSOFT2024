#include "GroupView.h"
#include "Utils.h"
#include <iostream>

using namespace std;

GroupView::GroupView() {}

int GroupView::menuGroup() {
    int op = -1;

    do {
        cout << "\n\n========== Menu Group ==========\n";
        cout << "1 - Create Group\n";
        cout << "2 - Join Group\n";
        cout << "3 - Remove Group\n";
        cout << "\n0 - EXIT\n";

        op = Utils::getNumber("Option");
    } while (op < 0 || op > 3);

    return op;
}

string GroupView::getGroupName() {
    return Utils::getString("Enter the group name: ");
}

User GroupView::getUser() {
    string username = Utils::getString("Enter the user name: ");
    // Assuming there is a constructor that takes a username
    return User(username);
}

void GroupView::printGroupCreated(const string& groupName) {
    cout << "Group '" << groupName << "' created successfully!\n";
}

void GroupView::printJoinedGroup(const string& groupName) {
    cout << "Joined group '" << groupName << "' successfully!\n";
}

void GroupView::printGroupRemoved(const string& groupName) {
    cout << "Group '" << groupName << "' removed successfully!\n";
}

void GroupView::printGroupNotFound() {
    cout << "Group not found!\n";
}

#include "ProfileView.h"
#include "Utils.h"
#include <iostream>

using namespace std;

ProfileView::ProfileView() {}

int ProfileView::menuProfile() {
    int op = -1;

    do {
        cout << "\n\n========== Menu Profile ==========\n";
        cout << "1 - Add User\n";
        cout << "2 - Update User\n";
        cout << "3 - Remove User\n";
        cout << "\n0 - EXIT\n";

        op = Utils::getNumber("Option");
    } while (op < 0 || op > 3);

    return op;
}

User ProfileView::getUser() {
    string username = Utils::getString("Enter the user name: ");
    // Assuming there is a constructor that takes a username
    return User(username);
}

void ProfileView::printUserAdded(const User& user) {
    cout << "User '" << user.getName() << "' added successfully!\n";
}

void ProfileView::printUserUpdated(const User& user) {
    cout << "User '" << user.getName() << "' updated successfully!\n";
}

void ProfileView::printUserRemoved(const string& username) {
    cout << "User '" << username << "' removed successfully!\n";
}

void ProfileView::printUserNotFound(const string& username) {
    cout << "User '" << username << "' not found!\n";
}

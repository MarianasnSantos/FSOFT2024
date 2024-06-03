#ifndef LASTTEST_LOG_PROFILECONTAINER_H
#define LASTTEST_LOG_PROFILECONTAINER_H

#include "Profile.h"
#include <vector>

using namespace std;

class ProfileContainer {
public:
    void addProfile(const Profile& profile);
    vector<Profile> getProfiles() const;
private:
    vector<Profile> profiles;
};


#endif //LASTTEST_LOG_PROFILECONTAINER_H

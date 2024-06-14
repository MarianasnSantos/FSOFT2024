#ifndef FSOFT2024_1DA_5_PROFILECONTAINER_H
#define FSOFT2024_1DA_5_PROFILECONTAINER_H

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


#endif //FSOFT2024_1DA_5_PROFILECONTAINER_H

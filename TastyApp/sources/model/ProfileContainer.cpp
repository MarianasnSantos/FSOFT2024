#include "../../headers/model/ProfileContainer.h"

using namespace std;

void ProfileContainer::addProfile(const Profile& profile) {
    profiles.push_back(profile);
}

vector<Profile> ProfileContainer::getProfiles() const {
    return profiles;
}
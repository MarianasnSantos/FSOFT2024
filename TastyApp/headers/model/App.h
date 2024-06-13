#ifndef FSOFT2024_1DA_5_APP_H
#define FSOFT2024_1DA_5_APP_H

#include <string>
#include "GroupContainer.h"
#include "ProfileContainer.h"
#include "RatingContainer.h"
#include "RecipeContainer.h"
#include "UserContainer.h"

using namespace std;

class App {
private :
    string name;
    GroupContainer groups;
    ProfileContainer profiles;
    RatingContainer ratings;
    RecipeContainer recipes;
    UserContainer users;

public :
    App();
    App(const string &name);
    App(const string &obj);
    const string& getName() const;
    void setName(const string &name);

    GroupContainer& getGroupContainer();
    ProfileContainer& getProfileContainer();
    RatingContainer& getRatingContainer();
    RecipeContainer& getRecipeContainer();
    UserContainer& getUserContainer();
};

#endif //FSOFT2024_1DA_5_APP_H

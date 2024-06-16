#ifndef FSOFT2024_1DA_5_CONTROLLER_H
#define FSOFT2024_1DA_5_CONTROLLER_H

#include <vector>
#include "View.h"
#include "GroupView.h"
#include "ProfileView.h"
#include "RatingView.h"
#include "RecipesView.h"
#include "UserView.h"
#include "Utils.h"
#include "App.h"

class Controller {
public:
    Controller(App& app);
    void run();
    void addUser(const User& user);
    void addRecipe(const Recipe& recipe);
    std::vector<User> getUsers() const;
    std::vector<Recipe> getRecipes() const;

private:
    void runProfile();
    void runRecipes();
    void runGroups();

    App& model;
    View view;
    UserView userView;
    RecipesView recipesView;
};

#endif //FSOFT2024_1DA_5_CONTROLLER_H

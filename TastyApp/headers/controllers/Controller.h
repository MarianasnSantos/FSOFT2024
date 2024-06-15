#ifndef FSOFT2024_1DA_5_CONTROLLER_H
#define FSOFT2024_1DA_5_CONTROLLER_H

#include <vector>
#include "headers/views/View.h"
#include "headers/views/GroupView.h"
#include "headers/views/ProfileView.h"
#include "headers/views/RatingView.h"
#include "headers/views/RecipesView.h"
#include "headers/views/UserView.h"
#include "headers/views/Utils.h"
#include "headers/model/App.h"

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

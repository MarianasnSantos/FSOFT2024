
#ifndef LASTTEST_LOG_CONTROLLER_H
#define LASTTEST_LOG_CONTROLLER_H

#include <vector>
#include "View.h"
#include "GroupView.h"
#include "ProfileView.h"
#include "RatingView.h"
#include "RecipesView.h"
#include "UserView.h"
#include "UtilsView.h"
#include "App.h"


class Controller{


public:
    App model;
    void addUser(const User& user);
    void addRecipe(const Recipe& recipe);
    std::vector<User> getUsers() const;
    std::vector<Recipe> getRecipes() const;

private:
    UserContainer userContainer;
    RecipeContainer recipeContainer;
};

#endif //LASTTEST_LOG_CONTROLLER_H

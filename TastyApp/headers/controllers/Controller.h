
#ifndef LASTTEST_LOG_CONTROLLER_H
#define LASTTEST_LOG_CONTROLLER_H

#include <vector>
#include "User.h"
#include "Recipe.h"
#include "UserContainer.h"
#include "RecipeContainer.h"

class Controller {
public:
    void addUser(const User& user);
    void addRecipe(const Recipe& recipe);
    std::vector<User> getUsers() const;
    std::vector<Recipe> getRecipes() const;

private:
    UserContainer userContainer;
    RecipeContainer recipeContainer;
};

#endif //LASTTEST_LOG_CONTROLLER_H

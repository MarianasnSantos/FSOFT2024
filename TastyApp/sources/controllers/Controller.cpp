#include "Controller.h"

void Controller::addUser(const User& user) {
    userContainer.addUser(user);
}

void Controller::addRecipe(const Recipe& recipe) {
    recipeContainer.addRecipe(recipe);
}

std::vector<User> Controller::getUsers() const {
    return userContainer.getUsers();
}

std::vector<Recipe> Controller::getRecipes() const {
    return recipeContainer.getRecipes();
}
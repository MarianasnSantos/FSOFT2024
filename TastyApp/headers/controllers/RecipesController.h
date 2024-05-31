#ifndef TASTYAPP_RECIPESCONTROLLER_H
#define TASTYAPP_RECIPESCONTROLLER_H

#include "RecipeController.h"

void RecipeController::addRecipe(const Recipe &recipe) {
    recipes.push_back(recipe);
}

std::vector<Recipe> RecipeController::getRecipes() const {
    return recipes;
}


#endif //TASTYAPP_RECIPESCONTROLLER_H

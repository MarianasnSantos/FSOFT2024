#include "../../headers/model/RecipeContainer.h"

using namespace std;

void RecipeContainer::addRecipe(const Recipe& recipe) {
    recipes.push_back(recipe);
}

vector <Recipe> RecipeContainer::getRecipes() const {
    return recipes;
}
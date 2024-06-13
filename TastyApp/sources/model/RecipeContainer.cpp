#include "RecipeContainer.h"

using namespace std;

void RecipeContainer::addRecipe(const Recipe &recipe) {
    recipes.push_back(recipe);
}

vector <Recipe> RecipeContainer::getRecipes() const {
    return recipes;
}

Recipe* RecipeContainer::getRecipeByTitle(const int &title) {
    for (auto &recipe: recipes) {
        if(recipe.getTitle() == title){
            return &recipe;
        }
    }

    return nullptr;
}
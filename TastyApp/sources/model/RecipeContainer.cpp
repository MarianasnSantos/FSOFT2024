#include "RecipeContainer.h"
#include <string>

using namespace std;

void RecipeContainer::addRecipe(const Recipe &recipe) {
    recipes.push_back(recipe);
}

void RecipeContainer::removeRecipeByName(const string &title){
    recipes.erase(remove_if(recipes.begin(), recipes.end(),
                            [&title](const Recipe& recipe) {return recipe.getTitle() == title; }), recipes.end());
}


Recipe* RecipeContainer::getRecipeByTitle(const string& title) {
    for (auto &recipe : recipes) {
        if(recipe.getTitle() == title){
            return &recipe;
        }
    }

    return nullptr;
}

vector <Recipe>& RecipeContainer::getRecipes() const {
    return recipes;
}

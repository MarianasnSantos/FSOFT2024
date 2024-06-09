#ifndef TASTYAPP_RECIPESVIEW_H
#define TASTYAPP_RECIPESVIEW_H

#include <string>
#include "Recipe.h"

using namespace std;

class RecipesView {
public:
    RecipesView();

    int menuRecipes();
    Recipe getRecipe();
    void printRecipeAdded(const Recipe& recipe);
    void printRecipeUpdated(const Recipe& recipe);
    void printRecipeRemoved(const string& recipeName);
    void printRecipeNotFound(const string& recipeName);
    void showRecipe(const Recipe& recipe);
};

#endif //TASTYAPP_RECIPESVIEW_H

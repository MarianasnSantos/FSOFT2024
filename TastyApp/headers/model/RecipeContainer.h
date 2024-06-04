#ifndef LASTTEST_LOG_RECIPECONTAINER_H
#define LASTTEST_LOG_RECIPECONTAINER_H

#include <vector>
#include <string>
#include "Recipe.h"
#include "Rating.h"

using namespace std;

class RecipeContainer {
public:
    void addRecipe(const Recipe& recipe);
    vector<Recipe> getRecipes() const;
    Recipe* getRecipeByTitle(const string& title);

private:
    vector <Recipe> recipes;
};

#endif //LASTTEST_LOG_RECIPECONTAINER_H

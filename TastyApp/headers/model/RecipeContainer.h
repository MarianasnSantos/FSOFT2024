#ifndef LASTTEST_LOG_RECIPECONTAINER_H
#define LASTTEST_LOG_RECIPECONTAINER_H

#include <vector>
#include "Recipe.h"

using namespace std;

class RecipeContainer {
public:
    void addRecipe(const Recipe& recipe);
    vector <Recipe> getRecipes() const;

private:
    vector <Recipe> recipes;
};

#endif //LASTTEST_LOG_RECIPECONTAINER_H

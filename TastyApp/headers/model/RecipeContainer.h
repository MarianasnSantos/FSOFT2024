#ifndef FSOFT2024_1DA_5_RECIPECONTAINER_H
#define FSOFT2024_1DA_5_RECIPECONTAINER_H

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

#endif //FSOFT2024_1DA_5_RECIPECONTAINER_H

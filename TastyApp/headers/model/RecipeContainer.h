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
    void removeRecipeByName(const string &title);
    Recipe* getRecipeByTitle(const string& title);
    vector<Recipe>& getRecipes() const;

private:
    vector <Recipe> recipes;
};

#endif //FSOFT2024_1DA_5_RECIPECONTAINER_H

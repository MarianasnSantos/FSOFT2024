#include "RecipesView.h"
#include "Utils.h"
#include <iostream>

using namespace std;

RecipesView::RecipesView() {}

int RecipesView::menuRecipes() {
    int op = -1;

    do {
        cout << "\n\n========== Menu Recipes ==========\n";
        cout << "1 - Add Recipe\n";
        cout << "2 - Update Recipe\n";
        cout << "3 - Show Recipe\n";
        cout << "4 - Add Rating\n";
        cout << "5 - Add Comment\n";
        cout << "6 - Remove Rating\n";
        cout << "\n0 - EXIT\n";

        op = Utils::getNumber("Option");
    } while (op < 0 || op > 6);

    return op;
}

Recipe RecipesView::getRecipe() {
    string title = Utils::getString("Enter the recipe title: ");
    string description = Utils::getString("Enter the recipe description: ");
    // Assuming there is a constructor that takes a title and description
    return Recipe(title, description);
}

void RecipesView::printRecipeAdded(const Recipe& recipe) {
    cout << "Recipe '" << recipe.getTitle() << "' added successfully!\n";
}

void RecipesView::printRecipeUpdated(const Recipe& recipe) {
    cout << "Recipe '" << recipe.getTitle() << "' updated successfully!\n";
}

void RecipesView::printRecipeRemoved(const string& recipeName) {
    cout << "Recipe '" << recipeName << "' removed successfully!\n";
}

void RecipesView::printRecipeNotFound(const string& recipeName) {
    cout << "Recipe '" << recipeName << "' not found!\n";
}

void RecipesView::showRecipe(const Recipe& recipe) {
    cout << "Title: " << recipe.getTitle() << "\n";
    cout << "Description: " << recipe.getDescription() << "\n";
    // Print ratings and comments here if necessary
}
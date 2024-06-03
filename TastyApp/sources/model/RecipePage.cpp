#include <iostream>
#include "../../headers/model/RecipePage.h"

using namespace std;

RecipePage::RecipePage(const Recipe& recipe) : recipe(recipe) {}

void RecipePage::addComment(const string& comment) {
    comments.push_back(comment);
}

vector<string> RecipePage::getComments() const {
    return comments;
}

void RecipePage::displayRecipe() const {
    cout << "Recipe: " << recipe.getTitle() << endl;
    cout << recipe.getDescription() << endl;
    cout << "Comments:" << endl;
    for (const auto& comment : comments) {
        cout << comment << endl;
    }
}
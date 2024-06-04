#include <string>
#include <vector>
#include "User.h"
#include "Recipe.h"
#include "Profile.h"

using namespace std;

User::User(const string& name) : name(name), profile(name) {}

void User::setName(const string& name) {
    this->name = name;
    profile.setName(name);
}

string User::getName() const {
    return name;
}

void User::addRecipe(const Recipe& recipe) {
    recipes.push_back(recipe);
}

vector<Recipe> User::getRecipes() const {
    return recipes;
}

Profile& User::getProfile() {
    return profile;
}
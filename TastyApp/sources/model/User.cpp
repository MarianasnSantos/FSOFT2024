#include <string>
#include <vector>
#include "../../headers/model/User.h"
#include "../../headers/model/Recipe.h"
#include "../../headers/model/Profile.h"

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
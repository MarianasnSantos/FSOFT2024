#include "User.h"
#include <iostream>
#include <vector>
#include "Recipes.h"

using namespace std;

User::User(const string& name): name(name), Profile(name) {}

void User::setName(const string &name) {
    this->name = name;
    Profile.setName(name);
}

string User::getName() const{
    return name;
}

void User::addRecipe(const Recipes& recipe){
    recipe.push_back(recipe);
}

vector <Recipes> User::getRecipe() const {
    return recipe;
}

Profile& User::getProfile(){
    return profile;
}

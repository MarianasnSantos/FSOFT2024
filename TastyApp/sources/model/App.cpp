#include "App.h"

App::App() : name("TastyApp") {}

App::App(const string &name) : name(name) {}

const string& App::getName() const {
    return name;
}

void App::setName(const string &name) {
    this->name = name;
}

GroupContainer& App::getGroupContainer() {
    return groups;
}

ProfileContainer& App::getProfileContainer() {
    return profiles;
}

RatingContainer& App::getRatingContainer() {
    return ratings;
}

RecipeContainer& App::getRecipeContainer() {
    return recipes;
}

UserContainer& App::getUserContainer() {
    return users;
}
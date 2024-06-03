#include "../../headers/model/Recipe.h"

using namespace std;

Recipe::Recipe(const string& title, const string& description)
        : title(title), description(description) {}

string Recipe::getTitle() const {
    return title;
}

string Recipe::getDescription() const {
    return description;
}

void Recipe::addRating(const Rating& rating) {
    ratings.push_back(rating);
}

vector<Rating> Recipe::getRatings() const {
    return ratings;
}
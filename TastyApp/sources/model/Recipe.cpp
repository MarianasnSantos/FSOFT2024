#include "Recipe.h"

using namespace std;

Recipe::Recipe(const string& title, const string& description)
        : title(title), description(description) {}

string Recipe::getTitle() const {
    return title;
}

string Recipe::getDescription() const {
    return description;
}

void Recipe::setTitle(const string& title){
    this->title = title;
}

void Recipe::setDescription(const string& description){
    this->description = description;
}

void Recipe::addRating(const Rating& rating, const string& comment) {
    ratings.push_back(rating);
    comments.push_back(comment);
}

vector<Rating> Recipe::getRatings() const {
    return ratings;
}

vector<string> Recipe::getComments() const {
    return comments;
}
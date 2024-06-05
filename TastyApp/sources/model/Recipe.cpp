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

void Recipe::addRating(const Rating& rating) {
    ratings.push_back(rating);
}

void Recipe::removeRating(size_t index) {
    if(index < ratings.size()){
        ratings.erase(ratings.begin() + index);
    }
}

vector<Rating> Recipe::getRatings() const {
    return ratings;
}

void Recipe::addComment(const int &comment) {
    comments.push_back(comment);
}

vector<string> Recipe::getComments() const {
    return comments;
}
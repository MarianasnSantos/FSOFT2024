#include "../../headers/model/RatingContainer.h"

using namespace std;

void RatingContainer::addRating(const Rating& rating) {
    ratings.push_back(rating);
}

vector<Rating> RatingContainer::getRatings() const {
    return ratings;
}
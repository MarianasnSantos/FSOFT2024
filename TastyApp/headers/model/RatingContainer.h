#ifndef FSOFT2024_1DA_5_RATINGCONTAINER_H
#define FSOFT2024_1DA_5_RATINGCONTAINER_H

#include "Rating.h"
#include <vector>

using namespace std;

class RatingContainer {
public:
    void addRating(const Rating& rating);
    vector<Rating> getRatings() const;
private:
    vector<Rating> ratings;
};


#endif //FSOFT2024_1DA_5_RATINGCONTAINER_H

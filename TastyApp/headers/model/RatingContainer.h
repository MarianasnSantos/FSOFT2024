#ifndef LASTTEST_LOG_RATINGCONTAINER_H
#define LASTTEST_LOG_RATINGCONTAINER_H

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


#endif //LASTTEST_LOG_RATINGCONTAINER_H

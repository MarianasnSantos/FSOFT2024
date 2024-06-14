#ifndef FSOFT2024_1DA_5_RATINGVIEW_H
#define FSOFT2024_1DA_5_RATINGVIEW_H

#include <string>

using namespace std;

class RatingView {
public:
    RatingView();

    int menuRating();
    int getRating();
    void printRatingAdded(int rating);
    void printRatingRemoved(int rating);
    void printRatingNotFound();
};

#endif //FSOFT2024_1DA_5_RATINGVIEW_H

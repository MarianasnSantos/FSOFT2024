#ifndef TASTYAPP_RATINGVIEW_H
#define TASTYAPP_RATINGVIEW_H

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

#endif //TASTYAPP_RATINGVIEW_H

#ifndef LASTTEST_LOG_RECIPES_H
#define LASTTEST_LOG_RECIPES_H

#include <string>
#include <vector>
#include "Rating.h"

using namespace std;

class Recipe {
public:
    Recipe(const string& title, const string& description);
    string getTitle() const;
    string getDescription() const;
    void addRating(const Rating& rating);
    vector<Rating> getRatings() const;

private:
    string title;
    string description;
    vector<Rating> ratings;
};

#endif //LASTTEST_LOG_RECIPES_H

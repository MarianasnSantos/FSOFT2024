#ifndef LASTTEST_LOG_RECIPE_H
#define LASTTEST_LOG_RECIPE_H

#include <string>
#include <vector>
#include "Rating.h"
#include "Profile.h"

using namespace std;

class Recipe {
public:
    Recipe(const string& title, const string& description);
    string getTitle() const;
    string getDescription() const;
    void setTitle(const string& title);
    void setDescription(const string& description);
    void addRating(const Rating& rating, const string& comment);
    vector<Rating> getRatings() const;
    vector<string> getComments() const;

private:
    string title;
    string description;
    vector<Rating> ratings;
    vector<string> comments;
};

#endif //LASTTEST_LOG_RECIPE_H

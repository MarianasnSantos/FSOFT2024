#ifndef FSOFT2024_1DA_5_RECIPE_H
#define FSOFT2024_1DA_5_RECIPE_H

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
    void addRating(const Rating& rating);
    void removeRating(size_t index);
    vector<Rating> getRatings() const;
    void addComment(const string &comment);
    vector<string> getComments() const;

private:
    string title;
    string description;
    vector<Rating> ratings;
    vector<string> comments;
};

#endif //FSOFT2024_1DA_5_RECIPE_H

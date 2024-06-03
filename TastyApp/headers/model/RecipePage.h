#ifndef LASTTEST_LOG_RECIPEPAGE_H
#define LASTTEST_LOG_RECIPEPAGE_H

#include <string>
#include <vector>
#include "Recipe.h"

using namespace std;

class RecipePage {
public:
    RecipePage(const Recipe& recipe);
    void addComment(const string& comment);
    vector <string> getComments() const;
    void displayRecipe() const;

private:
    Recipe recipe;
    vector <string> comments;
};

#endif //LASTTEST_LOG_RECIPEPAGE_H

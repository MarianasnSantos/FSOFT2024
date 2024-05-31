#ifndef LASTTEST_LOG_USER_H
#define LASTTEST_LOG_USER_H

#include <string>
#include "Recipes.h"
#include <vector>

using namespace std;

class User {

public:
    User(const string& name);
    void setName(const string& name);
    string getName() const;
    void addRecipe(const Recipes& recipe);
    vector <Recipes> getRecipe() const;

private:
    string name;
    vector <Recipes> recipe;
};


#endif //LASTTEST_LOG_USER_H

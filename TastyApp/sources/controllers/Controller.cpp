#include <iostream>
#include "Controller.h"
#include "Utils.h"

using namespace std;

Controller::Controller(App& app){
    this->model = app;
}

void Controller::run(){
    int op = -1;

    do {
        op = this->view.menuApp();
        switch (op) {
            case 1: runProfile();
            break;

            case 2: runRecipes();
            break;

            case 3: runGroups()
            break;

            default:
                break;
        }
    } while(op != 0);
}


void Controller::runProfile(){
    int op = -1;

    do {
        op = this->view.menuUser();

        switch (op) {
            case 1: {
                User user = this->UserView.getUser();
                UserContainer& container = this->model.getUserContainer();
                container.add(user);
            }
            break;

            case 2: {
                string name = Utils::getString("Enter the user name: ");
                Date date = this->UserView.getDate();
                UserContainer& container = this->model.getUserContainer();
                container.update(name);
            }
            break;

            default:
                break;
        }
    } while(op != 0);
}



void Controller::runRecipes(){
    int op = -1;

    do {
        op = this->view.menuRecipes();

        switch (op) {
            case 1: {
                Recipe recipe = this->RecipesView.getRecipes();
                RecipeContainer& container = this->model.getRecipeContainer();
                container.add(recipe);
            }
            break;

            case 2: {
                string name = Utils::getString("Enter the Recipe name: ");
                RecipeContainer& container = this->model.getRecipeContainer();
                container.update(name);
            }

            break;

            case 3: {
                string name = Utils::getString("Enter the Recipe name: ");
                RecipeContainer& container = this->model.getRecipeContainer();
                Recipe* recipe = container.getRecipeByTitle(name);

                if(recipe != nullptr){
                    RecipePage page = container.getRecipePage(name);
                    this->view.showRecipePage(page);

                    Utils::print("Recipe title: " + recipe->getTitle());
                    Utils::print("Description: " + recipe->getDescription());

                    auto ratings = recipe->getRatings();
                    auto comments = recipe->getComments();

                    for(size_t i = 0; i < ratings.size(); ++i){
                        Utils::print("Rating: " + to_string(rating[i].getScore()));
                        Utils::print("Comment: " + comments[i]);
                    }
                } else {
                    Utils::print("Recipe not found!");
                }

            }
            break;

            case 4: {
                string name = Utils::getString("Enter the Recipe name to rate: ");
                int rating  = Utils::getNumber("Enter your rating (1-5): ");
                string comment = Utils::getString("Enter your comment: ");
                RecipeContainer& container = this->model.getRecipeContainer();
                Recipe* recipe = container.getRecipeByTitle(name);

                if(recipe != nullptr){
                    Rating newRating(rating);
                    recipe->addRating(newRating, comment);
                } else {
                    Utils::print("Recipe not found!");
                }
            }
            break;

            default:
                break;
        }
    } while(op != 0);
}

// FALTA FAZER A FUNÇÃO VOID CONTROLLER::runGROUPS()

void Controller::runGroups(){}





void Controller::addUser(const User& user) {
    UserContainer& users = this->model.getUserContainer();
    users.addUser(user);
}

void Controller::addRecipe(const Recipe& recipe) {
    RecipeContainer& recipes = this->model.getRecipeContainer();
    recipes.addRecipe(recipe);
}

vector<User> Controller::getUsers() const {
    UserContainer& users = this->model.getUserContainer();
    return users.getUsers();
}

vector<Recipe> Controller::getRecipes() const {
    RecipeContainer& recipes = this->model.getRecipeContainer();
    return recipes.getRecipes();
}
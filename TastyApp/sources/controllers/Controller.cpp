#include "headers/controllers/Controller.h"
#include "headers/views/Utils.h"
#include "headers/controllers/App.h"
#include <iostream>

using namespace std;

Controller::Controller(App& app) : model(app) {}

void Controller::run() {
    int op = -1;

    do {
        op = this->view.menuApp();
        switch (op) {
            case 1: runProfile();
                break;

            case 2: runRecipes();
                break;

            case 3: runGroups();
                break;

            default:
                break;
        }
    } while (op != 0);
}

void Controller::runProfile() {
    int op = -1;

    do {
        op = this->view.menuUser();

        switch (op) {
            case 1: {
                User user = this->userView.getUser();
                this->model.getUserContainer().addUser(user);
            }
                break;

            case 2: {
                string name = Utils::getString("Enter the user name: ");
                this->model.getUserContainer().removeUser(name);  // Certifique-se de que a função removeUser existe em UserContainer
            }
                break;

            case 3: {
                string name = Utils::getString("Enter the user name: ");
                User updatedUser = this->userView.getUser();
                this->model.getUserContainer().updateUser(name, updatedUser);  // Certifique-se de que a função updateUser existe em UserContainer
            }
                break;

            default:
                break;
        }
    } while (op != 0);
}

void Controller::runRecipes() {
    int op = -1;

    do {
        op = this->view.menuRecipe();

        switch (op) {
            case 1: {
                Recipe recipe = this->recipesView.getRecipe();
                this->model.getRecipeContainer().addRecipe(recipe);
            }
                break;

            case 2: {
                string name = Utils::getString("Enter the recipe name: ");
                RecipeContainer& container = this->model.getRecipeContainer();
                Recipe* recipe = container.getRecipeByTitle(name);

                if (recipe != nullptr) {
                    Recipe updatedRecipe = this->recipesView.getRecipe();
                    recipe->setTitle(updatedRecipe.getTitle());
                    recipe->setDescription(updatedRecipe.getDescription());
                } else {
                    Utils::print("Recipe not found!");
                }
            }
                break;

            case 3: {
                string name = Utils::getString("Enter the recipe name: ");
                RecipeContainer& container = this->model.getRecipeContainer();
                Recipe* recipe = container.getRecipeByTitle(name);

                if (recipe != nullptr) {
                    this->recipesView.showRecipe(*recipe);
                } else {
                    Utils::print("Recipe not found!");
                }
            }
                break;

            case 4: {
                string name = Utils::getString("Enter the recipe name: ");
                RecipeContainer& container = this->model.getRecipeContainer();
                Recipe* recipe = container.getRecipeByTitle(name);

                if (recipe != nullptr) {
                    int score = Utils::getNumber("Enter your rating (1-5): ");
                    Rating rating(score);
                    recipe->addRating(rating);
                } else {
                    Utils::print("Recipe not found!");
                }
            }
                break;

            case 5: {
                string name = Utils::getString("Enter the recipe name: ");
                RecipeContainer& container = this->model.getRecipeContainer();
                Recipe* recipe = container.getRecipeByTitle(name);

                if (recipe != nullptr) {
                    string comment = Utils::getString("Enter your comment: ");
                    recipe->addComment(comment);
                } else {
                    Utils::print("Recipe not found!");
                }
            }
                break;

            case 6: {
                string name = Utils::getString("Enter the recipe name: ");
                RecipeContainer& container = this->model.getRecipeContainer();
                Recipe* recipe = container.getRecipeByTitle(name);

                if (recipe != nullptr) {
                    int ratingIndex = Utils::getNumber("Enter the index of the rating to remove: ");
                    recipe->removeRating(ratingIndex);
                } else {
                    Utils::print("Recipe not found!");
                }
            }
                break;

            default:
                break;
        }
    } while (op != 0);
}

void Controller::runGroups() {
    int op = -1;

    do {
        op = this->view.menuGroup();

        switch (op) {
            case 1: { // Create a group
                string groupName = Utils::getString("Enter the group name: ");
                Group newGroup(groupName);
                this->model.getGroupContainer().addGroup(newGroup);
                Utils::print("Group created successfully!");
            }
                break;

            case 2: { // Join a group
                string groupName = Utils::getString("Enter the group name: ");
                Group* group = this->model.getGroupContainer().getGroupByName(groupName);

                if (group != nullptr) {
                    User user = this->userView.getUser();
                    group->addUser(user);
                    Utils::print("Joined group successfully!");
                } else {
                    Utils::print("Group not found!");
                }
            }
                break;

            case 3: { // Remove a group
                string groupName = Utils::getString("Enter the group name: ");
                this->model.getGroupContainer().removeGroup(groupName);
                Utils::print("Group removed successfully!");
            }
                break;

            default:
                break;
        }
    } while (op != 0);
}

void Controller::addUser(const User& user) {
    this->model.getUserContainer().addUser(user);
}

void Controller::addRecipe(const Recipe& recipe) {
    this->model.getRecipeContainer().addRecipe(recipe);
}

std::vector<User> Controller::getUsers() const {
    return this->model.getUserContainer().getUsers();
}

std::vector<Recipe> Controller::getRecipes() const {
    return this->model.getRecipeContainer().getRecipes();
}

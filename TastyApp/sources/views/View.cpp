#include <iostream>
#include "View.h"
#include "Utils.h"
#include "invalidDataException.h"
using namespace std;

View::View(){
}

int View::menuApp(){

    int op = -1;
    do{
        cout << "\n\n========== Menu App ==========\n";
        cout << "1 - Profile\n";
        cout << "2 - Recipes\n";
        cout << "3 - Groups\n";
        cout << "\n0 - EXIT\n";

        op = Utils::getNumber("Option: ");
    } while( op < 0 || op > 3);

    return op;
}

int View::menuUser(){

    int op = -1;

    do {
        cout << "\n\n========== Menu Profile ==========";
        cout << "1 - Add\n";
        cout << "2 - Remove\n";
        cout << "3 - Update\n";
        cout << "\n0 - EXIT\n";

        op = Utils::getNumber("Option: ");
    } while(op < 0 || op > 3);

    return op;
}

int View::menuGroup() {

    int op = -1;

    do {
        cout << "\n\n========== Menu Groups ==========";
        cout << "1 - Create\n";
        cout << "2 - Join\n";
        cout << "3 - Remove\n";
        cout << "\n0 - EXIT\n\n";

        op = Utils::getNumber("Option: ");
    } while(op < 0 || op > 3);

    return op;
}

int View::menuRecipe() {

    int op = -1;
    do {
        cout << "\n\n========== Menu Recipes ==========\n";
        cout << "1 - Add\n";
        cout << "2 - Update\n";
        cout << "3 - View\n";
        cout << "4 - Rate\n";
        cout << "5 - Comment\n";
        cout << "\n0 - EXIT\n";

        op = Utils::getNumber("Option: ");
    } while(op < 0 || op > 5);

    return op;
}

int View::menuRating() {

    int op = -1;
    do {
        cout << "\n\n========== Menu Rating ==========\n";
        cout << "1 - Add\n";
        cout << "2 - Remove\n";
        cout << "\n0 - EXIT\n";

        op = Utils::getNumber("Option: ");
    } while(op < 0 || op > 2);

    return op;
}
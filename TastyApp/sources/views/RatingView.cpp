#include "RatingView.h"
#include "Utils.h"
#include <iostream>

using namespace std;

RatingView::RatingView() {}

int RatingView::menuRating() {
    int op = -1;

    do {
        cout << "\n\n========== Menu Rating ==========\n";
        cout << "1 - Add Rating\n";
        cout << "2 - Remove Rating\n";
        cout << "\n0 - EXIT\n";

        op = Utils::getNumber("Option");
    } while (op < 0 || op > 2);

    return op;
}

int RatingView::getRating() {
    return Utils::getNumber("Enter your rating (1-5): ");
}

void RatingView::printRatingAdded(int rating) {
    cout << "Rating '" << rating << "' added successfully!\n";
}

void RatingView::printRatingRemoved(int rating) {
    cout << "Rating '" << rating << "' removed successfully!\n";
}

void RatingView::printRatingNotFound() {
    cout << "Rating not found!\n";
}

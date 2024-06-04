#include "Rating.h"

Rating::Rating(int score) : score(score) {}

int Rating::getScore() const {
    return score;
}

void Rating::setScore(int score) {
    this->score = score;
}
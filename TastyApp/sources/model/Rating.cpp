#include "../../headers/model/Rating.h"

Rating::Rating(int score) : score(score) {}

int Rating::getScore() const {
    return score;
}
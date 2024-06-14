#ifndef FSOFT2024_1DA_5_RATING_H
#define FSOFT2024_1DA_5_RATING_H

class Rating {
public:
    Rating(int score);
    int getScore() const;
    void setScore(int score);

private:
    int score;
};

#endif //FSOFT2024_1DA_5_RATING_H

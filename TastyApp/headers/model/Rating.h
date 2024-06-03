#ifndef LASTTEST_LOG_RATING_H
#define LASTTEST_LOG_RATING_H

class Rating {
public:
    Rating(int score);
    int getScore() const;
    void setScore(int score);

private:
    int score;
};

#endif //LASTTEST_LOG_RATING_H

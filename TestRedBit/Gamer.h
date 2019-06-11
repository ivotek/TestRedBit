
#ifndef GAMER_H
#define GAMER_H

class Gamer {
public:
    Gamer();
    Gamer(const Gamer& orig);
    Gamer(int);
    int GetScore() const {
        return score;
    }

    void SetScore(int score) {
        this->score = score;
    }
    virtual ~Gamer();
private:
    int score;
};

#endif /* GAMER_H */


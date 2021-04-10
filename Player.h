#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>

class Player {
    private:
        std::string firstName;
        std::string lastName;
        int score;
        double WPM;
        int ranking;

    public:
        Player();

        void setFirstName(std::string );
        void setLastName(std::string );
        void setScore(int );
        void setWPM(double );
        void setRanking(int );

        std::string getFirstName();
        std::string getLastName();
        int getScore();
        double getWPM();
        int getRanking();
};

#endif // PLAYER_H

// game
// ranking
// exit

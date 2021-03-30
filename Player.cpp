#include "Player.h"

Player::Player() {

}

void Player::setFirstName(std::string f) {
    this->firstName = f;

    return ;
}

void Player::setLastName(std::string l) {
    this->lastName = l;

    return ;
}

void Player::setScore(int s) {
    this->score = s;

    return ;
}

void Player::setWPM(double w) {
    this->WPM = w;

    return ;
}

void Player::setRanking(int r) {
    this->ranking = r;

    return ;
}

std::string Player::getFirstName() {
    return firstName;
}

std::string Player::getLastName() {
    return lastName;
}

int Player::getScore() {
    return score;
}

double Player::getWPM() {
    return WPM;
}

int Player::getRanking() {
    return ranking;
}

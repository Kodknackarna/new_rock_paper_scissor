#include "Player.h"

Player::Player(const std::string& playerName) : name(playerName) {}

std::string Player::getName() const {
    return name;
}

int Player::getScore() const {
    return score;
    };

void Player::increaseScore() {  
    score++;
}
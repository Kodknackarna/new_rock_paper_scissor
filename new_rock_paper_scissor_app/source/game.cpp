#pragma once
#include <iostream>

void game::startGame(std::vector<Player*> players, std::vector<hand_shape> hand_shapeVector) {

	for (Player* player : players) {
		std::cout << "Player: " << player->getName() << std::endl;
	}

	for (const hand_shape& : hand_shapeVector) {
		std::cout << "Hand shape: " << shape.getType() << std::endl;
	}

};


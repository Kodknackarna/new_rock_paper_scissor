#pragma once
#include <iostream>
#include <vector>
#include "player.h"
#include "hand_shape.h"


class game {
private:
	
public:
	startGame();

	void gameVector(std::vector<Player*>& players, std::vector<hand_shape> hand_shapesVector);


};
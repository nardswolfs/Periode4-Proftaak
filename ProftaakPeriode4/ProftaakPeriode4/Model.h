#pragma once

#include <vector>
#include "Player.h"

class Model {
	public:
		Model();

		std::vector<Player> _players;
		void initModel();
		void update(int deltaTime);
};
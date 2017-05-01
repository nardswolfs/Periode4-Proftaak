#pragma once
#include "GameObject.h"

class Player : public GameObject {
	public:
		Player(int laneIndex);
		int _laneIndex;
};

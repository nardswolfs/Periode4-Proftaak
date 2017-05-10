#pragma once

#include "Component.h"

class LaneComponent : public Component
{
public:
	LaneComponent();
	~LaneComponent();

	virtual void Update();
};


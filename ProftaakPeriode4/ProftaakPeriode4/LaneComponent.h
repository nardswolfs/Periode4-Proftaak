#pragma once

#include "Component.h"

enum ComponentID
{
	LANE_COMPONENT
};

class LaneComponent : public Component
{
public:
	LaneComponent();
	~LaneComponent();

	virtual void Update();
};


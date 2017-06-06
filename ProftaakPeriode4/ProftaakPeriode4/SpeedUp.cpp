#include "SpeedUp.h"
#include "LaneGeneratorComponent.h"

SpeedUp::SpeedUp(GameObject* parent) : PowerUp(10.0f, SPEED_UP)
{
	_parent = parent;
} 

void SpeedUp::Effect()
{
    auto tempList = *_parent->_parentList;
    for (auto go : tempList)
    {
		LaneGeneratorComponent* lgc = dynamic_cast<LaneGeneratorComponent*>(go->GetComponent(DRAW_COMPONENT));
		if (lgc != nullptr)
		{
			lgc->_speed += _speedDif;
			return;
		}
    }
}

void SpeedUp::ReverseEffect()
{
	auto tempList = *_parent->_parentList;
    for (auto go : tempList)
    {
		LaneGeneratorComponent* lgc = dynamic_cast<LaneGeneratorComponent*>(go->GetComponent(DRAW_COMPONENT));
		if (lgc != nullptr)
		{
			lgc->_speed -= _speedDif;
			return;
		}
    }
}

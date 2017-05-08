#pragma once

enum ComponentID
{
	
};

class Component
{
public:
	Component(ComponentID id);
	~Component();

	int _id;

	virtual void Update(int deltaTime);
	virtual void LateUpdate(int deltaTime);
private:
};


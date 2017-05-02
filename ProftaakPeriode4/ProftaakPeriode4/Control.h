#pragma once
#include <GL\freeglut.h>
#include "Model.h"

class Control
{
public:
	Control(Model* model);
	Control();
	~Control();

	void sKeyboardDown(int key, int x, int y);
	void sKeyboardUp(int key, int x, int y);
	void keyBoardDown(unsigned char key, int x, int y);
	void keyBoardUp(unsigned char key, int x, int y);

	Model* _modelPtr;

	//booleans probably need to move too model so they can be used there
	bool keyLeft = false;
	bool keyRight = false;
	bool keyUp = false;
	bool keyDown = false;
};

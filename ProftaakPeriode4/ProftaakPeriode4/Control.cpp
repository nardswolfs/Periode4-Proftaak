#include "Control.h"



Control::Control(Model* model)
{
	_modelPtr = model;
}

Control::Control()
{
}

Control::~Control()
{
}

/*
	special key press detection
*/
void Control::sKeyboardDown(int key, int x, int y)
{
	switch (key)
	{
	case GLUT_KEY_LEFT:
		keyLeft = true;
		break;
	case GLUT_KEY_RIGHT:
		keyRight = true;
		break;
	case GLUT_KEY_UP:
		keyUp = true;
		break;
	case GLUT_KEY_DOWN:
		keyDown = true;
		break;
	default:
		break;
	}

}

/*
	special key release detection
*/
void Control::sKeyboardUp(int key, int x, int y)
{
	switch (key)
	{
	case GLUT_KEY_LEFT:
		keyLeft = false;
		break;
	case GLUT_KEY_RIGHT:
		keyRight = false;
		break;
	case GLUT_KEY_UP:
		keyUp = false;
		break;
	case GLUT_KEY_DOWN:
		keyDown = false;
		break;
	default:
		break;
	}
}

/*
	normal key press detection
*/
void Control::keyBoardDown(unsigned char key, int x, int y)
{

}

/*
	normal key release detection
*/
void Control::keyBoardUp(unsigned char key, int x, int y)
{

}
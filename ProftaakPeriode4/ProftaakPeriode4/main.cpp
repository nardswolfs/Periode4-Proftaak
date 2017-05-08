#include "Model.h"
#include "View.h"
#include "Lanes.h"
#include "Input.h"

#include <GL\freeglut.h>

Model model;
View view;

// The displayFunc which will call the update of the view
// This function should only be called by OpenGL and NOT manually
void display()
{
	view.update();
}

// The reshapeFunc which will call the reshape of the view
// This function should only be called by OpenGL and NOT manually
void reshape(int w, int h)
{
	view.reshape(w, h);
}

// The idleFunc which will call the update of the model
// This function should only be called by OpenGL and NOT manually
void idle()
{
	model.update();
}

void keyBoardDown(unsigned char key, int x, int y)
{
	Keyboard::KeyBoardDown(key, x, y);
}

void keyBoardUp(unsigned char key, int x, int y)
{
	Keyboard::KeyBoardUp(key, x, y);
}

void sKeyboardDown(int key, int x, int y)
{
	Keyboard::SKeyboardDown(key, x, y);
}

void sKeyboardUp(int key, int x, int y)
{
	Keyboard::SKeyboardUp(key, x, y);
}

int main(int argc, char* argv[]) {
	glutInit(&argc, argv);

	model = Model();
	view = View(&model);

	glutDisplayFunc(display);
	glutReshapeFunc(reshape);
	glutIdleFunc(idle);
	glutKeyboardFunc(keyBoardDown);
	glutKeyboardUpFunc(keyBoardUp);
	glutSpecialFunc(sKeyboardDown);
	glutSpecialUpFunc(sKeyboardUp);


	glutMainLoop();
	return 0;
}

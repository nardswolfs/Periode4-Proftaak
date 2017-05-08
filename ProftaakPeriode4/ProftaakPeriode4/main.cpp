#include "Model.h"
#include "View.h"
#include "Lanes.h"
#include "Input.h"

#include <GL\freeglut.h>

Model model;
View view;

void display()
{
	view.update();
}

void reshape(int w, int h)
{
	view.reshape(w, h);
}

void idle()
{
	
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

#include "Model.h"
#include "View.h"
#include "Control.h"
#include "Lanes.h"

#include <GL\freeglut.h>

Model model;
View view;
Control control;

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
	control.keyBoardDown(key, x, y);
}

void keyBoardUp(unsigned char key, int x, int y)
{
	control.keyBoardUp(key, x, y);
}

void sKeyboardDown(int key, int x, int y)
{
	control.sKeyboardDown(key, x, y);
}

void sKeyboardUp(int key, int x, int y)
{
	control.sKeyboardUp(key, x, y);
}

int main(int argc, char* argv[]) {
	glutInit(&argc, argv);

	model = Model();
	view = View(&model);
	control = Control(&model);

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

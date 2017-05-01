#include "View.h"

View::View(Model model)
{
	_model = model;
}

void View::initDisplay(int argc, char* argv[])
{
	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE);
	glutInitWindowSize(width, height);

	glutCreateWindow("Cube_Runner");

	glutDisplayFunc(window);
	glutReshapeFunc(reshape);

	//glutKeyboardFunc(keyboard);
	//glutSpecialFunc(sDownKeyboard);
	//glutSpecialUpFunc(sUpKeyboard);



}
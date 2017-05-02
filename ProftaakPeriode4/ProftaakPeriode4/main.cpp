#include "Model.h"
#include "View.h"
#include "Lanes.h"

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

int main(int argc, char* argv[]) {
	glutInit(&argc, argv);

	model = Model();
	view = View(&model);

	glutDisplayFunc(display);
	glutReshapeFunc(reshape);
	glutIdleFunc(idle);

	glutMainLoop();
	return 0;
}

#include "Model.h"
#include "View.h"
#include "Lanes.h"

#include <GL\freeglut.h>
#include "Idle.h"

void Test()
{

	Lanes lanes = Lanes(3);
}

int main(int argc, char* argv[]) {
	Test();

	glutInit(&argc, argv);

	Model model = Model();
	View view = View(&model);

	glutDisplayFunc(window);
	glutReshapeFunc(reshape);
	glutIdleFunc(idle);

	glutMainLoop();
	return 0;
}

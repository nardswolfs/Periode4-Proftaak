#include "Model.h"
#include "View.h"
#include "Lanes.h"

#include <GL\freeglut.h>

void Test()
{

	Lanes lanes = Lanes(3);
}

int main(int argv, char* arcv[]) {
	Model model = Model();
	View view = View(&model);

	Test();

	View view = View(model);

	glutInit(&argc, argv);
	view.initDisplay(argc, argv);
	model.initModel();

	glutMainLoop();
	return 0;
}

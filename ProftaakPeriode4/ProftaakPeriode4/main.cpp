#include "Model.h"
#include "View.h"
#include "Lanes.h"

#include <GL\freeglut.h>

void Test()
{

	Lanes lanes = Lanes(3);
}

int main(int argc, char* argv[]) {
	Model model = Model();
	View view = View(&model);

	Test();

	glutInit(&argc, argv);
	view.initDisplay(argc, argv);
	model.initModel();

	glutMainLoop();
	return 0;
}

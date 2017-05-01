#include "Model.h"
#include "View.h"

int main(int argc, char* argv[]) {
	Model model = Model();
	View view = View(model);

	glutInit(&argc, argv);
	view.initDisplay(argc, argv);
	model.initModel();

	glutMainLoop();
	return 0;
}
#include "Model.h"
#include "View.h"
#include <GL\freeglut.h>

int main(int argv, char* arcv[]) {
	Model model = Model();
	View view = View(model);
	return 0;
}
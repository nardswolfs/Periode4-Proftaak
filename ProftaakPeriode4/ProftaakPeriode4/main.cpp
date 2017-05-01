#include "Model.h"
#include "View.h"
#include "Lanes.h"

#include <GL\freeglut.h>

void Test()
{
	Lane lanesList[] = {Lane(),Lane(),Lane()};

	Lanes lanes = Lanes(lanesList, sizeof(lanesList));
}

int main(int argv, char* arcv[]) {
	Model model = Model();
	View view = View(&model);

	Test();

	return 0;
}

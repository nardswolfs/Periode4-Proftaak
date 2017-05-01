#include "Model.h"
#include "View.h"
<<<<<<< HEAD
#include "Lanes.h"

void Test()
{
	Lane lanesList[] = {Lane(),Lane(),Lane()};

	Lanes lanes = Lanes(lanesList, sizeof(lanesList));
}
=======
#include <GL\freeglut.h>
>>>>>>> 39a8f2833fdeb45d8b7a65b8d95220e74c3c1a5f

int main(int argv, char* arcv[]) {
	Model model = Model();
	View view = View(&model);

	Test();

	return 0;
}

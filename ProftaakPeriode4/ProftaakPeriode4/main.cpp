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

	return 0;
}

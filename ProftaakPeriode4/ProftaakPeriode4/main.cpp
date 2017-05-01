#include "Model.h"
#include "View.h"
#include "Lanes.h"

void Test()
{
	Lane lanesList[] = {Lane(),Lane(),Lane()};

	Lanes lanes = Lanes(lanesList, sizeof(lanesList));
}

int main() {
	Model model = Model();
	View view = View(&model);

	Test();

	return 0;
}

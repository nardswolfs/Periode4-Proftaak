#pragma once
#include <GL\freeglut.h>
#include "Model.h"
#include "Window.h"

class View {
	public:
		View(Model * model);
		View(Model model);
		void initDisplay(int argc, char* argv[]);
	private:
		Model * _modelPtr;
};
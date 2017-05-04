#pragma once
#include <GL\freeglut.h>
#include "Model.h"
#include <iostream>
#include "Window.h"
using namespace std;

class View {
	public:
		View(Model * model);
	private:
		Model * _modelPtr;
};
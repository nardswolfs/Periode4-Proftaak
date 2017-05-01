#pragma once
#include "Model.h"
#include <GL\freeglut.h>
#include <iostream>
using namespace std;

class View {
	public:
		View(Model model);
	private:
		Model _model;
};
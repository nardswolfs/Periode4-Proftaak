#pragma once
#include <GL\freeglut.h>
namespace Keyboard
{
	void SKeyboardDown(int key, int x, int y);
	void SKeyboardUp(int key, int x, int y);
	void KeyBoardDown(unsigned char key, int x, int y);
	void KeyBoardUp(unsigned char key, int x, int y);

	const bool* GetKeyboard();
	//void GetSKeyboard(bool* up, bool* down, bool* left, bool* right);
}
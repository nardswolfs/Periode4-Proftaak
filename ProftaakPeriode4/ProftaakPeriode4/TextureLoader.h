#pragma once

class Texture
{
public:
	Texture(int id, int width, int height, int bpp);
private:
	int _id;
	int _width;
	int _height;
	int _bpp;
};

/*
* Loading a texture from a given fileName
* \fileName string filename of the texturefile
* \return Texture object
* !warning possible nullptr when texture failed to load
*/
Texture * LoadTexture(const char * fileName);
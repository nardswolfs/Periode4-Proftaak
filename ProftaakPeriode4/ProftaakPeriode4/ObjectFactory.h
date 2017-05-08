#pragma once
#include <list>
#include "TextureLoader.h"

class DrawComponent;

class Vertex
	{
	public:
		int position;
		int normal;
		int texcoord; 
	};
class Face
	{
	public:
		std::list<Vertex> vertices;
	};
class MaterialInfo
	{
	public:
		MaterialInfo()
		{
			
		};
		std::string name;
		Texture * texture;
	};
class ObjGroup
	{
	public:
		std::string name;
		int materialIndex;
		std::list<Face> faces;
	};

void loadMaterialFile(const std::string &fileName, const std::string &dirName, DrawComponent * component);
DrawComponent * LoadComponent(const std::string &fileName);
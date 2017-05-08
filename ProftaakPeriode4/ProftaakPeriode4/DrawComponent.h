#pragma once
#include "Component.h"
#include <vector>
#include "Vec.h"
#include "ObjectFactory.h"

class DrawComponent : Component
{
public:
	DrawComponent();
	~DrawComponent();
	// todo implement draw

	std::vector<Vec3f>	vertices;
	std::vector<Vec3f>	normals;
	std::vector<Vec2f>	texcoords;
	std::vector<ObjGroup*> groups;
	std::vector<MaterialInfo*> materials;
};

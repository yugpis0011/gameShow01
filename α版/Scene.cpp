#include "Scene.h"


Scene::Scene()
{
}

Scene::~Scene()
{
}

enum GMODE
{
	GMODE_S_INIT,
	GMODE_G_INIT,
	GMODE_GAME,
	GMODE_DESTROY,
	GMODE_MAX
};

int Scene::Update(void)
{
	return 0;
}
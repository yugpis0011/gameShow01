#pragma once

#define SCREEN_SIZE_X 800
#define SCREEN_SIZE_Y 600


class Scene
{
public:
	Scene();
	~Scene();

	int Update();
private:
	int SInit(void);
	int SDestroy(void);
	int GInit(void);
	int GMain(void);
};


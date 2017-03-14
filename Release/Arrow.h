#pragma once
#include "Sprite.h"
#include "Arrow.h"
#include "Character.h"
#include <iostream>
#include "GameVariables.h"

class Arrow : public Sprite
{
public:
	~Arrow();
	Arrow();
	Arrow(SDL_Texture* image, int x, int y, int w, int h, Character character);
	void move(float deltaTime);
	bool shouldBeRendered = false;
};
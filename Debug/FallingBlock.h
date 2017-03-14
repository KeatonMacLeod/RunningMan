#pragma once
#include "Sprite.h"
//All blocks are 44 pixels wide, and 45 pixels high

class FallingBlock : public Sprite
{
public:
	~FallingBlock();
	FallingBlock();
	FallingBlock(SDL_Texture* image, int x, int y, int w, int h);
	bool operator==(const FallingBlock & other);
	bool detectCollision(Character character);
	void move(float deltaTime);
	float yVel;
};
#pragma once
#include "Sprite.h"
#include "Character.h"
//All blocks are 44 pixels wide, and 45 pixels high

class Block: public Sprite
{
public:
	~Block();
	Block();
	Block(SDL_Texture* image, int x, int y, int w, int h);
	bool operator==(const Block & other);
	bool detectCollision(Character character);
	void move(float deltaTime);
};
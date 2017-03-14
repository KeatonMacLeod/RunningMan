#pragma once
using namespace std;
#include "Sprite.h"
#include "Character.h"
#include <vector>

class SpriteGroup {
public:
	vector <Sprite*> getSprites();
	void add(Sprite* newSprite);
	//void remove(Sprite sprite);
	void nextFrameAnimation();
	void setToStartAnimation();
	void remove(Sprite* sprite);
	bool has(Sprite* sprite);
	void draw(SDL_Renderer* renderTarget);
	void update(float deltaTime);
	void cleanup(); //Get rid of any sprites that aren't on screen anymore
	void removeAll(); //Clear anything in the SpriteGroup
	bool detectCollision(Character character);
	bool reachedLastAnimation();

private:
	vector <Sprite*> sprites;
	int groupSize;

};
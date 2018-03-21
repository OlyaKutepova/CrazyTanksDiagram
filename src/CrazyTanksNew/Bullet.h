#pragma once
#include "Direction.h"
#include "Map.h"

class Bullet
{
	Bullet(int x, int y, Direction dir, bool isPlayer) : x(x), y(y), dir(dir), isPlayer(isPlayer) {
	}
public:
	Bullet();
	
	void Move(Direction dir) {

	}

	void SolveCollision(char** field, int PLx, int Ply) {

	}

	bool PlaceOnMap(char (Map*)) {
		
	}

	void DeleteBullet(int x, int y) {
	
	}


private:
	int x, y;
	Direction dir;
	bool isPlayer;
};


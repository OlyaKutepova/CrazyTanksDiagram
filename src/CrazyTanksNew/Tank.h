#pragma once

#include <random>
#include "Direction.h"
#include "GameObject.h"
#include "Map.h"

class Tank
{
public:
	Tank();

	
	void Move(Direction dir) {
	
	}

	void MoveRand(char** map) {
	
	}

	void Shoot(){
	
	}

	void TryToShoot() {
	}

	int GetX() const { return x; }
	int GetY() const { return y; }
	Direction GetDir() const { return dir; }

	bool SolveCollision(char** field) {}

	void CheckHealth(int Health) {
	
	}
	bool PlaceOnMap(char (Map*)) {
	
	}


private:
Direction dir;
int x, y;
int Health;


};


	


#pragma once
#include "Entity.h"

class Enemy :	public Entity {
public:
	Enemy();
	~Enemy();

	int takeDamage(int attack);

	//Gets AI move command
	char getMove(int playerX, int playerY);

protected:
	int _expValue;
	int _attackDistance;

};


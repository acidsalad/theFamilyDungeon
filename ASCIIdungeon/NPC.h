#pragma once
#include "Entity.h"
class NPC :
	public Entity
{
public:
	NPC();
	~NPC();

	//Gets AI move command
	char getMove(int playerX, int playerY);

	bool talk();
};


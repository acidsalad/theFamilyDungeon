#pragma once
#include "Entity.h"
#include "DialogueTree.h"
#include <list>

class Player : public Entity {
public:
	Player();
	~Player();

	void addExperience(int exp);
	int takeDamage(int attack);

	void init(int hp, int pp, int level, int experience, int attack, int toNextLevel);


	//getters
	int getLevel() { return _level; }
	int getExp() { return _exp; }
	int get_tNL() { return _toNextLevel; }
	DialogueTree* getTree() { return _dialogueTree; }

protected:
	int _money;
	int _level;
	int _exp;
	list<string> _inventory;
	int _toNextLevel;

	DialogueTree* _dialogueTree = new DialogueTree;
};


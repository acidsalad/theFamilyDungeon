#pragma once
#include "NPC.h"
#include "DialogueTree.h"

class UnlovingFather : public NPC {
public:
	UnlovingFather();
	~UnlovingFather();

	void saySomething(DialogueTree* dialogueTree);

private:
	DialogueTree* _dialogueTree = new DialogueTree;
};


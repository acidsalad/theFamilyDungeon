#pragma once
#include <iostream>
using namespace std;
#include <vector>

struct DialogueNode;

struct DialogueOption {
	//DialogueOption(); //string t, int code, DialogueNode* nextnode
	string text;
	int returnCode;
	DialogueNode* next;
};

class DialogueTree
{
public:
	DialogueTree();

	struct DialogueNode {
		string text;
		vector<DialogueOption*> _dialogueOptions;
	};


	void getOptions();

	void init();
	void destroyTree();
	void loadTree();

	int performDialogue();

private:
	vector<DialogueNode*> _nodes;
};


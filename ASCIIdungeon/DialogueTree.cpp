#include "DialogueTree.h"
#include <fstream>
#include <string>

DialogueTree::DialogueTree()
{

}
/*
DialogueTree::DialogueOption::DialogueOption() //string t, int code, DialogueNode* nextnode
{
	
	text = t;
	returnCode = code;
	next = nextnode;
	
}
*/

void DialogueTree::init() {
	loadTree();
}

void DialogueTree::loadTree() {

	ifstream loadDialogue;
	loadDialogue.open("dialogue.txt");
	if (loadDialogue.fail()) {
		perror("dialogue.txt");
		system("PAUSE");
	}
	string line;
	while (getline(loadDialogue, line))
	{
		ifstream loadOptions;
		loadOptions.open("options.txt");
		if (loadOptions.fail()) {
			perror("options.txt");
			system("PAUSE");
		}
		DialogueNode* node = new DialogueNode;
		node->text = line;
		while (getline(loadOptions, line)) {
			DialogueOption* option = new DialogueOption;
			option->text = line;
			node->_dialogueOptions.push_back(option);
			//delete option;
		}
		_nodes.push_back(node);
		loadOptions.close();
	}

	loadDialogue.close();
	

	/*
	//print the NODES for testing purposes
	for (int i = 0; i < _nodes.size(); i++) {
		printf("%s\n", _nodes[i]->text.c_str());
	}
	//print the OPTIONS for testing purposes
	for (int i = 0; i < _nodes.size(); i++) {
		for (int j = 0; j < _nodes[i]->_dialogueOptions.size(); j++)
		{
			printf("%s\n", _nodes[i]->_dialogueOptions[j]->text.c_str());
		}
	}
	*/
}



void DialogueTree::destroyTree(){

}

int DialogueTree::performDialogue() {
	return 0;
}
// ConsoleApplication17.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
class Node {
	int value;
	Node *nextNode;
public:
	void setValue(int v)
	{
		value = v;
	}
	void setNextNode(Node* nn)
	{
		nextNode = nn;
	}
	int getValue()
	{
		return value;
	}
	Node  *getNextNode()
	{
		return nextNode;
	}

};

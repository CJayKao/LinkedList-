#pragma once
class Node
{
protected:
	Node * NextNode; 
	int m_iValue;
public:
	Node();
	Node(int);
	int GetNodeValue();
	Node* GetNextNode();
	void LinkedNode(Node*);
	~Node();
	
};


#include "stdafx.h"
#include "Node.h"


Node::Node():NextNode(NULL), m_iValue(0){}

Node::Node(int iVlaue):NextNode(NULL), m_iValue(iVlaue){}

int Node::GetNodeValue()
{
	return this->m_iValue;
}

Node* Node::GetNextNode()
{
	return this->NextNode;
}

void Node::LinkedNode(Node* Node)
{
	this->NextNode = Node;
}


Node::~Node()
{
}

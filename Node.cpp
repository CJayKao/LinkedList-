#include "stdafx.h"
#include "Node.h"


Node::Node():NextNode(NULL), m_iValue(0){}

Node::Node(int iVlaue):NextNode(NULL), m_iValue(iVlaue){}

int Node::GetNodeValue()
{
	return this->m_iValue;
}

Node& Node::GetNodeAddress()
{
	Node& pNode = *this;
	
	return pNode;
}

bool Node::IsNullNextNode()  //  NextNode is NULL?
{
	if ((this->NextNode) != NULL) {
		return true;
	}
	else
	{
		return false;
	}
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
	std::cout << "The Node is  "<<this->GetNodeValue() << "\t cleaned" << std::endl;
	
}





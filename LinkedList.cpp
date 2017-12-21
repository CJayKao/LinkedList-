#include "stdafx.h"
#include "Node.h"


LinkList::LinkList()
{ 
	m_pFirstNode = NULL;
	m_iSizeOfList = 0;
	
}

LinkList::LinkList(Node * NewNode)
{
	m_pFirstNode = NewNode;
	m_iSizeOfList = 1;
}

void LinkList::PrintfList()
{
	if (m_iSizeOfList == 0) {  // check the Node is Node ?
		std::cout << "List is empty." << std::endl;
		return;
	}
	Node *pNode = m_pFirstNode;
	bool bStop = true; // the flag for know if the Next Node is NULL
	while ( bStop == true)	// the condition for stop to visit LinkList
	{
		std::cout << pNode->GetNodeValue()<<",\t" << std::endl; // show Current Node Value
		if (pNode->IsNullNextNode()) {  //
			pNode = pNode->GetNextNode(); // Get the Next Node
		}
		else
		{
			bStop = false;
		}
	}
}

void LinkList::InsertNode(Node * NewNode)
{
	if (m_iSizeOfList == 0 && m_pFirstNode == NULL){
		m_pFirstNode = NewNode;  //if the no first Node , NewNode is the first
		m_iSizeOfList ++ ;
	}
	else
	{
		Node *pRNode = m_pFirstNode;	//Get the first Node
		while (pRNode->IsNullNextNode())
		{
			pRNode = pRNode->GetNextNode(); // Move to the end of list
		}
			pRNode->LinkedNode(NewNode); // Insert to the end
			m_iSizeOfList++;
	}

	
}

void LinkList::Delete(int)
{
}


LinkList::~LinkList()
{
	Node *pNode = m_pFirstNode;
	bool bStop = true; // the flag for know if the Next Node is NULL
	while (bStop == true)	// the condition for stop to visit LinkList
	{
		
		if (pNode->IsNullNextNode()) {  //
			Node* pDeleNode = pNode;  // Keep the Node wii be delete
			pNode = pNode->GetNextNode(); // Get the Next Node
			std::cout << "The Node value = " << pDeleNode->GetNodeValue() << " be delete" << std::endl;
			delete pDeleNode;
		}
		else
		{
			bStop = false;
		}
	}
	std::cout << "The Node value = " << pNode->GetNodeValue() << " be delete" << std::endl;
	delete pNode;
}

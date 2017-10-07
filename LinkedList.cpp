#include "stdafx.h"
#include "Node.h"


LinkList::LinkList()
{ 
	m_pFirstNode = 0;
	m_iSizeOfList = 0;
	
}

LinkList::LinkList(Node * NewNode)
{
	m_pFirstNode = NewNode;
	m_iSizeOfList = 1;
}

void LinkList::PrintfList()
{
	if (m_iSizeOfList == 0) {
		std::cout << "List is empty." << std::endl;
		return;
	}
	Node *pNode = m_pFirstNode;
	while (pNode!=0)
	{
		std::cout << pNode->GetNodeValue()<<",\t" << std::endl;
		pNode = pNode->GetNextNode();
	}
}

void LinkList::InsertNode(Node * NewNode)
{
	if (m_iSizeOfList == 0){
		m_pFirstNode = NewNode;
		m_iSizeOfList ++ ;
	}
	else
	{
		Node *pRNode = m_pFirstNode->GetNextNode();
		Node *pLNode = m_pFirstNode->GetNextNode();
		while (pRNode!=0)
		{
			pRNode = pRNode->GetNextNode();
		}
			pRNode->LinkedNode(NextNode);
	}

	/*else if (m_iSizeOfList >0 && 0 < iPostion && iPostion < m_iSizeOfList)
	{
		Node *pRNode = m_pFirstNode;
		Node *pLNode = m_pFirstNode;
		for (size_t i = 1; i < iPostion; i++)
		{
			pRNode = pRNode->GetNextNode();
			if (i < (iPostion-1))
			{
				pLNode = pLNode->GetNextNode();
			}
		}
		NewNode->LinkedNode(pRNode);
		pLNode->LinkedNode(NextNode);
		m_iSizeOfList ++ ;
		
	}
	else if(m_iSizeOfList < iPostion )
	{
		Node *pRNode = m_pFirstNode;
		for (size_t i = 1; i < iPostion-1; i++)
		{
			pRNode = pRNode->GetNextNode();
		}
			pRNode->LinkedNode(NewNode);
			m_iSizeOfList ++ ;
	}*/
	
}

void LinkList::Delete(int)
{
}






LinkList::~LinkList()
{
}

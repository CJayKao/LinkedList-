// Test_LinkedList.cpp : 定義主控台應用程式的進入點。
//

#include "stdafx.h"


int main()
{
	
	LinkList* pList = new LinkList();
	Node *pNode1 = new Node(1);
	Node *pNode2 = new Node(2);
	Node *pNode3 = new Node(3);
	pList->InsertNode(pNode1);
	pList->InsertNode(pNode2);
	pList->InsertNode(pNode3);
	pList->PrintfList();
	pList->~LinkList();
	
	return 0;
}


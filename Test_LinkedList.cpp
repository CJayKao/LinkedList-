// Test_LinkedList.cpp : �w�q�D���x���ε{�����i�J�I�C
//

#include "stdafx.h"


int main()
{
	
	LinkList* pList = new LinkList();
	Node pNode(1);
	Node pNode2(2);
	Node pNode3(3);
	pList->InsertNode(&pNode2);
	pList->InsertNode(&pNode);
	pList->InsertNode(&pNode3);
	pList->PrintfList();
	int x;
	std::cin >> x ;
	return 0;
}


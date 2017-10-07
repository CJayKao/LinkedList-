#pragma once
class LinkList:public Node
{
private:
	Node *m_pFirstNode ;
	int m_iSizeOfList ;
public:
	LinkList();
	LinkList(Node *);
	void PrintfList();
	void InsertNode(Node*);
	void Delete(int);

	~LinkList();
};


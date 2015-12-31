#ifndef _SINGLY_LINKED_LIST_H_
#define _SINGLY_LINKED_LIST_H_

#include <iostream>

using namespace std;

Node * createNode(int);
void addNode(Node *);
void separateNode(Node *, int);
void freeNode(Node *);

class Node {
public :
	int data;
	Node * after_node;
	Node()
	{

	}
	~Node()
	{

	}
};

class Store {
private :
	void destroy_node(Node *);
public :
	Node * head = nullptr;
	Node * link_node = nullptr;
	Node * tmp_node = nullptr;
	Node * create_node(int);
	void add_node(Node *);
	void separate_node(Node *);
	Store()
	{

	}
	~Store()
	{

	}
};

#endif
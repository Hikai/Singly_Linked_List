#ifndef _SINGLY_LINKED_LIST_H_
#define _SINGLY_LINKED_LIST_H_

#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
	int data;
	Node * nextNode;
} Node;

Node * createNode(int);
void addNode(Node *);
void separateNode(Node *, int);
void freeNode(Node *);

#endif
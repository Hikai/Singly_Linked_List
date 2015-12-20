#include "Singly_Linked_List.h"

Node * head = nullptr, * linkNode = nullptr, * tmpNode = nullptr;

Node * createNode(int data)
{
	Node * node = (Node *)malloc(sizeof(Node *));

	node->data = data;
	node->nextNode = nullptr;

	return node;
}

void addNode(Node * node)
{
	if (head == nullptr) {
		head = node;
	}
	else if (head->nextNode == nullptr) {
		head->nextNode = node;
		linkNode = node;
	}
	else {
		linkNode->nextNode = node;
		linkNode = node;
	}
}

void separateNode(Node * node, int data)
{
	if (node == head) {
		freeNode(node);

		head = nullptr;
	}
	else {
		while (1) {
			tmpNode = head;

			if (tmpNode == node && tmpNode->data == data) {
				freeNode(node);
			}
		}
	}
}

void freeNode(Node * node)
{
	free(node);
}
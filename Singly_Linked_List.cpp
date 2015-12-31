#include "Singly_Linked_List.h"

Node * Store::create_node(int data)
{
	Node * node = new Node;
	node->data = data;
	node->after_node = nullptr;
	return node;
}

void Store::add_node(Node * node)
{
	if (head == nullptr) {
		head = node;
	}
	else if (head->after_node == nullptr) {
		head->after_node = node;
		link_node = node;
	}
	else {
		link_node = node;
		link_node->after_node = node;
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

void Store::separate_node(Node * node)
{
	if (head == node) {
		destroy_node(node);
		head = nullptr;
	}
	else {
		node->after_node = nullptr;
		destroy_node(node);
	}
}

void Store::destroy_node(Node * node)
{
	delete node;
}
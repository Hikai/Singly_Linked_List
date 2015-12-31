#include "Singly_Linked_List.h"

int main()
{
	Node * node = new Node;
	Store * store = new Store;
	node = store->create_node(123);
	store->add_node(node);
	cout << store->head->data << endl;
	store->separate_node(node);
	delete store;
	delete node;
	return 0;
}
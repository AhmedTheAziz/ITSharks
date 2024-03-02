#include "Linked_List.h"



Linked_List::Linked_List()
{
	head = NULL;
}

bool Linked_List::isEmpty()
{
	if (head == NULL)
		return true;
	else
		return false;
}

void Linked_List::insertnode_01(int newitem)
{
	node_00* newnode{};
	newnode->data = newitem;
	if (isEmpty() == NULL)
	{
		newnode->next = NULL;
	}
	else
	{
		newnode->next = head;
		head = newnode;
	}
}

void Linked_List::display()
{
	node_00* temp = head;
	while (temp != NULL)
	{
		cout << temp->data << endl;
		temp = temp->next;
	}
}



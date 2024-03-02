#include "Stack.h"

Stack::Stack()
{
	top = NULL;
}

bool Stack::isEmpty()
{
	if (top == NULL)
		return true;
	else
		return false;
}

void Stack::push(int item)
{
	node_00* newnode = new node_00();
	newnode -> data = item;
	if (isEmpty())
	{
		newnode->next = NULL;
		top = newnode;
	}
	else
	{
		newnode->next = top;
		top = newnode;
	}
}

void Stack::display()
{
	node_00* temp = top;
	while (temp != NULL)
	{
		cout << temp->data << endl;
		temp = temp->next;
	}

}

int Stack::pop()
{
	int value;
	node_00* delptr = top;
	value = top->data;
	top = top->next;
	delete delptr;
	return value;
}

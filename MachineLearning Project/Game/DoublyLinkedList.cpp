#include "DoublyLinkedList.h"
#include<SDL.h>

DoublyLinkedList::DoublyLinkedList()
{
	head = 0;
	current = 0;
	leftTime = 0;
	rightTime = 0;
}

void DoublyLinkedList::Insert(int x, int y)
{
	if (head == 0)
	{
		head = new Node(x, y, 0);
		current = head;
	}
	else
	{
		Node* temp = head;
		while (temp->next != 0)
		{
			temp = temp->next;
		}
		temp->next = new Node(x, y, temp);
	}
}

void DoublyLinkedList::MoveCurrentLeft()
{
	double x = SDL_GetTicks();
	if (current->prev != 0 && x-leftTime > 200)
	{
		current = current->prev;
		leftTime = x;
	}
}

void DoublyLinkedList::MoveCurrentRight()
{
	double x = SDL_GetTicks();
	if (current->next != 0 && x-rightTime > 200)
	{
		current = current->next;
		rightTime = x;
	}
}

int DoublyLinkedList::getCurrentData()
{
	if (current)
	{
		return current->data;
	}
	else
	{
		return 0;
	}
}

int DoublyLinkedList::getCurrentGen()
{
	if (current)
	{
		return current->gen;
	}
	else
	{
		return 0;
	}
}

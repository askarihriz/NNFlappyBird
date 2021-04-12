#include "Node.h"

Node::Node(int x, int y, Node* prev)
{
	data = x;
	gen = y;
	next = 0;
	this->prev = prev;
}

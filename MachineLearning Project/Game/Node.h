#pragma once

class Node
{
private:
	int data;
	int gen;
	Node* next;
	Node* prev;
public:
	Node(int x, int y, Node* prev);
	friend class DoublyLinkedList;
};


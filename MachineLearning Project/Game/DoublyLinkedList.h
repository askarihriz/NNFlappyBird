#pragma once
#include"Node.h"

class DoublyLinkedList
{
private:
	Node* head;
	Node* current;
public:
	double leftTime;
	double rightTime;
	DoublyLinkedList();
	void Insert(int x, int y);
	int getCurrentData();
	int getCurrentGen();
	void MoveCurrentLeft();
	void MoveCurrentRight();
};


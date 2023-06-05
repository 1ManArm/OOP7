#pragma once
#include "Node.h"


class LinkedList {
private:
	Node* _head;
	Node* _tail;
	int _numberOfElems;
public:
	LinkedList();

	void push_back(int data);

	void showList();

	Node* searchByIndex(int index);

	void pushByIndex(int data, int index);
};
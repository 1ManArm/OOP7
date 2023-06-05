#pragma once
#include <iostream>
#include <string>
#include <vector>

class Node {
private:
	int _data;
	Node*_next;
public:
	Node(int data);

	void setNext(Node* next);

	Node *getNext();

	int getData();
};
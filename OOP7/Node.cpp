#include "Node.h"

Node::Node(int data) {
	_data = data;
	_next = nullptr;
}

Node* Node::getNext() {
	if(_next != nullptr)
		return _next;
	return nullptr;
}

void Node::setNext(Node* next) {
	_next = next;
}

int Node::getData() {
	return _data;
}
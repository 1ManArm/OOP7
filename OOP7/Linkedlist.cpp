#include "Linkedlist.h"

LinkedList::LinkedList() {
	_head = nullptr;
	_tail = nullptr;
	_numberOfElems = 0;
}

void LinkedList::push_back(int data) {
	Node* newNode = new Node(data);

	_numberOfElems++;

	if (_head == nullptr) {
		_head = newNode;
		_tail = newNode;
		return;
	}
	newNode->setNext(_tail);

	_tail = newNode;
}

void LinkedList::showList() {
	for (Node* ptr = _tail; ptr != _head->getNext(); ptr = ptr->getNext()) {
		std::cout << ptr->getData() << std::endl;
	}
}

Node* LinkedList::searchByIndex(int index) {
	Node* ptr = _tail;
	int count = _numberOfElems - index;
	while (count > 0) {
		ptr = ptr->getNext();
		count--;
	}
	return ptr;
}

void LinkedList::pushByIndex(int data, int index){
	Node* newNode = new Node(data);
	_numberOfElems++;
	Node* elementInIndex = searchByIndex(index);
	Node* element = searchByIndex(index + 1);
	element->setNext(newNode);
	newNode->setNext(elementInIndex);
}

#include <iostream>
#include <string>
#include <vector>
#include "Linkedlist.h"
//Перегрузка операторов

//class Digit {
//private:
//	int _data;
//public:
//	Digit(int data) : _data(data) {}
//
//	int operator+(Digit& digit) {
//		return _data + digit._data;
//	}
//
//	int operator-(Digit& digit) {
//		if(_data < digit._data)
//			return digit._data - _data;
//		return _data - digit._data;
//	}
//};

int main() {
	setlocale(LC_ALL, "Russian");
	/*Digit digit(5);
	Digit digit2(10);
	std::cout << digit.operator+(digit2) << std::endl;
	std::cout << digit.operator-(digit2) << std::endl;
	std::cout << digit + digit2 << std::endl;
	std::cout << digit - digit2 << std::endl;*/

	LinkedList list;
	list.push_back(109);
	list.push_back(10);
	list.push_back(14);
	list.push_back(19);
	list.push_back(21);
	list.push_back(9);
	list.push_back(69);
	list.push_back(34);
	list.push_back(63);
	list.pushByIndex(66, 3);
	list.showList();
	//std::cout << list.searchByIndex(9)->getData();

	return 0;
}
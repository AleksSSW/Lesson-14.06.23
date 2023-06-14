#pragma once
#include "Node.h"
#include <iostream>

class LinkedList {
private:
	Node* _head;
	Node* _tail;
	int _size;
public:
	LinkedList();

	void AddTail(int data);
	void AddHead(int data);
	void ShowList();
	void DeleteElement(int index);
	void DeleteList();
	Node* FindElement(int index);
};

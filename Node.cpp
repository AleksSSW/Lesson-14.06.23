#include "Node.h"

Node::Node(int data): _data(data),next(nullptr), prev(nullptr){}

int Node::GetData() {
	return _data;
}

void Node::operator=(Node* node)
{
	int tmp=this->_data;
	this->_data = node->_data;
	node->_data = tmp;
}
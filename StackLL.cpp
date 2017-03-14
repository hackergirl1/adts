#include "StackLL.h"
#include<iostream>

class Stack::Node 
{
	public:
	   int data = 0;
	   Node* link = nullptr;
	};

int Stack::size()
{
	return num_elements;
}

void Stack::push(int value)
{
	Node* newPtr = new Node{value};
	newPtr->link = frontPtr;
	frontPtr = newPtr;
	num_elements++;
}

void Stack::pop()
{
	Node* delPtr;	
	delPtr = frontPtr;
	frontPtr = frontPtr->link;
	delete delPtr;
	num_elements--;
}

int Stack::top()
{
	if (size()>0)
	return frontPtr->data;
	else
	return 0;
	//cout <<"The stack is empty!
}

Stack::~Stack()
{
	while (size()!=0)
	{
	pop();
	}	
}

void Stack::clear()
{
	while (size()!=0)
	{
	pop();
	}		
}



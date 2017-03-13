#include "StackV.h"
#include <iostream>

int Stack::size()
{
	return data.size();
}

void Stack::push(int value)
{
	data.push_back(value);
}

void Stack::pop()
{
	data.pop_back();
}

int Stack::top()
{
	if (data.size()>0)
	return data.back();
	else
	cout <<"The stack is empty!";
}
void Stack::clear()
{
	int size=data.size();	
	for (int i=0;i<=size;i++)// or while (size()!=0)
	{
	data.pop_back();
	}
}

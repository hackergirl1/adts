#include "StackL.h"

int Stack::size()
{
	return data.size();
}
void Stack::push(int value)
{

	data.insert(value,1);

}

void Stack::pop()
{
	data.remove(1);
}

int Stack::top()
{
	if (data.size()>0)
	return data.getAt(1);
	else
	cout <<"The stack is empty!";
}

void Stack::clear()
{
	data.clear();
}

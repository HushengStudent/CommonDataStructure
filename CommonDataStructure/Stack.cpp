/*
ջ;
*/
#include <iostream>
#include <stdlib.h>
#include "Stack.h"

using namespace std;

int Stack::GetStackLength()
{
	StackNode *tempNode;
	int index = 0;
	while (headNode != nullptr)
	{
		tempNode = headNode;
		headNode = tempNode->next;
		index++;
	}
	return index;
}

StackNode* Stack::PopStack()
{
	StackNode *tempNode;
	tempNode = headNode;
	headNode = tempNode->next;
	return tempNode;
}

void Stack::PushStack(StackNode *node)
{
	node->next = headNode;
	headNode->next = node;
}
/*
╤сап;
*/
#include <iostream>
#include <stdlib.h>
#include "Queue.h"

using namespace std;

int Queue::GetQueueLength(){
	QueueNode *tempNode;
	int index = 0;
	while (headNode != nullptr)
	{
		tempNode = headNode;
		headNode = tempNode->next;
		index++;
	}
	return index;
}

QueueNode* Queue::DoQueue(){
	QueueNode *tempNode;
	tempNode = headNode;
	headNode = tempNode->next;
	return tempNode;
}

void Queue::EnQueue(QueueNode* node){
	QueueNode *tempNode;
	tempNode = headNode;
	while (tempNode->next!=nullptr)
	{
		tempNode = tempNode->next;
	}
	tempNode->next = node;
}
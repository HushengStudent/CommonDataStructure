/*
Á´±í;
*/
#include <iostream>
#include <stdlib.h>
#include "LinkList.h"

using namespace std;

void Linklist::AddNode(LinkListNode node)
{
	LinkListNode *tempNode;
	tempNode = headNode;
	while (true)
	{
		if (tempNode->next == NULL){
			tempNode->next = new LinkListNode(node);
		}
		else
		{
			tempNode = tempNode->next;
		}
	}
}

void Linklist::DeleteNode(LinkListNode node)
{
	if (headNode == NULL)return;
	if (headNode->id == node.id)
	{
		headNode = headNode->next;
		return;
	}
	LinkListNode *preNode;
	LinkListNode *currentNode;
	currentNode = headNode;
	while (true)
	{
		preNode = currentNode;
		currentNode = preNode->next;
		if (currentNode != NULL)
		{
			if (currentNode->id == node.id){
				preNode->next = currentNode->next;
				currentNode = NULL;
			}
		}
		else
		{
			break;
		}
	}
}

int Linklist::GetLinkListLength()
{
	if (headNode == NULL)return 0;
	int length = 0;
	LinkListNode *tempNode;
	
	while (true)
	{
		tempNode = headNode;
		if (tempNode != NULL)
		{
			length++;
			headNode = tempNode->next;
		}
		else
		{
			break;
		}
	}
	return length;
}


/*
Á´±í;
*/
#include <iostream>
#include <stdlib.h>
#include "LinkList.h"

using namespace std;

void Linklist::AddNode(LinkListNode node)
{

}

void Linklist::DeleteNode(LinkListNode node)
{

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


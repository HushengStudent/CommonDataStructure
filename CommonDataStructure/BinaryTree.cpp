/*
¶þ²æÊ÷;
*/
#include <iostream>
#include <stdlib.h>
#include "BinaryTree.h"

using namespace std;

void BinaryTree::PreOrderTraversal(BinaryTreeNode *rootNode){
	if (rootNode == NULL)return;
	cout << rootNode->id << endl;
	PreOrderTraversal(rootNode->leftNode);
	PreOrderTraversal(rootNode->rightNode);
}

void BinaryTree::PostOrderTraversal(BinaryTreeNode *rootNode){
	if (rootNode == NULL)return;
	PostOrderTraversal(rootNode->leftNode);
	PostOrderTraversal(rootNode->rightNode);
	cout << rootNode->id << endl;
}

void BinaryTree::InOrderTraversal(BinaryTreeNode *rootNode){
	if (rootNode == NULL)return;
	InOrderTraversal(rootNode->leftNode);
	cout << rootNode->id << endl;
	InOrderTraversal(rootNode->rightNode);
}

void BinaryTree::DeleteTree(BinaryTreeNode *rootNode){
	if (rootNode == NULL)return;
	DeleteTree(rootNode->leftNode);
	DeleteTree(rootNode->rightNode);
	delete rootNode;
}
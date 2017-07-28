/*
¶þ²æËÑË÷Ê÷;
*/
#include <iostream>
#include <stdlib.h>
#include "BinaryTree.h"

using namespace std;

BinaryTreeNode* BinaryTree::FindNodeInBinarySearchTree(int value,BinaryTreeNode *rootNode){
	if (value == rootNode->id){
		return rootNode;
	}
	if (value < rootNode->id){
		return FindNodeInBinarySearchTree(value, rootNode->leftNode);
	}
	if (value >rootNode->id){
		return FindNodeInBinarySearchTree(value, rootNode->rightNode);
	}
	return NULL;
}
#ifndef BINARYTREE_H_
#define BINARYTREE_H_

//¶þ²æÊ÷½Úµã;
struct BinaryTreeNode
{
	int id;
	BinaryTreeNode *leftNode;
	BinaryTreeNode *rightNode;

};

class BinaryTree
{
public:
	BinaryTree();
	~BinaryTree();

	BinaryTreeNode *rootNode;

	void PreOrderTraversal(BinaryTreeNode *rootNode);
	void InOrderTraversal(BinaryTreeNode *rootNode);
	void PostOrderTraversal(BinaryTreeNode *rootNode);

	void DeleteTree(BinaryTreeNode *rootNode);

	BinaryTreeNode* FindNodeInBinarySearchTree(int value, BinaryTreeNode *rootNode);

private:

};

BinaryTree::BinaryTree()
{
	rootNode = nullptr;
}

BinaryTree::~BinaryTree()
{
	DeleteTree(rootNode);
}

#endif
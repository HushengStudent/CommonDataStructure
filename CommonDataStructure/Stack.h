#ifndef STACK_H_
#define STACK_H_

struct StackNode
{
	int id;
	StackNode *next;
};

class Stack
{
public:
	Stack();
	~Stack();

	StackNode *headNode;

	int GetStackLength();
	void PushStack(StackNode *node);
	StackNode* PopStack();

private:

};

Stack::Stack()
{
	headNode = nullptr;
}

Stack::~Stack()
{
	int temp = GetStackLength();
	if (temp > 0)
	{
		StackNode *tempNode;
		for (int i = 0; i < temp; i++)
		{
			tempNode = headNode;
			headNode = tempNode->next;
			delete tempNode;
		}
	}
}
#endif
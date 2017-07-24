#ifndef LINKLIST_H_
#define LINKLIST_H_

struct LinkListNode
{
	int id;              //链表节点编号;
	LinkListNode *next;  //该节点的下一个节点;
};

class Linklist
{
public:
	Linklist();
	~Linklist();

	LinkListNode *headNode;

	void AddNode(LinkListNode node);    //增加节点;
	void DeleteNode(LinkListNode node); //删除节点;

	int GetLinkListLength();            //获取链表长度;

private:

};

Linklist::Linklist()
{
	headNode = NULL;
}

Linklist::~Linklist()
{
	int temp = GetLinkListLength();
	if (temp > 0)
	{
		LinkListNode *tempNode;
		for (int i = 0; i < temp;i++)
		{
			tempNode = headNode;
			headNode = tempNode->next;
			delete tempNode;
		}
	}
}

#endif // !LINKLIST_H_
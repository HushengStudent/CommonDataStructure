#ifndef LINKLIST_H_
#define LINKLIST_H_

struct LinkListNode
{
	int id;              //����ڵ���;
	LinkListNode *next;  //�ýڵ����һ���ڵ�;
};

class Linklist
{
public:
	Linklist();
	~Linklist();

	LinkListNode *headNode;

	void AddNode(LinkListNode node);    //���ӽڵ�;
	void DeleteNode(LinkListNode node); //ɾ���ڵ�;

	int GetLinkListLength();            //��ȡ������;

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
#ifndef QUEUE_H_
#define QUEUE_H_

struct QueueNode
{
	int id;
	QueueNode *next;
};

class Queue
{
public:
	Queue();
	~Queue();

	QueueNode *headNode;

	int GetQueueLength();
	QueueNode* DoQueue();
	void EnQueue(QueueNode* node);

private:

};

Queue::Queue()
{
	headNode = nullptr;
}

Queue::~Queue()
{
	int temp = GetQueueLength();
	if (temp > 0)
	{
		QueueNode *tempNode;
		for (int i = 0; i < temp; i++)
		{
			tempNode = DoQueue();
			delete tempNode;
		}
	}
}
#endif
#ifndef GRAPHNODE_H_
#define GRAPHNODE_H_

class GraphNode
{
public:
	GraphNode();
	~GraphNode();

	GraphNode* GetAllOnLineNode();

	void AddLine(GraphLine *line);

private:

};

GraphNode::GraphNode()
{
}

GraphNode::~GraphNode()
{
}
#endif
#ifndef GRAPHLINE_H_
#define GRAPHLINE_H_

class GraphLine
{
public:
	GraphLine();

	GraphLine(GraphNode *upNode, GraphNode*downNode){
		this->upNode = upNode;
		this->downNode = downNode;
	}

	~GraphLine();

	GraphNode *upNode;
	GraphNode *downNode;

private:

};

GraphLine::GraphLine()
{
}

GraphLine::~GraphLine()
{
	delete upNode;
	delete downNode;
}
#endif
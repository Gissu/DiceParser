#ifndef EXECUTIONNODE_H
#define EXECUTIONNODE_H

#include "result.h"

class ExecutionNode
{
public:
    ExecutionNode();
    virtual ~ExecutionNode();
    virtual void run(ExecutionNode* previous = NULL)=0;
    Result* getResult();
    void setNextNode(ExecutionNode*);
    ExecutionNode* getNextNode();
protected:
    Result* m_result;
    ExecutionNode* m_nextNode;
};

#endif // EXECUTIONNODE_H

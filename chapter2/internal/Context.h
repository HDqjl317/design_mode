#ifndef CHAPTER2_CONTEXT_H
#define CHAPTER2_CONTEXT_H

#include "Strategy.h"

class Context{
public:
    Context(Strategy *stra);
    void ContextInterface();

private:
    Strategy *strategy;
};

#endif //CHAPTER2_CONTEXT_H

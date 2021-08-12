#ifndef CHAPTER2_STRATEGY_H
#define CHAPTER2_STRATEGY_H

#include <iostream>

class Strategy{
public:
    Strategy();
    virtual void AlgorithmInterface() = 0;
};


#endif //CHAPTER2_STRATEGY_H

#ifndef CHAPTER2_STRATEGYA_H
#define CHAPTER2_STRATEGYA_H

#include "Strategy.h"

class StrategyA:public Strategy{
public:
    StrategyA();
    void AlgorithmInterface() override;
};

#endif //CHAPTER2_STRATEGYA_H

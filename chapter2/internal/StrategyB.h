#ifndef CHAPTER2_STRATEGYB_H
#define CHAPTER2_STRATEGYB_H

#include "Strategy.h"

class StrategyB: public Strategy{
public:
    StrategyB();
    void AlgorithmInterface() override;
};

#endif //CHAPTER2_STRATEGYB_H

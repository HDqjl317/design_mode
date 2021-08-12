//
// Created by lenovo on 2021/6/23.
//

#ifndef CHAPTER1_OPERATIONSUB_H
#define CHAPTER1_OPERATIONSUB_H

#include "Operation.h"

class OperationSub : public Operation{
public:
    OperationSub();
    double GetResult() override;
};

#endif //CHAPTER1_OPERATIONSUB_H

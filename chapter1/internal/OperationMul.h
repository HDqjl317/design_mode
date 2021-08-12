//
// Created by lenovo on 2021/6/23.
//

#ifndef CHAPTER1_OPERATIONMUL_H
#define CHAPTER1_OPERATIONMUL_H

#include "Operation.h"

class OperationMul : public Operation{
public:
    OperationMul();
    double GetResult() override;
};


#endif //CHAPTER1_OPERATIONMUL_H

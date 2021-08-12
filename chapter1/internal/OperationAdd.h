//
// Created by lenovo on 2021/6/23.
//

#ifndef CHAPTER1_OPERATIONADD_H
#define CHAPTER1_OPERATIONADD_H

#include "Operation.h"

class OperationAdd : public Operation{
public:
    OperationAdd();
    double GetResult() override;
};

#endif //CHAPTER1_OPERATIONADD_H

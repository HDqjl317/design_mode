//
// Created by lenovo on 2021/6/23.
//

#ifndef CHAPTER1_OPERATIONFACTORY_H
#define CHAPTER1_OPERATIONFACTORY_H

#include "Operation.h"
#include "OperationAdd.h"
#include "OperationSub.h"
#include "OperationMul.h"
#include "OperationDiv.h"
#include "string"

class OperationFactory{
public:
    static Operation *CreatOperate(std::string operate);
};

#endif //CHAPTER1_OPERATIONFACTORY_H

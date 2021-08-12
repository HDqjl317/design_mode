//
// Created by lenovo on 2021/6/23.
//
#include "OperationFactory.h"

Operation *OperationFactory::CreatOperate(std::string operate) {
    Operation *oper;
    if (operate == "+"){
        oper = new OperationAdd();
    }
    else if (operate == "-"){
        oper = new OperationSub();
    }
    else if (operate == "*"){
        oper = new OperationMul();
    }
    else{
        oper = new OperationDiv();
    }
    return oper;
}

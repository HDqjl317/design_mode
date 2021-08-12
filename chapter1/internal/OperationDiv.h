//
// Created by lenovo on 2021/6/23.
//

#ifndef CHAPTER1_OPERATIONDIV_H
#define CHAPTER1_OPERATIONDIV_H

#include "Operation.h"

class OperationDiv : public Operation{
public:
    OperationDiv();
    double GetResult() override;
};

#endif //CHAPTER1_OPERATIONDIV_H

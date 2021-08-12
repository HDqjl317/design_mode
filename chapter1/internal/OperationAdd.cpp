//
// Created by lenovo on 2021/6/23.
//

#include "OperationAdd.h"

OperationAdd::OperationAdd() {
    std::cout << "operation of adding ..." << std::endl;
}

double OperationAdd::GetResult() {
    double result = m_NumberA + m_NumberB;
    return result;
}
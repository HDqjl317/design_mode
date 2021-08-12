//
// Created by lenovo on 2021/6/23.
//
#include "OperationMul.h"

OperationMul::OperationMul() {
    std::cout << "operation of muling ..." << std::endl;
}

double OperationMul::GetResult() {
    double result = m_NumberA * m_NumberB;
    return result;
}

//
// Created by lenovo on 2021/6/23.
//
#include "OperationSub.h"

OperationSub::OperationSub() {
    std::cout << "operation of subing ..." << std::endl;
}

double OperationSub::GetResult(){
    double result = m_NumberA - m_NumberB;
    return result;
}

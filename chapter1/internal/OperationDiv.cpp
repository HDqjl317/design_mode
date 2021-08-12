//
// Created by lenovo on 2021/6/23.
//

#include "OperationDiv.h"

OperationDiv::OperationDiv() {
    std::cout << "operation of diving ..." << std::endl;
}

double OperationDiv::GetResult() {
    if(m_NumberB==0){
        std::cout << "除数不能为0！" << std::endl;
    }
    double result = m_NumberA / m_NumberB;
    return  result;
}
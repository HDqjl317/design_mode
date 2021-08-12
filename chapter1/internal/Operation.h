//
// Created by lenovo on 2021/6/23.
//

#ifndef CHAPTER1_OPERATION_H
#define CHAPTER1_OPERATION_H

#pragma once
#include <iostream>

class Operation{
public:
    Operation();
    virtual double GetResult();
    void SetNumberA(double value);
    void SetNumberB(double value);
    double GetNumberA();
    double GetNumberB();

protected:
    double m_NumberA;
    double m_NumberB;
};


#endif //CHAPTER1_OPERATION_H

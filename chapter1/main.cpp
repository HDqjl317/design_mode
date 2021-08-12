#include <iostream>
#include "internal/OperationFactory.h"

int main() {
    std::cout << "Hello, World!" << std::endl;
    std::string str[] = {"+","-","*","/"};
    Operation *oper;
    for (auto & i : str){
        oper = OperationFactory::CreatOperate(i);
        oper->SetNumberA(4);
        oper->SetNumberB(2);
        std::cout << oper->GetResult() << std::endl;
    }
    return 0;
}

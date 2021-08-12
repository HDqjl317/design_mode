cmake_minimum_required(VERSION 3.17)
project(chapter1)

set(CMAKE_CXX_STANDARD 14)

add_executable(chapter1 main.cpp internal/Operation.h internal/Operation.cpp internal/OperationAdd.h internal/OperationAdd.cpp internal/OperationDiv.h internal/OperationDiv.cpp internal/OperationFactory.h internal/OperationFactory.cpp internal/OperationMul.h internal/OperationMul.cpp internal/OperationSub.h internal/OperationSub.cpp)
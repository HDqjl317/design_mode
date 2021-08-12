cmake_minimum_required(VERSION 3.17)
project(chapter2)

set(CMAKE_CXX_STANDARD 14)

add_executable(chapter2 main.cpp internal/Strategy.h internal/Strategy.cpp internal/StrategyA.h internal/StrategyA.cpp internal/StrategyB.h internal/StrategyB.cpp internal/Context.h internal/Context.cpp)
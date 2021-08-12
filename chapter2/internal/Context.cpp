#include "Context.h"

Context::Context(Strategy *stra) {
    this->strategy = stra;
}

void  Context::ContextInterface() {
    this->strategy->AlgorithmInterface();
}

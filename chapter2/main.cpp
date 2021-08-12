#include <iostream>
#include "internal/StrategyA.h"
#include "internal/StrategyB.h"
#include "internal/Context.h"

int main() {
    Context *context;

    context = new Context(new StrategyA());
    context->ContextInterface();

    context = new Context(new StrategyB());
    context->ContextInterface();
    return 0;
}

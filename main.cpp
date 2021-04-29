#include <iostream>
#include "stack2.h"

int main() {
    stack<int> intStack;
    intStack.push(7);
    intStack.push(8);

    std::cout << intStack << '\n';
}

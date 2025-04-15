#include "MutantStack.hpp"
#include <iostream>

int main()
{
    MutantStack<int> stack;

    stack.push(1);
    std::cout << stack.top() << std::endl;
}
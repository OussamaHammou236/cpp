#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

Base * generate(void)
{
    std::srand(std::time(0));

    int min = 1, max = 3;
    int randomNum = min + std::rand() % (max - min + 1);
    if (randomNum == 1)
        return new A;
    else if (randomNum == 2)
        return new B;
    else
        return new C;
}

void identify(Base* p)
{
    if (dynamic_cast<A*>(p))
        std::cout << "the actual type is A" << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << "the actual type is B" << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << "the actual type is C" << std::endl;
    else
        std::cout << "Unknown type" << std::endl;
}

int main()
{

}
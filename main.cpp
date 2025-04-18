#include <iostream>

template <typename T>
void    print(T &type)
{
    (*type)();
}

void    ft()
{
    std::cout << "ana function\n";
}

int main(void)
{
    // simo obj;
    print(ft);
    print(ft);
}
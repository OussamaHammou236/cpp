#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T>
void    print(T type)
{
    std::cout << "data : " << type << std::endl;
}

template <typename array, typename fun>
void    iter(array ary, size_t size, fun function)
{
    if (!ary)
        return;
    for(int i = 0; i < size; i++)
        function(ary[i]);
}

#endif

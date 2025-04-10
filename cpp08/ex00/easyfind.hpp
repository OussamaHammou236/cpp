#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <exception>
#include <vector>
#include <iostream>
#include <algorithm>

class NotFound : public std::exception
{
    public:
        const char *what() const  throw()
        {
            return "not found";
        }
};

template <typename T>
void easyfind(T& container, int i)
{
    if (std::find(container.begin(), container.end(), i) != container.end())
        std::cout << "found" << std::endl;
    else
        throw NotFound();
}

#endif
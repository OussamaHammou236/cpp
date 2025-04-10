#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <vector>

template <typename T>
class MutantStack
{
    private:
      std::vector<T> stack;  
    public:
        void push(T nb)
        {
            stack.push_back(nb);
        }
        void pop()
        {
            stack.pop_back();
        }
        unsigned int size()
        {
            return stack.size();
        }
        std::vector<T>::iterator begin()
        {
            return stack.begin();
        }
        std::vector<T>::iterator end()
        {
            return stack.end();
        }
};

#endif
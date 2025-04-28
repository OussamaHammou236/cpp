#ifndef RPN_HPP
#define RPN_HPP

#include <stack>
#include <iostream>
#include <exception>

class RPN
{
    private:
        std::stack<int> stack;
    public:
        int rpn(std::string str);
        void operators(char c);
};

#endif
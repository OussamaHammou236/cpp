#ifndef RPN_HPP
#define RPN_HPP

#include <stack>
#include <iostream>
#include <exception>
#include <cstdlib>

class RPN
{
    private:
        std::stack<int> stack;
    public:
        int rpn(std::string str);
        void operators(char c);


        RPN();
        RPN(std::stack<int> &stack);
        RPN(RPN &instance);
        ~RPN();
        RPN& operator=(RPN &instance);
};

#endif
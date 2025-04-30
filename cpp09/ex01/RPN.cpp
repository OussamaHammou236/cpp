#include "RPN.hpp"
/*
"  8 9 * 9 - 9 - 9 - 4 - 1 +"
*/

void RPN:: operators(char c)
{
    if (stack.size() < 2)
        throw std::string("EROR: not enough operands");
    int nb1 = stack.top();
    stack.pop();
    int nb2 = stack.top();
    stack.pop();

    if (c == '+')
        stack.push(nb2 + nb1);
    else if (c == '/')
    {
        if (!nb1)
           throw std::string("EROR: you cannot divide by 0"); 
        stack.push(nb2 / nb1);
    }
    else if (c == '-')
        stack.push(nb2 - nb1);
    else if (c == '*')
        stack.push(nb2 * nb1);
    
}

int RPN:: rpn(std::string str)
{
    int i = 0;
    size_t pos;
    for (;str[i];)
    {
        for (; str[i] == ' '; str.erase(0, 1));
        if (isdigit(str[i]))
        {
            pos = str.find(' ');
            if (pos == std::string::npos)
                pos = str.length();
            stack.push(atoi(str.substr(i, pos - i).c_str()));
            str.erase(0, pos);

        }
        else if (str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/')
        {
            operators(str[i]);
            str.erase(0, 1);
        }
        else if (str[i] != ' ' && str[i])
            throw std::string("ERROR");
    }
    if (stack.size() != 1)
        throw std::string("ERROR");
    return stack.top();
}

RPN:: RPN() {}
RPN:: RPN(std::stack<int> &stack) { this->stack = stack;}
RPN& RPN:: operator=(RPN &instance) { stack = instance.stack;}
RPN:: RPN(RPN &instance) { *this = instance;}
RPN:: ~RPN() {}
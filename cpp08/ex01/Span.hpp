#ifndef SPAN_HPP
#define SPAN_HPP

#include <exception>
#include <iostream>
#include <vector>
#include <algorithm>

class Span
{
    private:
        std::vector<int> vec;
        unsigned int N;
    public:
        Span();
        Span(unsigned int N);
        
        void addNumber(int number);
        void print_numbers();
        int longestSpan();
        int shortestSpan();
};

#endif
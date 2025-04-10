#ifndef SPAN_HPP
#define SPAN_HPP

#include <exception>
#include <iostream>
#include <vector>
#include <algorithm>

template <typename T>
class Span
{
    private:
        T container;
        unsigned int N;
    public:
        Span() : container(), N(0) {}
        Span(unsigned int N) : container(), N(N) {}
        
        void addNumber(int number)
        {
            if (container.size() >= N)
                throw std::out_of_range("the container is full");
            container.push_back(number);
        }
        void print_numbers()
        {
            for (int i = 0; i < container.size(); i++)
                std::cout << container[i] << std::endl;
        }

        int longestSpan()
        {
            T tmp = container;
            sort(tmp.begin(), tmp.end());
            return tmp.at(tmp.size() - 1) - tmp.at(0);
        }
        int shortestSpan()
        {
            T tmp = container;
            sort(tmp.begin(), tmp.end());
            int cont;
            if (tmp.size() < 2)
                return 0;
            int shortest = tmp.at(1) - tmp.at(0); 
            for (int i = 1;i < tmp.size() - 1; i++)
            {
                cont = tmp.at(i + 1) - tmp.at(i);
                if (cont < shortest)
                    shortest = cont;
            }
            return shortest;
        }
};

#endif
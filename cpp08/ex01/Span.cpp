#include "Span.hpp"

Span:: Span() : vec(), N(0) {}
Span:: Span(unsigned int N) : vec(), N(N) {}


void Span::addNumber(int number)
{
    if (vec.size() >= N)
        throw std::out_of_range("the contaner is full");
    vec.push_back(number);
}

void Span::print_numbers()
{
    for (int i = 0; i < vec.size(); i++)
        std::cout << "number[" << i << "] = "<< vec[i] << std::endl;
}

int Span::longestSpan()
{
    if (vec.size() < 2)
        return 0;
    std::vector<int> tmp = vec;
    sort(tmp.begin(), tmp.end());
    return tmp.at(tmp.size() - 1) - tmp.at(0);
}

int Span::shortestSpan()
{
    if (vec.size() < 2)
        return 0;
    std::vector<int> tmp = vec;
    sort(tmp.begin(), tmp.end());
    int cont;
    int shortest = tmp.at(1) - tmp.at(0); 
    for (int i = 1;i < tmp.size() - 1; i++)
    {
        cont = tmp.at(i + 1) - tmp.at(i);
        if (cont < shortest)
            shortest = cont;
    }
    return shortest;
}
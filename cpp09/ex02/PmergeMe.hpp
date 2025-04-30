#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <vector>
#include <exception>
#include <algorithm>
#include <ctime>
#include <deque>

class PmergeMe
{
    private:
        std::vector<int> merge;

    public:
        void ParsInput(char **av);
        void IsNumber(std::string str);
        void SortFirstContainer();
        void PrintVector(std::vector<int> &container);
        void SortSecondContainer();
};

#endif
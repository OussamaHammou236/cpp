#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <vector>
#include <exception>
#include <algorithm>
class PmergeMe
{
    private:
        std::vector<int> merge;

    public:
        void ParsInput(char **av);
        void IsNumber(std::string str);
        void SortFirstContainer();
        void SortSecondContainer();
};

#endif
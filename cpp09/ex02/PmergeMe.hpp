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
        std::vector<size_t> sequence;

    public:
        PmergeMe();
        PmergeMe(std::vector<int> &Merge);
        PmergeMe(PmergeMe &instance);
        ~PmergeMe();
        PmergeMe& operator=(PmergeMe &instance);
        void ParsInput(char **av);
        void IsNumber(std::string str);
        void SortFirstContainer();
        void SortSecondContainer();
        std::vector<int> mergeInsert(std::vector<int> &nbs);
        std::deque<int> mergeInsert(std::deque<int> &nbs);
        void PrintVector(std::vector<int> &container);
};

#endif
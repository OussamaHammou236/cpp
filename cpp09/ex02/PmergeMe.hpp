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
        std::vector<int> sequence;

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
        template <typename T>
        T mergeInsert(T &nbs)
        {
            T MaxNb;
            T MinNb;
            T sortedNb;
            if (nbs.size() <= 1)
                return nbs;
            for (typename T::iterator it = nbs.begin(); it != nbs.end();it++)
            {
                int first = *it;
                int second;
                if (it + 1 != nbs.end())
                {
                    second = *(it + 1);
                    MinNb.push_back(std::min(first, second));
                    MaxNb.push_back(std::max(first, second));
                    ++it;
                }
                else
                    MaxNb.push_back(first);
            }
            sortedNb = mergeInsert(MaxNb);
            for (size_t indexSequence = 0; indexSequence < sequence.size(); ++indexSequence)
            {
                if (sequence[indexSequence] < MinNb.size())
                {
                    typename T::iterator its = std::lower_bound(sortedNb.begin(), sortedNb.end(), MinNb[sequence[indexSequence]]);
                    sortedNb.insert(its, MinNb[sequence[indexSequence]]);
                }
            }
            return sortedNb;
        }
        template<typename T>
        void PrintVector(T &container)
        {
            std::cout << "After: ";
            for (typename T::iterator it = container.begin(); it < container.end(); ++it)
                std::cout << *it << " ";
            std::cout << std::endl;
        }
};

#endif
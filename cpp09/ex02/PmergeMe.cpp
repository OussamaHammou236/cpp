#include "PmergeMe.hpp"

void PmergeMe:: IsNumber(std::string str)
{
    for (int i = 0; str[i]; i++)
    {
        if (!isdigit(str[i]))
            throw std::string("ERROR");
    }
}

void PmergeMe:: ParsInput(char **av)
{
    int nb;
    std::cout << "Before:  ";
    for (int i = 1; av[i]; i++)
    {
        IsNumber(av[i]);
        nb = atoi(av[i]);
        std::cout << nb << " ";
        merge.push_back(nb);
    }
    std::cout << std::endl;
}
/* 
"43 2 45 34"

*/

void PmergeMe:: PrintVector(std::vector<int> &container)
{
    std::cout << "After: ";
    for (std::vector<int>::iterator it = container.begin(); it < container.end(); ++it)
        std::cout << *it << " ";
    std::cout << std::endl;
}

void buildOpstackSequence(int start, int end, std::vector<int>& sequence)
{
    if (start > end) return;

    int mid = (start + end) / 2;
    sequence.push_back(mid);
    buildOpstackSequence(start, mid - 1, sequence);
    buildOpstackSequence(mid + 1, end, sequence);
}

void PmergeMe:: SortFirstContainer()
{
    std::vector<int> MaxNb;
    std::vector<int> MinNb;
    std::vector<int> sequence;
    clock_t start = clock();
    clock_t end;
    for (std::vector<int>::iterator it = merge.begin(); it != merge.end();++it)
    {
        int first = *it;
        int second = -1;
        if (it + 1 != merge.end())
        {
            second = *(it + 1);
            MinNb.push_back(std::min(first, second));
            ++it;
        }
        MaxNb.push_back(std::max(first, second));
    }
    std::sort(MaxNb.begin(), MaxNb.end());
    buildOpstackSequence(0, MinNb.size() - 1, sequence);
    for (std::vector<int>::iterator it = sequence.begin(); it != sequence.end(); it++)
    {
        std::vector<int>::iterator its = std::lower_bound(MaxNb.begin(), MaxNb.end(), MinNb.at(*it));
        MaxNb.insert(its, MinNb.at(*it));
    }
    end = clock();
    PrintVector(MaxNb);
    std::cout << "Time to process a range of " << merge.size() << " elements with std::vector : "<< end - start << " us" << std::endl;
}

void PmergeMe:: SortSecondContainer()
{
    std::deque<int> MaxNb;
    std::deque<int> MinNb;
    clock_t start = clock();
    clock_t end;
    for (std::vector <int>::iterator it = merge.begin(); it != merge.end();++it)
    {
        int first = *it;
        int second = -1;
        if (it + 1 != merge.end())
        {
            second = *(it + 1);
            MinNb.push_back(std::min(first, second));
            ++it;
        }
        MaxNb.push_back(std::max(first, second));
    }
    std::sort(MaxNb.begin(), MaxNb.end());
    for (std::deque<int>::iterator min = MinNb.begin(); min < MinNb.end(); ++min)
    {
        std::deque<int>::iterator it = std::lower_bound(MaxNb.begin(), MaxNb.end(), *min);
        MaxNb.insert(it, *min);
    }
    end = clock();
    std::cout << "Time to process a range of " << merge.size() << " elements with std::deque : "<< end - start << " us" << std::endl;
}

PmergeMe:: PmergeMe() {}
PmergeMe:: PmergeMe(std::vector<int> &Merge) { merge = Merge;}
PmergeMe& PmergeMe:: operator=(PmergeMe &instance) { merge = instance.merge; return *this;}
PmergeMe:: PmergeMe(PmergeMe &instance) { *this = instance;}
PmergeMe:: ~PmergeMe() {}
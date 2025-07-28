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
    for (int i = 1; av[i]; i++)
    {
        IsNumber(av[i]);
        nb = atoi(av[i]);
        merge.push_back(nb);
    }
}

void PmergeMe:: SortFirstContainer()
{
    std::vector<int> sortedVector;
    std::vector<int> MinNb;
    std::vector<int> numbers(merge.begin(), merge.end());
    clock_t end;
    sequence.push_back(0);
    sequence.push_back(1);
    for (size_t i = 2;i < merge.size(); i++)
    sequence.push_back(sequence.at(i - 1) + (2 * sequence.at(i - 2)));
    sequence.erase(sequence.begin() + 1);
    for (size_t i = 1; i < merge.size() / 2; ++i)
        if (std::find(sequence.begin(), sequence.end(), i) == sequence.end())
            sequence.push_back(i);
    
    clock_t start = clock();
    std::cout << "Befor : ";
    PrintVector(merge);
    sortedVector = mergeInsert(numbers);
    end = clock();
    std::cout << "After: ";
    PrintVector(sortedVector);
    std::cout << "Time to process a range of " << merge.size() << " elements with std::vector : "<< end - start << " us" << std::endl;
}

void PmergeMe:: SortSecondContainer()
{
    std::deque<int> sortedVector(merge.begin(), merge.end());
    std::deque<int> MinNb;
    clock_t end;
    sequence.clear();
    sequence.push_back(0);
    sequence.push_back(1);
    for (size_t i = 2;i < merge.size(); i++)
    sequence.push_back(sequence.at(i - 1) + (2 * sequence.at(i - 2)));
    sequence.erase(sequence.begin() + 1);
    for (size_t i = 1; i < merge.size() / 2; ++i)
    if (std::find(sequence.begin(), sequence.end(), i) == sequence.end())
            sequence.push_back(i);
    clock_t start = clock();
    sortedVector = mergeInsert(sortedVector);
    end = clock();
    std::cout << "Time to process a range of " << merge.size() << " elements with std::vector : "<< end - start << " us" << std::endl;
}

PmergeMe:: PmergeMe() {}
PmergeMe:: PmergeMe(std::vector<int> &Merge) { merge = Merge;}
PmergeMe& PmergeMe:: operator=(PmergeMe &instance) { merge = instance.merge; return *this;}
PmergeMe:: PmergeMe(PmergeMe &instance) { *this = instance;}
PmergeMe:: ~PmergeMe() {}


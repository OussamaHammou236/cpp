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

std::vector<int> buildJacobsthalSequence(int n) {
    std::vector<int> seq;
    seq.push_back(0); // usually start by inserting the first min element
    int j1 = 1, j2 = 3;
    while (j2 < n) {
        seq.push_back(j2 - 1); // indices are offset by -1
        int temp = j2;
        j2 = j2 + 2 * j1;
        j1 = temp;
    }
    // fill remaining indices
    for (int i = 1; i < n; ++i)
        if (std::find(seq.begin(), seq.end(), i) == seq.end())
            seq.push_back(i);
    return seq;
}


std::vector<int> PmergeMe:: mergeInsert(std::vector<int> &nbs)
{
    std::vector<int> MaxNb;
    std::vector<int> MinNb;
    std::vector<int> sortedNb;
    std::vector<int>::iterator seqIt;
    if (nbs.size() <= 1)
        return nbs;
    for (std::vector <int>::iterator it = nbs.begin(); it != nbs.end();it++)
    {
        int first = *it;
        int second = -1;
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
    seqIt = sequence.begin();
    int fg;
    for (int i = 0;i < MinNb.size(); i++)
    {
        if (fg < sequence.size())
        {
            std::vector<int>::iterator its = std::lower_bound(sortedNb.begin(), sortedNb.end(), MinNb[sequence[fg]]);
            sortedNb.insert(its, MinNb[sequence[fg]]);
            fg++;
        }
        else
            fg = sequence.size() - 1;
    }
    return sortedNb;
}

void PmergeMe:: PrintVector(std::vector<int> &container)
{
    std::cout << "After: ";
    for (std::vector<int>::iterator it = container.begin(); it < container.end(); ++it)
        std::cout << *it << " ";
    std::cout << std::endl;
}

void PmergeMe:: SortFirstContainer()
{
    std::vector<int> sortedVector;
    std::vector<int> MinNb;
    clock_t start = clock();
    clock_t end;
    sequence.push_back(0);
    sequence.push_back(1);
    for (int i = 2;i < merge.size() + 2; i++)
        sequence.push_back(sequence.at(i - 1) + (2 * sequence.at(i - 2)));
    sequence.erase(sequence.begin());
    sequence.erase(sequence.begin());
    for (int i = 0; i < sequence.size(); i++)
        std::cout << "--> " << sequence.at(i) << std::endl;
    sortedVector = mergeInsert(merge);
    end = clock();
    PrintVector(sortedVector);
    std::cout << "Time to process a range of " << merge.size() << " elements with std::vector : "<< end - start << " us" << std::endl;
}

PmergeMe:: PmergeMe() {}
PmergeMe:: PmergeMe(std::vector<int> &Merge) { merge = Merge;}
PmergeMe& PmergeMe:: operator=(PmergeMe &instance) { merge = instance.merge; return *this;}
PmergeMe:: PmergeMe(PmergeMe &instance) { *this = instance;}
PmergeMe:: ~PmergeMe() {}


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
/* 
"43 2 45 34"

*/

void PmergeMe:: SortFirstContainer()
{
    std::vector<int> MaxNb;
    std::vector<int> MinNb;
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
    for (std::vector<int>::iterator min = MinNb.begin(); min < MinNb.end(); ++min)
    {
        std::vector<int>::iterator it = std::lower_bound(MaxNb.begin(), MaxNb.end(), *min);
        MaxNb.insert(it, *min);
    }
    // for(int i = 0; i < MaxNb.size(); i++)
    // {
    //     std::cout << MaxNb.at(i) << " "; 
    // }
    // std::cout << std::endl;
}

void PmergeMe:: SortSecondContainer()
{

}
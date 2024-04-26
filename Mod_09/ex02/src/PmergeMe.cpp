#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {}

PmergeMe::~PmergeMe() {}

PmergeMe::PmergeMe(PmergeMe &other)
{
    *this = other;
}

PmergeMe &PmergeMe::operator=(const PmergeMe &other)
{
    if (this != &other)
    {
        l = other.l;
        v = other.v;
    }
    return *this;
}

void PmergeMe::addToVector(const int &val)
{
    if (v.size() > 0 && v.size() % 2 == 1)
    {
        int prev = v.back();
        if (val < prev)
        {
            v.back() = val;
            v.push_back(prev);
        }
        else
            v.push_back(val);
    }
    else
        this->v.push_back(val);
    // if (v.size() > 1 && v.size() % 2 == 0)
    //     if (val < v[v.size() - 2])
    //         std::swap(v[v.size() - 1], v[v.size() - 2]);
}

void PmergeMe::addToList(const int &val)
{
    if (l.size() > 0 && l.size() % 2 == 1)
    {
        std::list<int>::iterator it = l.end();
        --it; // point to last element
        int prev = *it;
        if (val < prev)
        {
            *it = val;         // replace last element with val
            l.push_back(prev); // push prev to the end
        }
        else
            l.push_back(val); // push val to the end
    }
    else
        this->l.push_back(val);
}

// Explicit instantiation
template void PmergeMe::mergeInsertionSort<std::list<int>>(std::list<int>&);
template void PmergeMe::mergeInsertionSort<std::vector<int>>(std::vector<int>&);

template <typename Container>
void PmergeMe::mergeInsertionSort(Container &c)
{
    size_t size = c.size();
    if (size < 2)
        return;

    // Split the container into two halves, we need to sort only the odd elements
    
    for (typename Container::iterator it = c.begin(); it != c.end();)
    {
        int current = *it;
        std::advance(it, 2);
        std::cout << *it << " ";
        if (current > *it)
            std::swap(current, *it);
    }
}
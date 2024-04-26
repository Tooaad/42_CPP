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

    } else 
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

    } else 
        this->l.push_back(val);
}

void PmergeMe::mergeMe()
{
    std::vector<int>::iterator it1 = v.begin();
    std::list<int>::iterator it2 = l.begin();

    while (it1 != v.end() && it2 != l.end())
    {
        if (*it1 < *it2)
        {
            std::cout << *it1 << " ";
            std::advance(it1, 2);
        }
        else
        {
            std::cout << *it2 << " ";
            std::advance(it2, 2);
        }
    }

}
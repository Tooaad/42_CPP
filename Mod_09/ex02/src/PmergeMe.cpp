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
        if (val > prev)
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
        if (val > prev)
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
template void PmergeMe::recursiveSort<std::list<int>>(std::list<int>&);
template void PmergeMe::recursiveSort<std::vector<int>>(std::vector<int>&);

template <typename Container>
void PmergeMe::recursiveSort(Container &c)
{
    size_t size = c.size();
    if (size < 2)
        return;

    Container temp;
    typename Container::iterator current = c.begin();
    typename Container::iterator next = c.begin();
    while (next != c.end()) {
        if (*next < *current)
            current = next;
        std::advance(next, 2);
    }
    temp.push_back(*current);
    current = c.erase(current);
    temp.push_back(*current);
    c.erase(current);
    
    recursiveSort(c);
    c.insert(c.begin(), temp.begin(), temp.end());
    // std::swap(c.begin(), c.begin()++);
    // recursiveMergeInsertionSort(c, c.begin(), c.end());
}


template void PmergeMe::recursiveMergeInsertionSort<std::list<int>>(std::list<int>&, std::list<int>::iterator, std::list<int>::iterator);
template void PmergeMe::recursiveMergeInsertionSort<std::vector<int>>(std::vector<int>&, std::vector<int>::iterator, std::vector<int>::iterator);
template <typename Container>
void PmergeMe::recursiveMergeInsertionSort(Container &c, typename Container::iterator low, typename Container::iterator high)
{
    size_t size = std::distance(low, high);
    if (size < 2)
        return;

    if (size == 2)
    {
        std::cout << "low: " << *low << " high: " << *std::next(low) << std::endl;
        if (*low > *std::next(low))
            std::swap(*low, *std::next(low));
        return;
    }

    typename Container::iterator mid = low;
    std::advance(mid, size / 2);

    recursiveMergeInsertionSort(c, low, mid);
    recursiveMergeInsertionSort(c, mid, high);

    // std::cout << "low: " << *low << " mid: " << *mid << " high: " << *high << std::endl;

    // Merge the two sorted halves
    Container temp;
    typename Container::iterator left = low;
    typename Container::iterator right = mid;

    while (left != mid && right != high)
    {
        if (*left <= *right)
        {
            temp.push_back(*left);
            ++left;
        }
        else
        {
            temp.push_back(*right);
            ++right;
        }
    }

    // Copy the remaining elements from the left half
    while (left != mid)
    {
        temp.push_back(*left);
        ++left;
    }

    // Copy the remaining elements from the right half
    while (right != high)
    {
        temp.push_back(*right);
        ++right;
    }

    // Copy the sorted elements back to the original container
    typename Container::iterator it = low;
    typename Container::iterator tempIt = temp.begin();
    while (it != high)
    {
        *it = *tempIt;
        ++it;
        ++tempIt;
    }
}
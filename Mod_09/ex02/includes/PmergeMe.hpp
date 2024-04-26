#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <algorithm>

#pragma once

class PmergeMe
{
public:
    std::list<int> l;
    std::vector<int> v;

public:
    PmergeMe();
    ~PmergeMe();
    PmergeMe(PmergeMe &other);
    PmergeMe &operator=(const PmergeMe &other);

    void addToVector(const int &val);
    void addToList(const int &val);

    template <typename Container>
    void mergeInsertionSort(Container &c);
    template <typename Container>
    void recursiveMergeInsertionSort(Container &c, typename Container::iterator low, typename Container::iterator high);
    // private:

};


// Ford-Johgnson algorithm
// Vector vs List
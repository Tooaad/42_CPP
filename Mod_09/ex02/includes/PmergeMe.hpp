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
    void mergeMe();
};


// Ford-Johgnson algorithm
// Vector vs List
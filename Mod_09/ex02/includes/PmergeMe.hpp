#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <set>
#include <algorithm>

#pragma once

class PmergeMe
{
private:
    std::list<int> l;
    std::vector<int> v;
    float vectorTime;
    float listTime;

public:
    PmergeMe();
    ~PmergeMe();
    PmergeMe(PmergeMe &other);
    PmergeMe &operator=(const PmergeMe &other);

    void addToVector(const int &val);
    void addToList(const int &val);
    bool isUnique();
    void printInfo(const std::string &bufNumbers);
    double getCurrentTime();

    void containerSelection(const std::string &container);
    template <typename Container>
    void insertionSortOrder(Container &c);

private:
    template <typename Container>
    void recursiveSort(Container &c);
    template <typename Container>
    Container pendSort(Container &c);
    template <typename Container>
    void insertionOrder(Container &main, Container pend);

};

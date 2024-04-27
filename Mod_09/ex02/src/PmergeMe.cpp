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
template void PmergeMe::recursiveSort<std::list<int>>(std::list<int> &);
template void PmergeMe::recursiveSort<std::vector<int>>(std::vector<int> &);

template <typename Container>
void PmergeMe::recursiveSort(Container &c)
{
    size_t size = c.size();
    if (size < 2)
        return;

    Container temp;
    typename Container::iterator current = c.begin();
    typename Container::iterator next = current;
    while (next != c.end())
    {
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
}

template std::list<int> PmergeMe::pendSort<std::list<int>>(std::list<int> &);
template std::vector<int> PmergeMe::pendSort<std::vector<int>>(std::vector<int> &);

template <typename Container>
Container PmergeMe::pendSort(Container &c)
{
    typename Container::iterator first = c.end();
    first--;
    Container oddContainer;
    size_t size = c.size();
    for (size_t i = 0; i < (size / 2); i++)
    {
        oddContainer.insert(oddContainer.begin(), *first);
        first = c.erase(first);
        std::advance(first, -2);
    }
    std::cout << "Odd Container Values: ";
    for (const auto &val : oddContainer)
    {
        std::cout << val << " ";
    }
    std::cout << std::endl;
    return oddContainer;
}

template void PmergeMe::insertionOrder<std::list<int>>(std::list<int> &, std::list<int>);
template void PmergeMe::insertionOrder<std::vector<int>>(std::vector<int> &, std::vector<int>);
template <typename Container>
void PmergeMe::insertionOrder(Container &main, Container pend)
{
    std::cout << "C values: ";
    for (typename Container::iterator it = main.begin(); it != main.end(); ++it)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    // Step 5: Generate Jacobsthal numbers up to the size of the container
    std::vector<int> jacobsthalNumbers;
    jacobsthalNumbers.push_back(0);
    jacobsthalNumbers.push_back(1);
    int size = main.size() + pend.size();
    for (int i = 2; jacobsthalNumbers.back() < size; i++)
        jacobsthalNumbers.push_back(jacobsthalNumbers[i - 1] + 2 * jacobsthalNumbers[i - 2]);
    // Step 4: Print Jacobsthal numbers
    std::cout << "Jacobsthal Numbers: ";
    for (const auto &num : jacobsthalNumbers)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    // Step 6: Insert the values from the pend container into the main container
    int inserts = pend.size();
    for (int i = 2; i < (int)jacobsthalNumbers.size() - 1; ++i)
    {
        int idx = jacobsthalNumbers[i];
        std::cout << "Jacobsthal Numbers: " << jacobsthalNumbers[i] << "-" << jacobsthalNumbers[i - 1] << std::endl;
        std::cout << "Idx: " << idx << std::endl;
        int seq = (jacobsthalNumbers[i] - jacobsthalNumbers[i - 1]) < 1 ? 1 : jacobsthalNumbers[i] - jacobsthalNumbers[i - 1];
        std::cout << "Ins: " << inserts << std::endl;
        std::cout << "seq: " << seq << std::endl;
        for (int j = idx > (int)pend.size() ? pend.size() : idx; seq > 0 && inserts > 0; j--)
        {
            typename Container::iterator valPos = pend.begin();
            std::advance(valPos, j - 1);
            std::cout << *valPos << std::endl;
            typename Container::iterator insertPos = std::lower_bound(main.begin(), main.end(), *valPos);
            main.insert(insertPos, *valPos);
            inserts--;
            seq--;
            std::cout << "j: " << j << std::endl;
        }
    }
}

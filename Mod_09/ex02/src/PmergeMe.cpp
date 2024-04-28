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

bool PmergeMe::isUnique()
{
    size_t originalSize = l.size();
    std::set<int> s(l.begin(), l.end());
    return originalSize == s.size();
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
}

void PmergeMe::addToList(const int &val)
{
    if (l.size() > 0 && l.size() % 2 == 1)
    {
        std::list<int>::iterator it = l.end();
        --it;
        int prev = *it;
        if (val > prev)
        {
            *it = val;
            l.push_back(prev);
        }
        else
            l.push_back(val);
    }
    else
        this->l.push_back(val);
}

void PmergeMe::printInfo(const std::string &bufNumbers)
{
    std::cout << "\033[1mBefore:\033[0m\t" << bufNumbers << std::endl;

    std::cout << "\033[1mAfter:\033[0m\t";
    for (std::vector<int>::iterator it = v.begin(); it != this->v.end(); it++)
        std::cout << *it << " ";
    std::cout << std::endl
              << std::endl;

    std::cout << "\033[1mVector:\033[0m\t";
    for (size_t i = 0; i < v.size(); i++)
        std::cout << v[i] << " ";
    std::cout << std::endl;
    std::cout << "\033[1mList:\033[0m\t";
    for (std::list<int>::iterator it = l.begin(); it != l.end(); ++it)
        std::cout << *it << " ";
    std::cout << std::endl
              << std::endl;

    std::cout << "Time to process a range of \033[1m" << v.size() << "\033[0m elements with \033[1mstd::vector\033[0m is: " << vectorTime << " us" << std::endl;
    std::cout << "Time to process a range of \033[1m" << l.size() << "\033[0m elements with \033[1mstd::list\033[0m is: " << listTime << " us" << std::endl;
}

double PmergeMe::getCurrentTime()
{
    timespec time;
    clock_gettime(CLOCK_REALTIME, &time);

    return (time.tv_sec * 1000000000.0) + time.tv_nsec;
}

/**
 * Selects a container between list and vector and performs an insertion sort on it.
 * Updates the corresponding time variable based on the container type.
 *
 * @param container The container type to be selected must be ("list" or "vector").
 */
void PmergeMe::containerSelection(const std::string &container)
{
    double startTime = getCurrentTime();
    if (container == "list")
    {
        insertionSortOrder(this->l);
        listTime = (getCurrentTime() - startTime) / 1000.0;
    }
    else if (container == "vector")
    {
        insertionSortOrder(this->v);
        vectorTime = (getCurrentTime() - startTime) / 1000.0;
    }
    else
        return;
}

template void PmergeMe::insertionSortOrder<std::list<int>>(std::list<int> &);
template void PmergeMe::insertionSortOrder<std::vector<int>>(std::vector<int> &);
/**
 * @brief Performs an insertion sort on the given container in ascending order.
 *
 * @tparam Container The type of the container.
 * @param c The container to be sorted.
 */
template <typename Container>
void PmergeMe::insertionSortOrder(Container &c)
{
    int struggler = 0;
    if (c.size() % 2 == 1)
    {
        struggler = c.back();
        c.pop_back();
    }
    recursiveSort(c);
    insertionOrder(c, pendSort(c));
    if (struggler != 0)
    {
        typename Container::iterator insertPos = std::lower_bound(c.begin(), c.end(), struggler);
        c.insert(insertPos, struggler);
    }
}

template void PmergeMe::recursiveSort<std::list<int>>(std::list<int> &);
template void PmergeMe::recursiveSort<std::vector<int>>(std::vector<int> &);
/**
 * Sorts the elements in the given container recursively.
 * This function uses a merge sort algorithm to sort the elements.
 * Order the even elements in ascending order, removing this and the next from the original container.
 * 
 * @tparam Container The type of the container to be sorted.
 * @param c The container to be sorted.
 */
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
/**
 * Sorts the elements in the given pend container in a descending order and returns a new container
 * containing the odd-indexed elements from the original container.
 *
 * @tparam Container The type of the container.
 * @param c The container to be sorted and processed.
 * @return A new container containing the odd-indexed elements from the original container.
 */
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
    return oddContainer;
}

template void PmergeMe::insertionOrder<std::list<int>>(std::list<int> &, std::list<int>);
template void PmergeMe::insertionOrder<std::vector<int>>(std::vector<int> &, std::vector<int>);
/**
 * Creates a jacobsthal sequence and inserts elements from the 'pend' container
 * into the 'main' container following the jacobsthal sequence order.
 *
 * @tparam Container The type of container used for 'main' and 'pend'.
 * @param main The main container where elements will be inserted.
 * @param pend The container containing elements to be inserted.
 */
template <typename Container>
void PmergeMe::insertionOrder(Container &main, Container pend)
{
    std::vector<int> jacobsthalNumbers;
    jacobsthalNumbers.push_back(0);
    jacobsthalNumbers.push_back(1);
    int size = main.size() + pend.size();
    for (int i = 2; jacobsthalNumbers.back() < size; i++)
        jacobsthalNumbers.push_back(jacobsthalNumbers[i - 1] + 2 * jacobsthalNumbers[i - 2]);

    int inserts = pend.size();
    for (int i = 2; i < (int)jacobsthalNumbers.size() - 1; ++i)
    {
        int idx = jacobsthalNumbers[i];
        int seq = (jacobsthalNumbers[i] - jacobsthalNumbers[i - 1]) < 1 ? 1 : jacobsthalNumbers[i] - jacobsthalNumbers[i - 1];
        for (int j = idx > (int)pend.size() ? pend.size() : idx; seq > 0 && inserts > 0; j--)
        {
            typename Container::iterator valPos = pend.begin();
            std::advance(valPos, j - 1);
            typename Container::iterator insertPos = std::lower_bound(main.begin(), main.end(), *valPos);
            main.insert(insertPos, *valPos);
            inserts--;
            seq--;
        }
    }
}

#include "PmergeMe.hpp"

int main(int argc, char **argv)
{
    if (argc < 2)
    {
        std::cerr << "Error." << std::endl;
        return 1;
    }

    PmergeMe p;
    std::string bufNumber;
    for (int i = 1; i < argc; i++)
    {
        int num;
        try {
            num = std::stoi(argv[i]);
            if (num < 1)
                throw std::invalid_argument("Error");

        } catch (std::invalid_argument &e) {
            std::cerr << "Error" << std::endl;
            return 1;
        }
        bufNumber += std::to_string(num) + " ";
        p.addToVector(num);
        p.addToList(num);
    }

    // Maybe overwrite unique so it returns a boolean and throw an error
    // p.l.unique();
    // p.v.erase(std::unique(p.v.begin(), p.v.end()), p.v.end());

    
    std::cout << std::endl;
    std::cout << std::endl;
    // p.recursiveSort(p.l);
    // p.insertionOrder(p.l, p.pendSort(p.l));
    std::cout << std::endl;
    p.insertionSortOrder(p.v);
    std::cout << std::endl;
    
    // for (std::__cxx11::list<int>::iterator it = p.l.begin(); it != p.l.end(); ++it)
    // {
    //     std::cout << *it << " ";
    // }
    
    std::cout << std::endl;
    for (size_t i = 0; i < p.v.size(); i++)
    {
        std::cout << p.v[i] << " ";
    }
    std::cout << std::endl;

    // std::cout << "Before:\t" << bufNumber << std::endl;
    



    return 0;
}
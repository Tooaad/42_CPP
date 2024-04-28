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
            if (num < 0)
                throw std::invalid_argument("Error");

        } catch (std::invalid_argument &e) {
            std::cerr << "Error" << std::endl;
            return 1;
        } catch (std::out_of_range &e) {
            std::cerr << "Error" << std::endl;
            return 1;
        } catch (std::exception &e) {
            std::cerr << "Error" << std::endl;
            return 1;
        }
        bufNumber += std::to_string(num) + " ";
        p.addToVector(num);
        p.addToList(num);
    }

    if (!p.isUnique())
    {
        std::cerr << "Error, list must be unique" << std::endl;
        return 1;
    }
    
    p.containerSelection("list");
    p.containerSelection("vector");
    p.printInfo(bufNumber);

    return 0;
}
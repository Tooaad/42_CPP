#include "RPN.hpp"

int invalidToken(std::string token)
{
    int num = 0;
    try
    {
        num = std::stoi(token);
        if (!(num >= 0 && num <= 9))
            throw std::runtime_error("Error");
    }
    catch (std::exception &e)
    {
        std::cerr << "Error" << std::endl;
        return -1;
    }
    return num;
}

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cerr << "Usage: ./RPN \"expression\"" << std::endl;
        return 1;
    }

    RPN rpn;
    std::string expression = argv[1];
    std::string token;
    std::istringstream iss(expression);

    while (iss >> token)
    {
        if (token == "+" || token == "-" || token == "*" || token == "/")
            rpn.compute(token);
        else
        {
            int t = invalidToken(token);
            if (t == -1)
                return 1;
            rpn.push(t);
        }
    }
    std::cout << "Result: " << rpn.top() << std::endl;
    return 0;
}
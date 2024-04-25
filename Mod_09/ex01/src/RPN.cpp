#include "RPN.hpp"

RPN::RPN()
{
}

RPN::~RPN()
{
}

void RPN::push(const int &value)
{
    _stack.push(value);
}

int RPN::top()
{
    return _stack.top();
}

void RPN::compute(const std::string &token)
{
    const int n1 = _stack.top();
    _stack.pop();
    int n2 = _stack.top();
    _stack.pop();

    switch (token.c_str()[0]) {
        case '+':
            n2 += n1;
            break;
        case '-':
            n2 -= n1;
            break;
        case '*':
            n2 *= n1;
            break;
        case '/':
            n2 /= n1;
            break;
    }
    _stack.push(n2);
}
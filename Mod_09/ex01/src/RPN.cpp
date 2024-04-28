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

RPN::RPN(const RPN &other)
{
    *this = other;
}

RPN &RPN::operator=(const RPN &other)
{
    if (this != &other) {
        _stack = other._stack;
    }
    return *this;
}

void RPN::compute(const std::string &token)
{
    if (_stack.size() < 2) {
        throw std::runtime_error("Error, not enough operands");
        return ;
    }

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
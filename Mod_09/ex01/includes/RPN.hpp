#include <iostream>
#include <string>
#include <stack>
#include <queue>
#include <sstream>

#pragma once

// Stack because last in first out
class RPN 
{
    private:
        std::stack<int> _stack;

    public: 
        RPN();
        ~RPN();

        void push(const int &value);
        int top();
        void compute(const std::string &token);

};
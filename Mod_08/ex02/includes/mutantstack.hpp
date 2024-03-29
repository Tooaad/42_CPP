#ifndef MUTANTSTACK_H
# define MUTANTSTACK_H

#include <iostream>
#include <string>
#include <algorithm>
#include <stack>


template <typename T>
class MutantStack : public std::stack<T> {

public:

	MutantStack(void){};
	MutantStack(const MutantStack& stack_)
	{
		*this = stack_;
	};
	virtual ~MutantStack(){};
	MutantStack&	operator=(MutantStack const & stack_)
	{
		std::stack<T>::operator=(stack_);
		return *this;
	};

	typedef typename std::stack<T>::containertype::iterator iterator;
	typedef typename std::stack<T>::containertype::const_iterator const_iterator;
	typedef typename std::stack<T>::containertype::reverse_iterator reverse_iterator;
	typedef typename std::stack<T>::containertype::const_reverse_iterator const_reverse_iterator;
	
	iterator					begin() { return this->c.begin(); };
	iterator					end() { return this->c.end(); };

	const_iterator				cbegin() { return this->c.cbegin(); };
	const_iterator				cend() { return this->c.cend(); };

	reverse_iterator			rbegin() { return this->c.rbegin(); };
	reverse_iterator			rend() { return this->c.rend(); };

	const_reverse_iterator		crbegin() { return this->c.crbegin(); };
	const_reverse_iterator		crend() { return this->c.crend(); };
};

#endif
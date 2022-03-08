#ifndef SPAN_H
# define SPAN_H

#include <iostream>
#include <string>
#include <random>
#include <algorithm>
#include <vector>

class Span {

private:

		std::vector<int>	vector;
		unsigned int		n;

public:

	Span();
	Span(unsigned int n_);
	Span(Span const & span_);
	~Span();
	Span&	operator=(Span const & span_);

	void	addNumber(unsigned int n);
	int		longestSpan(void);
	int		shortestSpan(void);
	
	template <typename Iterator>
	void addNumber( Iterator begin, Iterator end )
	{
		if (this->n < (this->vector.size() + std::distance(begin, end)))
			throw std::runtime_error("Too much numbers!");
		std::copy(begin, end, std::back_inserter( this->vector));
	};
};


#endif
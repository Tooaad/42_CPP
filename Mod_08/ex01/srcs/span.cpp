#include "../includes/span.hpp"

Span::Span() : vector(0), n(0)
{
}

Span::Span(unsigned int n_) : vector(0), n(n_)
{
}

Span::Span(Span const & span_) : vector(span_.vector), n(span_.n)
{
}

Span::~Span()
{
}

Span&	Span::operator=(Span const & span_)
{
	this->n = span_.n;
	this->vector = span_.vector;
	return *this;
}

void	Span::addNumber(unsigned int n)
{
	if (this->vector.size() >= this->n)
		throw std::runtime_error("Error");
	this->vector.push_back(n);
}

int	Span::longestSpan(void)
{
	if (this->vector.size() < 2)
		throw std::runtime_error("Non or Less than 1 element on the vector");

	int max = *std::max_element(this->vector.begin(), this->vector.end());
	int min = *std::min_element(this->vector.begin(), this->vector.end());

	return max - min;
}

int Span::shortestSpan(void)
{
	if (this->vector.size() < 2)
		throw std::runtime_error("Non or Less than 1 element on the vector");

	std::vector<int> 					sorted = this->vector;
	std::vector<int>::const_iterator	it;
	std::vector<int>::const_iterator	ite = sorted.end() - 1;
	int									shortSpan;

	std::sort(sorted.begin(), sorted.end());
	shortSpan = *(sorted.begin() + 1) - *sorted.begin();
	if (this->vector.size() == 2)
		return shortSpan;
	for (it = sorted.begin() + 1; it != ite; ++it)
	{
		if ((*(it+1) - *it) < shortSpan)
			shortSpan = *(it+1) - *it;
	}
	return shortSpan;

}
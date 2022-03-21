#ifndef ITER_H
# define ITER_H

#include <iostream>

template<typename T>
void	print_val(T const & val)
{
	std::cout << val << std::endl;
}

template<typename T>
void	iter(T *arry, size_t size, void (*func)(T const &))
{
	for (size_t i = 0; i < size; i++)
		func(arry[i]);
}


#endif

#ifndef WHATEVER_H
# define WHATEVER_H

#include <iostream>
#include <string>

template <typename T>
	void swap(T & x, T & y) {
		T const	swap = x;
		x = y;
		y = swap;
		return ;
	}

template <typename T>
	T max(T const& x, T const& y) {
		return (x >= y)? x : y;
	}

template <typename T>
	T min(T const& x, T const& y) {
		return (x <= y)? x : y;
	}


#endif
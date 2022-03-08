/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpernas- <gpernas-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 14:20:02 by gpernas-          #+#    #+#             */
/*   Updated: 2022/03/08 14:20:03 by gpernas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_H
# define EASYFIND_H

#include <iostream>
#include <string>
#include <list>
#include <algorithm>
#include <map>
#include <vector>

struct notFoundException : public std::exception {
   const char * what () const throw () {
      return "Number not found";
   }
};

void print(int n) {		
	std::cout << n << std::endl; 
}


template <typename T>
	typename T::iterator easyfind(T & container , int n) {

		typename T::iterator	it;

		it = std::find(container.begin(), container.end(), n);

		if (*it != n)
			throw notFoundException();

		return it;
		
	}

#endif
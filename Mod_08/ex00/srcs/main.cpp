/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpernas- <gpernas-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 20:10:18 by gpernas-          #+#    #+#             */
/*   Updated: 2022/03/08 14:18:54 by gpernas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/easyfind.hpp"

int main(void)
{
	std::list<int>		list;
	std::vector<int>	vector;


	for (int i = 0; i < 5; i++)
	{
		list.push_back(i);
		vector.push_back(i);
	}
	
	try {
		for_each(list.begin(), list.end(), print);
		std::cout << *::easyfind(list, 3) << std::endl;
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}
	
	try {
		for_each(vector.begin(), vector.end(), print);
		std::cout << *::easyfind(vector, 6) << std::endl;
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}
	

	

	return 0;	
}
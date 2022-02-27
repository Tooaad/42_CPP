/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpernas- <gpernas-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 11:38:48 by gpernas-          #+#    #+#             */
/*   Updated: 2022/02/25 17:21:23 by gpernas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <sstream>

int main(void)
{
	std::string	str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	//STR ADDRESS
	std::cout << &str << std::endl; 

	//PTR
	std::cout << "PTR Address: " << &stringPTR << std::endl;
	std::cout << *stringPTR << std::endl;

	//REF
	std::cout << "REF Address: " << &stringREF << std::endl;
	std::cout << stringREF << std::endl;

	return 0;
}
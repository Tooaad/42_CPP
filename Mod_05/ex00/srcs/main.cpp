/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpernas- <gpernas-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 12:01:08 by gpernas-          #+#    #+#             */
/*   Updated: 2022/03/14 16:50:24 by gpernas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"


int main()
{
	try
	{
		// Bureaucrat *bureaucrat = new Bureaucrat("Hermes", 150);
		Bureaucrat bureaucrat("Hermes", 36);
		std::cout << bureaucrat << std::endl;
		bureaucrat.decrement();
		bureaucrat.increment();
		bureaucrat.increment();
		std::cout << bureaucrat << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	return 0;
}
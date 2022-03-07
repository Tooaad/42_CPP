/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpernas- <gpernas-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 12:01:08 by gpernas-          #+#    #+#             */
/*   Updated: 2022/03/06 13:33:56 by gpernas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"
#include "../includes/Form.hpp"


int main()
{
	try
	{
		// Bureaucrat *bureaucrat = new Bureaucrat("Hermes", 150);
		Bureaucrat	hermes("Hermes", 46);
		Form		review("Ingress", 40);
		hermes.signForm(review);
		review.beSigned(hermes);
		std::cout << hermes << std::endl;
		std::cout << review << std::endl;
		// bureaucrat.decrement();
		// bureaucrat.increment();
		// bureaucrat.increment();
		// std::cout << bureaucrat << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	return 0;
}
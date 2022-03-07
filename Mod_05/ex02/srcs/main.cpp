/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpernas- <gpernas-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 12:01:08 by gpernas-          #+#    #+#             */
/*   Updated: 2022/03/07 12:21:37 by gpernas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"
#include "../includes/Form.hpp"
#include "../includes/ShrubberyCreationForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/PresidentialPardonForm.hpp"

int main()
{
	try
	{
		Bureaucrat hermes("Hermes", 1);
		ShrubberyCreationForm myTree("Planet Exp");
		RobotomyRequestForm robotomy("Bender");
		PresidentialPardonForm pardon("Nixon");

		std::cout << hermes << std::endl;

		std::cout << robotomy << std::endl;
		std::cout << myTree << std::endl;
		std::cout << pardon << std::endl;

		myTree.beSigned(hermes);
		robotomy.beSigned(hermes);
		pardon.beSigned(hermes);

		hermes.signForm(myTree);
		hermes.signForm(robotomy);
		hermes.signForm(pardon);

		myTree.execute(hermes);
		robotomy.execute(hermes);
		pardon.execute(hermes);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	return 0;
}
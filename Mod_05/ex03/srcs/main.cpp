/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpernas- <gpernas-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 12:01:08 by gpernas-          #+#    #+#             */
/*   Updated: 2022/03/07 13:58:03 by gpernas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"
#include "../includes/Form.hpp"
#include "../includes/ShrubberyCreationForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/PresidentialPardonForm.hpp"
#include "../includes/Intern.hpp"

int main()
{
	try
	{
		// Bureaucrat hermes("Hermes", 1);
		// ShrubberyCreationForm myTree("Planet Exp");
		// RobotomyRequestForm robotomy("Bender");
		// PresidentialPardonForm pardon("Nixon");

		// std::cout << hermes << std::endl;

		Intern someRandomIntern;
		Form* rrf;
		rrf = someRandomIntern.makeForm("ShrubberyCreationForm", "Bender");

		std::cout << *rrf << std::endl;
		
		Form *rf = NULL;
		rf = rrf;
		std::cout << "main" << std::endl;
		(*rf).isSigned();
		
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	return 0;
}
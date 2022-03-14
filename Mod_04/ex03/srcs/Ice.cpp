/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpernas- <gpernas-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 18:06:53 by gpernas-          #+#    #+#             */
/*   Updated: 2022/03/13 17:24:35 by gpernas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Ice.hpp"

Ice::Ice() : AMateria("ice")
{
}

Ice::Ice(const Ice &obj) : AMateria("ice")
{
	this->operator=(obj);
}

Ice::~Ice()
{
}

Ice &Ice::operator=(const Ice &obj)
{
	this->type = obj.getType();
	return *this;
}

void Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

AMateria *Ice::clone() const
{
	return (new Ice(*this));
}
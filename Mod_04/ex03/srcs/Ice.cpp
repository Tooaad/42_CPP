/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpernas- <gpernas-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 13:31:49 by gpernas-          #+#    #+#             */
/*   Updated: 2022/03/05 18:38:46 by gpernas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Ice.hpp"

Ice::Ice() : AMateria()
{
	this->type = "ice";
}

Ice::Ice(std::string type_)
{
	this->type = type;
}

Ice::Ice(Ice const & ice_)
{
	*this = ice_;
}

Ice::~Ice()
{
	//Delete del clone? se hace en el main true?
}

Ice& Ice::operator=(Ice const & Ice_)
{
	this->type = Ice_.type;
	return *this;
}

AMateria* Ice::clone(void) const
{
	AMateria* m = new Ice(this->type);
	return m;
}

void	use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << "*" << std::endl;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpernas- <gpernas-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 18:42:01 by gpernas-          #+#    #+#             */
/*   Updated: 2022/03/05 19:35:43 by gpernas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AMateria.hpp"

AMateria::AMateria() : type("")
{
	std::cout << "AMateria created" << std::endl;
}

AMateria::AMateria(std::string type_) : type(type_)
{
	std::cout << "AMateria created with type"<< type_ << std::endl;
}

AMateria::AMateria(AMateria const & amateria_)
{
	*this = amateria_;
	std::cout << "AMateria copied from "<< this->type << std::endl;
}

AMateria::~AMateria()
{
	std::cout << "AMateria destructed" << std::endl;
}

AMateria& AMateria::operator=(AMateria const & amateria_)
{
	this->type = amateria_.type;
	return *this;
}

const std::string&	AMateria::getType(void) const
{
	return this->type;
}

AMateria* AMateria::clone(void) const
{	
}

void AMateria::use(ICharacter& target)
{
	
}
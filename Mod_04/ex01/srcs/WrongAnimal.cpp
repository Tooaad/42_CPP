/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpernas- <gpernas-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 12:27:13 by gpernas-          #+#    #+#             */
/*   Updated: 2022/03/04 13:19:43 by gpernas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("")
{
	std::cout << "WrongAnimal created" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type_) : type(type_)
{
	std::cout << "WrongAnimal created with type"<< type_ << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const & WrongAnimal_)
{
	*this = WrongAnimal_;
	std::cout << "WrongAnimal copied from "<< this->type << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructed" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(WrongAnimal const & WrongAnimal_)
{
	this->type = WrongAnimal_.type;
	return *this;
}

const std::string&	WrongAnimal::getType(void) const
{
	return this->type;
}

void	WrongAnimal::makeSound() const
{
	std::cout << "Unknown Sound" << std::endl;
}
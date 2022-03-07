/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpernas- <gpernas-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 12:27:13 by gpernas-          #+#    #+#             */
/*   Updated: 2022/03/04 12:59:44 by gpernas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"

Animal::Animal() : type("")
{
	std::cout << "Animal created" << std::endl;
}

Animal::Animal(std::string type_) : type(type_)
{
	std::cout << "Animal created with type"<< type_ << std::endl;
}

Animal::Animal(Animal const & animal_)
{
	*this = animal_;
	std::cout << "Animal copied from "<< this->type << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal destructed" << std::endl;
}

Animal& Animal::operator=(Animal const & animal_)
{
	this->type = animal_.type;
	return *this;
}

const std::string&	Animal::getType(void) const
{
	return this->type;
}

void	Animal::makeSound() const
{
	std::cout << "Unknown Sound" << std::endl;
}
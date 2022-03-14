/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpernas- <gpernas-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 12:27:55 by gpernas-          #+#    #+#             */
/*   Updated: 2022/03/14 16:12:48 by gpernas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << "Dog created" << std::endl;
	this->brain = new Brain();
}

Dog::Dog(Dog const & dog_)
{
	*this = dog_;
	std::cout << "Dog copied from "<< this->type << std::endl;
	this->brain = new Brain(*dog_.brain);
}

Dog::~Dog()
{
	delete this->brain;
	std::cout << "Dog destructed" << std::endl;
}

void	Dog::makeSound(void) const
{
	std::cout << "Woof Woof" << std::endl;
}
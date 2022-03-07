/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpernas- <gpernas-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 12:27:55 by gpernas-          #+#    #+#             */
/*   Updated: 2022/03/04 14:27:12 by gpernas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	this->brain = new Brain();
	std::cout << "Dog created" << std::endl;
}

Dog::Dog(Dog const & dog_)
{
	*this = dog_;
	this->brain = new Brain();
	std::cout << "Dog copied from "<< this->type << std::endl;
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
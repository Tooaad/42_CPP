/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpernas- <gpernas-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 12:27:55 by gpernas-          #+#    #+#             */
/*   Updated: 2022/03/04 13:04:52 by gpernas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << "Dog created" << std::endl;
}

Dog::Dog(Dog const & dog_)
{
	*this = dog_;
	std::cout << "Dog copied from "<< this->type << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog destructed" << std::endl;
}

void	Dog::makeSound(void) const
{
	std::cout << "Woof Woof" << std::endl;
}
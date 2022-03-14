/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpernas- <gpernas-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 12:18:08 by gpernas-          #+#    #+#             */
/*   Updated: 2022/03/14 16:12:24 by gpernas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << "Cat created" << std::endl;
	this->brain = new Brain();
}

Cat::Cat(Cat const & cat_)
{
	*this = cat_;
	std::cout << "Cat copied from "<< this->type << std::endl;
	this->brain = new Brain(*cat_.brain);
}

Cat::~Cat()
{
	delete this->brain;
	std::cout << "Cat destructed" << std::endl;
}

void	Cat::makeSound(void) const
{
	std::cout << "Nyan Nyan" << std::endl;
}
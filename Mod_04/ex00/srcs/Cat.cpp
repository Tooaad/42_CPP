/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpernas- <gpernas-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 12:18:08 by gpernas-          #+#    #+#             */
/*   Updated: 2022/03/04 13:05:14 by gpernas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << "Cat created" << std::endl;
}

Cat::Cat(Cat const & cat_)
{
	*this = cat_;
	std::cout << "Cat copied from "<< this->type << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat destructed" << std::endl;
}

void	Cat::makeSound(void) const
{
	std::cout << "Nyan Nyan" << std::endl;
}
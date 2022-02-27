/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpernas- <gpernas-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 17:47:06 by gpernas-          #+#    #+#             */
/*   Updated: 2022/02/25 11:23:23 by gpernas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"


Zombie::~Zombie()
{
	std::cout << this->_name << " died" << std::endl;
}

void Zombie::set_name(std::string name)
{
	this->_name = name;
}

void	Zombie::announce()
{
	std::cout << "<" << this->_name << ">" << " Braiiiinzzz" << std::endl;
}
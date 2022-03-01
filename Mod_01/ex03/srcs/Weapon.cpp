/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpernas- <gpernas-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 17:20:12 by gpernas-          #+#    #+#             */
/*   Updated: 2022/02/28 20:26:29 by gpernas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string weapon_name)
{
	this->type = weapon_name;
}

Weapon::~Weapon()
{
}

std::string const&	Weapon::getType(void)
{
	return this->type;
}

void	Weapon::setType(std::string weapon_name)
{
	this->type = weapon_name;
}
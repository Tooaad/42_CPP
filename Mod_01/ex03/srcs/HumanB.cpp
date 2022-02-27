/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpernas- <gpernas-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 17:20:09 by gpernas-          #+#    #+#             */
/*   Updated: 2022/02/27 12:45:17 by gpernas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name_) : weapon("")
{
	this->name = name_;
}

HumanB::~HumanB(void)
{	
}

void	HumanB::setWeapon(Weapon &weapon_)
{
	this->weapon.setType(weapon_.getType());
}

void HumanB::attack(void)
{
	std::cout << this->name << " attacks with his " << weapon.getType() << std::endl;
}
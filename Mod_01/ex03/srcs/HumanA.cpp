/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpernas- <gpernas-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 17:20:07 by gpernas-          #+#    #+#             */
/*   Updated: 2022/02/27 13:45:02 by gpernas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

// this->weapon.setType(weapon_.getType());
HumanA::HumanA(std::string name_, Weapon &weapon_) : weapon(weapon_)
{
	this->name = name_;
	this->weapon = weapon_;
}

HumanA::~HumanA(void)
{	
}

void HumanA::attack(void)
{
	std::cout << this->name << " attacks with his " << weapon.getType() << std::endl;
}
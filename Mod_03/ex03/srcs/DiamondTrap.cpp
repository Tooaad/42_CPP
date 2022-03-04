/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpernas- <gpernas-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 11:10:55 by gpernas-          #+#    #+#             */
/*   Updated: 2022/03/04 11:42:03 by gpernas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ScavTrap(), FragTrap()
{
	this->hitPoints = FragTrap::hitPoints;
	this->energyPoints = ScavTrap::energyPoints;
	this->attackDamage = FragTrap::attackDamage;
	std::cout << "DiamondTrap " << "created" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name_) : ScavTrap(name_), FragTrap(name_)
{
	this->name = name_;
	this->ClapTrap::name = name_ + "_clap_name";
	this->hitPoints = FragTrap::hitPoints;
	this->energyPoints = ScavTrap::energyPoints;
	this->attackDamage = FragTrap::attackDamage;
	std::cout << "DiamondTrap " << name_ << " created" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << this->name << " Has been destructed" << std::endl;
}

void	DiamondTrap::attack(std::string const & target)
{
	ScavTrap::attack(target);	
}

void	DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap name: " << this->name
	<< " Diamond ClapTrap name: " << this->ClapTrap::name << std::endl;
}
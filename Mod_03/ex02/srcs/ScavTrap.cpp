/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpernas- <gpernas-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 00:18:25 by gpernas-          #+#    #+#             */
/*   Updated: 2022/03/04 00:30:08 by gpernas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
	std::cout << "ScavTrap " << "created" << std::endl;
}

ScavTrap::ScavTrap(std::string name_) : ClapTrap()

{
	this->name = name_;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
	std::cout << "ScavTrap " << name_ << " created" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << this->name << "Has been destructed" << std::endl;
}

void	ScavTrap::attack(std::string const & target)
{
	this->energyPoints -= 20; // Dano ScavTrap

	std::cout << "ScavTrap " << this->name << " attack "
	<< target << ", causing" << 10 << "points of damage"
	<< std::endl;
}

void	ScavTrap::guardGate(void)
{
	std::cout << this->name << "ScavTrap has entered in Gate keeper mode" << std::endl;
}
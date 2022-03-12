/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpernas- <gpernas-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 00:44:17 by gpernas-          #+#    #+#             */
/*   Updated: 2022/03/12 12:23:30 by gpernas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
	std::cout << "FragTrap " << "created" << std::endl;
}

FragTrap::FragTrap(std::string name_) : ClapTrap()
{
	this->name = name_;
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
	std::cout << "FragTrap " << name_ << " created" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << this->name << " Frag Has been destructed" << std::endl;
}

void	FragTrap::attack(std::string const & target)
{
	this->energyPoints -= 20; // Dano ScavTrap

	std::cout << "ScavTrap " << this->name << " attack "
	<< target << ", causing" << 10 << "points of damage"
	<< std::endl;
}

void	FragTrap::highFivesGuys()
{
	std::cout << this->name << "Hey team let's high five" << std::endl;
}
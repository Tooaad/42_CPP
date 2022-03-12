/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpernas- <gpernas-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 18:05:35 by gpernas-          #+#    #+#             */
/*   Updated: 2022/03/12 12:17:09 by gpernas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"

ClapTrap::ClapTrap() : hitPoints(10), energyPoints(10), attackDamage(0)
{
	std::cout << "ClapTrap " << "created" << std::endl;
}

ClapTrap::ClapTrap(std::string name_) : name(name_), hitPoints(10), energyPoints(10), attackDamage(0)
{
	std::cout << "ClapTrap " << name_ << " created" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << this->name << " Clap Has been destructed" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & claptrap_)
{
	*this = claptrap_;
	std::cout << "Copied ClapTrap " << this->name << " from ClapTrap " << claptrap_.name << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap & claptrap_)
{
	this->name = claptrap_.name;
	this->hitPoints = claptrap_.hitPoints;
	this->energyPoints = claptrap_.energyPoints;
	this->attackDamage = claptrap_.attackDamage;
	return *this;

}

void ClapTrap::attack(std::string const & target)
{
	
	this->energyPoints -= 10; // Dano ClapTrap

	std::cout << "ClapTrap " << this->name << " attack "
	<< target << ", causing " << 10 << " points of damage"
	<< std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	this->hitPoints -= amount;

	std::cout << "ClapTrap " << this->name << " take damage "
	<< amount << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	this->hitPoints += amount;

	std::cout << "ClapTrap " << this->name << " has healed "
	<< amount << std::endl;
}
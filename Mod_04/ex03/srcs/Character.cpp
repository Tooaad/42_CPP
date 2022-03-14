/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpernas- <gpernas-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 18:06:53 by gpernas-          #+#    #+#             */
/*   Updated: 2022/03/13 17:37:51 by gpernas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Character.hpp"

Character::Character()
{
	this->amount = 0;
	for (size_t i = 0; i < 4; i++)
		this->materia[i] = 0;
}

Character::Character(std::string name)
{
	this->name = name;
	this->amount = 0;
	for (size_t i = 0; i < 4; i++)
		this->materia[i] = 0;
}

Character::Character(const Character &character_)
{
	this->name = character_.getName();

	for (size_t i = 0; i < character_.amount; i++)
		this->equip(character_.materia[i]);
	this->amount = character_.amount;
}

Character::~Character()
{
	for (size_t i = 0; i < this->amount; i++)
		delete this->materia[i];
}

Character &Character::operator=(Character const &character_)
{
	this->name = character_.getName();

	for (size_t i = 0; i < this->amount; i++)
		delete this->materia[i];
	this->amount = 0;
	for (size_t i = 0; i < character_.amount; i++)
		this->equip(character_.materia[i]);
	this->amount = character_.amount;
	return *this;
}

void Character::equip(AMateria *m)
{
	for (size_t i = 0; i < this->amount; i++)
		if (this->materia[i] == m)
			break;
	this->materia[this->amount++] = m;
}

void Character::unequip(int idx)
{
	for (size_t i = idx; i < this->amount - 1; i++)
	{
		this->materia[i] = this->materia[i + 1];
		this->materia[i + 1] = 0;
	}
	this->amount--;
}

void Character::use(int idx, ICharacter &target)
{
	this->materia[idx]->use(target);
}

std::string const &Character::getName() const
{
	return this->name;
}
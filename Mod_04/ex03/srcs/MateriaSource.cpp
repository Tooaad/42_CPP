/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpernas- <gpernas-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 18:06:53 by gpernas-          #+#    #+#             */
/*   Updated: 2022/03/13 17:23:41 by gpernas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/MateriaSource.hpp"

MateriaSource::MateriaSource() : amount(0)
{
}

MateriaSource::MateriaSource(const MateriaSource &obj) : amount(0)
{
	this->operator=(obj);
}

MateriaSource::~MateriaSource()
{
}

MateriaSource &MateriaSource::operator=(const MateriaSource &obj)
{
	for (size_t i = 0; i < 4; i++)
		this->materia_source[i] = obj.materia_source[i];
	this->amount = obj.amount;
	return *this;
}

void MateriaSource::learnMateria(AMateria *new_materia)
{
	if (this->amount == 4)
		return;
	for (size_t i = 0; i < this->amount; i++)
		if (!this->materia_source[i])
			return;
	this->materia_source[this->amount++] = new_materia;
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
	for (size_t i = 0; i < this->amount; i++)
		if (this->materia_source[i]->getType() == type)
			return this->materia_source[i]->clone();
	return 0;
}
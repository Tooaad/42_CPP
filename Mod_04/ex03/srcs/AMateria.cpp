/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpernas- <gpernas-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 18:06:53 by gpernas-          #+#    #+#             */
/*   Updated: 2022/03/13 17:36:19 by gpernas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AMateria.hpp"

AMateria::AMateria()
{
}

AMateria::AMateria(std::string const &type_)
{
	this->type = type_;
}

AMateria::~AMateria()
{
}

AMateria::AMateria(const AMateria &amateria)
{
	this->operator=(amateria);
}

AMateria &AMateria::operator=(const AMateria &amateria)
{
	this->type = amateria.type;
	return (*this);
}

std::string const &AMateria::getType() const
{
	return this->type;
}

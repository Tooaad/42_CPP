/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpernas- <gpernas-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 18:05:35 by gpernas-          #+#    #+#             */
/*   Updated: 2022/03/02 19:03:42 by gpernas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	this->PointValue = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed &fixed_)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed_;
}

Fixed::~Fixed()
{
	std::cout << "Default destructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed & fixed)
{
	std::cout << "Assignation operator called" << std::endl;
	this->PointValue = fixed.getRawBits();
	return *this;

}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member funcition called" << std::endl;
	return this->PointValue;
}

void	Fixed::setRawBits(int const raw)
{
	this->PointValue = raw;
} 
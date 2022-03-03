/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpernas- <gpernas-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 18:05:35 by gpernas-          #+#    #+#             */
/*   Updated: 2022/03/03 13:14:20 by gpernas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"

Fixed::Fixed()
{
	this->PointValue = 0;
}

Fixed::Fixed(int const value)
{
	this->PointValue = roundf(value * (1 << this->bits));
}

Fixed::Fixed(float const value)
{
	this->PointValue = roundf(value * (1 << this->bits));;
}

Fixed::Fixed(Fixed const &fixed_)
{
	*this = fixed_;
}

Fixed::~Fixed()
{
}

// ----------------------------------------------------------------

Fixed& Fixed::operator=(const Fixed & fixed)
{
	this->PointValue = fixed.getRawBits();
	return *this;
}

bool	Fixed::operator>(const Fixed & fixed) const
{
	return (getRawBits() > fixed.getRawBits());
}

bool	Fixed::operator<(const Fixed & fixed) const
{
	return (getRawBits() < fixed.getRawBits());
}

bool	Fixed::operator>=(const Fixed & fixed) const
{
	return (getRawBits() >= fixed.getRawBits());
}

bool	Fixed::operator<=(const Fixed & fixed) const
{
	return (getRawBits() <= fixed.getRawBits());
}

bool	Fixed::operator==(const Fixed & fixed) const
{
	return (getRawBits() == fixed.getRawBits());
}

bool	Fixed::operator!=(const Fixed & fixed) const
{
	return (getRawBits() != fixed.getRawBits());
}

Fixed	Fixed::operator+(Fixed const & fixed) const
{
	return this->toFloat() + fixed.toFloat(); 
}

Fixed	Fixed::operator-(Fixed const & fixed) const
{
	return this->toFloat() - fixed.toFloat();
}

Fixed	Fixed::operator*(Fixed const & fixed) const
{
	return this->toFloat() * fixed.toFloat();
}

Fixed	Fixed::operator/(Fixed const & fixed) const
{
	return this->toFloat() / fixed.toFloat();	
}

Fixed&	Fixed::operator++()
{
	++this->PointValue;
	return *this;
}

Fixed	Fixed::operator++(int)
{
	Fixed	actual = *this;
	++(*this);
	return actual;
}

Fixed&	Fixed::operator--()
{
	--this->PointValue;
	return *this;
}

Fixed	Fixed::operator--(int)
{
	Fixed	actual = *this;
	--(*this);
	return actual;
}

Fixed& Fixed::min(Fixed & fix1, Fixed & fix2)
{
	if (fix1 < fix2)
		return fix1;
	return fix2;
}

Fixed const & Fixed::min(Fixed const & fix1, Fixed const & fix2)
{
	if (fix1 > fix2)
		return fix1;
	return fix2;
}

Fixed& Fixed::max(Fixed & fix1, Fixed & fix2)
{
	if (fix1 > fix2)
		return fix1;
	return fix2;
}

Fixed const & Fixed::max(Fixed const & fix1, Fixed const & fix2)
{
	if (fix1 > fix2)
		return fix1;
	return fix2;
}


// ----------------------------------------------------------------

int	Fixed::getRawBits(void) const
{
	return this->PointValue;
}

void	Fixed::setRawBits(int const raw)
{
	this->PointValue = raw;
}

float 	Fixed::toFloat(void) const
{
	return ((float)this->PointValue / (float)(1 << this->bits));
}

int	Fixed::toInt(void) const
{
	return (roundf(this->toFloat()));
}

std::ostream&	operator<<(std::ostream &o, Fixed const &fixed)
{
	o << fixed.toFloat();
	return o;	
}
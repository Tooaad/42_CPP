/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpernas- <gpernas-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 18:02:53 by gpernas-          #+#    #+#             */
/*   Updated: 2022/03/03 11:38:09 by gpernas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

#include <iostream>
#include <string>
#include <sstream>
#include <cmath>

class Fixed
{
private:

	int					PointValue;
	static const int	bits = 8;
	
public:

	Fixed(void);
	Fixed(int const value);
	Fixed(float const value);
	Fixed(Fixed const &fixed_);
	~Fixed(void);
	
	Fixed&					operator=(Fixed const & fixed);
	bool					operator>(Fixed const & fixed) const;
	bool					operator<(Fixed const & fixed) const;
	bool					operator>=(Fixed const & fixed) const;
	bool					operator<=(Fixed const & fixed) const;
	bool					operator==(Fixed const & fixed) const;
	bool					operator!=(Fixed const & fixed) const;
	Fixed					operator+(Fixed const & fixed) const;
	Fixed					operator-(Fixed const & fixed) const;
	Fixed					operator*(Fixed const & fixed) const;
	Fixed					operator/(Fixed const & fixed) const;
	Fixed&					operator++();
	Fixed					operator++(int);
	Fixed&					operator--();
	Fixed					operator--(int);
	static Fixed const &	min(Fixed const & fix1, Fixed const & fix2);
	static Fixed&			min(Fixed & fix1, Fixed & fix2);
	static Fixed const &	max(Fixed const & fix1, Fixed const & fix2);
	static Fixed&			max(Fixed & fix1, Fixed & fix2);
	
	
	int						getRawBits(void) const;
	void					setRawBits(int const raw);

	float					toFloat(void) const;
	int						toInt(void) const;
};
std::ostream&		operator<<(std::ostream &o, Fixed const &fixed);

#endif
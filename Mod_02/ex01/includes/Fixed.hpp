/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpernas- <gpernas-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 18:02:53 by gpernas-          #+#    #+#             */
/*   Updated: 2022/03/02 20:38:21 by gpernas-         ###   ########.fr       */
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
	
	Fixed&			operator=(Fixed const & fixed);
	int				getRawBits(void) const;
	void			setRawBits(int const raw);

	float			toFloat(void) const;
	int				toInt(void) const;
};
std::ostream&		operator<<(std::ostream &o, Fixed const &fixed);

#endif
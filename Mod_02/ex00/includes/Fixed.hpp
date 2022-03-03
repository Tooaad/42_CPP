/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpernas- <gpernas-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 18:02:53 by gpernas-          #+#    #+#             */
/*   Updated: 2022/03/02 19:38:01 by gpernas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

#include <iostream>
#include <string>
#include <sstream>

class Fixed
{
private:

	int					PointValue;
	static const int	bits = 8;
	
public:

	Fixed(void);
	Fixed(int const value);
	Fixed(float const value);
	Fixed(Fixed &fixed_);
	~Fixed(void);
	
	Fixed&	operator=(Fixed const & fixed);
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	

};

#endif
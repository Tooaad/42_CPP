/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpernas- <gpernas-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 12:01:21 by gpernas-          #+#    #+#             */
/*   Updated: 2022/03/03 12:41:48 by gpernas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_H
# define POINT_H

#include "../includes/Fixed.hpp"

class Point	
{

private:

	Fixed const x;
	Fixed const y;

public:

	Point();
	Point(float const x_, float const y_);
	Point(Point const & point_);
	~Point();

	Point&			operator=(Point & point);
	float			getX(void) const;
	float			getY(void) const;	
};

bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif
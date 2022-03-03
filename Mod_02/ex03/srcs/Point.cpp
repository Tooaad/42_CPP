/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpernas- <gpernas-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 12:19:43 by gpernas-          #+#    #+#             */
/*   Updated: 2022/03/03 13:16:59 by gpernas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Point.hpp"

Point::Point() : x(0), y(0)
{
}

Point::Point(float const x_, float const y_) : x(x_), y(y_)
{
}

Point::Point(Point const &point_) : x(point_.x), y(point_.y)
{
}

Point::~Point()
{
}

float	area(Point const a, Point const b, Point const c)
{
	float res =  (a.getX() * (b.getY() - c.getY()) + b.getX() * (c.getY() - a.getY()) + c.getX() * (a.getY() - b.getY())) / 2.0;

	if (res < 0)
		res *= -1;
	return res;
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	float triangleBase = area(a, b, c);

	float area1 = area(point, b, c);
	float area2 = area(a, point, c);
	float area3 = area(a, b, point);
	
	return (triangleBase == area1 + area2 + area3) && area1 != 0 && area2 != 0 && area3 != 0;
}

Point& Point::operator=(Point & point)
{
	return point;
}

float	Point::getX(void) const
{
	return this->x.toFloat();
}

float	Point::getY(void) const
{
	return this->y.toFloat();
}
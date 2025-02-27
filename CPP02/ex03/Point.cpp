/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtani <mtani@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 17:44:25 by mtani             #+#    #+#             */
/*   Updated: 2024/07/17 17:41:37 by mtani            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : _x(0), _y(0)
{
}

Point::Point(float const x, float const y) : _x(x), _y(y)
{
}

Point::Point(const Point &copy)
{
	*this = copy;
}

Point &Point::operator=(const Point &src)
{
	if (this != &src) {
        const_cast<Fixed&>(this->_x) = src._x;
        const_cast<Fixed&>(this->_y) = src._y;
    }
    return *this;
}

Point::~Point()
{
}

Fixed Point::getX() const
{
	return _x;
}

Fixed Point::getY() const
{
	return _y;
}
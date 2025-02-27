/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtani <mtani@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 17:44:27 by mtani             #+#    #+#             */
/*   Updated: 2024/07/12 18:09:01 by mtani            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class Point
{
	public:
		Point();
		Point(const float x, const float y);
		Point(const Point &copy);
		Point &operator=(const Point &src);
		~Point();
		Fixed getX() const;
		Fixed getY() const;
	private:
		Fixed const _x;
		Fixed const _y;
};

#endif
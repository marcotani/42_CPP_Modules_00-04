/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtani <mtani@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 17:44:22 by mtani             #+#    #+#             */
/*   Updated: 2024/07/17 17:16:13 by mtani            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	Fixed dX = point.getX() - c.getX();
    Fixed dY = point.getY() - c.getY();
    Fixed dX21 = c.getX() - b.getX();
    Fixed dY12 = b.getY() - c.getY();
    Fixed D = dY12 * (a.getX() - c.getX()) + dX21 * (a.getY() - c.getY());
    Fixed s = dY12 * dX + dX21 * dY;
    Fixed t = (c.getY() - a.getY()) * dX + (a.getX() - c.getX()) * dY;

    if (D < Fixed(0)) {
        s = s * -1;
        t = t * -1;
        D =D * -1;
    }

    return s >= Fixed(0) && t >= Fixed(0) && (s + t) <= D;
}

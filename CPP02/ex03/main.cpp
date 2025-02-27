/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtani <mtani@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 14:51:21 by mtani             #+#    #+#             */
/*   Updated: 2024/07/17 17:40:58 by mtani            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point);

std::ostream& operator<<(std::ostream& os, const Fixed& fp)
{
	os << fp.toFloat();
	return os;
}

bool validTriangle(float aX, float aY, float bX, float bY, float cX, float cY) {
    float AB_squared = pow(bX - aX, 2) + pow(bY - aY, 2);
    float AC_squared = pow(cX - aX, 2) + pow(cY - aY, 2);
    float BC_squared = pow(cX - bX, 2) + pow(cY - bY, 2);

    if (AB_squared + AC_squared > BC_squared &&
        AB_squared + BC_squared > AC_squared &&
        AC_squared + BC_squared > AB_squared) {
        return true;
    } else {
        return false;
    }
}

int main() {
	float aX;
	float aY;
	float bX;
	float bY;
	float cX;
	float cY;
	float pX;
	float pY;
	std::cout << "Enter the coordinates of the first point of the triangle" << std::endl;
	std::cout << "X: ";
	std::cin >> aX;
	std::cout << "Y: ";
	std::cin >> aY;
	std::cout << "Enter the coordinates of the second point of the triangle" << std::endl;
	std::cout << "X: ";
	std::cin >> bX;
	std::cout << "Y: ";
	std::cin >> bY;
	std::cout << "Enter the coordinates of the third point of the triangle" << std::endl;
	std::cout << "X: ";
	std::cin >> cX;
	std::cout << "Y: ";
	std::cin >> cY;
	if (!validTriangle(aX, aY, bX, bY, cX, cY)) 
	{
		std::cout << "Invalid triangle" << std::endl;
		return 1;
	}
	std::cout << "Enter the coordinates of the point to check" << std::endl;
	std::cout << "X: ";
	std::cin >> pX;
	std::cout << "Y: ";
	std::cin >> pY;
	Point A(aX, aY);
	Point B(bX, bY);
	Point C(cX, cY);
	Point P(pX, pY);
    // Point A(0.0f, 0.0f);
    // Point B(5.0f, 0.0f);
    // Point C(2.5f, 5.0f);
	// Dentro al triangolo
    // Point P(2.5f, 2.0f);
	// Fuori dal triangolo
	// Point P(2.5f, 6.0f);
	// Sulla linea AB
	// Point P(2.5f, 0.0f);
	// Sulla linea BC
	// Point P(5.0f, 0.0f);

    if (bsp(A, B, C, P)) {
        std::cout << "The Point at coordinates x: " << P.getX() << " y: " << P.getY() << " is inside the triangle" << std::endl;
    } else {
        std::cout << "The Point at coordinates x: " << P.getX() << " y: " << P.getY() << " is outside the triangle" << std::endl;
    }

    return 0;
}

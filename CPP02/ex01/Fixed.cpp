/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtani <mtani@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 14:51:43 by mtani             #+#    #+#             */
/*   Updated: 2024/07/12 16:59:10 by mtani            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _value(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int value)
{
	this->_value = value * (1 << _fractional_bits);
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float value)
{
	this->_value = roundf(value * (1 << _fractional_bits));
	std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copy)
{
	*this = copy;
	std::cout << "Copy constructor called" << std::endl;
}
Fixed &Fixed::operator=(const Fixed &src)
{
	this->setRawBits(src.getRawBits());
	std::cout << "Assignation operator called" << std::endl;
	return *this;
}

int Fixed::getRawBits(void) const
{
	return this->_value;
}

void Fixed::setRawBits(int const raw)
{
	this->_value = raw;
}

float Fixed::toFloat( void ) const
{
	return (float)this->_value / (1 << this->_fractional_bits);
}

int Fixed::toInt( void ) const
{
	return this->_value >> this->_fractional_bits;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtani <mtani@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 14:51:43 by mtani             #+#    #+#             */
/*   Updated: 2024/07/17 17:17:31 by mtani            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _value(0) {
	// std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int value)
{
	this->_value = value * (1 << _fractional_bits);
	// std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float value)
{
	this->_value = roundf(value * (1 << _fractional_bits));
	// std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed() {
	// std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copy)
{
	*this = copy;
	// std::cout << "Copy constructor called" << std::endl;
}
Fixed &Fixed::operator=(const Fixed &src)
{
	this->setRawBits(src.getRawBits());
	// std::cout << "Assignation operator called" << std::endl;
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

Fixed Fixed::operator+(const Fixed &nbr)
{
	return Fixed(this->toFloat() + nbr.toFloat());
}

Fixed Fixed::operator-(const Fixed&nbr)
{
	return Fixed(this->toFloat() - nbr.toFloat());
}

Fixed Fixed::operator*(const Fixed&nbr)
{
	return Fixed(this->toFloat() * nbr.toFloat());
}

Fixed Fixed::operator/(const Fixed&nbr)
{
	return Fixed(this->toFloat() / nbr.toFloat());
}

bool Fixed::operator>(const Fixed &nbr)
{
	return this->toFloat() > nbr.toFloat();
}

bool Fixed::operator<(const Fixed &nbr)
{
	return this->toFloat() < nbr.toFloat();
}

bool Fixed::operator>=(const Fixed &nbr)
{
	return this->toFloat() >= nbr.toFloat();
}

bool Fixed::operator<=(const Fixed &nbr)
{
	return this->toFloat() <= nbr.toFloat();
}

bool Fixed::operator==(const Fixed &nbr)
{
	return this->toFloat() == nbr.toFloat();
}

bool Fixed::operator!=(const Fixed &nbr)
{
	return this->toFloat() != nbr.toFloat();
}

Fixed Fixed::operator++()
{
	this->_value += 1;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed tmp(this->_value * toFloat());
	operator++();
	return tmp;
}

Fixed Fixed::operator--()
{
	this->_value -= 1;
	return *this;
}

Fixed Fixed::operator--(int)
{
	Fixed tmp(this->_value * toFloat());
	operator--();
	return tmp;
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	if (a.getRawBits() < b.getRawBits())
		return a;
	return b;
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a.getRawBits() < b.getRawBits())
		return a;
	return b;
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	if (a.getRawBits() > b.getRawBits())
		return a;
	return b;
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a.getRawBits() > b.getRawBits())
		return a;
	return b;
}

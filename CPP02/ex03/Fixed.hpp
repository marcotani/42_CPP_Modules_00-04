/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtani <mtani@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 14:51:30 by mtani             #+#    #+#             */
/*   Updated: 2024/07/12 18:16:51 by mtani            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	public:
		Fixed();
		Fixed(const int value);
		Fixed(const float value);
		~Fixed();
		Fixed(const Fixed &copy);
		Fixed &operator=(const Fixed &src);
		int getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat( void ) const;
		int toInt( void ) const;
		Fixed operator+(const Fixed &nbr);
		Fixed operator-(const Fixed &nbr);
		Fixed operator*(const Fixed &nbr);
		Fixed operator/(const Fixed &nbr);
		bool operator>(const Fixed &nbr);
		bool operator<(const Fixed &nbr);
		bool operator>=(const Fixed &nbr);
		bool operator<=(const Fixed &nbr);
		bool operator==(const Fixed &nbr);
		bool operator!=(const Fixed &nbr);
		Fixed operator++();
		Fixed operator++(int);
		Fixed operator--();
		Fixed operator--(int);
		static Fixed &min(Fixed &a, Fixed &b);
		static const Fixed &min(const Fixed &a, const Fixed &b);
		static Fixed &max(Fixed &a, Fixed &b);
		static const Fixed &max(const Fixed &a, const Fixed &b);
	private:
		int _value;
		static const int _fractional_bits = 8;
};

std::ostream& operator<<(std::ostream& os, const Fixed& fp);

#endif
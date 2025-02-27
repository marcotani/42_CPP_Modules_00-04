/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtani <mtani@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 14:51:30 by mtani             #+#    #+#             */
/*   Updated: 2024/07/10 15:35:23 by mtani            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
	public:
		Fixed();
		~Fixed();
		Fixed(const Fixed &copy);
		Fixed &operator=(const Fixed &copy);
		int getRawBits(void) const;
		void setRawBits(int const raw);
	private:
		int _value;
		static const int _fractional_bits = 8;
};

#endif
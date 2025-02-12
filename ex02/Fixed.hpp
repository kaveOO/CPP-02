/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albillie <albillie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 03:37:23 by albillie          #+#    #+#             */
/*   Updated: 2025/02/12 04:10:03 by albillie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int FixedPoint;
		static const int RawBits = 8;
	public:
		Fixed();
		Fixed(const int intValue);
		Fixed(const float floatValue);
		Fixed(const Fixed &fixed);
		int	getRawBits() const;
		void setRawBits(int const raw);
		float toFloat(void) const;
		int toInt(void) const;
		Fixed &operator=(const Fixed &fixed);
		bool operator>(const Fixed &Fixed);
		bool operator<(const Fixed &Fixed);
		bool operator>=(const Fixed &Fixed);
		bool operator<=(const Fixed &Fixed);
		bool operator==(const Fixed &Fixed);
		bool operator!=(const Fixed &Fixed);
		Fixed operator+(const Fixed &Fixed);
		Fixed operator-(const Fixed &Fixed);
		Fixed operator*(const Fixed &Fixed);
		Fixed operator/(const Fixed &Fixed);
		~Fixed();
};

std::ostream &operator<<(std::ostream &out, Fixed const &fixed);

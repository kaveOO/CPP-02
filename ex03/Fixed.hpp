/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albillie <albillie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 17:51:03 by albillie          #+#    #+#             */
/*   Updated: 2025/02/12 22:26:40 by albillie         ###   ########.fr       */
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
		bool operator>(const Fixed &Fixed) const;
		bool operator<(const Fixed &Fixed) const;
		bool operator>=(const Fixed &Fixed) const;
		bool operator<=(const Fixed &Fixed) const;
		bool operator==(const Fixed &Fixed) const;
		bool operator!=(const Fixed &Fixed) const;
		Fixed operator+(const Fixed &Fixed) const;
		Fixed operator-(const Fixed &Fixed) const;
		Fixed operator*(const Fixed &Fixed) const;
		Fixed operator/(const Fixed &Fixed) const;
		Fixed &operator++();
		Fixed operator++(int);
		Fixed &operator--();
		Fixed operator--(int);
		Fixed static &min(Fixed &a, Fixed &b);
		const Fixed static &min(const Fixed &a, const Fixed &b);
		Fixed static &max(Fixed &a, Fixed &b);
		const Fixed static &max(const Fixed &a, const Fixed &b);
		~Fixed();
};

std::ostream &operator<<(std::ostream &out, Fixed const &fixed);

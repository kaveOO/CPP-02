/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albillie <albillie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 11:03:08 by albillie          #+#    #+#             */
/*   Updated: 2025/02/11 02:46:04 by albillie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Fixed
{
	public:
		Fixed();
		Fixed(Fixed&);
		Fixed& operator=(Fixed&);
		int	getRawBits() const;
		void setRawBits(int const raw);
		~Fixed();
	private:
		int FixedPoint;
		static const int RawBits = 8;
};

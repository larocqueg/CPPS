/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-la-r <gde-la-r@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 15:41:25 by gde-la-r          #+#    #+#             */
/*   Updated: 2025/07/23 15:41:28 by gde-la-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <string>
#include <iostream>
#include <cmath>

class Fixed {
  private:
    int               _fixedPointValue;
    static const int  bits = 8;
  public:
    Fixed();
    Fixed(const Fixed& original);
    Fixed(const int num);
    Fixed(const float num);
    ~Fixed();
    Fixed& operator = (const Fixed& original);
    int   getRawBits(void) const;
    void  setRawBits(int const raw);
    int   toInt(void)const;
    float toFloat(void)const;
};

std::ostream& operator<<(std::ostream& out, const Fixed& f);

#endif

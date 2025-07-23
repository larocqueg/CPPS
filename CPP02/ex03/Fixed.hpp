/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-la-r <gde-la-r@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 18:03:38 by gde-la-r          #+#    #+#             */
/*   Updated: 2025/07/23 18:03:39 by gde-la-r         ###   ########.fr       */
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

    bool  operator > (const Fixed& original) const;
    bool  operator < (const Fixed& original) const;
    bool  operator >= (const Fixed& original) const;
    bool  operator <= (const Fixed& original) const;
    bool  operator == (const Fixed& original) const;
    bool  operator != (const Fixed& original) const;
    Fixed  operator + (const Fixed& original) const; 
    Fixed  operator - (const Fixed& original) const; 
    Fixed  operator * (const Fixed& original) const; 
    Fixed  operator / (const Fixed& original) const;
    Fixed& operator++(void);
    Fixed operator++(int);
    Fixed& operator--(void);
    Fixed operator--(int);

  
    Fixed& operator = (const Fixed& original);
    int   getRawBits(void) const;
    void  setRawBits(int const raw);
    int   toInt(void)const;
    float toFloat(void)const;
    static Fixed& min(Fixed& p1, Fixed& p2);
	  static Fixed& max(Fixed&p1, Fixed& p2);
	  static const Fixed& min(const Fixed& p1, const Fixed& p2);
	  static const Fixed& max(const Fixed& p1, const Fixed& p2);
};

std::ostream& operator<<(std::ostream& out, const Fixed& f);

#endif

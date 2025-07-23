/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-la-r <gde-la-r@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 18:03:34 by gde-la-r          #+#    #+#             */
/*   Updated: 2025/07/23 18:03:35 by gde-la-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "Fixed.hpp"

Fixed::Fixed()
{
  this->_fixedPointValue = 0;
}

Fixed::Fixed(const Fixed &original)
{
  *this = original;
}

Fixed&  Fixed::operator= (const Fixed& original)
{
  if (this != &original)
  {
    this->_fixedPointValue = original.getRawBits();
  }
  return (*this);
}

Fixed::Fixed(const int num)
{
  this->_fixedPointValue = num << this->bits;
}

Fixed::Fixed(const float num)
{
  this->_fixedPointValue = roundf(num * (1 << this->bits));
}

Fixed::~Fixed()
{
}

bool  Fixed::operator > (const Fixed& original) const
{
  return (this->_fixedPointValue > original.getRawBits());
}

bool  Fixed::operator < (const Fixed& original) const
{
  return (this->_fixedPointValue < original.getRawBits());
}

bool  Fixed::operator >= (const Fixed& original) const
{
  return (this->_fixedPointValue >= original.getRawBits());
}

bool  Fixed::operator <= (const Fixed& original) const
{
  return (this->_fixedPointValue <= original.getRawBits());
}

bool  Fixed::operator == (const Fixed& original) const
{
  return (this->_fixedPointValue == original.getRawBits());
}

bool  Fixed::operator != (const Fixed& original) const
{
  return (this->_fixedPointValue != original.getRawBits());
}

Fixed Fixed::operator + (const Fixed& original) const
{
  Fixed NewPoint;
  
  NewPoint.setRawBits(this->getRawBits() + original.getRawBits());
  return (NewPoint);
}

Fixed Fixed::operator - (const Fixed& original) const
{
  Fixed NewPoint;
  
  NewPoint.setRawBits(this->getRawBits() - original.getRawBits());
  return (NewPoint);
}

Fixed Fixed::operator * (const Fixed& original) const
{
  Fixed NewPoint;
  long long result;
  
  result = (long long)this->_fixedPointValue * (long long)original.getRawBits();
  result = result >> this->bits;
  NewPoint.setRawBits((int)result);
  return (NewPoint);
}

Fixed& Fixed::operator ++ (void)
{
	this->_fixedPointValue++;
	return (*this);
}
Fixed Fixed::operator ++ (int)
{
	Fixed newfixed;

	newfixed.setRawBits(this->getRawBits());

	this->_fixedPointValue++;
	return (newfixed);
}

Fixed& Fixed::operator -- (void)
{
	this->_fixedPointValue--;
	return (*this);
}
Fixed Fixed::operator -- (int)
{
	Fixed newfixed;

	newfixed.setRawBits(this->getRawBits());

	this->_fixedPointValue--;
	return (newfixed);
}

Fixed& Fixed::min(Fixed& p1, Fixed& p2)
{
  if (p1 > p2) {
    return (p2);
  }
  return (p1);
}

Fixed& Fixed::max(Fixed& p1, Fixed& p2)
{
  if (p1 > p2) {
    return (p1);
  }
  return (p2);
}

const Fixed& Fixed::min(const Fixed& p1, const Fixed& p2)
{
  if (p1 > p2) {
    return (p2);
  }
  return (p1);
}

const Fixed& Fixed::max(const Fixed& p1, const Fixed& p2)
{
  if (p1 > p2) {
    return (p1);
  }
  return (p2);
}
Fixed Fixed::operator / (const Fixed& original) const
{
  Fixed NewPoint;
  long long dividend;
  
  dividend = ((long long)this->_fixedPointValue << this->bits);
  NewPoint.setRawBits((int)(dividend / original.getRawBits()));
  return (NewPoint);
}

int Fixed::getRawBits(void) const
{
  return (this->_fixedPointValue);
}

void  Fixed::setRawBits(int const raw)
{
  this->_fixedPointValue = raw;
}

int Fixed::toInt(void) const
{
  return (this->_fixedPointValue >> this->bits);
}

float Fixed::toFloat(void) const
{
  return ((float)this->_fixedPointValue / (1 << this->bits));
}

std::ostream& operator<<(std::ostream& out, const Fixed& f)
{
  out << f.toFloat();
  return (out);
}

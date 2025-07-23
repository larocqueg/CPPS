/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-la-r <gde-la-r@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 15:41:18 by gde-la-r          #+#    #+#             */
/*   Updated: 2025/07/23 15:41:19 by gde-la-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "Fixed.hpp"

Fixed::Fixed()
{
  std::cout << "Default constructor called" << std::endl;
  this->_fixedPointValue = 0;
}

Fixed::Fixed(const Fixed &original)
{
  std::cout << "Copy constructor called" << std::endl;
  *this = original;
}

Fixed&  Fixed::operator= (const Fixed& original)
{
  std::cout << "Copy assignment operator called" << std::endl;
  if (this != &original)
  {
    this->_fixedPointValue = original.getRawBits();
  }
  return (*this);
}

Fixed::Fixed(const int num)
{
  std::cout << "Int constructor called" << std::endl;
  this->_fixedPointValue = num << this->bits;
}

Fixed::Fixed(const float num)
{
  std::cout << "Float constructor called" << std::endl;
  this->_fixedPointValue = roundf(num * (1 << this->bits));
}

Fixed::~Fixed()
{
  std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
  std::cout << "getRawBits member function called" << std::endl;
  return (this->_fixedPointValue);
}

void  Fixed::setRawBits(int const raw)
{
  std::cout << "setRawBits member function called" << std::endl;
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

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-la-r <gde-la-r@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 22:40:00 by gde-la-r          #+#    #+#             */
/*   Updated: 2025/07/21 22:40:01 by gde-la-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "Fixed.hpp"

Fixed::Fixed()
{
  std::cout << "Default constructor called." << std::endl;
  this->val = 0;
}

Fixed::Fixed(const Fixed &other)
{
  std::cout << "Copy constructor called." << std::endl;
  *this = other;
}

Fixed&  Fixed::operator= (const Fixed& other)
{
  std::cout << "Copy assignment operator called" << std::endl;
  if (this != &other)
  {
    this->val = other.getRawBits();
  }
  return (*this);
}

Fixed::~Fixed()
{
  std::cout << "Destructor called." << std::endl;
}

int Fixed::getRawBits(void) const
{
  std::cout << "getRawBits member function called" << std::endl;
  return (this->val);
}

void  Fixed::setRawBits(int const raw)
{
  std::cout << "setRawBits member function called" << std::endl;
  this->val = raw;
}

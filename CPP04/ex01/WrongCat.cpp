/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-la-r <gde-la-r@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/13 14:13:28 by gde-la-r          #+#    #+#             */
/*   Updated: 2025/09/13 14:16:33 by gde-la-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
  std::cout << GREEN << "WrongCat default constructor called!"
  << RESET << std::endl;

  this->_type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat& original)
{
  *this = original;
}

WrongCat& WrongCat::operator = (const WrongCat& original)
{
  if (this != &original)
    this->_type = original._type;
  return (*this);
}

WrongCat::~WrongCat()
{
  std::cout << RED << "WrongCat default destructor called!"
  << RESET << std::endl;
}

std::string WrongCat::getType() const
{
  return (this->_type);
}

void  WrongCat::makeSound()
{
  std::cout << CYAN << "The program registered a sound similar"
  << "to a cat but it does not seem to be any type of cat!"
  << RESET << std::endl;
}

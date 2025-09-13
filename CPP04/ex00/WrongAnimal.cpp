/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-la-r <gde-la-r@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/13 14:05:59 by gde-la-r          #+#    #+#             */
/*   Updated: 2025/09/13 14:10:19 by gde-la-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal:: WrongAnimal()
{
  std::cout << GREEN <<"WrongAnimal default constructor called!"
  << RESET << std::endl;

  this->_type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(const WrongAnimal& original)
{
  this->_type = original._type;
}

WrongAnimal& WrongAnimal::operator = (const WrongAnimal& original)
{
  if (this != &original)
  {
    this->_type = original._type;
  }
  return (*this);
}

WrongAnimal::~WrongAnimal()
{
  std::cout << RED << "WrongAnimal default destructor called!"
  << RESET << std::endl;
}

std::string WrongAnimal::getType() const
{
  return (this->_type);
}

void WrongAnimal::makeSound()
{
  std::cout << CYAN << "A strange sound was detected by the program! It doesn't even"
  << " seem to be an animal!" << RESET << std::endl;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-la-r <gde-la-r@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 18:52:09 by gde-la-r          #+#    #+#             */
/*   Updated: 2025/09/11 18:52:14 by gde-la-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
  std::cout << YELLOW << "Dog default constructor called!"
  << RESET << std::endl;
  this->_type = "Dog";
}

Dog::Dog(const Dog& original)
{
  std::cout << YELLOW "Dog copy constructor called!"
  << RESET << std::endl;
  *this = original;
}

Dog& Dog::operator = (const Dog& original)
{
  std::cout << YELLOW "Dog copy assignment operator called!"
  << RESET << std::endl;

  if (this != & original)
    this->_type = original._type;
  return (*this);
}

Dog::~Dog()
{
  std::cout << RED << "Dog default destructor called!"
  << RESET << std::endl;
}

void Dog::makeSound() const
{
  std::cout << CYAN << "Program registered a Dog sound!"
  << RESET << std::endl;
}

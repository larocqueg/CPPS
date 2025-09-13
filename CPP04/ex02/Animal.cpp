/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-la-r <gde-la-r@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 16:22:05 by gde-la-r          #+#    #+#             */
/*   Updated: 2025/09/10 16:22:30 by gde-la-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : _type("Default")
{
  std::cout << GREEN << "Animal default constructor called!"
  << RESET << std::endl;
}

Animal::Animal(const Animal& original)
{
  std::cout << GREEN << "Animal copy contructor called!"
  << RESET << std::endl;
  *this = original;
}

Animal& Animal::operator=(const Animal& original)
{
  std::cout << GREEN << "Animal copy assingment operator called!"
  << RESET << std::endl;

  if (this != &original)
    this->_type = original._type;
  return (*this);
}

Animal::~Animal()
{
  std::cout << RED << "Animal default destructor called!"
  << RESET << std::endl;
}

std::string Animal::getType() const
{
  return (this->_type);
}

void  Animal::makeSound() const
{
  std::cout << CYAN <<"Program registered an unrecognized animal sound!"
  << RESET << std::endl;
}

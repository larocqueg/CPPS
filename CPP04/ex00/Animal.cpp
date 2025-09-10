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
  std::cout << "Animal " << this->_type << " was created!"
  << std::endl;
}

Animal::Animal(const std::string& type) : _type(type)
{
  std::cout << "Animal " << this->_type << " was created!"
  << std::endl;
}

Animal::Animal(const Animal& original)
{
  *this = original;
}

Animal& Animal::operator=(const Animal& original)
{
  if (this != &original)
    this->_type = original._type;
  return (*this);
}

Animal::~Animal()
{
  std::cout << "Animal " << this->_type << " was destroyed!"
  << std::endl;
}

void  Animal::makeSound()
{
}

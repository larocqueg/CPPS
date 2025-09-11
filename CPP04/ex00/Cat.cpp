/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-la-r <gde-la-r@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 18:47:33 by gde-la-r          #+#    #+#             */
/*   Updated: 2025/09/11 18:51:32 by gde-la-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
  std::cout << YELLOW << "Cat default constructor called!"
  << RESET << std::endl;
  this->_type = "cat";
}

Cat::Cat(const Cat& original)
{
  std::cout << YELLOW "Cat copy constructor called!"
  << RESET << std::endl;
  *this = original;
}

Cat& Cat::operator = (const Cat& original)
{
  std::cout << YELLOW "Cat copy assignment operator called!"
  << RESET << std::endl;

  if (this != & original)
    this->_type = original._type;
  return (*this);
}

Cat::~Cat()
{
  std::cout << RED << "Cat default destructor called!"
  << RESET << std::endl;
}

void Cat::makeSound() const
{
  std::cout << CYAN << "Program registered a Cat sound!"
  << RESET << std::endl;
}

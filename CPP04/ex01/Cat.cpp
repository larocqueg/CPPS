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
  this->_brain = new Brain();
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
  {
    this->_type = original._type;
    delete this->_brain;
    this->_brain = new Brain(*original._brain);
  }
  return (*this);
}

Cat::~Cat()
{
  std::cout << RED << "Cat default destructor called!"
  << RESET << std::endl;

  delete this->_brain;
}

void Cat::makeSound() const
{
  std::cout << CYAN << "Program registered a Cat sound!"
  << RESET << std::endl;
}

std::string Cat::getIdea(unsigned int pos) const
{
  if (pos < 100)
    return (this->_brain->getIdea(pos));
  else
    std::cout << RED << "Invalid idea index, try a number between >= 0 or < 100!"
    << RESET << std::endl;
  return (this->_brain->getIdea(99));
}

void  Cat::setIdea(const std::string& idea, unsigned int pos)
{
  if (pos < 100)
    return (this->_brain->setIdea(idea, pos));
  else
    std::cout << RED "Invalid idea!" << RESET << std::endl;
}

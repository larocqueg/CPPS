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
  this->_brain = new Brain();
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

  if (this != &original)
  {
    this->_type = original._type;
    delete this->_brain;
    this->_brain = new Brain(*original._brain);
  }
  return (*this);
}

Dog::~Dog()
{
  std::cout << RED << "Dog default destructor called!"
  << RESET << std::endl;

  delete this->_brain;
}

void Dog::makeSound() const
{
  std::cout << CYAN << "Program registered a Dog sound!"
  << RESET << std::endl;
}

std::string Dog::getIdea(unsigned int pos) const
{
  if (pos < 100)
    return (this->_brain->getIdea(pos));
  else
    std::cout << RED << "Invalid idea index, try a number >= 0 or < 100!"
    << RESET << std::endl;
  return (this->_brain->getIdea(99));
}

void  Dog::setIdea(const std::string& idea, unsigned int pos)
{
  if (pos < 100)
    this->_brain->setIdea(idea, pos);
  else
    std::cout << RED << "Invalid idea!" << RESET << std::endl;
}

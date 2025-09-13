/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-la-r <gde-la-r@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/13 15:15:06 by gde-la-r          #+#    #+#             */
/*   Updated: 2025/09/13 15:17:17 by gde-la-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
  std::cout << GREEN << "Brain default constructor called!"
  << RESET << std::endl;

  for (int i = 0; i < 100; i++)
    this->_ideas[i] = "empty";
}

Brain::Brain(const Brain& original)
{
  *this = original;
}

Brain& Brain::operator = (const Brain& original)
{
  if (this != &original)
  {
    for (int i = 0; i < 100; i++)
      this->_ideas[i] = original._ideas[i];
  }
  return (*this);
}

Brain::~Brain()
{
  std::cout << RED << "Brain default destructor called!"
  << RESET << std::endl;
}

std::string Brain::getIdea(unsigned int pos) const
{
  if (pos < 100)
    return (this->_ideas[pos]);
  else
    std::cout << RED << "Invalid idea index, try a number >= 0 or < 100!"
    << RESET << std::endl;
  return (this->_ideas[99]);
}

void  Brain::setIdea(const std::string& idea, unsigned int pos)
{
  if (pos < 100)
    this->_ideas[pos] = idea;
  else
    std::cout << RED << "Invalid idea!" << RESET << std::endl;
}

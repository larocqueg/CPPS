/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-la-r <gde-la-r@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 14:53:21 by gde-la-r          #+#    #+#             */
/*   Updated: 2025/09/09 14:53:31 by gde-la-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
  std::cout << YELLOW << "FragTrap default constructor called!"
    << RESET << std::endl;
  
  this->_atk = 30;
  this->_ep = 100;
  this->_hp = 100;

  std::cout << GREEN << "FragTrap " << this->_name << " was created!"
    << RESET << std::endl;
}

FragTrap::FragTrap(std::string const& name)
{
  std::cout << YELLOW << "FragTrap parameterized constructor called!"
    << RESET << std::endl;
  
  this->_name = name;
  this->_atk = 30;
  this->_ep = 100;
  this->_hp = 100;

  std::cout << GREEN << "FragTrap " << this->_name << " was created!"
  << RESET << std::endl;
}

FragTrap::FragTrap(const FragTrap& original)
{
  std::cout << YELLOW << "FragTrap copy constructor called!"
  << RESET << std::endl;

  *this = original;
}

FragTrap& FragTrap :: operator = (const FragTrap& original)
{
  std::cout << YELLOW << "FragTrap copy assigment operator called!"
    << RESET << std::endl;

  if (this != &original)
    ClapTrap::operator=(original);
  return (*this);
}


FragTrap::~FragTrap()
{
  std::cout << YELLOW << "FragTrap destructor called!" << RESET << std::endl;
  
  std::cout << RED << "FragTrap " << this->_name << " was destroyed!"
  << RESET << std::endl;
}

void  FragTrap::highFiveGuys(void)
{
  std::cout << "FragTrap " << this->_name << " wants to high five you!"
  << std::endl;
}

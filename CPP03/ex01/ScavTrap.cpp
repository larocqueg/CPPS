/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-la-r <gde-la-r@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 18:07:07 by gde-la-r          #+#    #+#             */
/*   Updated: 2025/09/08 18:19:45 by gde-la-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap("Unknown")
{
  std::cout << YELLOW << "ScavTrap default constructor called!"
    << RESET << std::endl;
  
  this->_atk = 20;
  this->_ep = 50;
  this->_hp = 100;

  std::cout << GREEN << "ScavTrap " << this->_name << " was created!"
    << RESET << std::end;;
}

ScavTrap::ScavTrap(std::string const& name) : ClapTrap(name)
{
  std::cout << YELLOW << "ScavTrap parametized constructor called!"
    << RESET << std::endl;
  
  this->_atk = 20;
  this->_ep = 50;
  this->_hp = 100;

  std::cout << GREEN << "ScavTrap " << this->_name << " was created!"
  << RESET << std::endl;
}

ScavTrap& Scavtrap :: operator = (const Scavtrap& original)
{
  std::cout << YELLOW << "Scavtrap copy assigment operator called!"
    << RESET << std::endl;

  if (this != original)
    ClapTrap::operator=(original);
  return (*this);

}

ScavTrap::~ScavTrap()
{
  std::cout << YELLOW << "Scavtrap destructor called!" << RESET << std::endl;
  
  std::cout << RED << "ScavTrap " << this->_name << " was destroyed!"
  << RESET << std::endl;
}

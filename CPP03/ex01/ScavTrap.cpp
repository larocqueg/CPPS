/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-la-r <gde-la-r@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 16:04:00 by gde-la-r          #+#    #+#             */
/*   Updated: 2025/09/08 16:15:54 by gde-la-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("Unknown", 10, 50, 20)
{
  std::cout << GREEN << "ScavTrap " << this->_name << " was created!"
    << RESET << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 100, 50, 20)
{
  std::cout << GREEN << "ScavTrap " << this->_name << " was created!"
    << RESET << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& original)
{
  *this = original;
}
ScavTrap& ScavTrap :: operator = (const ScavTrap& original)
{
  if (*this != original)
  {
    ClapTrap::_name = original._name;
    this->_atk = original.atk;
    this->_hp = original._hp;
    this->_ep = original._ep;
  }
  return (*this);
}

ScavTrap::~ScavTrap()
{
  std::cout << RED << "ScavTrap " << this->_name << " was destroyed!"
    << RESET << std::endl;
}

void  ScavTrap::attack(std::string target)
{
  if (this->_ep <= 0 || this->_hp <= 0)
    std::cout << RED << "ScavTrap " << this->_name
      << " Couldn't attack, not enough energy or hit points!"
      << RESET << std::endl;
  else
  {
    std::cout << "ScavTrap " << this->_name << " attacked "
    << target << " causing " << this->_atk << "points of damage!"
    << std::endl;
  }
}

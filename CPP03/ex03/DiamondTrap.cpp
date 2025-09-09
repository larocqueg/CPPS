/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-la-r <gde-la-r@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 15:28:52 by gde-la-r          #+#    #+#             */
/*   Updated: 2025/09/09 15:34:25 by gde-la-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap(), ScavTrap(), FragTrap()
{
  std::cout << YELLOW << "DiamondTrap default constructor called!"
  << RESET << std::endl;

  this->_name = "Diamond";
  this->_ep = 50;
  ClapTrap::setName(this->_name + "_clap_name");
}

DiamondTrap::DiamondTrap(const std::string& name) : ClapTrap(name), ScavTrap(name), FragTrap(name)
{
  ClapTrap::setName(name + "_clap_name");
  this->_name = name;
  this->_ep = 50;

  std::cout << GREEN << "DiamondTrap " << this->_name << " was Created!"
  << RESET << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other)
{
  *this = other;
}


DiamondTrap& DiamondTrap::operator = (const DiamondTrap& original)
{
  if (this != &original)
  {
    this->_name = original._name;
    this->_ep = original._ep;
    this->_hp = original._hp;
    this->_atk = original._atk;
  }
  return (*this);
}

DiamondTrap::~DiamondTrap()
{
  std::cout << RED << "DiamondTrap " << this->_name << " was destroyed!"
  << RESET << std::endl;
}
void  DiamondTrap::attack(const std::string& target)
{
  ScavTrap::attack(target);
}

void  DiamondTrap::whoAmI()
{
  std::cout << "DiamondTrap name: " << this->_name << std::endl;
  std::cout << "ClapTrap name: " << ClapTrap::getName() << std::endl;
}

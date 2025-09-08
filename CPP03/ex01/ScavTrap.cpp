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
  
  this->setAtk(20);
  this->setEp(50);
  this->setHp(100);

  std::cout << GREEN << "ScavTrap " << this->getName() << " was created!"
    << RESET << std::endl;
}

ScavTrap::ScavTrap(std::string const& name) : ClapTrap(name)
{
  std::cout << YELLOW << "ScavTrap parametized constructor called!"
    << RESET << std::endl;
  
  this->setAtk(20);
  this->setEp(50);
  this->setHp(100);

  std::cout << GREEN << "ScavTrap " << this->getName() << " was created!"
  << RESET << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& original) : ClapTrap(original)
{
  std::cout << YELLOW << "Scavtrap copy constructor called!"
  << RESET << std::endl;
}

ScavTrap& ScavTrap :: operator = (const ScavTrap& original)
{
  std::cout << YELLOW << "ScavTrap copy assigment operator called!"
    << RESET << std::endl;

  if (this != &original)
    ClapTrap::operator=(original);
  return (*this);
}


ScavTrap::~ScavTrap()
{
  std::cout << YELLOW << "Scavtrap destructor called!" << RESET << std::endl;
  
  std::cout << RED << "ScavTrap " << this->getName() << " was destroyed!"
  << RESET << std::endl;
}

void ScavTrap::attack(std::string name)
{
  if (this->getEp() <= 0 || this->getHp() <= 0)
    std::cout  << RED << "ScavTrap " << this->getName() << " couldn't attack, "
    << "not enough energy or hit points!" << RESET << std::endl;
  else
  {
    std::cout << CYAN << "ScavTrap " << this->getName() << " attacked "
    << name << " causing " << this->getAtk() << " damage!" << RESET << std::endl;
    this->setEp(getEp() - 1);
  }
}

void  ScavTrap::guardGate()
{
  std::cout << CYAN << "ScavTraprap " << this->getName() << " is now guarding the gate!"
  << RESET << std::endl;
}

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

ScavTrap::ScavTrap(void)
{
  std::cout << YELLOW << "ScavTrap default constructor called!"
    << RESET << std::endl;
  
  this->_atk = 20;
  this->_ep = 50;
  this->_hp = 100;

  std::cout << GREEN << "ScavTrap " << this->_name << " was created!"
    << RESET << std::endl;
}

ScavTrap::ScavTrap(std::string const& name)
{
  std::cout << YELLOW << "ScavTrap parameterized constructor called!"
    << RESET << std::endl;
  
  this->_name = name;
  this->_atk = 20;
  this->_ep = 50;
  this->_hp = 100;

  std::cout << GREEN << "ScavTrap " << this->_name << " was created!"
  << RESET << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& original)
{
  std::cout << YELLOW << "Scavtrap copy constructor called!"
  << RESET << std::endl;

  *this = original;
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
  
  std::cout << RED << "ScavTrap " << this->_name << " was destroyed!"
  << RESET << std::endl;
}

void ScavTrap::attack(std::string name)
{
  if (this->_ep <= 0 || this->_hp <= 0)
    std::cout  << RED << "ScavTrap " << this->_name << " couldn't attack, "
    << "not enough energy or hit points!" << RESET << std::endl;
  else
  {
    std::cout << CYAN << "ScavTrap " << this->_name << " attacked "
    << name << " causing " << this->_atk << " damage!" << RESET << std::endl;
    this->_ep -= 1;
  }
}

void  ScavTrap::guardGate()
{
  std::cout << CYAN << "ScavTraprap " << this->_name << " is now guarding the gate!"
  << RESET << std::endl;
}

std::string ScavTrap::getName()
{
  return (this->_name);
}

unsigned int  ScavTrap::getHp()
{
  return (this->_hp);
}

unsigned int  ScavTrap::getEp()
{
  return (this->_ep);
}

unsigned int  ScavTrap::getAtk()
{
  return (this->_atk);
}

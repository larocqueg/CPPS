/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-la-r <gde-la-r@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 18:43:43 by gde-la-r          #+#    #+#             */
/*   Updated: 2025/07/23 18:43:46 by gde-la-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _hp(10), _ep(10), _atk(0)
{
  std::cout << "ClapTrap was created" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _hp(10), _ep(10), _atk(0)
{
  this->_name = name;
  std::cout << "ClapTrap " << this->_name << " was created!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& original)
{
  *this = original;
}

ClapTrap& ClapTrap::operator = (const ClapTrap& original)
{
  if (this != &original)
  {
    this->_name = original._name;
    this->_hp = original._hp;
    this->_ep = original._ep;
    this->_atk = original._atk;
  }
  return (*this);
}

ClapTrap::~ClapTrap()
{
  std::cout << "ClapTrap " << this->_name << " was destroyed!" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
  if (this->_ep <= 0 || this->hp <= 0)
    std::cout << "ClapTrap "<< this->_name
      << " couldn't attack, not enough energy or health points"<< std::endl;
  else
  {
    std::cout << "ClapTrap " << this->_name << " attacks " << target
      << " for " << this->_atk << " points of energy!" << std::endl;
    this->_ep--;
  }
}

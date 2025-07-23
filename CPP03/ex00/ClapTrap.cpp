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

ClapTrap::ClapTrap()
{
  this->_name = "Unknown";
  this->_hp = 10;
  this->_ep = 10;
  this->_atk = 0;
}

ClapTrap::ClapTrap(std::string name)
{
  this->_name = name;
  this->_hp = 10;
  this->_ep = 10;
  this->_atk = 0;
}

ClapTrap::ClapTrap& operator = (const ClapTrap original)
{

}

ClapTrap::~ClapTrap()
{

}

void  ClapTrap::attack(std::string& target)
{

}

void  ClapTrap::takeDamege(unsigned int amount)
{

}

void  ClapTrap::beRepaired(unsigned int amount)
{

}

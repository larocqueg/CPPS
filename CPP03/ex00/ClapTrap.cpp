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

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("Default"), _hp(10), _ep(10), _atk(0)
{
    std::cout << YELLOW << "ClapTrap default contructor called!"
    << RESET << std::endl;

    std::cout << GREEN << "ClapTrap " << this->_name << " was created!"
    << RESET << std::endl;
}

ClapTrap::ClapTrap(const std::string& name) : _name(name), _hp(10), _ep(10), _atk(0)
{
    std::cout << YELLOW << "ClapTrap parameterized contructor called!"
    << RESET << std::endl;
    
    std::cout << GREEN << "ClapTrap " << this->_name << " was created!"
    << RESET << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& original)
{
    std::cout << YELLOW << "ClapTrap copy constructor called!"
    << RESET << std::endl;

    *this = original;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& original)
{
    std::cout << YELLOW << "ClapTrap copy assigment operator called!"
    << RESET << std::endl;
    
    if (this != &original)
    {
        this->_name = original._name;
        this->_hp   = original._hp;
        this->_ep   = original._ep;
        this->_atk  = original._atk;
    }
    return (*this);
}

ClapTrap::~ClapTrap()
{
    std::cout << YELLOW << "ClapTrap default destructor called!" << RESET << std::endl;
    
    std::cout << RED << "ClapTrap " << this->_name << " was destroyed!"
    << RESET << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    if (this->_ep == 0 || this->_hp == 0)
    {
        std::cout << RED <<"ClapTrap " << this->_name
                  << " couldn't attack, not enough energy or hit points!"
                  << RESET << std::endl;
    }
    else
    {
        std::cout << CYAN << "ClapTrap " << this->_name << " attacks " << target
                  << " for " << this->_atk << " points of damage!" << RESET << std::endl;
        this->_ep--;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->_hp <= amount)
    {
        std::cout << YELLOW << "ClapTrap " << this->_name
                  << " received a strong attack and lost all hit points!"
                  <<  RESET << std::endl;
        this->_hp = 0;
    }
    else
    {
        std::cout << RED << "ClapTrap " << this->_name
                  << " received " << amount << " points of damage!"
                  << RESET << std::endl;
        this->_hp -= amount;
    }

    if (this->_hp <= 0)
        std::cout << YELLOW << "ClapTrap " << this->_name << " is out of hit points!" << RESET << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->_ep == 0 || this->_hp == 0)
    {
        std::cout << RED << "ClapTrap " << this->_name
                  << " couldn't be repaired, not enough energy or hit points!"
                  << RESET << std::endl;
    }
    else
    {
        std::cout << GREEN << "ClapTrap " << this->_name
                  << " gained " << amount << " hit points!" << RESET << std::endl;
        this->_hp += amount;
        this->_ep--;
    }
}

/*void  ClapTrap::doDamage(ClapTrap& other)
{
  attack(other._name);
  other.takeDamage(this->_atk);
}

void  ClapTrap::getAttack(unsigned int amount)
{
  this->_atk = amount;
}

void  ClapTrap::getHp(unsigned int amount)
{
  this->_hp = amount;
}

void  ClapTrap::getEp(unsigned int amount)
{
  this->_ep = amount;
}*/

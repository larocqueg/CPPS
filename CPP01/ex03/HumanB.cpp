/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-la-r <gde-la-r@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 18:22:48 by gde-la-r          #+#    #+#             */
/*   Updated: 2025/07/20 18:30:10 by gde-la-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string input)
{
  this->name = input;
  this->weapon = NULL;
}

HumanB::~HumanB()
{
}

void  HumanB::attack()
{
  if (this->weapon)
  {
    std::cout << name << " attacks with their " << this->weapon->getType();
  }
  else
  {
   std::cout << name << " is unarmed";
  }
  std::cout << std::endl;
}

void  HumanB::setWeapon(Weapon &input)
{
  this->weapon = &input;
}

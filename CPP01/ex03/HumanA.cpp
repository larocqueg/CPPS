/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-la-r <gde-la-r@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 16:39:22 by gde-la-r          #+#    #+#             */
/*   Updated: 2025/07/20 18:21:52 by gde-la-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(std::string name1, Weapon &name2) : name(name1), weapon(name2)
{
}

HumanA:: ~HumanA()
{
}

void  HumanA::attack()
{
  std::cout << this->name << " attacked with " << this->weapon.getType() << std::endl;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-la-r <gde-la-r@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 18:30:55 by gde-la-r          #+#    #+#             */
/*   Updated: 2025/07/20 18:32:35 by gde-la-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

const std::string &Weapon::getType()
{
  return (type);
}

void  Weapon::setType(std::string input)
{
  type = input;
}

Weapon::Weapon(std::string input)
{
  type = input;
}

Weapon::~Weapon()
{
}

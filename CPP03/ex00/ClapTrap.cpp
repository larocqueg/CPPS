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
  this->name = NULL;
  this->_hp = 10;
  this->ep = 10;
  this->atk = 0;
}

ClapTrap::ClapTrap(const ClapTrap& original)
{

}

ClapTrap::~ClapTrap()
{

}

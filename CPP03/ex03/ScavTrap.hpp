/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-la-r <gde-la-r@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 15:59:03 by gde-la-r          #+#    #+#             */
/*   Updated: 2025/09/08 16:03:41 by gde-la-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
  public:
    ScavTrap();
    ScavTrap(std::string const& name);
    ScavTrap(const ScavTrap& original);
    ScavTrap& operator = (const ScavTrap& original);
    ~ScavTrap();
    void  attack(std::string target);
    void  guardGate();
    std::string   getName();
    unsigned int  getHp(); 
    unsigned int  getEp();
    unsigned int  getAtk();
};

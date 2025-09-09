/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-la-r <gde-la-r@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 16:45:58 by gde-la-r          #+#    #+#             */
/*   Updated: 2025/07/28 16:46:14 by gde-la-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
    ScavTrap  a("Gabriel");
    ScavTrap  b("Robot");
  
    for (int i = 0; i < 10; i++)
      a.attack("Dutch");
  
    a.takeDamage(1);
    
    for(int i = 0; i < 51; i++)
      b.attack("Gannon");
    a.takeDamage(a.getHp());
    return (0);
}

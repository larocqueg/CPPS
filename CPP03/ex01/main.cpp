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

void  displayStatus(ScavTrap *a);

int main(void)
{
    ScavTrap  a("Gabriel");
    ScavTrap  b("Robot");
  
    displayStatus(&a);

    for (int i = 0; i < 10; i++)
      a.attack("Dutch");
  
    displayStatus(&a);

    a.takeDamage(a.getHp());
    
    displayStatus(&a);
    
    for(int i = 0; i < 51; i++)
      b.attack("Gannon");
    return (0);
}

void  displayStatus(ScavTrap *a)
{
    std::cout << "ScavTrap " << a->getName() << " status: " << "\nHP: " << a->getHp()
    << "\nEP: " << a->getEp() << std::endl;
}

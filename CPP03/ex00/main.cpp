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

#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap a("Gabriel");
    ClapTrap b;
   
    b = a;
    /*ClapTrap b("Micah");

    a.getAttack(1);
    a.getEp(10);
    a.getHp(10);
    b.getHp(10);
    
    for (int i = 0; i < 10; i++)
      a.doDamage(b);
    for (int i = 0; i < 10; i++)
      a.beRepaired(1);*/

    for (int i = 0; i < 11; i++)
      a.attack("Dutch");
    a.beRepaired(1);

    return (0);
}

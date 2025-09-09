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

#include "DiamondTrap.hpp"

int main(void)
{
    DiamondTrap  a("Frag");
  
    for(int i = 0; i < 51; i++)
      a.attack("Monster");
    a.takeDamage(10);
    a.takeDamage(10);
    a.takeDamage(10);
    a.whoAmI();
    return (0);
}

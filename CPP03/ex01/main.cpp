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
    ClapTrap  b;
    
    b.setName("Gabriel");
    b.setAtk(20);
    b.setHp(100);
    b.setEp(10);
    std::cout << "Name = " << b.getName() << std::endl;
    std::cout << "Attack = " << b.getAtk() << std::endl;
    std::cout << "Hit points = " << b.getHp() << std::endl;
    std::cout << "Energy points = " << b.getEp() << std::endl;
    for (int i = 0; i < 11; i++)
      b.attack("Dutch");
    b.beRepaired(1);

    return (0);
}

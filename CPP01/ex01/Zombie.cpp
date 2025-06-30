/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-la-r <gde-la-r@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 15:52:23 by gde-la-r          #+#    #+#             */
/*   Updated: 2025/06/30 15:55:48 by gde-la-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{

}

Zombie::~Zombie()
{
  std::cout << "\033[31m" << this->name << " has been destroyed!\033[0m"
    << std::endl;
}

void  Zombie::announce(void)
{
  std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void  Zombie::setName(std::string name)
{
  this->name = name;
  std::cout << "\033[32mZombie " << this->name << " has been created!\033[0m"
    << std::endl;
}

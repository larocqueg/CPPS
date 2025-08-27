/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-la-r <gde-la-r@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 13:55:30 by gde-la-r          #+#    #+#             */
/*   Updated: 2025/06/30 13:55:55 by gde-la-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
  this->name = name;

  std::cout << GRN << "Zombie " << this->name << " has been created!"
    << RESET << std::endl;
}

Zombie::~Zombie()
{
  std::cout << RED << "Zombie " << this->name << " has been destroyed!"
    << RESET << std::endl;
}

void  Zombie::announce(void)
{
  std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

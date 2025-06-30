/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-la-r <gde-la-r@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 15:39:01 by gde-la-r          #+#    #+#             */
/*   Updated: 2025/06/30 15:39:10 by gde-la-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie  *zombieHorde(int N, std::string name)
{
  int i = 0;

  if (N <= 0)
  {
    std::cerr << "Error: Invalid number of zombies!" << std::endl;
    return (NULL);
  }
  Zombie *horde = new Zombie[N];
  while (i < N)
  {
    horde[i++].setName(name);
  }
  return (horde);
}

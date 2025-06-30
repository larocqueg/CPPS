/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-la-r <gde-la-r@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 16:03:15 by gde-la-r          #+#    #+#             */
/*   Updated: 2025/06/30 16:10:14 by gde-la-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
  int N = 5;
  int i = 0;

  Zombie  *horde = zombieHorde(N, "infected");
  if (!horde)
    return (1);
  std::cout << std::endl;
  while (i < N)
  {
    horde[i++].announce();
  }
  std::cout << std::endl;
  delete [] horde;
  return (0);
}

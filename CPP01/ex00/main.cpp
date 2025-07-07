/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-la-r <gde-la-r@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 13:53:49 by gde-la-r          #+#    #+#             */
/*   Updated: 2025/06/30 13:53:57 by gde-la-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(int ac, char **av)
{
  Zombie  *zombie;
  if (ac > 1)
    zombie = newZombie(av[1]);
  else
    zombie = newZombie("Gabriel");
  zombie->announce();
  delete zombie;
  randomChump("Foo");
  return (0);
}

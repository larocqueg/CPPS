/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-la-r <gde-la-r@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 12:29:40 by gde-la-r          #+#    #+#             */
/*   Updated: 2025/07/21 12:29:41 by gde-la-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av)
{
  Harl harl;
  if (ac == 2) {
    harl.complain(av[1]);
    return (0);
  }
  else {
    std::cout << "Error: Usage: ./Harl 'command'"
      << "\n for commands you can use:\n"
      << "DEBUG\nINFO\nWARNING\nERROR" << std::endl;
    return (1);
  }
}

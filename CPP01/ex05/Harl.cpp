/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-la-r <gde-la-r@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 12:29:48 by gde-la-r          #+#    #+#             */
/*   Updated: 2025/07/21 12:29:49 by gde-la-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{

}

Harl::~Harl()
{

}

void  Harl::debug(void)
{
  std::cout << "I love having extra bacon for my"
    << " 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!"
    << std::endl;
}

void  Harl::info(void)
{
  std::cout << "I cannot belive addin extra bacon costs more money."
    << " You didn't put enough bacon in my burger! If you did, i wouldn't"
    << " be asking for more!" << std::endl;
}

void  Harl::warning(void)
{
  std::cout << "I think i deserve to have some extra bacon for free."
    << " I've been coming for years, whereas you started working here just las month."
    << std::endl;
}

void  Harl::error(void)
{
  std::cout << "This is uncaccepatable! I want to speak to the anager now."
    << std::endl;
}

void  Harl::complain(std::string level)
{
  std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

  void (Harl::*functions[4])() = {
    &Harl::debug,
    &Harl::info,
    &Harl::warning,
    &Harl::error,
  };
  for (int i = 0; i < 4; i++)
  {
    if (levels[i] == level)
    { 
      (this->*functions[i])();
      break;
    }
  }
}

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
  std::cout << "[ DEBUG ]\nI love having extra bacon for my"
    << " 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!"
    << "\n" << std::endl;
}

void  Harl::info(void)
{
  std::cout << "[ INFO ]\nI cannot belive addin extra bacon costs more money."
    << " You didn't put enough bacon in my burger! If you did, i wouldn't"
    << " be asking for more!" << "\n" << std::endl;
}

void  Harl::warning(void)
{
  std::cout << "[ WARNING ]\nI think i deserve to have some extra bacon for free."
    << " I've been coming for years, whereas you started working here just las month."
    << "\n" << std::endl;
}

void  Harl::error(void)
{
  std::cout << "[ ERROR ]\nThis is uncaccepatable! I want to speak to the anager now."
    << std::endl;
}

void  Harl::complain(std::string level)
{
  int index = -1;
  void (Harl::*functions[4])() = {
    &Harl::debug,
    &Harl::info,
    &Harl::warning,
    &Harl::error,
  };

  if (level == "DEBUG")
    index = 0;
  else if (level == "INFO")
    index = 1;
  else if (level == "WARNING")
    index = 2;
  else if (level == "ERROR")
    index = 3;
  else {
    std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    return ;
  }

  switch(index) {
    case 0:
      (this->*functions[0])();
    case 1:
      (this->*functions[1])();
    case 2:
      (this->*functions[2])();
    case 3:
      (this->*functions[3])();
  }
}

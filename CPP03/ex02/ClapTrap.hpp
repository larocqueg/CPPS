/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-la-r <gde-la-r@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 18:43:49 by gde-la-r          #+#    #+#             */
/*   Updated: 2025/07/23 18:44:01 by gde-la-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once //same as ifndef define

#include <string>
#include <iostream>

#define RED     "\033[31m"
#define YELLOW  "\033[33m"
#define GREEN   "\033[32m"
#define CYAN    "\033[36m"
#define RESET   "\033[0m"

class ClapTrap
{
  protected:
    std::string _name;
    unsigned int         _hp;
    unsigned int         _ep;
    unsigned int         _atk;
  public:
    ClapTrap();
    ClapTrap(const ClapTrap& original);
    ClapTrap& operator = (const ClapTrap& original);
    ClapTrap(const std::string& target);
    ~ClapTrap();
    void  attack(const std::string& target);
    void  takeDamage(unsigned int amount);
    void  beRepaired(unsigned int amount);
    
    // Getters

};

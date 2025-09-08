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

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <string>
#include <iostream>

#define RED     "\033[31m"
#define YELLOW  "\033[33m"
#define GREEN   "\033[32m"
#define CYAN    "\033[36m"
#define RESET   "\033[0m"

class ClapTrap
{
  private:
    std::string _name;
    int         _hp;
    int         _ep;
    int         _atk;
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
    std::string getName() const;
    int   getAtk() const;
    int   getHp() const;
    int   getEp() const;
    
    // Setters
    void  setName(std::string name);
    void  setAtk(unsigned int amount);
    void  setHp(unsigned int amount);
    void  setEp(unsigned int amount);
};

#endif

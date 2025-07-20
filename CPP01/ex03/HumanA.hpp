/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-la-r <gde-la-r@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 18:19:41 by gde-la-r          #+#    #+#             */
/*   Updated: 2025/07/20 18:22:28 by gde-la-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

#ifndef HUMANA_HPP
# define HUMANA_HPP

class HumanA
{
  private:
    std::string name;
    Weapon  &weapon;
  public:
    HumanA(std::string input, Weapon &getweapon);
    ~HumanA();
    void  attack();
};

#endif

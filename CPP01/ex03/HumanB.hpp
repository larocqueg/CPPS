/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-la-r <gde-la-r@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 18:27:57 by gde-la-r          #+#    #+#             */
/*   Updated: 2025/07/20 18:30:25 by gde-la-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
  private:
    Weapon *weapon;
    std::string name;
  public:
    HumanB(std::string input);
    ~HumanB();
    void  setWeapon(Weapon &input);
    void  attack();
};

#endif

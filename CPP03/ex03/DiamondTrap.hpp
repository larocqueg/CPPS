/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-la-r <gde-la-r@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 15:23:59 by gde-la-r          #+#    #+#             */
/*   Updated: 2025/09/09 15:28:45 by gde-la-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
  private:
    std::string _name;
    DiamondTrap();
    DiamondTrap(const DiamondTrap& original);
    DiamondTrap& operator = (const DiamondTrap& original);

  public:
    DiamondTrap(const std::string& name);
    ~DiamondTrap();
    void  attack(const std::string& target);
    void  whoAmI();
};

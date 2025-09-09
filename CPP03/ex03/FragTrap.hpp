/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-la-r <gde-la-r@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 14:48:08 by gde-la-r          #+#    #+#             */
/*   Updated: 2025/09/09 14:48:18 by gde-la-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
    public:
      FragTrap();
      FragTrap(std::string const &name);
      FragTrap(const FragTrap& original);
      FragTrap& operator = (const FragTrap& original);
      ~FragTrap();

      void  highFiveGuys(void);
};

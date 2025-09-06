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

#ifndef CLAPTAP_HPP
# define CLAPTRAP_HPP

#include <string>
#include <iostrem>

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
};

#endif

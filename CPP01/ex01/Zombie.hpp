/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-la-r <gde-la-r@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 15:33:40 by gde-la-r          #+#    #+#             */
/*   Updated: 2025/06/30 15:34:52 by gde-la-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
  private:
    std::string name;
  public:
    Zombie();
    ~Zombie();
    void  announce(void);
    void  setName(std::string name);
};

Zombie  *zombieHorde(int N, std::string name);

#endif

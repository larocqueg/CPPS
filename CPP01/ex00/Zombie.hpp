/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-la-r <gde-la-r@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 13:46:09 by gde-la-r          #+#    #+#             */
/*   Updated: 2025/06/30 13:46:53 by gde-la-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostrem>
#include <string>

class Zombie
{
  private:
    std::string name;
  public:
    Zombie(std::string name);
    ~Zombie(void);
    void  announce(void);
};

Zombie  *newZombie(std::string name);
void    randomChump(std::string name);

#endif

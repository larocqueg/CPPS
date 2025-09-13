/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-la-r <gde-la-r@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/13 15:11:34 by gde-la-r          #+#    #+#             */
/*   Updated: 2025/09/13 15:11:47 by gde-la-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class Brain
{
  private:
    std::string idead[100];
  public:
    Brain();
    Brain(const Brain& original);
    Brain& operator = (const Brain& original);
    ~Brain();
}

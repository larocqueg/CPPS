/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-la-r <gde-la-r@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 12:29:44 by gde-la-r          #+#    #+#             */
/*   Updated: 2025/07/21 12:29:45 by gde-la-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <string>
#include <iostream>

class Harl
{
  private:
    void  debug(void);
    void  info(void);
    void  warning(void);
    void  error(void);
  public:
    Harl();
    ~Harl();
    void  complain(std::string level);
};

#endif

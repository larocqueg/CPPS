/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-la-r <gde-la-r@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 22:40:04 by gde-la-r          #+#    #+#             */
/*   Updated: 2025/07/21 22:40:06 by gde-la-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <string>
#include <iostream>

class Fixed {
  private:
    int               val;
    static const int  bits = 8;
  public:
    Fixed();
    Fixed(const Fixed& other);
    ~Fixed();
    Fixed& operator = (const Fixed& other);
    int   getRawBits(void) const;
    void  setRawBits(int const raw);
};

#endif

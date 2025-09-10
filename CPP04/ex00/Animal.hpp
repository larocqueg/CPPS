/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-la-r <gde-la-r@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 16:16:05 by gde-la-r          #+#    #+#             */
/*   Updated: 2025/09/10 16:16:40 by gde-la-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

class Animal
{
  protected:
    std::string _type;
  public:
    Animal();
    Animal(const std::string& type);
    Animal(const Animal& origianl);
    Animal& operator = (const Animal& original);
    ~Animal();
    void  makeSound();
}

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

#pragma once

#include <string>
#include <iostream>

#define RED     "\033[31m"
#define YELLOW  "\033[33m"
#define GREEN   "\033[32m"
#define CYAN    "\033[36m"
#define RESET   "\033[0m"

class Animal
{
  protected:
    std::string _type;
  public:
    Animal();
    Animal(const Animal& origianl);
    Animal& operator = (const Animal& original);
    virtual ~Animal();
    std::string getType() const;
    virtual void  makeSound() const;
};

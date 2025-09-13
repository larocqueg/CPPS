/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-la-r <gde-la-r@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/13 14:03:03 by gde-la-r          #+#    #+#             */
/*   Updated: 2025/09/13 14:10:45 by gde-la-r         ###   ########.fr       */
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

class WrongAnimal
{
  protected:
    std::string _type;
  public:
    WrongAnimal();
    WrongAnimal(const WrongAnimal& original);
    WrongAnimal& operator = (const WrongAnimal& original);
    virtual ~WrongAnimal();
    std::string getType() const;
    virtual void  makeSound();
};

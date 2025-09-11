/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-la-r <gde-la-r@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 18:46:32 by gde-la-r          #+#    #+#             */
/*   Updated: 2025/09/11 18:47:25 by gde-la-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class Dog : virtual public Animal
{
  private:
    Dog& operator = (const Dog& original);
    Dog(const Dog & original);

  public:
    Dog();
    void makeSound() const;
    ~Dog();
};

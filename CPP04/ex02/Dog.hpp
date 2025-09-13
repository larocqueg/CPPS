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
#include "Brain.hpp"

class Dog : public Animal
{
  private:
    Brain *_brain;
  public:
    Dog();
    Dog(const Dog & original);
    Dog& operator = (const Dog& original);
    ~Dog();
    void makeSound() const;
    std::string getIdea(unsigned int pos) const;
    void  setIdea(const std::string& idea, unsigned int pos);
};

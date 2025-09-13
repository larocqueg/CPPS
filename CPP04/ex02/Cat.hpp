/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-la-r <gde-la-r@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 17:33:27 by gde-la-r          #+#    #+#             */
/*   Updated: 2025/09/11 17:34:01 by gde-la-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
  private:
    Brain *_brain;
  public:
    Cat();
    Cat(const Cat& original);
    Cat& operator = (const Cat& original);
    ~Cat();
    void makeSound() const;
    std::string getIdea(unsigned int pos) const;
    void  setIdea(const std::string& idea, unsigned int pos);
};

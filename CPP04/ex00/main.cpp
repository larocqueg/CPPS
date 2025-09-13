/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-la-r <gde-la-r@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 18:53:10 by gde-la-r          #+#    #+#             */
/*   Updated: 2025/09/11 18:54:22 by gde-la-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

int main()
{
  Cat  *cat = new Cat();
  Dog  *dog = new Dog();


  std::cout << CYAN << cat->getIdea() << std::endl;
  std::cout << dog->getIdea() << RESET << std::endl;
 
  return (0);
}

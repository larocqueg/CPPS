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
  Animal  *animal[10];

  for (int i = 0; i < 10; i++)
  {
    if (i < 5)
      animal[i] = new Dog();
    else
      animal[i] = new Cat();
  }

  for (int i = 0; i < 10; i++)
    animal[i]->makeSound();
  
  for (int i = 0; i < 10; i++)
    delete animal[i];

  Dog *dog = new Dog();
  Dog *dog2 = new Dog();
  *dog2 = *dog;

  for (int i = 0; i < 20; i++)
  {
    dog->setIdea("Bite bones", i);
    std::cout << dog->getIdea(i) << std::endl;
  }
  for (int i = 20; i < 100; i++)
    std::cout << dog->getIdea(i) << std::endl;
 
  Cat *cat = new Cat();
  Cat *cat2 = new Cat();
  *cat2 = *cat;

  for (int i = 0; i < 20; i++)
  {
    cat->setIdea("Scratch humans", i);
    std::cout << cat->getIdea(i) << std::endl;
  }
  for (int i = 20; i < 100; i++)
    std::cout << cat->getIdea(i) << std::endl;

  delete dog2;
  delete dog;
  delete cat2;
  delete cat;

  return (0);
}

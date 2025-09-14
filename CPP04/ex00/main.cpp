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
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

int main()
{
  const Animal* animal = new Animal();
  const Animal* dog = new Dog();
  const Animal* cat = new Cat();
  
  std::cout << dog->getType() << " " << std::endl;
  std::cout << cat->getType() << " " << std::endl;
  dog->makeSound();
  cat->makeSound();
  animal->makeSound();

  delete dog;
  delete cat;
  delete animal;

  WrongAnimal *wrong = new WrongAnimal();
  WrongAnimal *notcat = new WrongCat();

  wrong->makeSound();
  notcat->makeSound();

  delete wrong;
  delete notcat;

  return (0);
}

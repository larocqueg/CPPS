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
    Animal* animal = new Animal();
    Animal* dog = new Dog();
    Animal* cat = new Cat();

    std::cout << animal->getType() << " " << std::endl;
    std::cout << dog->getType() << " " << std::endl;
    std::cout << cat->getType() << " " << std::endl;

    animal->makeSound();
    dog->makeSound();
    cat->makeSound();

    delete dog;
    delete cat;
    delete animal;

    WrongAnimal* wrong = new WrongAnimal();
    WrongAnimal* wrongcat = new WrongCat();

    std::cout << wrong->getType() << " " << std::endl;
    std::cout << wrongcat->getType() << " " << std::endl;

    wrong->makeSound();
    wrongcat->makeSound();

    delete wrongcat;
    delete wrong;

    return (0);
}

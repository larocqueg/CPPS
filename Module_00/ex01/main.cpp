/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-la-r <gde-la-r@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 14:41:13 by gde-la-r          #+#    #+#             */
/*   Updated: 2025/06/16 14:56:37 by gde-la-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

void  program_loop();

int	main(int ac, char **av)
{
	(void)av;
	if (ac > 1)
	{
    std::cout << "Error: Execute only with ./phonebook";
    return (1);
	}
  std::cout << "Welcome to phonebook! Use one of the following commands;\n" << std::endl;
  program_loop();
  return (0);
}

Contact new_contact()
{
  std::string input;
  Contact     contact;

  while (true)
  {
    std::cout << "Enter contact first name: ";
    std::getline(std::cin, input);
    std::cout << std::endl;
    if (contact.set_first_name(input))
      break;
  }
  while (true)
  {
    std::cout << "Enter contact last name: ";
    std::getline(std::cin, input);
    std::cout << std::endl;
    if (contact.set_last_name(input))
      break;
  }
  while (true)
  {
    std::cout << "Enter contact nickname: ";
    std::getline(std::cin, input);
    std::cout << std::endl;
    if (contact.set_nickname(input))
      break;
  }
  while (true)
  {
    std::cout << "Enter contact number: ";
    std::getline(std::cin, input);
    std::cout << std::endl;
    if (contact.set_number(input))
      break;
  }
  while (true)
  {
    std::cout << "Enter contact darkest secret: ";
    std::getline(std::cin, input);
    std::cout << std::endl;
    if (contact.set_secret(input))
      break;
  }
  return (contact);
}


void  program_loop()
{
  PhoneBook     phonebook;
  std::string   input;

  while (1)
  {
    std::cout << "ADD: adds a contact to the phonebook." << std::endl;
    std::cout << "SEARCH: Display a specific contact." << std::endl;
    std::cout << "EXIT: If you want to exit the program." << std::endl;
    if (!std::getline(std::cin, input))
    {
      std::cout << "\nInput error or EOF detected. Exiting." << std::endl;
      break ;
    }
    if (input == "ADD")
    {
      std::cout << "Creating new contact\n" << std::endl;
      phonebook.add_contact(new_contact());
      std::cout << "Contact created!\n" << std::endl;
    }
    else if (input == "SEARCH")
    {
      if (!phonebook.display_all())
        continue;
    }
    else if (input == "EXIT")
    {
      std::cout << "Exiting phonebook, have a good one!" << std::endl;
      break ;
    }
    else
      std::cout << "Unknow command. Please type ADD, SEARCH or EXIT." << std::endl;
  }
}

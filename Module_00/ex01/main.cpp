/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-la-r <gde-la-r@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 14:41:13 by gde-la-r          #+#    #+#             */
/*   Updated: 2025/06/18 18:36:47 by gde-la-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

void  program_loop();
void  sig_hand(int signum);

int	main(int ac, char **av)
{
	(void)av;
	if (ac > 1)
	{
    std::cout << "Error: Execute only with ./phonebook";
    return (1);
	}
  std::cout << "Welcome to phonebook! Use one of the following commands;\n" << std::endl;
  std::signal(SIGINT, sig_hand);
  std::signal(SIGQUIT, SIG_IGN);
  program_loop();
  return (0);
}

void  sig_hand(int signum)
{
  (void)signum;
  std::cout << std::endl;
}

Contact new_contact()
{
  std::string input;
  Contact     contact;

  while (true)
  {
    std::cout << "Enter contact first name: ";
    if (!std::getline(std::cin, input))
    {
      std::cout << "\nExiting program!" << std::endl;
      exit(1);
    }
    std::cout << std::endl;
    if (contact.set_first_name(input))
      break;
  }
  while (true)
  {
    std::cout << "Enter contact last name: ";
    if (!std::getline(std::cin, input))
    {
      std::cout << "\nExiting program!" << std::endl;
      exit(1);
    }
    std::cout << std::endl;
    if (contact.set_last_name(input))
      break;
  }
  while (true)
  {
    std::cout << "Enter contact nickname: ";
    if (!std::getline(std::cin, input))
    {
      std::cout << "\nExiting program!" << std::endl;
      exit(1);
    }
    std::cout << std::endl;
    if (contact.set_nickname(input))
      break;
  }
  while (true)
  {
    std::cout << "Enter contact number: ";
    if (!std::getline(std::cin, input))
    {
      std::cout << "\nExiting program!" << std::endl;
      exit(1);
    }
    std::cout << std::endl;
    if (contact.set_number(input))
      break;
  }
  while (true)
  {
    std::cout << "Enter contact darkest secret: ";
    if (!std::getline(std::cin, input))
    {
      std::cout << "\nExiting program!" << std::endl;
      exit(1);
    }
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
    std::cout << "SEARCH: Display all contacts and asks the user to select one" << std::endl;
    std::cout << "EXIT: If you want to exit the program.\n" << std::endl;
    std::cout << "$> ";
    if (!std::getline(std::cin, input))
    {
      std::cout << "Exiting program!" << std::endl;
      exit(1);
    }
    if (input == "ADD")
    {
      std::cout << "\nCreating new contact\n" << std::endl;
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
      std::cout << "\nExiting phonebook, have a good one!" << std::endl;
      break ;
    }
    else
      std::cout << "\nUnknow command. Please type ADD, SEARCH or EXIT.\n" << std::endl;
  }
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-la-r <gde-la-r@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 16:39:45 by gde-la-r          #+#    #+#             */
/*   Updated: 2025/06/18 17:24:13 by gde-la-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
  counter = 0;
  oldest_id = -1;
}

PhoneBook::~PhoneBook()
{

}

void  PhoneBook::add_contact(Contact contact)
{
  if (counter >= 8)
  {
    contacts[oldest_id] = contact;
    if (oldest_id < 7)
      oldest_id++;
    else
      oldest_id = 0;
  }
  else
  {
    contacts[counter++] = contact;
    oldest_id = 0;
  }
}

bool  PhoneBook::display_contact(int index) const
{
  if (index < counter && index >= 0)
  {
    std::cout << "Name: " << contacts[index].get_first_name() << std::endl;
    std::cout << "Last name: " << contacts[index].get_last_name() << std::endl;
    std::cout << "Nickname: " << contacts[index].get_nickname() << std::endl;
    std::cout << "Phone: " << contacts[index].get_number() << std::endl;
    std::cout << "Darkest secret: " << contacts[index].get_secret() << std::endl;
    return (true);
  }
  return (false);
}

void	set_spaces(std::string str)
{
	if (str.length() > 10)
	{
		for (int i = 0; i < 9; i++)
		{
      std::cout << (char)str[i];
		}
    std::cout << ".";
	}
	else if (str.length() <= 10)
	{
		for (size_t i = 0; i < 10 - str.length(); i++)
			std::cout << " ";
    std::cout << str;
	}
}

void	print_table(std::string index, std::string name, std::string lastname, std::string nickname)
{
  std::cout << "|";
	set_spaces(index);
  std::cout << "|";
	set_spaces(name);
  std::cout << "|";
	set_spaces(lastname);
  std::cout << "|";
	set_spaces(nickname);
  std::cout << "|" << std::endl;;
}

bool  PhoneBook::display_all(void) const
{
  int     i = 0;
  Contact contact;
  std::string id;

  if (counter == 0)
  {
    std::cout << "No contact to display, please add at least one contact!" << std::endl;
    return (false);
  }
  print_table("|----------|", "|----------|", "|----------|", "|----------|");
  print_table("Index", "Name", "Last name", "Nickname");
  while (i < counter)
  {
    id = (char)i + '0';
    print_table(id, contacts[i].get_first_name(), contacts[i].get_last_name(), contacts[i].get_nickname());
    i++;
  } 
  print_table("|----------|", "|----------|", "|----------|", "|----------|");
  std::cout << "Select a contact index: ";
  std::getline(std::cin, id);
  std::cout << std::endl;
  if (!display_contact(id[0] - '0' - 1))
    std::cout << "Invalid index!" << std::endl;
  std::cout << std::endl;
  return (true);
}

int   PhoneBook::get_size(void) const
{
  return (counter);
}

Contact PhoneBook::get_contact(int index) const
{
  return (contacts[index]);
}

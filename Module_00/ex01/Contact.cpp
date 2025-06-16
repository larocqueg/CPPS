/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contactar.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-la-r <gde-la-r@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 18:11:28 by gde-la-r          #+#    #+#             */
/*   Updated: 2025/06/16 18:28:13 by gde-la-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{

}

Contact::~Contact()
{

}

std::strig Contact::get_first_name() const
{
  return (this->firstname());
}

std::string Contact::get_last_name() const
{
  return (this->lastname());
}

std::string Contact::get_nickname() const
{
  return (this->nickname());
}

std::string Contact::get_number() const
{
  return (this->number());
}

std::string Contact::get_secret() const
{
  return (this->secret());
}

bool  Contact::set_first_name(std::string firstname)
{
  size_t  i = 0;

  if(firstname.empty())
    return (false);
  if (firstname.length() > 20)
  {
    std::cout << "First name must have a maximum of 20 characters!" << std::endl;i
    return (false);
  }
  while (i < firstname.length)
  {
    if (!std::isspace(firstname[i]) && !std::isalpha(firstname[i]))
    {
      std::cout << "First name must only contain letters!" << std::endl;
      return (false);
    }
    i++;
  }
  first_name = firstname;
  return (true);
}

bool  Contact::set_last_name(std::string lastname)
{
  size_t  i = 0;

  if (lastname.empty())
    return (false);
  if (lastname.length() > 20)
  {
    std::cout << "Last name must have a maximum of 20 characters!" << std::endl;
    return (false);
  }
  while (i < lastname.length())
  {
    if (!std::isspace(lastname[i]) || !std::isalpha(lastname[i]))
    {
      std::cout << "Last name must only contain letters!" << std::endl;
      return (false);
    }
    i++;
  }
  last_name = lastname;
  return (true);
}

bool  Contact::set_nickname(std::string nickname)
{
  size_t  i = 0;

  if (nickname.empty())
    return (false);
  if (nickname.length() > 20)
  {
    std::cout << "Last name must have a maximum of 20 characters!" << std::endl;
    return (false);
  }
  while (i < nickname.length())
  {
    if (!std::isspace(nickname[i]) || !std::isalpha(nickname[i]))
    {
      std::cout << "Last name must only contain letters!" << std::endl;
      return (false);
    }
    i++;
  }
  nick_name = nickname;
  return (true);
}

bool  Contact::set_number(std::string number)
{
  size_t  i = 0;

  if (number.empty())
    return (false);
  if (number.length() > 10)
  {
    std::cout << "Phone number must have a maximum of 10 characters!" << std::endl;
    return (false);
  }
  while (i < number.length())
  {
    if (!std::isdigit(number[i]))
    {
      std::cout << "Phone number must only be composed of digits!" << std::endl;
      return (false);
    }
    i++;
  }
  phone_number = number;
  return (true);
}

bool  Contact::set_secret(std::string secret)
{
  if (secret.empty())
    return (false);
  if (secret.length() > 30)
  {
    std::cout << "Darkest secret must have a maximum of 30 characters!" << std::endl;
    return (false);
  }
  darkest_secret = secret;
  return (true);
}

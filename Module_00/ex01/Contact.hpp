/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-la-r <gde-la-r@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 14:12:57 by gde-la-r          #+#    #+#             */
/*   Updated: 2025/06/12 14:13:34 by gde-la-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>
#include <iostream>
#include <cctype>
#include <unistd.h>

class Contact
{
  private:
    std::string name;
    std::string lastname;
    std::string nickname;
    std::string number;
    std::string secret;

  public:
    Contact();
    ~Contact();
    std::string get_first_name()const;
    std::string get_last_name()const;
    std::string get_nickname()const;
    std::string get_number()const;
    std::string get_secret()const;
    bool        set_first_name(std::string first_name);
    bool        set_last_name(std::string last_name);
    bool        set_number(std::string number);
    bool        set_secret(std::string secret);
};

#endif

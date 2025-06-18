/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-la-r <gde-la-r@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 14:12:57 by gde-la-r          #+#    #+#             */
/*   Updated: 2025/06/16 18:27:39 by gde-la-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>
#include <iostream>
#include <cctype>
#include <cstdlib>
#include <csignal>
#include <unistd.h>

class Contact
{
  private:
    std::string first_name;
    std::string last_name;
    std::string nick_name;
    std::string phone_number;
    std::string darkest_secret;

  public:
    Contact();
    ~Contact();
    std::string get_first_name() const;
    std::string get_last_name() const;
    std::string get_nickname() const;
    std::string get_number() const;
    std::string get_secret() const;
    bool        set_first_name(std::string firstname);
    bool        set_last_name(std::string lastname);
    bool        set_nickname(std::string nickname);
    bool        set_number(std::string number);
    bool        set_secret(std::string secret);
};

#endif

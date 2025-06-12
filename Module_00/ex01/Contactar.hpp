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

using std::string;

class Contact
{
  private:
    string  name;
    string  last_name;
    string  nickname;
    string  phone_number;
    string  secret;
  public:
    Contact();
    ~Contact();

}

#endif

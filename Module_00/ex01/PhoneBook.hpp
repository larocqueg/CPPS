/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-la-r <gde-la-r@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 17:15:26 by gde-la-r          #+#    #+#             */
/*   Updated: 2025/06/11 17:17:51 by gde-la-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class PhoneBook
{
  private:
    Contact contacts[8];
    int     oldest_id;
    int     counter;

  public:
    PhoneBook ();
    ~PhoneBook();
    void    add_contactcontact(Contact contact);
    bool    display_all(void)const;
    bool    display_contact(int index)const;
    int     get_size(void)const;
    Contact get_contact(int index)const;
};

#endif

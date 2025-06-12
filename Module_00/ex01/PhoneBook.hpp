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

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include "Contact.cpp"
# include <string>

#ifndef MAX_CONTACTS
# define MAX_CONTACTS 8
#endif

class PhoneBook
{
  private:
    int     oldest_id;
    int     counter;

  public:
    void    addcontact(Contact contact);
    bool    display_all(void)const;
    bool    display_contact(int index)const;
    int     get_size(void)const;
    Contact newcontact(int index)const;
    PhoneBook ();
    ~PhoneBook();
};

#endif

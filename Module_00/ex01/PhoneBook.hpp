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
#define MAX_CONTACTS 8
#endif

class PhoneBook
{
  private:
    int oldest_id;
    int counter;

  public:
    int     get_size()const;
    bool    is_full()const;
    void    new_contact(Contact contact);
    void    display()const;
    Contact get_contact(int index)const;
    PhoneBook ();
    ~PhoneBook();
},

#endif

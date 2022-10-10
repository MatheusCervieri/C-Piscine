/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvieira- <mvieira-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 12:23:27 by mvieira-          #+#    #+#             */
/*   Updated: 2022/10/10 13:56:37 by mvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

#include "Contact.class.hpp"

class PhoneBook {
    
    public:
        PhoneBook();
        ~PhoneBook();

    void    set_contact(Contact contact);
    Contact get_contact(int index) const;
    int     get_index() const;
    int     get_saved_contacts() const;
    private:

    static int index;
    static int saved_contacts;
    Contact contacts[8];
};

#endif
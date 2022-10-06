/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvieira- <mvieira-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 12:23:27 by mvieira-          #+#    #+#             */
/*   Updated: 2022/10/06 16:40:34 by mvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

#include "Contact.class.hpp"

class PhoneBook {
    public:
        PhoneBook(void);
        ~PhoneBook(void);
        void set_new_contact(Contact contact);
    private:
    int     index;
    Contact contacts[8];
};

#endif
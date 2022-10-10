/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvieira- <mvieira-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 12:23:24 by mvieira-          #+#    #+#             */
/*   Updated: 2022/10/10 13:57:06 by mvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"
#include <iostream>

PhoneBook::PhoneBook()
{
 
}

PhoneBook::~PhoneBook()
{
    
}

void PhoneBook::set_contact(Contact contact)
{
    this->contacts[this->index] = contact;
    this->index = this->index + 1;
    this->saved_contacts = this->saved_contacts + 1;
    if(this->saved_contacts >= 8)
        this->saved_contacts = 8;
    if(this->index >= 8)
        this->index = 0;
}

Contact PhoneBook::get_contact(int index) const
{
    return this->contacts[index];
}

int PhoneBook::get_index() const 
{
    return this->index;
}

int PhoneBook::get_saved_contacts() const 
{
    return this->saved_contacts;
}

int PhoneBook::saved_contacts = 0;
int PhoneBook::index = 0;


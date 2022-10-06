/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvieira- <mvieira-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 12:23:24 by mvieira-          #+#    #+#             */
/*   Updated: 2022/10/06 16:41:56 by mvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"
#include <iostream>

PhoneBook::PhoneBook(void)
{
    this->index = 0; 
    std::cout << "PhoneBook construct" << std::endl;
}

PhoneBook::~PhoneBook(void)
{
    std::cout <<"PhoneBook destruct" << std::endl;
}

void PhoneBook::set_new_contact(Contact contact)
{
    this->contacts[this->index] = contact;
    this->index = this->index + 1;
    if(this->index)
}


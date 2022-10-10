/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvieira- <mvieira-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 12:26:10 by mvieira-          #+#    #+#             */
/*   Updated: 2022/10/10 14:02:23 by mvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.class.hpp"

Contact::Contact()
{
    
}

Contact::~Contact()
{
    
}

void Contact::set_first_name(std::string name)
{
    this->first_name = name;
}

void Contact::set_last_name(std::string last)
{
    this->last_name = last;
}

void Contact::set_nick(std::string nick)
{
    this->nick = nick;
}

void Contact::set_phone(std::string phone)
{
    this->phone = phone;
}

void Contact::set_secret(std::string secret)
{
    this->secret = secret;
}

void Contact::display_columns(int i) const
{
    std::cout << "|" << "         " << i + 1 << "|";
    this->display_field(this->first_name);
    this->display_field(this->last_name);
    this->display_field(this->nick);
    std::cout << std::endl;
}

void Contact::display_field(std::string field) const
{
    if(field.length() > 10)
		std::cout << std::setw(10) << field.substr(0, 9).append(".") << "|";
	else
		std::cout << std::right << std::setfill(' ') <<std::setw(10) << field << "|";
}

void Contact::display_all_information() const
{
    std::cout << "First Name: " << this->first_name << std::endl;
	std::cout << "Last Name: " << this->last_name << std::endl;
	std::cout << "Nickname: " << this->nick << std::endl;
	std::cout << "Phone Number: " << this->phone << std::endl;
	std::cout << "Darkest Secret: " << this->secret << std::endl;
}
    
std::string Contact::get_first_name() const
{
    return this->first_name;
}

std::string Contact::get_last_name() const
{
    return this->last_name;
}

std::string Contact::get_nick() const
{
    return this->nick;
}

std::string Contact::get_phone() const
{
    return this->phone;
}

std::string Contact::get_secret() const
{
    return this->secret;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvieira- <mvieira-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 12:33:58 by mvieira-          #+#    #+#             */
/*   Updated: 2022/10/10 13:59:42 by mvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"
#include <string>
#include <iostream>
#include <stdlib.h>


void add_contact(PhoneBook *phonebook)
{
    Contact contact;
    std::string out;

    std::cout << "First Name: ";
    std::getline(std::cin, out);
    contact.set_first_name(out);
    
    std::cout << "Last Name: ";
    std::getline(std::cin, out);
    contact.set_last_name(out);
    
    std::cout << "Nick Name: ";
    std::getline(std::cin, out);
    contact.set_nick(out);

    std::cout << "Phone Number: ";
    std::getline(std::cin, out);
    contact.set_phone(out);

    std::cout << "Darkest Secret: ";
    std::getline(std::cin, out);
    contact.set_secret(out);

    phonebook->set_contact(contact);
}

void search_contact(PhoneBook *phonebook)
{
    std::string out;
    
    for(int i = 0; i < phonebook->get_saved_contacts(); i++)
    {
        phonebook->get_contact(i).display_columns(i);
    }
    std::cout << "Which contact would you like to get information?" << std::endl;
    std::getline(std::cin, out);
    if (out[0] > '0' && out[0] < '9' && !out[1])
    {
        phonebook->get_contact(atoi(out.c_str()) - 1).display_all_information();
    }
    else
    {
    std::cout << "Invalid number" << std::endl; 
    }
    //Verificar se é número
    //Transformar em número
    //Checar se é um contato possível. comparar com o index;
}

int main()
{
    PhoneBook phonebook;
    
    
    while(1)
    {
    std::string output;
    std::cout << "Do You Want to ADD, SEARCH or EXIT?" << std::endl;
    std::getline(std::cin, output);
    if (output == "ADD")
    {
        add_contact(&phonebook);
    }
    else if (output == "SEARCH")
    {   
        search_contact(&phonebook);
    }
    else if (output == "EXIT")
        break ;
    }
    
}
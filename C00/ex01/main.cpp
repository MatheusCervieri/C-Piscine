/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvieira- <mvieira-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 12:33:58 by mvieira-          #+#    #+#             */
/*   Updated: 2022/10/06 17:03:07 by mvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"
#include <string>
#include <iostream>

/*
void add_contact(PhoneBook *phonebook)
{
    std::string first_name;
    std::string last_name;
    std::string nick; 
    std::string phone_number;
    std::string darkest_secret;
    
    std::cout << "First Name: ";
    std::cin >> first_name;
}
*/

int main()
{
    std::string first_name;
    std::cout << "First Name: ";
    std::cin >> first_name;
    PhoneBook phonebook;
   // add_contact(&phonebook);
    Contact teste("Matheus", "Cervieri", "Math", "54999735004", "Ama bergamota");
}
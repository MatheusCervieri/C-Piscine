/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvieira- <mvieira-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 12:23:24 by mvieira-          #+#    #+#             */
/*   Updated: 2022/10/06 12:33:55 by mvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"
#include <iostream>

PhoneBook::PhoneBook(void)
{
    std::cout << "PhoneBook construct" << std::endl;
}

PhoneBook::~PhoneBook(void)
{
    std::cout <<"PhoneBook destruct" << std::endl;
}
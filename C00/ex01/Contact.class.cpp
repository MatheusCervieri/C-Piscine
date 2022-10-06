/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvieira- <mvieira-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 12:26:10 by mvieira-          #+#    #+#             */
/*   Updated: 2022/10/06 16:28:51 by mvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.class.hpp"

Contact::Contact(std::string first_name, std::string last_name, std::string nick , std::string phone_number, std::string darkest_secret)
    : first_name(first_name), last_name(last_name), nick(nick), phone_number(phone_number), darkest_secret(darkest_secret)
{
    std::cout << this->first_name << std::endl;
}


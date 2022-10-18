/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvieira- <mvieira-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 13:36:46 by mvieira-          #+#    #+#             */
/*   Updated: 2022/10/17 16:55:32 by mvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal(void) : type("WrongAnimal")
{
    std::cout << "WrongAnimal constructor called!" << std::endl;   
}

WrongAnimal::WrongAnimal(std::string type) : type(type)
{
    std::cout << "WrongAnimal constructor called!" << std::endl;
}

WrongAnimal::~WrongAnimal(void)
{
    std::cout << "WrongAnimal destructor called!" << std::endl;    
}

void WrongAnimal::makeSound( void ) const
{
    std::cout << "WrongAnimal makeSound!" << std::endl;
}

WrongAnimal::WrongAnimal( const WrongAnimal& src )
{
    std::cout << "WrongAnimal copy constructor called" << std::endl;
    *this = src;
}

WrongAnimal& WrongAnimal::operator=( const WrongAnimal& rhs )
{
    std::cout << "WrongAnimal assignment operator called" << std::endl;
    type = rhs.type;
    return *this;
}

std::string    WrongAnimal::getType( void ) const
{
    return this->type;
}

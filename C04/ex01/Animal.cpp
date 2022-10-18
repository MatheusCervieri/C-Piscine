/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvieira- <mvieira-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 13:36:46 by mvieira-          #+#    #+#             */
/*   Updated: 2022/10/17 16:55:32 by mvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <iostream>

Animal::Animal(void) : type("Animal")
{
    std::cout << "Animal constructor called!" << std::endl;   
}

Animal::Animal(std::string type) : type(type)
{
    std::cout << "Animal constructor called!" << std::endl;
}

Animal::~Animal(void)
{
    std::cout << "Animal destructor called!" << std::endl;    
}

void Animal::makeSound( void ) const
{
    std::cout << "Animal makeSound!" << std::endl;
}

Animal::Animal( const Animal& src )
{
    std::cout << "Animal copy constructor called" << std::endl;
    *this = src;
}

Animal& Animal::operator=( const Animal& rhs )
{
    std::cout << "Animal assignment operator called" << std::endl;
    type = rhs.type;
    return *this;
}

std::string    Animal::getType( void ) const
{
    return this->type;
}

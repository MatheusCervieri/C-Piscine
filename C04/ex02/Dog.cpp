/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvieira- <mvieira-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 13:36:46 by mvieira-          #+#    #+#             */
/*   Updated: 2022/10/18 12:23:38 by mvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog( void ) : Animal( "Dog" )
{
    std::cout << this->type << " constructor called" << std::endl;
    this->brain = new Brain();
}

Dog::~Dog( void )
{
    delete this->brain;
    std::cout << this->type << " destructor called" << std::endl;
}

void    Dog::makeSound( void ) const
{
    std::cout << "Auauauau!" << std::endl;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvieira- <mvieira-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 13:36:46 by mvieira-          #+#    #+#             */
/*   Updated: 2022/10/18 11:09:50 by mvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void ) : Animal( "Cat" )
{
    std::cout << this->type << " constructor called" << std::endl;
}

Cat::~Cat( void )
{
    std::cout << this->type << " destructor called" << std::endl;
}

void    Cat::makeSound( void ) const
{
    std::cout << "Miau!" << std::endl;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvieira- <mvieira-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 13:36:46 by mvieira-          #+#    #+#             */
/*   Updated: 2022/10/18 11:23:51 by mvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat( void ) : WrongAnimal( "WrongCat" )
{
    std::cout << this->type << " constructor called" << std::endl;
}

WrongCat::~WrongCat( void )
{
    std::cout << this->type << " destructor called" << std::endl;
}

void    WrongCat::makeSound( void ) const
{
    std::cout << "Miau!" << std::endl;
}
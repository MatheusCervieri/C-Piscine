/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvieira- <mvieira-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 11:14:53 by mvieira-          #+#    #+#             */
/*   Updated: 2022/10/17 09:12:24 by mvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "iostream"
#include <cmath>

const int    Fixed::n_fraction = 8;

Fixed::Fixed(void) : fixed_point(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& other)
{
    *this = other;
    std::cout << "Copy constructor called" << std::endl;
}

Fixed::Fixed(const int value)
{
    this->fixed_point = value << n_fraction;
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float value)
{
    this->fixed_point = roundf(value * (1 << n_fraction));
    std::cout << "Float constructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& rhs)
{
    this->fixed_point = rhs.fixed_point;
     std::cout << "Assignation operator called" << std::endl;
    return *this;
}

Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->fixed_point);
}  

void Fixed::setRawBits(int const raw)
{
    this->fixed_point = raw;
    std::cout << "setRawBits member function called" << std::endl;
}

float Fixed::toFloat (void) const 
{
    return ((float)(this->fixed_point) / (1 << n_fraction));
}

int   Fixed::toInt (void) const
{
    return ((int)(this->fixed_point >> n_fraction));
}

std::ostream &operator<<(std::ostream& COUT, Fixed const &fixed)
{
    COUT << fixed.toFloat();
    return (COUT);
}
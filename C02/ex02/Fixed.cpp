/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvieira- <mvieira-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 11:14:53 by mvieira-          #+#    #+#             */
/*   Updated: 2022/10/17 09:47:44 by mvieira-         ###   ########.fr       */
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

bool Fixed::operator>(const Fixed &value) const
{
    return (this->fixed_point > value.fixed_point);
}

bool Fixed::operator<(const Fixed &value) const
{
    return (this->fixed_point < value.fixed_point);
}

bool Fixed::operator>=(const Fixed &value) const
{
    return (this->fixed_point >= value.fixed_point);
}

bool Fixed::operator<=(const Fixed &value) const
{
    return (this->fixed_point <= value.fixed_point);
}

bool Fixed::operator==(const Fixed &value) const
{
    return (this->fixed_point == value.fixed_point);
}

bool Fixed::operator!=(const Fixed &value) const
{
    return (this->fixed_point != value.fixed_point);
}

Fixed Fixed::operator+(const Fixed &value) const
{
    return (Fixed(this->toFloat() + value.toFloat()));
}

Fixed Fixed::operator-(const Fixed &value) const
{
    return (Fixed(this->toFloat() - value.toFloat()));
}

Fixed Fixed::operator*(const Fixed &value) const
{
    return (Fixed(this->toFloat() * value.toFloat()));
}

Fixed Fixed::operator/(const Fixed &value) const
{
    return (Fixed(this->toFloat() / value.toFloat()));
}

Fixed &Fixed::operator++(void)
{
    this->fixed_point += 1;
    return (*this);
}

Fixed &Fixed::operator--(void)
{
    this->fixed_point -= 1;
    return (*this);
}

Fixed Fixed::operator++(int)
{
    Fixed tmp(*this);
    this->fixed_point += 1;
    return (tmp);
}

Fixed Fixed::operator--(int)
{
    Fixed tmp(*this);
    this->fixed_point -= 1;
    return (tmp);
}

Fixed &Fixed::min( Fixed &a, Fixed &b)
{
    return (a < b ? a : b);
}

const Fixed &Fixed::min( const Fixed &a, const Fixed &b)
{
    return (a < b ? a : b);
}

Fixed
&Fixed::max( Fixed &a, Fixed &b)
{
    return (a > b ? a : b);
}

const
Fixed &Fixed::max( const Fixed &a, const Fixed &b)
{
    return (a > b ? a : b);
}

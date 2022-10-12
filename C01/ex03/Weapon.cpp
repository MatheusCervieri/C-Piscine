/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvieira- <mvieira-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 09:53:57 by mvieira-          #+#    #+#             */
/*   Updated: 2022/10/12 11:00:09 by mvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : type(type)
{
    
}

Weapon::~Weapon(void)
{
}

std::string const & Weapon::getType(void) const
{
    return this->type;
}

void Weapon::setType(std::string type)
{
    this->type = type;
}
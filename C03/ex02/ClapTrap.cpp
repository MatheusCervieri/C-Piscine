/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvieira- <mvieira-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 10:10:48 by mvieira-          #+#    #+#             */
/*   Updated: 2022/10/17 13:13:33 by mvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap(void)
{
    
}

ClapTrap::ClapTrap(std::string name)
 : name(name), hit_points(10) , energy_points(10) , attack_damage(0)
{
    std::cout << "Constructor Called" << std::endl; 
}

ClapTrap::~ClapTrap(void)
{
    std::cout << "Destructor Called" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    if (!(this->energy_points <= 0 || this->hit_points <= 0))
    {
        std::cout << "ClapTrap " << this->name << " attacks " << target << " causing " << this->attack_damage << " points of damage!" << std::endl;
        this->energy_points--;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (!(this->energy_points <= 0 || this->hit_points <= 0))
    {
        this->hit_points = this->hit_points + amount;
        this->energy_points--;
        std::cout << "ClapTrap " << this->name << " repairs " << "itself whith " << amount << " of hitpoints!" << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    this->hit_points = this->hit_points - amount; 
    std::cout << "ClapTrap " << this->name << " takes " << amount << " points of damage!" << std::endl;
}

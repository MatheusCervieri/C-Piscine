/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvieira- <mvieira-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 13:36:46 by mvieira-          #+#    #+#             */
/*   Updated: 2022/10/17 16:40:41 by mvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap(void)
{
    
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    std::cout << "ScavTrap constructor " << name << " called!" << std::endl;
    this->hit_points = 100;
    this->energy_points = 50;
    this->attack_damage = 20;
}

ScavTrap::~ScavTrap(void)
{
    std::cout << "ScavTrap destructor " << name << " called!" << std::endl;    
}

void ScavTrap::guardGate(void)
{
    std::cout << "ScavTrap is now in Gate keeper mode." << std::endl;  
}

void ScavTrap::attack(const std::string &target)
{
    if (!(this->energy_points <= 0 || this->hit_points <= 0))
    {
        std::cout << "ScavTrap " << this->name << " attacks " << target << " causing " << this->attack_damage << " points of damage!" << std::endl;
        this->energy_points--;
    }
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvieira- <mvieira-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 13:36:46 by mvieira-          #+#    #+#             */
/*   Updated: 2022/10/17 16:55:32 by mvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap(void)
{
    
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    std::cout << "FragTrap constructor " << name << " called!" << std::endl;
    this->hit_points = 100;
    this->energy_points = 100;
    this->attack_damage = 30;
}

FragTrap::~FragTrap(void)
{
    std::cout << "FragTrap destructor " << name << " called!" << std::endl;    
}

void FragTrap::attack(const std::string &target)
{
    if (!(this->energy_points <= 0 || this->hit_points <= 0))
    {
        std::cout << "FragTrap " << this->name << " attacks " << target << " causing " << this->attack_damage << " points of damage!" << std::endl;
        this->energy_points--;
    }
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "This is a positive hight five request!" <<std::endl;
}

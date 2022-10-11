/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvieira- <mvieira-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 12:08:35 by mvieira-          #+#    #+#             */
/*   Updated: 2022/10/11 12:18:32 by mvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.class.hpp"

Zombie::Zombie (std::string name) : name(name)
{
    
}

void Zombie::announce (void) const
{
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl; 
}

Zombie::~Zombie(void)
{
    std::cout << this->name << " destroyed." << std::endl;
}
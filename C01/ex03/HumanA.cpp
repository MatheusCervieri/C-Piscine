/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvieira- <mvieira-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 10:08:51 by mvieira-          #+#    #+#             */
/*   Updated: 2022/10/12 10:59:59 by mvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <HumanA.hpp>

HumanA::HumanA(std::string name, Weapon& weapon) :
	name(name), weapon(&weapon)
{
    
}

HumanA::~HumanA(void)
{
}

void HumanA::attack(void) const
{
	std::cout << this->name << " attacks with his " << this->weapon->getType() << std::endl;
}

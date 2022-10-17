/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvieira- <mvieira-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 13:36:49 by mvieira-          #+#    #+#             */
/*   Updated: 2022/10/17 14:47:15 by mvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP


#include "ClapTrap.hpp"
#include <string>

class ScavTrap : public ClapTrap
{
    public: 
    
    ScavTrap(void);
    ScavTrap(std::string name);
    ~ScavTrap(void);

    void guardGate(void);
    
    void attack(const std::string& target);
    
};

#endif
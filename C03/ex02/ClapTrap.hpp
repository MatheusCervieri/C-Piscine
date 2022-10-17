/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvieira- <mvieira-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 10:49:39 by mvieira-          #+#    #+#             */
/*   Updated: 2022/10/17 14:25:21 by mvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <string>

class ClapTrap
{
    public: 
    
    ClapTrap(void);
    ClapTrap(std::string name);
    ~ClapTrap(void);
    void attack(const std::string& target);
    void beRepaired(unsigned int amount);
    void takeDamage(unsigned int amount);

    protected:
    std::string name;
    int hit_points;
    int energy_points;
    int attack_damage;

};

#endif
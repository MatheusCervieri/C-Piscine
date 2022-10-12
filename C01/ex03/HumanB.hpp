/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvieira- <mvieira-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 10:11:08 by mvieira-          #+#    #+#             */
/*   Updated: 2022/10/12 11:03:06 by mvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP
#include <string>
#include <Weapon.hpp>

class HumanB
{
    public:
    HumanB(std::string name);
    ~HumanB(void);

    void attack (void) const;
    
    void setWeapon(Weapon& weapon);
    
    private:

    std::string name;
    Weapon *weapon; 
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvieira- <mvieira-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 10:04:52 by mvieira-          #+#    #+#             */
/*   Updated: 2022/10/12 10:58:52 by mvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"
#include <string>

class HumanA
{
    public:

    HumanA(std::string name, Weapon& weapon);
    ~HumanA(void);

    void attack(void) const;
    
    private:

    std::string name;
    Weapon *weapon;

};

#endif
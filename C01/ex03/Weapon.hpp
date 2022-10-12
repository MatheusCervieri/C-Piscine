/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvieira- <mvieira-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 09:54:00 by mvieira-          #+#    #+#             */
/*   Updated: 2022/10/12 11:00:13 by mvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <string>

class Weapon
{
    public:
    
    Weapon(std::string type);
    ~Weapon(void);

    std::string const & getType(void) const;
    
    void setType(std::string type);

    private:

    std::string type;
};

#endif
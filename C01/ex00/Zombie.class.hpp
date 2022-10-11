/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvieira- <mvieira-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 12:08:32 by mvieira-          #+#    #+#             */
/*   Updated: 2022/10/11 12:23:12 by mvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

class Zombie
{
    public:
    
    Zombie(std::string name);
    ~Zombie(void);

    void announce ( void ) const;
    
    private:
    
    std::string name;
};

void randomChump(std::string name);
Zombie *newZombie(std::string name);
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvieira- <mvieira-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 12:08:32 by mvieira-          #+#    #+#             */
/*   Updated: 2022/10/11 12:41:01 by mvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

class Zombie
{
    public:
    
        Zombie(void);
        ~Zombie(void);

        void set_name(std::string name);

        void announce ( void ) const;
    
    private:
    
        std::string name;
};

Zombie *zombieHorde(int N, std::string name);

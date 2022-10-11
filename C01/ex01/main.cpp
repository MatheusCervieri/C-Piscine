/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvieira- <mvieira-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 12:07:45 by mvieira-          #+#    #+#             */
/*   Updated: 2022/10/11 12:57:47 by mvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.class.hpp"

int main ()
{
    int     zombies_nb = 21;
    Zombie *zombies = zombieHorde(zombies_nb, "Zombie");
    int i;

    i = 0;
    while (i < zombies_nb)
    {
        zombies[i].announce();
        i++;
    }
    
    delete [] zombies;
}
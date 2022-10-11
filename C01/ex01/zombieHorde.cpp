/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvieira- <mvieira-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 12:33:44 by mvieira-          #+#    #+#             */
/*   Updated: 2022/10/11 12:54:40 by mvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.class.hpp"

Zombie *zombieHorde(int N, std::string name)
{
    Zombie *zombies = new Zombie[N];
    int i;

    i = 0;
    while (i < N)
    {
        zombies[i].set_name(name);
        i++;
    }
    return (zombies);
}
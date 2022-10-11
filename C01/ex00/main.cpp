/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvieira- <mvieira-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 12:07:45 by mvieira-          #+#    #+#             */
/*   Updated: 2022/10/11 12:28:13 by mvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.class.hpp"

int main ()
{
    Zombie zombie1("Zombie1");
    Zombie *zombie2 = newZombie("Zombie2");

    zombie1.announce();
    zombie2->announce();
    randomChump("Zombie3");

    delete zombie2;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvieira- <mvieira-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 08:40:28 by mvieira-          #+#    #+#             */
/*   Updated: 2022/10/26 09:29:34 by mvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Converter.hpp"
#include "iostream"

int main (int argc, char *argv[])
{
    if (argc != 2)
        std::cout << "Invalid number of arguments" << std::endl;
    else
    {
    try 
    {
        Converter number(argv[1]);
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
    }
    return (0);
}
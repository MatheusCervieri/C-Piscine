/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvieira- <mvieira-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 09:48:02 by mvieira-          #+#    #+#             */
/*   Updated: 2022/10/27 10:14:05 by mvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

int main()
{
    Array<int> numbers(10);
    for (int i = 0; i < 10 ; i++)
        numbers[i] = i;
    for (int i = 0; i < 10 ; i++)
        std::cout << numbers[i] << std::endl;

    std::cout << "Size: " << numbers.size() << std::endl;
      
}

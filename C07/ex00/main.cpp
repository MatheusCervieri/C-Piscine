/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvieira- <mvieira-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 15:37:47 by mvieira-          #+#    #+#             */
/*   Updated: 2022/10/26 15:45:59 by mvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "whatever.hpp"

int	main()
{
    float a = 30.0;
    float b = 25.0;
    std::cout << max(a, b) << std::endl;
    std::cout << min(a, b) << std::endl;
    swap(a,b);
    std::cout << a << std::endl;
    std::cout << b << std::endl;
	return (0);
}
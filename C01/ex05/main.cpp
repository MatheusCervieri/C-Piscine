/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvieira- <mvieira-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 15:29:54 by mvieira-          #+#    #+#             */
/*   Updated: 2022/10/12 15:47:06 by mvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

int main()
{
	Harl Harl;

	std::cout << "DEBUG: " << std::endl;
	Harl.complain("DEBUG");
    
	std::cout << "INFO: " << std::endl;
	Harl.complain("INFO");
    
	std::cout << "WARNING: " << std::endl;
	Harl.complain("WARNING");
    
	std::cout << "ERROR: " << std::endl;
	Harl.complain("ERROR");
}

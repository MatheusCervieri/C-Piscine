/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvieira- <mvieira-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 12:00:46 by mvieira-          #+#    #+#             */
/*   Updated: 2022/10/06 12:11:14 by mvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(int argc, char **argv)
{
	int	i;
	int	j;
	
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		i = 0;
		argv++;
		while (argv[i])
		{
			while (argv[i][j])
			{
				argv[i][j] = toupper(argv[i][j]);
				j++;
			}
			j = 0; 
			std::cout << argv[i];
			i++;
		}
	}
}

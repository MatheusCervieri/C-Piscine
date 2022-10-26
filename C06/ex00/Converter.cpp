/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvieira- <mvieira-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 19:26:04 by mvieira-          #+#    #+#             */
/*   Updated: 2022/10/26 09:29:05 by mvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Converter.hpp"

Converter::Converter()
{
}

Converter::Converter(const std::string input)
{
	this->var_type = parsing(input);
}

Converter::Converter(const Converter&  src)
{
    *this = src;
}

Converter::~Converter()
{
}

Converter & Converter::operator=( const Converter & rhs )
{
    (void) rhs;
    return *this;
}

int Converter::parsing(const std::string & input)
{
    int dot = 0;
    int var_type = 0;
	if (input == "nan" || input == "-inf" || input == "+inf")
		return (4);
    if (input == "nanf" || input == "-inff" || input == "+inff")
		return (3);
	if (std::isdigit(input[0]) || (( std::isdigit(input[1]) && input[0] == '-') || (input[0] == '+' && std::isdigit(input[1]))))
	{
		for(size_t i = 0; i < input.length(); i++)
		{
			if (std::isdigit(input[i]) || input[i] == 'f' ||
				(i == 0 && input[0] == '-') || (i == 0 && input[0] == '+'))
				continue;
			else if (input[i] == '.')
			{
				if (dot == 1)
					throw Converter::InvalidInputException();
				dot = 1;
				if (input[input.length()] == 'f')
					var_type = 3;
				else
					var_type = 4;
			}
			else
				throw Converter::InvalidInputException();
		}
		if (var_type == 0)
			return (2);
	}
	else
	{
		if (input.length() == 1)
			return (1);
		else
			throw Converter::InvalidInputException();
	}
	return (var_type);
}
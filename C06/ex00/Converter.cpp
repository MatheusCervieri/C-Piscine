/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvieira- <mvieira-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 19:26:04 by mvieira-          #+#    #+#             */
/*   Updated: 2022/10/26 11:24:51 by mvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Converter.hpp"
#include <stdlib.h>


Converter::Converter()
{
}

Converter::Converter(const std::string input)
{
	this->var_type = parsing(input);
    if (this->var_type == 1)
        convert_char(input);
    if (this->var_type == 2)
        convert_int(input);
    if (this->var_type == 3)
        convert_float(input);
    if(this->var_type == 4)
        convert_double(input);
    print(input);
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

void Converter::convert_char(const std::string input)
{
    this->char_type = input[0];
    this->int_type = static_cast<int>(this->char_type);
	this->float_type = static_cast<float>(this->char_type);
	this->double_type = static_cast<double>(this->char_type);
}

void Converter::convert_int(const std::string input)
{
    this->int_type = atoi(input.c_str());
    this->char_type = static_cast<char>(this->int_type);
	this->float_type = static_cast<float>(this->int_type);
	this->double_type = static_cast<double>(this->int_type);
}

void Converter::convert_float(const std::string input)
{
    this->float_type = atof(input.c_str());
    this->char_type = static_cast<char>(this->float_type);
	this->int_type = static_cast<int>(this->float_type);
	this->double_type = static_cast<double>(this->float_type);
 
}

void Converter::convert_double(const std::string input)
{
    this->double_type = strtod(input.c_str(), NULL);
    this->char_type= static_cast<char>(this->double_type);
	this->int_type = static_cast<int>(this->double_type);
	this->float_type = static_cast<float>(this->double_type);
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

void Converter::print(const std::string input)
{
    std::cout << std::setprecision(1) << std::fixed;
    if (input == "nanf" || input == "-inff" || input == "+inff" || input == "nan" || input == "-inf" || input == "+inf")
	{
        std::cout << "Char: impossible" << std::endl;
        std::cout << "Int: impossible" << std::endl;
    }
    else
    {
        if (this->char_type >= 32 && this->char_type <= 127)
            std::cout << "Char: " << "'" <<  this->char_type << "'" << std::endl;
        else
            std::cout << "Char: " << "Non displayable" << std::endl;
        std::cout << "Int: " << this->int_type << std::endl;
    }
    std::cout << "Float: " << this->float_type << "f" << std::endl;
    std::cout << "Double: " << this->double_type << std::endl;
}
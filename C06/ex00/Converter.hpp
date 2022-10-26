/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvieira- <mvieira-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 16:57:53 by mvieira-          #+#    #+#             */
/*   Updated: 2022/10/26 09:26:09 by mvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERTER_H
#define CONVERTER_H

#include <string>
#include <iostream>

class Converter
	{
		private:
			std::string input;
			int			var_type;
			
		public:
			Converter();
			~Converter();
			Converter(const std::string input);
			Converter(const Converter & src);
			Converter& operator=(const Converter & rhs);

			int	parsing(const std::string & input);
			
		class InvalidInputException : public std::exception {
        	public:
            	virtual const char* what() const throw() { return "Invalid Input"; }
    	};

			
	};

#endif
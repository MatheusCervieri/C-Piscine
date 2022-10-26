/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvieira- <mvieira-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 16:57:53 by mvieira-          #+#    #+#             */
/*   Updated: 2022/10/26 11:22:30 by mvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERTER_H
#define CONVERTER_H

#include <string>
#include <iostream>
#include <iomanip>

class Converter
	{
		private:
			std::string input;
			int			var_type;
			unsigned char		char_type;
			int			int_type;
			float		float_type;
			double		double_type;
			
		public:
			Converter();
			~Converter();
			Converter(const std::string input);
			Converter(const Converter & src);
			Converter& operator=(const Converter & rhs);

			int		parsing(const std::string & input);
			void	convert_char(const std::string input);
			void	convert_int(const std::string input);
			void	convert_float(const std::string input);
			void	convert_double(const std::string input);

			void	print(const std::string input);
			
		class InvalidInputException : public std::exception {
        	public:
            	virtual const char* what() const throw() { return "Invalid Input"; }
    	};

			
	};

#endif
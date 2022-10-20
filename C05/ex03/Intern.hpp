/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvieira- <mvieira-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 15:55:44 by mvieira-          #+#    #+#             */
/*   Updated: 2022/10/19 16:09:16 by mvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "Form.hpp"

class Intern {

public:
    Intern();
    Intern(const Intern& src);
    ~Intern();

    Intern& operator=( const Intern& rhs );

    Form*   makeForm( std::string name, std::string target );

    class InvalidFormNameException : public std::exception {
        public:
            virtual const char* what() const throw() { return "Invalid Form .Name"; }
    };
};

#endif
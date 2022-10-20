/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvieira- <mvieira-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 15:55:41 by mvieira-          #+#    #+#             */
/*   Updated: 2022/10/20 09:36:52 by mvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Intern.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern()
{
    
}

Intern::Intern(const Intern& src)
{
    *this = src;
}

Intern::~Intern()
{

}

Intern& Intern::operator=( const Intern& rhs ) {
    ( void ) rhs;
    return (*this);
}

Form*   Intern::makeForm( std::string name, std::string target ) {

    std::string form_names[] = {
        "ShrubberyCreationForm",
        "RobotomyRequestForm",
        "PresidentialPardonForm"
    };

    Form *forms[3];
	forms[0] = new ShrubberyCreationForm(target);
	forms[1] = new RobotomyRequestForm(target);
	forms[2] = new PresidentialPardonForm(target);
    
    
    Form *correct_form = NULL;
    for ( int i = 0; i < 3; i++ ) {
        if (name == form_names[i]) {
            std::cout << "Intern creates " << name << std::endl;
            correct_form = forms[i];
        }
        else
            delete forms[i];
    }
    
    if (correct_form)
    {
        return (correct_form);
    }
    
    std::cout << "Intern cannot create " << name << " form" << std::endl;
    return NULL;
}
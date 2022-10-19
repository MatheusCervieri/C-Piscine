/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvieira- <mvieira-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 11:21:41 by mvieira-          #+#    #+#             */
/*   Updated: 2022/10/19 11:26:49 by mvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string& target)
: Form( "PresidentialPardonForm", 25, 5 ), target(target) 
{
    
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& src) : 
Form(src), target(src._target) 
{
    
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& rhs)
{
    (void)rhs;
    return *this;
}

void    PresidentialPardonForm::execute(const Bureaucrat& executor) const {
    if ( executor.getGrade() > this->getGradeToExecute() )
        throw Form::GradeTooLowException();
     if (this->getSigned() == false)
        throw Form::NotSignedException();
    else {
        std::cout << target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
    }
}
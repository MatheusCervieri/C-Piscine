/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvieira- <mvieira-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 13:36:46 by mvieira-          #+#    #+#             */
/*   Updated: 2022/10/17 16:55:32 by mvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>

Bureaucrat::Bureaucrat(const std::string& name, int grade)
: name(name), grade(grade) 
{
    if (this->grade < 1)
        throw Bureaucrat::GradeTooHighException();
    if (this->grade > 150)
        throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat& src) 
: name(src.name), grade(src.grade)
{

}

Bureaucrat::~Bureaucrat() 
{

}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& rhs) 
{
    grade = rhs.getGrade();
    return *this;
}

std::string Bureaucrat::getName() const 
{
    return this->name;
}

int Bureaucrat::getGrade() const 
{
    return this->grade;
}

void    Bureaucrat::decrementGrade() 
{
    if ( this->grade + 1 > 150 )
        throw Bureaucrat::GradeTooLowException();
    this->grade++;
}

void    Bureaucrat::incrementGrade() 
{
    if ( this->grade - 1 < 1 )
        throw Bureaucrat::GradeTooHighException();
    this->grade--;
}

void    Bureaucrat::executeForm( const Form& form ) const {
    try 
    {
        form.execute( *this );
    } 
    catch ( std::exception& e ) {
        std::cout << name << " couldn't execute " << form.getName() << " because " << e.what() << std::endl;
    }
}

void    Bureaucrat::signForm(Form& form) 
{
    try 
    {
        form.beSigned( *this );
        std::cout << this->getName() << " signed " << form.getName() << std::endl;
    } 
    catch (Form::GradeTooLowException &e)
    {
        std::cout << this->name << " coulnd't sign " << form.getName() << " because " << e.what() << std::endl;
    }
}

std::ostream& operator<<( std::ostream& COUT, const Bureaucrat& rhs ) {
    COUT << rhs.getName() << ", bureaucrat grade " << rhs.getGrade();
    return COUT;
}
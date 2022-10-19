/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvieira- <mvieira-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 08:48:51 by mvieira-          #+#    #+#             */
/*   Updated: 2022/10/19 11:26:15 by mvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(const std::string& name, int grade_sign)
 : name(name), grade_sign(grade_sign), grade_execute(0) 
{
    if ( grade_sign < 1 )
        throw Form::GradeTooHighException();
    if ( grade_sign > 150 )
        throw Form::GradeTooLowException();
}

Form::Form(const Form& src)
 : name( src.getName() ), grade_sign( src.getGradeToSign()), grade_execute(src.getGradeToExecute())
{
    
}

Form::~Form()
{

}

Form&   Form::operator=( const Form& rhs ) {
        this->_signed = rhs.getSigned();
    return *this;
}

std::string Form::getName() const {
    return name;
}

bool   Form::getSigned() const {
    return _signed;
}

int   Form::getGradeToSign() const {
    return grade_sign;
}

int   Form::getGradeToExecute() const {
    return grade_execute;
}

void    Form::beSigned(const Bureaucrat& bureaucrat) {
    if (bureaucrat.getGrade() >= grade_sign )
        throw Form::GradeTooLowException();
    _signed = true;
}

std::ostream&   operator<<( std::ostream& COUT, const Form& rhs ) {
    COUT << "Form name: " << rhs.getName() << std::endl;
    COUT  << "Grade to sign: " << rhs.getGradeToSign() << std::endl;
    COUT  << "Grade to execute: " << rhs.getGradeToExecute();
    return COUT;
}
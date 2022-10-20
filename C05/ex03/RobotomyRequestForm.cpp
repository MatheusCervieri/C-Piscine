/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvieira- <mvieira-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 11:09:34 by mvieira-          #+#    #+#             */
/*   Updated: 2022/10/19 11:21:29 by mvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string& target)
: Form("Robotomy Request Form", 72, 45), target(target)
{
    
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& src)
: Form(src), target(src.target) 
{
    
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    
}

RobotomyRequestForm&    RobotomyRequestForm::operator=( RobotomyRequestForm& rhs )
{
    ( void )rhs;
    return *this;
}

static int  i = 0;

void    RobotomyRequestForm::execute(const Bureaucrat& executor) const {
    if (executor.getGrade() > this->getGradeToExecute())
        throw Form::GradeTooLowException();
    if (this->getSigned() == false)
        throw Form::NotSignedException();
    else 
    {
        if (i++ % 2 == 0)
            std::cout << "BRICHHHHHT! " << this->target << " has been robotomized!" << std::endl;
        else
            std::cout << "Robotomy failed! " << std::endl;
        i++;
    }
}
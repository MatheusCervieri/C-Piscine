/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvieira- <mvieira-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 10:06:07 by mvieira-          #+#    #+#             */
/*   Updated: 2022/10/19 11:42:19 by mvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>
#include <string>

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target) : Form("ShrubberyCreationForm", 145, 137) , target(target) {}


ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& src)  : Form(src), target(src.target) 
{
    
}


ShrubberyCreationForm::~ShrubberyCreationForm()
{
    
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=( ShrubberyCreationForm& rhs ) 
{
    rhs.getName();
    return *this;
}

std::string	ShrubberyCreationForm::getTarget(void)const
{
	return (this->target);
}


void    ShrubberyCreationForm::execute( const Bureaucrat& executor ) const
{
    if (this->getSigned() == false)
        throw Form::NotSignedException();
    else if (executor.getGrade() > this->getGradeToExecute()) 
    {
        throw Form::GradeTooLowException();
    }

    
	std::ofstream writeFile (this->getTarget().append("_shrubbery").c_str());
    
    writeFile << "    |||||||||||||| " << std::endl;
    writeFile << "   ||||||||||||||||  " << std::endl;
    writeFile << "  |||||||||||||||||| " << std::endl;
    writeFile << " |||||||||||||||||||| " << std::endl;
    writeFile << "  |||||||||||||||||| " << std::endl;
    writeFile << "   ||||||||||||||||  " << std::endl;
    writeFile << "    ||||||||||||||   " << std::endl;
    writeFile << "        ||||||         " << std::endl;
    writeFile << "        ||||||         " << std::endl;
    writeFile << "        ||||||         " << std::endl;
    writeFile << "        ||||||         " << std::endl;
    writeFile << "        ||||||         " << std::endl;
    writeFile << "        ||||||         " << std::endl;
    writeFile << "        ||||||         " << std::endl;
    writeFile << "        ||||||         " << std::endl;
    writeFile << "        ||||||         " << std::endl;
    writeFile << "        ||||||         " << std::endl;
    writeFile << "......................." << std::endl;
    writeFile.close();
}
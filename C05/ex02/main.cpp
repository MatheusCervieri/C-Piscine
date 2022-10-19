/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvieira- <mvieira-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 10:31:58 by mvieira-          #+#    #+#             */
/*   Updated: 2022/10/19 13:56:04 by mvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{
    try 
    {
        Bureaucrat bureaucrat("Dom Pedro", 2);
        ShrubberyCreationForm form1("File");
        bureaucrat.signForm(form1);
        bureaucrat.executeForm(form1);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    try 
    {
        Bureaucrat bureaucrat("Dom Pedro", 147);
        ShrubberyCreationForm form1("File");
        bureaucrat.signForm(form1);
        bureaucrat.executeForm(form1);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    
    try 
    {
        Bureaucrat bureaucrat("Cristóvão Colombo", 2);
        PresidentialPardonForm form1("File");
        bureaucrat.signForm(form1);
        bureaucrat.executeForm(form1);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    try 
    {
        Bureaucrat bureaucrat("Cristóvão Colombo", 149);
        PresidentialPardonForm form1("File");
        bureaucrat.signForm(form1);
        bureaucrat.executeForm(form1);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    try 
    {
        Bureaucrat bureaucrat("Bartolomeu Dias", 2);
        RobotomyRequestForm form1("File");
        bureaucrat.signForm(form1);
        bureaucrat.executeForm(form1);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    try 
    {
        Bureaucrat bureaucrat("Bartolomeu Dias", 149);
        RobotomyRequestForm form1("File");
        bureaucrat.signForm(form1);
        bureaucrat.executeForm(form1);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    
    return 0;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvieira- <mvieira-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 10:31:58 by mvieira-          #+#    #+#             */
/*   Updated: 2022/10/20 09:38:08 by mvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int main()
{
   try
	{
		Intern intern1;
		Form *form;

		form = intern1.makeForm("RobotomyRequestForm", "target");
		std::cout << *form << std::endl;
        delete form;
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
     
    try
	{
		Intern intern1;
		Form *form;

		form = intern1.makeForm("Wrong Form", "target");
        if(form)
            std::cout << *form << std::endl;
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
    return 0;
}
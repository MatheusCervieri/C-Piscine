/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvieira- <mvieira-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 10:31:58 by mvieira-          #+#    #+#             */
/*   Updated: 2022/10/19 09:29:16 by mvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    try 
    {
        Bureaucrat bureaucrat("Dom Pedro Primeiro",11);
        Form form("Indepêndencia", 10);
        bureaucrat.signForm(form);
        std::cout << form << std::endl;
    } 
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    try 
    {
        Bureaucrat bureaucrat("Dom Pedro Primeiro",5);
        Form form("Indepêndencia", 7);
        bureaucrat.signForm(form);
        std::cout << form << std::endl;
    } 
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    return 0;
}
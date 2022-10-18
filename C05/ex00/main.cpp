/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvieira- <mvieira-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 10:31:58 by mvieira-          #+#    #+#             */
/*   Updated: 2022/10/18 16:48:54 by mvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    try {
        Bureaucrat bureaucrat("Don Pedro Primeiro", 5);
        std::cout << bureaucrat << std::endl;
        bureaucrat.incrementGrade();
    } catch (Bureaucrat::GradeTooHighException &e) {
        std::cout << e.what() << std::endl;
    }
    try {
        Bureaucrat bureaucrat2("Don Pedro Segundo", 1);
        std::cout << bureaucrat2 << std::endl;
        bureaucrat2.incrementGrade();
    } catch (Bureaucrat::GradeTooHighException &e) {
        std::cout << e.what() << std::endl;
    }
    try {
        Bureaucrat bureaucrat3("Don Pedro Terceiro", 1);
        std::cout << bureaucrat3 << std::endl;
        bureaucrat3.incrementGrade();
    } catch (Bureaucrat::GradeTooHighException &e) {
        std::cout << e.what() << std::endl;
    }
    try {
        Bureaucrat bureaucrat3("Don Pedro Quarto", 0);
        std::cout << bureaucrat3 << std::endl;
        bureaucrat3.incrementGrade();
    } catch (Bureaucrat::GradeTooHighException &e) {
        std::cout << e.what() << std::endl;
    }
    /*
    try {
        Bureaucrat bureaucrat("Don Pedro", 1);
        std::cout << bureaucrat << std::endl;
        bureaucrat.decrementGrade();
    } catch (Bureaucrat::GradeTooHighException &e) {
        std::cout << e.what() << std::endl;
    }
    */
    
    return 0;
}
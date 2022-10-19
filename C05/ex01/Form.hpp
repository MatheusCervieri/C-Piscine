/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvieira- <mvieira-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 16:56:38 by mvieira-          #+#    #+#             */
/*   Updated: 2022/10/19 09:25:19 by mvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <string>
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
    private:
        const std::string   name;
        bool                _signed;
        const int           grade_sign;
        const int           grade_execute;

    public:
        Form(const std::string& name, int grade_sign);
        Form(const std::string& name, int grade_sign, int grade_execute);
        Form(const Form& src);
        ~Form(void);
        Form&   operator=(const Form& rhs);

        std::string getName() const;
        int         getGradeToSign() const;
        int         getGradeToExecute() const;
        bool        getSigned() const;
        

        void        beSigned(const Bureaucrat & bureaucrat);
    
        class GradeTooHighException : public std::exception {
            public:
                virtual const char* what() const throw() { return "Grade too high"; }
        };

        class GradeTooLowException : public std::exception {
            public:
                virtual const char* what() const throw() { return "Grade too low"; }
        };

};

std::ostream&   operator<<(std::ostream& COUT, const Form& rhs);

#endif
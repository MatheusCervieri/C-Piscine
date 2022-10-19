/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvieira- <mvieira-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 13:36:49 by mvieira-          #+#    #+#             */
/*   Updated: 2022/10/18 12:41:01 by mvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include "Form.hpp"

class Form;

class Bureaucrat
{
    public: 
    
    Bureaucrat(const std::string& name, int grade);
    ~Bureaucrat(void);
    
    Bureaucrat( const Bureaucrat& src );
    Bureaucrat& operator=( const Bureaucrat& rhs );

    void incrementGrade(void);

    void decrementGrade(void); 

    std::string getName() const;

    int getGrade() const;

    void    signForm(Form& form);
    
    class GradeTooHighException : public std::exception {
        public:
            virtual const char* what() const throw() { return "Grade too high"; }
    };

    class GradeTooLowException : public std::exception {
        public:
            virtual const char* what() const throw() { return "Grade too low"; }
    };
    
    private:
        const std::string   name;
        int                 grade;

};

std::ostream&   operator<<(std::ostream& COUT, const Bureaucrat& rhs);

#endif
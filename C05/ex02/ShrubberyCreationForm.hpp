/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvieira- <mvieira-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 09:59:12 by mvieira-          #+#    #+#             */
/*   Updated: 2022/10/19 11:42:27 by mvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"
#include <fstream>
#include <string>

class Form;

class ShrubberyCreationForm : public Form {

private:
    const std::string   target;

public:
    ShrubberyCreationForm(const std::string& target);
    ShrubberyCreationForm(const ShrubberyCreationForm& src);
    ~ShrubberyCreationForm();

    ShrubberyCreationForm&  operator=(ShrubberyCreationForm& rhs);

    void        execute(const Bureaucrat& executor) const;

    std::string	getTarget(void) const;

};

#endif
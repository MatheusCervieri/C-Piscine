/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvieira- <mvieira-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 12:23:48 by mvieira-          #+#    #+#             */
/*   Updated: 2022/10/06 16:39:40 by mvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACTS_CLASS_H
# define CONTACTS_CLASS_H

#include <string>

class Contact{
    public:
        Contact(std::string first_name, std::string last_name, std::string nick , std::string phone_number, std::string darkest_secret);
        ~Contact(void);
    
    private:
        std::string first_name;
        std::string last_name;
        std::string nick;
        std::string phone_number;
        std::string darkest_secret;  
};

#endif